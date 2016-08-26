/*
 * This header provides constants for SI5338 I2C clock generator
 *
 * The constants defined in this header are used in dts files
 *
 * Copyright 2015 Freescale Semiconductor
 *
 * York Sun <yorksun@freescale.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_CLK_SI5338_H
#define _DT_BINDINGS_CLK_SI5338_H

/* Used to identify input clock */
#define SI5338_INPUT_CLK12		0
#define SI5338_INPUT_CLK3		1
#define SI5338_INPUT_CLK4		2
#define SI5338_INPUT_CLK56		3

/* Used to identify the mux source */
#define SI5338_REF_SRC_CLKIN12		0
#define SI5338_REF_SRC_CLKIN3		1
#define SI5338_FB_SRC_CLKIN4		2
#define SI5338_FB_SRC_CLKIN56		3
#define SI5338_REF_SRC_XTAL		4
#define SI5338_FB_SRC_NOCLK		5

/* Used to identify the pfd_in_ref mux source */
#define SI5338_PFD_IN_REF_REFCLK	0
#define SI5338_PFD_IN_REF_FBCLK		1
#define SI5338_PFD_IN_REF_DIVREFCLK	2
#define SI5338_PFD_IN_REF_DIVFBCLK	3
#define SI5338_PFD_IN_REF_XOCLK		4
#define SI5338_PFD_IN_REF_NOCLK		5

/* Used to identify the pfd_in_fb mux source */
#define SI5338_PFD_IN_FB_FBCLK		0
#define SI5338_PFD_IN_FB_REFCLK		1
#define SI5338_PFD_IN_FB_DIVFBCLK	2
#define SI5338_PFD_IN_FB_DIVREFCLK	3
#define SI5338_PFD_IN_FB_RESERVED	4
#define SI5338_PFD_IN_FB_NOCLK		5

/* Used to identify the mux source */
#define SI5338_OUT_MUX_FBCLK		0
#define SI5338_OUT_MUX_REFCLK		1
#define SI5338_OUT_MUX_DIVFBCLK		2
#define SI5338_OUT_MUX_DIVREFCLK	3
#define SI5338_OUT_MUX_XOCLK		4
#define SI5338_OUT_MUX_MS0		5
#define SI5338_OUT_MUX_MSN		6	/* MS0/1/2/3 respectivelly */
#define SI5338_OUT_MUX_NOCLK		7

#define SI5338_OUT_DIS_HIZ		0
#define SI5338_OUT_DIS_LOW		1
#define SI5338_OUT_DIS_HI		2
#define SI5338_OUT_DIS_ALWAYS_ON	3

#endif /* _DT_BINDINGS_CLK_SI5338_H */
