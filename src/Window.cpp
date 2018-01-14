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
 
#include <EssexEngineWindowDaemon/Window.h>

EssexEngine::Daemons::Window::Window::Window(
    WeakPointer<Context> _context, UniquePointer<IWindow> _window,
    std::function<void()> _close
):window(
    std::move(_window)
) {
    context = _context;
    close = _close;
}

EssexEngine::Daemons::Window::Window::~Window() {
    context->GetDaemon<Daemons::Window::WindowDaemon>()->CloseWindow(window.ToWeakPointer());
}
