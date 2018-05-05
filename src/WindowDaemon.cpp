/* 
 * Essex Engine
 * 
 * Copyright (C) 2017 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */

#include <EssexEngineWindowDaemon/WindowDaemon.h>

EssexEngine::Daemons::Window::WindowDaemon::WindowDaemon(WeakPointer<Context> _context):BaseDaemon(_context) {}

EssexEngine::Daemons::Window::WindowDaemon::~WindowDaemon() {}

void EssexEngine::Daemons::Window::WindowDaemon::RepaintWindows() {
    if(HasDriver()) {
        GetDriver()->RepaintWindows();
    }
}

EssexEngine::UniquePointer<EssexEngine::Daemons::Window::IWindow> EssexEngine::Daemons::Window::WindowDaemon::CreateWindow(EssexEngine::WeakPointer<WindowDef> def) {
    if(HasDriver()) {
        return UniquePointer<IWindow>(GetDriver()->CreateWindow(def));
    } else {
        //TODO: throw error / Setup error system
        return UniquePointer<IWindow>();
    }
}

void EssexEngine::Daemons::Window::WindowDaemon::AddButton(EssexEngine::WeakPointer<EssexEngine::Daemons::Window::IWindow> window, EssexEngine::WeakPointer<ButtonDef> def) {
    if(HasDriver()) {
        GetDriver()->AddButton(window, def);
    }
}

void EssexEngine::Daemons::Window::WindowDaemon::AddLabel(EssexEngine::WeakPointer<EssexEngine::Daemons::Window::IWindow> window, EssexEngine::WeakPointer<LabelDef> def) {
    if(HasDriver()) {
        GetDriver()->AddLabel(window, def);
    }
}

void EssexEngine::Daemons::Window::WindowDaemon::CloseWindow(EssexEngine::WeakPointer<EssexEngine::Daemons::Window::IWindow> window) {
    if(HasDriver()) {
        GetDriver()->CloseWindow(window);
    }
}

void EssexEngine::Daemons::Window::WindowDaemon::RepaintCanvas(EssexEngine::WeakPointer<EssexEngine::Daemons::Window::IRenderContext> context) {
    if(HasDriver()) {
        GetDriver()->RepaintCanvas(context);
    }
}

int EssexEngine::Daemons::Window::WindowDaemon::GetScreenWidth(WeakPointer<Window::IRenderContext> target)
{
    return GetDriver()->GetScreenWidth(target);
}

int EssexEngine::Daemons::Window::WindowDaemon::GetScreenHeight(WeakPointer<Window::IRenderContext> target)
{
    return GetDriver()->GetScreenHeight(target);
}

EssexEngine::UniquePointer<EssexEngine::Daemons::Window::IRenderContext>  EssexEngine::Daemons::Window::WindowDaemon::AddCanvas(WeakPointer<IWindow> window, WeakPointer<CanvasDef> def) {
    if(HasDriver()) {
        return UniquePointer<IRenderContext>(GetDriver()->AddCanvas(window, def));
    } else {
        //TODO: throw error / Setup error system
        return UniquePointer<IRenderContext>();
    }
}

