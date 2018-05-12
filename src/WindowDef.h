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
#include <functional>

namespace EssexEngine{
namespace Daemons{
namespace Window{
    struct WindowDef
    {
        WindowDef(std::string _Title, int _X, int _Y, int _Width, int _Height, std::function<void()> _OnClose) {
            Title = _Title;
            X = _X;
            Y = _Y;
            Width = _Width;
            Height = _Height;
            OnClose = _OnClose;
        }

        std::string Title;
        int X;
        int Y;
        int Width;
        int Height;
        std::function<void()> OnClose;
    };
}}};
