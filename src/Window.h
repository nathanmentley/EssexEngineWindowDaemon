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

#include <utility>
#include <functional>

#include <EssexEngineCore/WeakPointer.h>
#include <EssexEngineCore/UniquePointer.h>
#include <EssexEngineCore/Context.h>

#include <EssexEngineWindowDaemon/WindowDaemon.h>
#include <EssexEngineWindowDaemon/IWindow.h>

namespace EssexEngine{
namespace Daemons{
namespace Window{
    class Window {
        public:
            Window(WeakPointer<Context> _context, UniquePointer<IWindow> _window, std::function<void()> _close);
            ~Window();
        protected:
            UniquePointer<IWindow> window;
            WeakPointer<Context> context;
            std::function<void()> close;
    };
}}};
