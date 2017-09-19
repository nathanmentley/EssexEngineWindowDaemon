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

#include <EssexEngineWindowDaemon/IWindowDriver.h>
#include <EssexEngineCore/BaseDaemon.h>

namespace EssexEngine{
namespace Daemons{
namespace Window{
    class WindowDaemon:public BaseDaemon<IWindowDriver>
    {
    public:
        WindowDaemon(WeakPointer<Context> _context);
        ~WindowDaemon();
        
        void Init() {
            if(GetContext()->HasDriver<Core::Logging::ILogDriver>()) {
                GetContext()->GetDriver<Core::Logging::ILogDriver>()->LogLine(
                    "Loading Daemon [%s] [%s]",
                    GetDaemonName().c_str(),
                    GetDaemonVersion().c_str()
                );
            }
        }
        std::string GetDaemonName() { return "Window"; }
        std::string GetDaemonVersion() { return ESSEX_ENGINE_VERSION; }

        void RepaintWindows();
        UniquePointer<IWindow> CreateWindow(WindowDef def);
        void AddButton(SmartPointer<IWindow> window, ButtonDef def);
        void AddLabel(SmartPointer<IWindow> window, LabelDef def);
        void CloseWindow(SmartPointer<IWindow> window);
    private:
    };
}}};