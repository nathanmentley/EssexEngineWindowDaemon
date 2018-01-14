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

namespace EssexEngine{
namespace Daemons{
namespace Window{
    struct LabelDef
    {
        LabelDef(std::string _Content, int _X, int _Y, int _Width, int _Height) {
            Content = _Content;
            X = _X;
            Y = _Y;
            Width = _Width;
            Height = _Height;
        }

        std::string Content;
        int X;
        int Y;
        int Width;
        int Height;
    };
}}};
