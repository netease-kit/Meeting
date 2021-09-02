﻿/*
* Copyright (C) 2010-2011 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango[dot]org>
*
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tsk_ppfcs16.h
 * @brief PPP in HDLC-like Framing (RFC 1662).
 *
 * @author Mamadou Diop <diopmamadou(at)doubango[dot]org>
 *

 */
#ifndef _TINYSAK_PPFCS16_H_
#define _TINYSAK_PPFCS16_H_

#include "tinysak_config.h"

TSK_BEGIN_DECLS

#define TSK_PPPINITFCS16    0xffff  /* Initial FCS value */
#define TSK_PPPGOODFCS16    0xf0b8  /* Good final FCS value */

TINYSAK_API uint16_t tsk_pppfcs16(register uint16_t fcs, register const uint8_t* cp, register int32_t len);

TSK_END_DECLS

#endif /* _TINYSAK_PPFCS16_H_ */

