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
#include <EssexEngineCore/IDriver.h>

#include <EssexEngineWindowDaemon/IWindow.h>
#include <EssexEngineWindowDaemon/IRenderContext.h>

#include <EssexEngineWindowDaemon/WindowDef.h>
#include <EssexEngineWindowDaemon/ButtonDef.h>
#include <EssexEngineWindowDaemon/CanvasDef.h>
#include <EssexEngineWindowDaemon/LabelDef.h>

namespace EssexEngine{
namespace Daemons{
namespace Window{
    class IWindowDriver: public Core::IDriver
    {
    public:
        virtual void RepaintWindows() = 0;

        virtual WeakPointer<IWindow> CreateWindow(WeakPointer<WindowDef> def) = 0;
        
        virtual void AddButton(WeakPointer<IWindow> window, WeakPointer<ButtonDef> def) = 0;
        virtual void AddLabel(WeakPointer<IWindow> window, WeakPointer<LabelDef> def) = 0;
        virtual WeakPointer<IRenderContext> AddCanvas(WeakPointer<IWindow> window, WeakPointer<CanvasDef> def) = 0;
        
        virtual void RepaintCanvas(WeakPointer<IRenderContext> context) = 0;
        virtual int GetScreenWidth(WeakPointer<IRenderContext> target) = 0;
        virtual int GetScreenHeight(WeakPointer<IRenderContext> target) = 0;
        
        virtual void CloseWindow(WeakPointer<IWindow> window) = 0;
    private:
    };
}}};
