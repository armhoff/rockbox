/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2013 by Amaury Pouly
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef _FMRADIO_TARGET_H_
#define _FMRADIO_TARGET_H_

#define IMX233_FMRADIO_I2C  FMI_SW
#define FMI_SW_SDA_BANK     1
#define FMI_SW_SDA_PIN      24
#define FMI_SW_SCL_BANK     1
#define FMI_SW_SCL_PIN      22

#define IMX233_FMRADIO_POWER    FMP_GPIO
#define FMP_GPIO_BANK   0
#define FMP_GPIO_PIN    29
#define FMP_GPIO_DELAY  (HZ / 10)

#endif /* _FMRADIO_TARGET_H_ */
