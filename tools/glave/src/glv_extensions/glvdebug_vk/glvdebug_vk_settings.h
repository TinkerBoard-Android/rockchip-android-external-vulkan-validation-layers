/**************************************************************************
 *
 * Copyright 2014 Valve Software. All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *************************************************************************/
#ifndef GLVDEBUG_VK_SETTINGS_H
#define GLVDEBUG_VK_SETTINGS_H

extern "C" {
#include "glv_settings.h"
}

typedef struct glvdebug_vk_settings
{
    BOOL printReplayInfoMsgs;
    BOOL printReplayWarningMsgs;
    BOOL printReplayErrorMsgs;
    BOOL pauseOnReplayInfo;
    BOOL pauseOnReplayWarning;
    BOOL pauseOnReplayError;
    BOOL groupByFrame;
    BOOL groupByThread;
    int replay_window_width;
    int replay_window_height;
    BOOL separate_replay_window;
} glvdebug_vk_settings;

extern glvdebug_vk_settings g_vkDebugSettings;
extern glv_SettingGroup g_vkDebugSettingGroup;

void initialize_default_settings();

#endif // GLVDEBUG_VK_SETTINGS_H
