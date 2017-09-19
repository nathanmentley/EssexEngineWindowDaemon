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

#include <EssexEngineCore/SmartPointer.h>
#include <EssexEngineCore/UniquePointer.h>
#include <EssexEngineCore/IDriver.h>
#include <EssexEngineWindowDaemon/IWindow.h>
#include <EssexEngineWindowDaemon/WindowDef.h>
#include <EssexEngineWindowDaemon/ButtonDef.h>
#include <EssexEngineWindowDaemon/LabelDef.h>

namespace EssexEngine{
namespace Daemons{
namespace Window{
    class IWindowDriver: public Core::IDriver
    {
    public:
        virtual void RepaintWindows() = 0;

        virtual UniquePointer<IWindow> CreateWindow(WindowDef def) = 0;
        
        virtual void AddButton(SmartPointer<IWindow> window, ButtonDef def) = 0;
        
        virtual void AddLabel(SmartPointer<IWindow> window, LabelDef def) = 0;
        
        virtual void CloseWindow(SmartPointer<IWindow> window) = 0;
    private:
    };
}}};