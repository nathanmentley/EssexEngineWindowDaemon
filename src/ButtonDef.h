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

#include <string>
#include <functional>

namespace EssexEngine{
namespace Daemons{
namespace Window{
    struct ButtonDef
    {
        std::string Title;
        int X;
        int Y;
        int Width;
        int Height;
        std::function<void()> OnClick;
    };
}}};