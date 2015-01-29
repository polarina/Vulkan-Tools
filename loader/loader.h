/*
 * XGL
 *
 * Copyright (C) 2014 LunarG, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *   Chia-I Wu <olv@lunarg.com>
 */

#ifndef LOADER_H
#define LOADER_H

#include <xgl.h>
#include <xglDbg.h>
#include <xglWsiX11Ext.h>
#include <xglLayer.h>
#if defined(__GNUC__) && __GNUC__ >= 4
#  define LOADER_EXPORT __attribute__((visibility("default")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#  define LOADER_EXPORT __attribute__((visibility("default")))
#else
#  define LOADER_EXPORT
#endif

extern uint32_t loader_activate_layers(XGL_PHYSICAL_GPU gpu, const XGL_DEVICE_CREATE_INFO* pCreateInfo);
#define MAX_LAYER_LIBRARIES 64
#endif /* LOADER_H */
