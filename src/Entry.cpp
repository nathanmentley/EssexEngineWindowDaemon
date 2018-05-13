/* 
 * Essex Engine
 * 
 * Copyright (C) 2018 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */

#include <EssexEngineWindowDaemon/WindowDaemon.h>

using EssexEngine::Context;
using EssexEngine::WeakPointer;

using EssexEngine::Daemons::Window::WindowDaemon;

extern "C" {
    void* daemon_init(WeakPointer<Context> context) {
        WindowDaemon* daemon = new WindowDaemon(context);

        context->RegisterDaemon<WindowDaemon>(
            daemon
        );

        return daemon;
    }
}
