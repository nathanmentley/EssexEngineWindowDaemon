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
#pragma once

#include <string>

#include <EssexEngineCore/WeakPointer.h>

namespace EssexEngine{
namespace Daemons{
namespace Window{
    class IRenderContext {
        public:
            virtual ~IRenderContext() {};
            virtual void RenderToContext(WeakPointer<void> pixels) = 0;
            virtual int GetHeight() = 0;
            virtual int GetWidth() = 0;
    };
}}};
