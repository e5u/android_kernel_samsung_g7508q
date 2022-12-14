/* Copyright (c) 2009-2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef _MDNIE_LITE_TUNING_DATA_WVGA_HX8394C_H_
#define _MDNIE_LITE_TUNING_DATA_WVGA_HX8394C_H_
////////////////// UI /// /////////////////////

static char STANDARD_UI_1[] = {
	0xBD,///////////////negative
	0x01 //BANK 1
};

static char STANDARD_UI_2[] = {
	0xCD,
	0x02,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

static char STANDARD_UI_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char STANDARD_UI_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};

static char DYNAMIC_UI_1[] = {
	0xBD, //bypass
	0x01, //BANK 1
};

static char DYNAMIC_UI_2[] = {
	0xCD,
	0x03,	//sharpen
	0x00,	//curve 1
	0x1c,	//curve 1
	0x00,	//curve 2
	0x1c,	//curve 2
	0x00,	//curve 3
	0x1c,	//curve 3
	0x00,	//curve 4
	0x1c,	//curve 4
	0x00,	//curve 5
	0x1c,	//curve 5
	0x00,	//curve 6
	0x1c,	//curve 6
	0x00,	//curve 7
	0x1c,	//curve 7
	0x00,	//curve 8
	0x1c,	//curve 8
	0x00,	//curve 9
	0x1c,	//curve 9
	0x00,	//curve10
	0x1c,	//curve10
	0x00,	//curve11
	0x1c,	//curve11
	0x00,	//curve12
	0x1c,	//curve12
	0x00,	//curve13
	0x1c,	//curve13
	0x0d,	//curve14
	0xa4,	//curve14
	0x0d,	//curve15
	0xa4,	//curve15
	0x0d,	//curve16
	0xa4,	//curve16
	0x0d,	//curve17
	0xa4,	//curve17
	0x0d,	//curve18
	0xa4,	//curve18
	0x0d,	//curve19
	0xa4,	//curve19
	0x0d,	//curve20
	0xa4,	//curve20
	0x0d,	//curve21
	0xa4,	//curve21
	0x25,	//curve22
	0x1c,	//curve22
	0x4a,	//curve23
	0x17,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x80,	//cs gain
	0x01,
};

static char DYNAMIC_UI_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char DYNAMIC_UI_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};


static char MOVIE_UI_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char MOVIE_UI_2[] = {
	0xCD,
	0x00,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x00,	//cs gain
	0x01,
};

static char MOVIE_UI_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char MOVIE_UI_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x32,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xf3,	//scr Wg
	0x00,	//scr Kg
	0xeb,	//scr Wb
	0x00,	//scr Kb
};



char AUTO_UI_1[] = {
	0xBD,
	0x01,	//BANK 1
};

char AUTO_UI_2[] = {
	0xCD,
	0x03,	//sharpen	_set cs_en gamma_en 00 0 0
	0x00,	//curve 1	b
	0x1c,	//curve 1	a
	0x00,	//curve 2	b
	0x1c,	//curve 2	a
	0x00,	//curve 3	b
	0x1c,	//curve 3	a
	0x00,	//curve 4	b
	0x1c,	//curve 4	a
	0x00,	//curve 5	b
	0x1c,	//curve 5	a
	0x00,	//curve 6	b
	0x1c,	//curve 6	a
	0x00,	//curve 7	b
	0x1c,	//curve 7	a
	0x00,	//curve 8	b
	0x1c,	//curve 8	a
	0x00,	//curve 9	b
	0x1c,	//curve 9	a
	0x00,	//curve10	b
	0x1c,	//curve10	a
	0x00,	//curve11	b
	0x1c,	//curve11	a
	0x00,	//curve12	b
	0x1c,	//curve12	a
	0x00,	//curve13	b
	0x1c,	//curve13	a
	0x0d,	//curve14	b
	0xa4,	//curve14	a
	0x0d,	//curve15	b
	0xa4,	//curve15	a
	0x0d,	//curve16	b
	0xa4,	//curve16	a
	0x0d,	//curve17	b
	0xa4,	//curve17	a
	0x0d,	//curve18	b
	0xa4,	//curve18	a
	0x0d,	//curve19	b
	0xa4,	//curve19	a
	0x0d,	//curve20	b
	0xa4,	//curve20	a
	0x0d,	//curve21	b
	0xa4,	//curve21	a
	0x25,	//curve22	b
	0x1c,	//curve22	a
	0x4a,	//curve23	b
	0x17,	//curve23	a
	0x00,	//curve24	b
	0xFF,	//curve24	a
	0x60,	//cs gain
	0x01,
};

char AUTO_UI_3[] = {
	0xBD,
	0x00,	//BANK 0
};

char AUTO_UI_4[] = {
	0xCD,
	0x5A,	//passwor	d 5A
	0x00,	//mask 00	0
	0x00,	//data_wi	dth
	0x33,	//scr_roi	1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00,	//roi_ctr	l
	0x00,	//roi0 x	start
	0x00,
	0x00,	//roi0 x	end
	0x00,
	0x00,	//roi0 y	start
	0x00,
	0x00,	//roi0 y	end
	0x00,
	0x00,	//roi1 x	strat
	0x00,
	0x00,	//roi1 x	end
	0x00,
	0x00,	//roi1 y	start
	0x00,
	0x00,	//roi1 y	end
	0x00,
	0x00,	//scr Cr	Yb
	0xff,	//scr Rr	Bb
	0xff,	//scr Cg	Yg
	0x00,	//scr Rg	Bg
	0xff,	//scr Cb	Yr
	0x00,	//scr Rb	Br
	0xff,	//scr Mr	Mb
	0x00,	//scr Gr	Gb
	0x00,	//scr Mg	Mg
	0xff,	//scr Gg	Gg
	0xff,	//scr Mb	Mr
	0x00,	//scr Gb	Gr
	0xff,	//scr Yr	Cb
	0x00,	//scr Br	Rb
	0xf0,	//scr Yg	Cg
	0x00,	//scr Bg	Rg
	0x00,	//scr Yb	Cr
	0xff,	//scr Bb	Rr
	0xff,	//scr Wr	Wb
	0x00,	//scr Kr	Kb
	0xff,	//scr Wg	Wg
	0x00,	//scr Kg	Kg
	0xff,	//scr Wb	Wr
	0x00,	//scr Kb	Kr
};





////////////////// GALLERY /////////////////////
static char STANDARD_GALLERY_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char STANDARD_GALLERY_2[] = {
	0xCD,
	0x06,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

static char STANDARD_GALLERY_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char STANDARD_GALLERY_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};

static char DYNAMIC_GALLERY_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char DYNAMIC_GALLERY_2[] = {
	0xCD,
	0x07,	//sharpen
	0x00,	//curve 1
	0x1c,	//curve 1
	0x00,	//curve 2
	0x1c,	//curve 2
	0x00,	//curve 3
	0x1c,	//curve 3
	0x00,	//curve 4
	0x1c,	//curve 4
	0x00,	//curve 5
	0x1c,	//curve 5
	0x00,	//curve 6
	0x1c,	//curve 6
	0x00,	//curve 7
	0x1c,	//curve 7
	0x00,	//curve 8
	0x1c,	//curve 8
	0x00,	//curve 9
	0x1c,	//curve 9
	0x00,	//curve10
	0x1c,	//curve10
	0x00,	//curve11
	0x1c,	//curve11
	0x00,	//curve12
	0x1c,	//curve12
	0x00,	//curve13
	0x1c,	//curve13
	0x0d,	//curve14
	0xa4,	//curve14
	0x0d,	//curve15
	0xa4,	//curve15
	0x0d,	//curve16
	0xa4,	//curve16
	0x0d,	//curve17
	0xa4,	//curve17
	0x0d,	//curve18
	0xa4,	//curve18
	0x0d,	//curve19
	0xa4,	//curve19
	0x0d,	//curve20
	0xa4,	//curve20
	0x0d,	//curve21
	0xa4,	//curve21
	0x25,	//curve22
	0x1c,	//curve22
	0x4a,	//curve23
	0x17,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x80,	//cs gain
	0x01,
};
static char DYNAMIC_GALLERY_3[] = {
	0xBD,
	0x00, //BANK 0
};
static char DYNAMIC_GALLERY_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};




static char MOVIE_GALLERY_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char MOVIE_GALLERY_2[] = {
	0xCD,
	0x00,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x00,	//cs gain
	0x01,
};

static char MOVIE_GALLERY_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char MOVIE_GALLERY_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x32,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xf3,	//scr Wg
	0x00,	//scr Kg
	0xeb,	//scr Wb
	0x00,	//scr Kb
};




char AUTO_GALLERY_1[] = {
	0xBD,
	0x01,	//BANK 1
};

char AUTO_GALLERY_2[] = {
	0xCD,
	0x06,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

char AUTO_GALLERY_3[] = {
	0xBD,
	0x00,	//BANK 0
};

char AUTO_GALLERY_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};



////////////////// VIDEO /////////////////////

static char STANDARD_VIDEO_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char STANDARD_VIDEO_2[] = {
	0xCD,
	0x06,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

static char STANDARD_VIDEO_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char STANDARD_VIDEO_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};


static char DYNAMIC_VIDEO_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char DYNAMIC_VIDEO_2[] = {
	0xCD,
	0x07,	//sharpen
	0x00,	//curve 1
	0x1c,	//curve 1
	0x00,	//curve 2
	0x1c,	//curve 2
	0x00,	//curve 3
	0x1c,	//curve 3
	0x00,	//curve 4
	0x1c,	//curve 4
	0x00,	//curve 5
	0x1c,	//curve 5
	0x00,	//curve 6
	0x1c,	//curve 6
	0x00,	//curve 7
	0x1c,	//curve 7
	0x00,	//curve 8
	0x1c,	//curve 8
	0x00,	//curve 9
	0x1c,	//curve 9
	0x00,	//curve10
	0x1c,	//curve10
	0x00,	//curve11
	0x1c,	//curve11
	0x00,	//curve12
	0x1c,	//curve12
	0x00,	//curve13
	0x1c,	//curve13
	0x0d,	//curve14
	0xa4,	//curve14
	0x0d,	//curve15
	0xa4,	//curve15
	0x0d,	//curve16
	0xa4,	//curve16
	0x0d,	//curve17
	0xa4,	//curve17
	0x0d,	//curve18
	0xa4,	//curve18
	0x0d,	//curve19
	0xa4,	//curve19
	0x0d,	//curve20
	0xa4,	//curve20
	0x0d,	//curve21
	0xa4,	//curve21
	0x25,	//curve22
	0x1c,	//curve22
	0x4a,	//curve23
	0x17,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x80,	//cs gain
	0x01,
};

static char DYNAMIC_VIDEO_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char DYNAMIC_VIDEO_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};



static char MOVIE_VIDEO_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char MOVIE_VIDEO_2[] = {
	0xCD,
	0x00,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x00,	//cs gain
	0x01,
};

static char MOVIE_VIDEO_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char MOVIE_VIDEO_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x32,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xf3,	//scr Wg
	0x00,	//scr Kg
	0xeb,	//scr Wb
	0x00,	//scr Kb
};





char AUTO_VIDEO_1[] = {
	0xBD,
	0x01,	//BANK 1
};

char AUTO_VIDEO_2[] = {
	0xCD,
	0x07,	//sharpen
	0x00,	//curve 1
	0x1c,	//curve 1
	0x00,	//curve 2
	0x1c,	//curve 2
	0x00,	//curve 3
	0x1c,	//curve 3
	0x00,	//curve 4
	0x1c,	//curve 4
	0x00,	//curve 5
	0x1c,	//curve 5
	0x00,	//curve 6
	0x1c,	//curve 6
	0x00,	//curve 7
	0x1c,	//curve 7
	0x00,	//curve 8
	0x1c,	//curve 8
	0x00,	//curve 9
	0x1c,	//curve 9
	0x00,	//curve10
	0x1c,	//curve10
	0x00,	//curve11
	0x1c,	//curve11
	0x00,	//curve12
	0x1c,	//curve12
	0x00,	//curve13
	0x1c,	//curve13
	0x0d,	//curve14
	0xa4,	//curve14
	0x0d,	//curve15
	0xa4,	//curve15
	0x0d,	//curve16
	0xa4,	//curve16
	0x0d,	//curve17
	0xa4,	//curve17
	0x0d,	//curve18
	0xa4,	//curve18
	0x0d,	//curve19
	0xa4,	//curve19
	0x0d,	//curve20
	0xa4,	//curve20
	0x0d,	//curve21
	0xa4,	//curve21
	0x25,	//curve22
	0x1c,	//curve22
	0x4a,	//curve23
	0x17,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

char AUTO_VIDEO_3[] = {
	0xBD,
	0x00, //BANK 0
};

char AUTO_VIDEO_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};




////////////////// VT /////////////////////

static char STANDARD_VT_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char STANDARD_VT_2[] = {
	0xCD,
	0x06,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

static char STANDARD_VT_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char STANDARD_VT_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};


static char DYNAMIC_VT_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char DYNAMIC_VT_2[] = {
	0xCD,
	0x07,	//sharpen
	0x00,	//curve 1
	0x1c,	//curve 1
	0x00,	//curve 2
	0x1c,	//curve 2
	0x00,	//curve 3
	0x1c,	//curve 3
	0x00,	//curve 4
	0x1c,	//curve 4
	0x00,	//curve 5
	0x1c,	//curve 5
	0x00,	//curve 6
	0x1c,	//curve 6
	0x00,	//curve 7
	0x1c,	//curve 7
	0x00,	//curve 8
	0x1c,	//curve 8
	0x00,	//curve 9
	0x1c,	//curve 9
	0x00,	//curve10
	0x1c,	//curve10
	0x00,	//curve11
	0x1c,	//curve11
	0x00,	//curve12
	0x1c,	//curve12
	0x00,	//curve13
	0x1c,	//curve13
	0x0d,	//curve14
	0xa4,	//curve14
	0x0d,	//curve15
	0xa4,	//curve15
	0x0d,	//curve16
	0xa4,	//curve16
	0x0d,	//curve17
	0xa4,	//curve17
	0x0d,	//curve18
	0xa4,	//curve18
	0x0d,	//curve19
	0xa4,	//curve19
	0x0d,	//curve20
	0xa4,	//curve20
	0x0d,	//curve21
	0xa4,	//curve21
	0x25,	//curve22
	0x1c,	//curve22
	0x4a,	//curve23
	0x17,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x80,	//cs gain
	0x01,
};

static char DYNAMIC_VT_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char DYNAMIC_VT_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};




static char MOVIE_VT_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char MOVIE_VT_2[] = {
	0xCD,
	0x00,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x00,	//cs gain
	0x01,
};

static char MOVIE_VT_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char MOVIE_VT_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x32,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xf3,	//scr Wg
	0x00,	//scr Kg
	0xeb,	//scr Wb
	0x00,	//scr Kb
};



char AUTO_VT_1[] = {
	0xBD,
	0x01, //BANK 1
};

char AUTO_VT_2[] = {
	0xCD,
	0x06,	//sharpen	_set cs_en gamma_en 00 0 0
	0x00,	//curve 1	b
	0x20,	//curve 1	a
	0x00,	//curve 2	b
	0x20,	//curve 2	a
	0x00,	//curve 3	b
	0x20,	//curve 3	a
	0x00,	//curve 4	b
	0x20,	//curve 4	a
	0x00,	//curve 5	b
	0x20,	//curve 5	a
	0x00,	//curve 6	b
	0x20,	//curve 6	a
	0x00,	//curve 7	b
	0x20,	//curve 7	a
	0x00,	//curve 8	b
	0x20,	//curve 8	a
	0x00,	//curve 9	b
	0x20,	//curve 9	a
	0x00,	//curve10	b
	0x20,	//curve10	a
	0x00,	//curve11	b
	0x20,	//curve11	a
	0x00,	//curve12	b
	0x20,	//curve12	a
	0x00,	//curve13	b
	0x20,	//curve13	a
	0x00,	//curve14	b
	0x20,	//curve14	a
	0x00,	//curve15	b
	0x20,	//curve15	a
	0x00,	//curve16	b
	0x20,	//curve16	a
	0x00,	//curve17	b
	0x20,	//curve17	a
	0x00,	//curve18	b
	0x20,	//curve18	a
	0x00,	//curve19	b
	0x20,	//curve19	a
	0x00,	//curve20	b
	0x20,	//curve20	a
	0x00,	//curve21	b
	0x20,	//curve21	a
	0x00,	//curve22	b
	0x20,	//curve22	a
	0x00,	//curve23	b
	0x20,	//curve23	a
	0x00,	//curve24	b
	0xFF,	//curve24	a
	0x60,	//cs gain
	0x01,
};

char AUTO_VT_3[] = {
	0xBD,
	0x00, //BANK 0
};

char AUTO_VT_4[] = {
	0xCD,
	0x5A,	//passwor	d 5A
	0x00,	//mask 00	0
	0x00,	//data_wi	dth
	0x33,	//scr_roi	1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00,	//roi_ctr	l
	0x00,	//roi0 x	start
	0x00,
	0x00,	//roi0 x	end
	0x00,
	0x00,	//roi0 y	start
	0x00,
	0x00,	//roi0 y	end
	0x00,
	0x00,	//roi1 x	strat
	0x00,
	0x00,	//roi1 x	end
	0x00,
	0x00,	//roi1 y	start
	0x00,
	0x00,	//roi1 y	end
	0x00,
	0x00,	//scr Cr	Yb
	0xff,	//scr Rr	Bb
	0xff,	//scr Cg	Yg
	0x00,	//scr Rg	Bg
	0xff,	//scr Cb	Yr
	0x00,	//scr Rb	Br
	0xff,	//scr Mr	Mb
	0x00,	//scr Gr	Gb
	0x00,	//scr Mg	Mg
	0xff,	//scr Gg	Gg
	0xff,	//scr Mb	Mr
	0x00,	//scr Gb	Gr
	0xff,	//scr Yr	Cb
	0x00,	//scr Br	Rb
	0xf0,	//scr Yg	Cg
	0x00,	//scr Bg	Rg
	0x00,	//scr Yb	Cr
	0xff,	//scr Bb	Rr
	0xff,	//scr Wr	Wb
	0x00,	//scr Kr	Kb
	0xff,	//scr Wg	Wg
	0x00,	//scr Kg	Kg
	0xff,	//scr Wb	Wr
	0x00,	//scr Kb	Kr
};



////////////////// CAMERA /////////////////////

static char CAMERA_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char CAMERA_2[] = {
	0xCD,
	0x02,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

static char CAMERA_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char CAMERA_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};


char AUTO_CAMERA_1[] = {
	0xBD,
	0x01, //BANK 1
};

char AUTO_CAMERA_2[] = {
	0xCD,
	0x02,	//sharpen	_set cs_en gamma_en 00 0 0
	0x00,	//curve 1	b
	0x20,	//curve 1	a
	0x00,	//curve 2	b
	0x20,	//curve 2	a
	0x00,	//curve 3	b
	0x20,	//curve 3	a
	0x00,	//curve 4	b
	0x20,	//curve 4	a
	0x00,	//curve 5	b
	0x20,	//curve 5	a
	0x00,	//curve 6	b
	0x20,	//curve 6	a
	0x00,	//curve 7	b
	0x20,	//curve 7	a
	0x00,	//curve 8	b
	0x20,	//curve 8	a
	0x00,	//curve 9	b
	0x20,	//curve 9	a
	0x00,	//curve10	b
	0x20,	//curve10	a
	0x00,	//curve11	b
	0x20,	//curve11	a
	0x00,	//curve12	b
	0x20,	//curve12	a
	0x00,	//curve13	b
	0x20,	//curve13	a
	0x00,	//curve14	b
	0x20,	//curve14	a
	0x00,	//curve15	b
	0x20,	//curve15	a
	0x00,	//curve16	b
	0x20,	//curve16	a
	0x00,	//curve17	b
	0x20,	//curve17	a
	0x00,	//curve18	b
	0x20,	//curve18	a
	0x00,	//curve19	b
	0x20,	//curve19	a
	0x00,	//curve20	b
	0x20,	//curve20	a
	0x00,	//curve21	b
	0x20,	//curve21	a
	0x00,	//curve22	b
	0x20,	//curve22	a
	0x00,	//curve23	b
	0x20,	//curve23	a
	0x00,	//curve24	b
	0xFF,	//curve24	a
	0x60,	//cs gain	
	0x01,
};

char AUTO_CAMERA_3[] = {
	0xBD,
	0x00, //BANK 0
};

char AUTO_CAMERA_4[] = {
	0xCD,
	0x5A,	//passwor	d 5A
	0x00,	//mask 00	0
	0x00,	//data_wi	dth
	0x33,	//scr_roi	1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00,	//roi_ctr	l
	0x00,	//roi0 x	start
	0x00,
	0x00,	//roi0 x	end
	0x00,
	0x00,	//roi0 y	start
	0x00,
	0x00,	//roi0 y	end
	0x00,
	0x00,	//roi1 x	strat
	0x00,
	0x00,	//roi1 x	end
	0x00,
	0x00,	//roi1 y	start
	0x00,
	0x00,	//roi1 y	end
	0x00,
	0x00,	//scr Cr	Yb
	0xff,	//scr Rr	Bb
	0xff,	//scr Cg	Yg
	0x00,	//scr Rg	Bg
	0xff,	//scr Cb	Yr
	0x00,	//scr Rb	Br
	0xff,	//scr Mr	Mb
	0x00,	//scr Gr	Gb
	0x00,	//scr Mg	Mg
	0xff,	//scr Gg	Gg
	0xff,	//scr Mb	Mr
	0x00,	//scr Gb	Gr
	0xff,	//scr Yr	Cb
	0x00,	//scr Br	Rb
	0xf0,	//scr Yg	Cg
	0x00,	//scr Bg	Rg
	0x00,	//scr Yb	Cr
	0xff,	//scr Bb	Rr
	0xff,	//scr Wr	Wb
	0x00,	//scr Kr	Kb
	0xff,	//scr Wg	Wg
	0x00,	//scr Kg	Kg
	0xff,	//scr Wb	Wr
	0x00,	//scr Kb	Kr
};



static char NEGATIVE_1[] = {
	0xBD,
	0x01, //BANK 1
};

static char NEGATIVE_2[] = {
	0xCD,
	0x00,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x00,	//cs gain
	0x01,
};

static char NEGATIVE_3[] = {
	0xBD,
	0x00, //BANK 0
};

static char NEGATIVE_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x32,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0xff,	//scr Cr
	0x00,	//scr Rr
	0x00,	//scr Cg
	0xff,	//scr Rg
	0x00,	//scr Cb
	0xff,	//scr Rb
	0x00,	//scr Mr
	0xff,	//scr Gr
	0xff,	//scr Mg
	0x00,	//scr Gg
	0x00,	//scr Mb
	0xff,	//scr Gb
	0x00,	//scr Yr
	0xff,	//scr Br
	0x00,	//scr Yg
	0xff,	//scr Bg
	0xff,	//scr Yb
	0x00,	//scr Bb
	0x00,	//scr Wr
	0xff,	//scr Kr
	0x00,	//scr Wg
	0xff,	//scr Kg
	0x00,	//scr Wb
	0xff,	//scr Kb
};



char COLOR_BLIND_1[] = {
	0xBD,
	0x01, //BANK 1
};

char COLOR_BLIND_2[] = {
	0xCD,
	0x00,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x00,	//cs gain
	0x01,
};

char COLOR_BLIND_3[] = {
	0xBD,
	0x00, //BANK 0
};

char COLOR_BLIND_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x32,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xff,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};




////////////////// BROWSER /////////////////////

char STANDARD_BROWSER_1[] = {
	0xBD,
	0x01, //BANK 1
};

char STANDARD_BROWSER_2[] = {
	0xCD,
	0x02,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

char STANDARD_BROWSER_3[] = {
	0xBD,
	0x00, //BANK 0
};

char STANDARD_BROWSER_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};


char DYNAMIC_BROWSER_1[] = {
	0xBD,
	0x01, //BANK 1
};

char DYNAMIC_BROWSER_2[] = {
	0xCD,
	0x03,	//sharpen
	0x00,	//curve 1
	0x1c,	//curve 1
	0x00,	//curve 2
	0x1c,	//curve 2
	0x00,	//curve 3
	0x1c,	//curve 3
	0x00,	//curve 4
	0x1c,	//curve 4
	0x00,	//curve 5
	0x1c,	//curve 5
	0x00,	//curve 6
	0x1c,	//curve 6
	0x00,	//curve 7
	0x1c,	//curve 7
	0x00,	//curve 8
	0x1c,	//curve 8
	0x00,	//curve 9
	0x1c,	//curve 9
	0x00,	//curve10
	0x1c,	//curve10
	0x00,	//curve11
	0x1c,	//curve11
	0x00,	//curve12
	0x1c,	//curve12
	0x00,	//curve13
	0x1c,	//curve13
	0x0d,	//curve14
	0xa4,	//curve14
	0x0d,	//curve15
	0xa4,	//curve15
	0x0d,	//curve16
	0xa4,	//curve16
	0x0d,	//curve17
	0xa4,	//curve17
	0x0d,	//curve18
	0xa4,	//curve18
	0x0d,	//curve19
	0xa4,	//curve19
	0x0d,	//curve20
	0xa4,	//curve20
	0x0d,	//curve21
	0xa4,	//curve21
	0x25,	//curve22
	0x1c,	//curve22
	0x4a,	//curve23
	0x17,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x80,	//cs gain
	0x01,
};

char DYNAMIC_BROWSER_3[] = {
	0xBD,
	0x00, //BANK 0
};

char DYNAMIC_BROWSER_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xff,	//scr Wg
	0x00,	//scr Kg
	0xff,	//scr Wb
	0x00,	//scr Kb
};




char MOVIE_BROWSER_1[] = {
	0xBD,
	0x01, //BANK 1
};

char MOVIE_BROWSER_2[] = {
	0xCD,
	0x00,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x00,	//cs gain
	0x01,
};

char MOVIE_BROWSER_3[] = {
	0xBD,
	0x00, //BANK 0
};

char MOVIE_BROWSER_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x32,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xf3,	//scr Wg
	0x00,	//scr Kg
	0xeb,	//scr Wb
	0x00,	//scr Kb
};




char AUTO_BROWSER_1[] = {
	0xBD,
	0x01, //BANK 1
};

char AUTO_BROWSER_2[] = {
	0xCD,
	0x02, //sharpen_set cs_en gamma_en 00 0 0
	0x00, //curve 1 b
	0x20, //curve 1 a
	0x00, //curve 2 b
	0x20, //curve 2 a
	0x00, //curve 3 b
	0x20, //curve 3 a
	0x00, //curve 4 b
	0x20, //curve 4 a
	0x00, //curve 5 b
	0x20, //curve 5 a
	0x00, //curve 6 b
	0x20, //curve 6 a
	0x00, //curve 7 b
	0x20, //curve 7 a
	0x00, //curve 8 b
	0x20, //curve 8 a
	0x00, //curve 9 b
	0x20, //curve 9 a
	0x00, //curve10 b
	0x20, //curve10 a
	0x00, //curve11 b
	0x20, //curve11 a
	0x00, //curve12 b
	0x20, //curve12 a
	0x00, //curve13 b
	0x20, //curve13 a
	0x00, //curve14 b
	0x20, //curve14 a
	0x00, //curve15 b
	0x20, //curve15 a
	0x00, //curve16 b
	0x20, //curve16 a
	0x00, //curve17 b
	0x20, //curve17 a
	0x00, //curve18 b
	0x20, //curve18 a
	0x00, //curve19 b
	0x20, //curve19 a
	0x00, //curve20 b
	0x20, //curve20 a
	0x00, //curve21 b
	0x20, //curve21 a
	0x00, //curve22 b
	0x20, //curve22 a
	0x00, //curve23 b
	0x20, //curve23 a
	0x00, //curve24 b
	0xFF, //curve24 a
	0x60, //cs gain
	0x01,
};

char AUTO_BROWSER_3[] = {
	0xBD,
	0x00, //BANK 0
};

char AUTO_BROWSER_4[] = {
	0xCD,
	0x5A, //password 5A
	0x00, //mask 000
	0x00, //data_width
	0x33, //scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0
	0x00, //roi_ctrl
	0x00, //roi0 x start
	0x00,
	0x00, //roi0 x end
	0x00,
	0x00, //roi0 y start
	0x00,
	0x00, //roi0 y end
	0x00,
	0x00, //roi1 x strat
	0x00,
	0x00, //roi1 x end
	0x00,
	0x00, //roi1 y start
	0x00,
	0x00, //roi1 y end
	0x00,
	0x00, //scr Cr Yb
	0xff, //scr Rr Bb
	0xff, //scr Cg Yg
	0x00, //scr Rg Bg
	0xff, //scr Cb Yr
	0x00, //scr Rb Br
	0xff, //scr Mr Mb
	0x00, //scr Gr Gb
	0x00, //scr Mg Mg
	0xff, //scr Gg Gg
	0xff, //scr Mb Mr
	0x00, //scr Gb Gr
	0xff, //scr Yr Cb
	0x00, //scr Br Rb
	0xf0, //scr Yg Cg
	0x00, //scr Bg Rg
	0x00, //scr Yb Cr
	0xff, //scr Bb Rr
	0xff, //scr Wr Wb
	0x00, //scr Kr Kb
	0xff, //scr Wg Wg
	0x00, //scr Kg Kg
	0xff, //scr Wb Wr
	0x00, //scr Kb Kr
};





////////////////// eBOOK /////////////////////

char AUTO_EBOOK_1[] = {
	0xBD,
	0x01, //BANK 1
};

char AUTO_EBOOK_2[] = {
	0xCD,
	0x02,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

char AUTO_EBOOK_3[] = {
	0xBD,
	0x00, //BANK 0
};

char AUTO_EBOOK_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xfa,	//scr Wg
	0x00,	//scr Kg
	0xe6,	//scr Wb
	0x00,	//scr Kb
};


char AUTO_EMAIL_1[] = {
	0xBD,
	0x01, //BANK 1
};

char AUTO_EMAIL_2[] = {
	0xCD,
	0x02,	//sharpen
	0x00,	//curve 1
	0x20,	//curve 1
	0x00,	//curve 2
	0x20,	//curve 2
	0x00,	//curve 3
	0x20,	//curve 3
	0x00,	//curve 4
	0x20,	//curve 4
	0x00,	//curve 5
	0x20,	//curve 5
	0x00,	//curve 6
	0x20,	//curve 6
	0x00,	//curve 7
	0x20,	//curve 7
	0x00,	//curve 8
	0x20,	//curve 8
	0x00,	//curve 9
	0x20,	//curve 9
	0x00,	//curve10
	0x20,	//curve10
	0x00,	//curve11
	0x20,	//curve11
	0x00,	//curve12
	0x20,	//curve12
	0x00,	//curve13
	0x20,	//curve13
	0x00,	//curve14
	0x20,	//curve14
	0x00,	//curve15
	0x20,	//curve15
	0x00,	//curve16
	0x20,	//curve16
	0x00,	//curve17
	0x20,	//curve17
	0x00,	//curve18
	0x20,	//curve18
	0x00,	//curve19
	0x20,	//curve19
	0x00,	//curve20
	0x20,	//curve20
	0x00,	//curve21
	0x20,	//curve21
	0x00,	//curve22
	0x20,	//curve22
	0x00,	//curve23
	0x20,	//curve23
	0x00,	//curve24
	0xFF,	//curve24
	0x60,	//cs gain
	0x01,
};

char AUTO_EMAIL_3[] = {
	0xBD,
	0x00, //BANK 0
};

char AUTO_EMAIL_4[] = {
	0xCD,
	0x5A,	//passwor
	0x00,	//mask 00
	0x00,	//data_wi
	0x33,	//scr_roi
	0x00,	//roi_ctr
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 x
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi0 y
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 x
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//roi1 y
	0x00,
	0x00,	//scr Cr
	0xff,	//scr Rr
	0xff,	//scr Cg
	0x00,	//scr Rg
	0xff,	//scr Cb
	0x00,	//scr Rb
	0xff,	//scr Mr
	0x00,	//scr Gr
	0x00,	//scr Mg
	0xff,	//scr Gg
	0xff,	//scr Mb
	0x00,	//scr Gb
	0xff,	//scr Yr
	0x00,	//scr Br
	0xf0,	//scr Yg
	0x00,	//scr Bg
	0x00,	//scr Yb
	0xff,	//scr Bb
	0xff,	//scr Wr
	0x00,	//scr Kr
	0xf9,	//scr Wg
	0x00,	//scr Kg
	0xf2,	//scr Wb
	0x00,	//scr Kb
};





char *blind_tune_value[ACCESSIBILITY_MAX][4] = {
		/*
			ACCESSIBILITY_OFF,
			NEGATIVE,
			COLOR_BLIND,
		*/
		{NULL, NULL, NULL, NULL},
		{NEGATIVE_1, NEGATIVE_2, NEGATIVE_3, NEGATIVE_4},
		{COLOR_BLIND_1, COLOR_BLIND_2, COLOR_BLIND_3, COLOR_BLIND_4},
};

char *mdnie_tune_value[MAX_mDNIe_MODE][MAX_BACKGROUND_MODE][MAX_OUTDOOR_MODE][4] = {
		/*
			DYNAMIC_MODE (outdoor off/on)
			STANDARD_MODE (outdoor off/on)
			MOVIE_MODE (outdoor off/on)
			AUTO_MODE (outdoor off/on)
		*/
		// UI_APP
		{
			{{DYNAMIC_UI_1, DYNAMIC_UI_2, DYNAMIC_UI_3, DYNAMIC_UI_4}, {NULL, NULL, NULL, NULL}},
			{{STANDARD_UI_1, STANDARD_UI_2, STANDARD_UI_3, STANDARD_UI_4}, {NULL, NULL, NULL, NULL}},
			{{MOVIE_UI_1, MOVIE_UI_2, MOVIE_UI_3, MOVIE_UI_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_UI_1, AUTO_UI_2, AUTO_UI_3, AUTO_UI_4}, {NULL, NULL, NULL, NULL}},
		},
		// VIDEO_APP
		{
			{{DYNAMIC_VIDEO_1, DYNAMIC_VIDEO_2, DYNAMIC_VIDEO_3, DYNAMIC_VIDEO_4}, {NULL, NULL, NULL, NULL}},
			{{STANDARD_VIDEO_1, STANDARD_VIDEO_2, STANDARD_VIDEO_3, STANDARD_VIDEO_4}, {NULL, NULL, NULL, NULL}},
			{{MOVIE_VIDEO_1, MOVIE_VIDEO_2, MOVIE_VIDEO_3, MOVIE_VIDEO_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_VIDEO_1, AUTO_VIDEO_2, AUTO_VIDEO_3, AUTO_VIDEO_4}, {NULL, NULL, NULL, NULL}},
		},
		// VIDEO_WARM_APP
		{
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
		},
		// VIDEO_COLD_APP
		{
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},

		},
		// CAMERA_APP
		{
			{{CAMERA_1, CAMERA_2, CAMERA_3, CAMERA_4}, {NULL, NULL, NULL, NULL}},
			{{CAMERA_1, CAMERA_2, CAMERA_3, CAMERA_4}, {NULL, NULL, NULL, NULL}},
			{{CAMERA_1, CAMERA_2, CAMERA_3, CAMERA_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_CAMERA_1, AUTO_CAMERA_2, AUTO_CAMERA_3, AUTO_CAMERA_4}, {NULL, NULL, NULL, NULL}},
		},
		// NAVI_APP
		{
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
			{{NULL, NULL, NULL, NULL}, {NULL, NULL, NULL, NULL}},
		},
		// GALLERY_APP
		{
			{{DYNAMIC_GALLERY_1, DYNAMIC_GALLERY_2, DYNAMIC_GALLERY_3, DYNAMIC_GALLERY_4}, {NULL, NULL, NULL, NULL}},
			{{STANDARD_GALLERY_1, STANDARD_GALLERY_2, STANDARD_GALLERY_3, STANDARD_GALLERY_4}, {NULL, NULL, NULL, NULL}},
			{{MOVIE_GALLERY_1, MOVIE_GALLERY_2, MOVIE_GALLERY_3, MOVIE_GALLERY_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_GALLERY_1, AUTO_GALLERY_2, AUTO_GALLERY_3, AUTO_GALLERY_4}, {NULL, NULL, NULL, NULL}},
		},
		// VT_APP
		{
			{{DYNAMIC_VT_1, DYNAMIC_VT_2, DYNAMIC_VT_3, DYNAMIC_VT_4}, {NULL, NULL, NULL, NULL}},
			{{STANDARD_VT_1, STANDARD_VT_2, STANDARD_VT_3, STANDARD_VT_4}, {NULL, NULL, NULL, NULL}},
			{{MOVIE_VT_1, MOVIE_VT_2, MOVIE_VT_3, MOVIE_VT_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_VT_1, AUTO_VT_2, AUTO_VT_3, AUTO_VT_4}, {NULL, NULL, NULL, NULL}},
		},
		// BROWSER_APP
		{
			{{DYNAMIC_BROWSER_1, DYNAMIC_BROWSER_2, DYNAMIC_BROWSER_3, DYNAMIC_BROWSER_4}, {NULL, NULL, NULL, NULL}},
			{{STANDARD_BROWSER_1, STANDARD_BROWSER_2, STANDARD_BROWSER_3, STANDARD_BROWSER_4}, {NULL, NULL, NULL, NULL}},
			{{MOVIE_BROWSER_1, MOVIE_BROWSER_2, MOVIE_BROWSER_3, MOVIE_BROWSER_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_BROWSER_1, AUTO_BROWSER_2, AUTO_BROWSER_3, AUTO_BROWSER_4}, {NULL, NULL, NULL, NULL}},
		},
		// eBOOK_APP
		{
			{{DYNAMIC_UI_1, DYNAMIC_UI_2, DYNAMIC_UI_3, DYNAMIC_UI_4}, {NULL, NULL, NULL, NULL}},
			{{STANDARD_UI_1, STANDARD_UI_2, STANDARD_UI_3, STANDARD_UI_4}, {NULL, NULL, NULL, NULL}},
			{{MOVIE_UI_1, MOVIE_UI_2, MOVIE_UI_3, MOVIE_UI_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_EBOOK_1, AUTO_EBOOK_2, AUTO_EBOOK_3, AUTO_EBOOK_4}, {NULL, NULL, NULL, NULL}},
		},
		// EMAIL_APP
		{
			{{AUTO_EMAIL_1, AUTO_EMAIL_2, AUTO_EMAIL_3, AUTO_EMAIL_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_EMAIL_1, AUTO_EMAIL_2, AUTO_EMAIL_3, AUTO_EMAIL_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_EMAIL_1, AUTO_EMAIL_2, AUTO_EMAIL_3, AUTO_EMAIL_4}, {NULL, NULL, NULL, NULL}},
			{{AUTO_EMAIL_1, AUTO_EMAIL_2, AUTO_EMAIL_3, AUTO_EMAIL_4}, {NULL, NULL, NULL, NULL}},
		},
};
#endif
