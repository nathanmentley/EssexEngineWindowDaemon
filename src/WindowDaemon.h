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
#pragma once

#include <EssexEngineCore/BaseDaemon.h>
#include <EssexEngineCore/UniquePointer.h>
#include <EssexEngineCore/LogDaemon.h>

#include <EssexEngineWindowDaemon/IWindowDriver.h>

namespace EssexEngine{
namespace Daemons{
namespace Window{
    class WindowDaemon:public BaseDaemon<IWindowDriver>
    {
        public:
            WindowDaemon(WeakPointer<Context> _context);
            ~WindowDaemon();
            
            void Init() {
                if(GetContext()->HasDaemon<Core::Logging::LogDaemon>()) {
                    GetContext()->GetDaemon<Core::Logging::LogDaemon>()->LogLine(
                        "Loading Daemon [%s] [%s]",
                        GetDaemonName().c_str(),
                        GetDaemonVersion().c_str()
                    );
                }
            }
            std::string GetDaemonName() { return "Window"; }
            std::string GetDaemonVersion() { return ESSEX_ENGINE_VERSION; }

            void RepaintWindows();

            UniquePointer<IWindow> CreateWindow(WeakPointer<WindowDef> def);
            void AddButton(WeakPointer<IWindow> window, WeakPointer<ButtonDef> def);
            void AddLabel(WeakPointer<IWindow> window, WeakPointer<LabelDef> def);
            UniquePointer<IRenderContext> AddCanvas(WeakPointer<IWindow> window, WeakPointer<CanvasDef> def);

            void RepaintCanvas(WeakPointer<IRenderContext> context);
            int GetScreenWidth(WeakPointer<IRenderContext> target);
            int GetScreenHeight(WeakPointer<IRenderContext> target);
            
            void CloseWindow(WeakPointer<IWindow> window);
        private:
    };
}}};
