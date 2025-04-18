#include <lvgl.h>
/*******************************************************************************
 * Size: 20 px
 * Bpp: 4
 * Opts: --font ttf/FoundryGridnikMedium.ttf --bpp 4 --size 20 --no-compress --format lvgl --r 0x20-0x60 -o 20/FoundryGridnikMedium_20.c
 ******************************************************************************/


#ifndef FOUNDRYGRIDNIKMEDIUM_20
#define FOUNDRYGRIDNIKMEDIUM_20 1
#endif

#if FOUNDRYGRIDNIKMEDIUM_20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x3f, 0x73, 0xf7, 0x3f, 0x73, 0xf7, 0x3f, 0x73,
    0xf7, 0x3f, 0x73, 0xf7, 0x3f, 0x71, 0x94, 0x0,
    0x2, 0x43, 0x7f, 0xb7, 0xfb,

    /* U+0022 "\"" */
    0x3f, 0x70, 0x9f, 0x23, 0xf7, 0x9, 0xf2, 0x3f,
    0x70, 0x9f, 0x23, 0xf7, 0x9, 0xf2, 0x3f, 0x70,
    0x9f, 0x20, 0x10, 0x0, 0x10,

    /* U+0023 "#" */
    0x0, 0x0, 0x6f, 0x20, 0x5f, 0x20, 0x0, 0x0,
    0xae, 0x0, 0x9e, 0x0, 0x0, 0x0, 0xea, 0x0,
    0xda, 0x0, 0x0, 0x2, 0xf6, 0x1, 0xf6, 0x0,
    0x9, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x5, 0x9e,
    0xe9, 0x9d, 0xf9, 0x91, 0x0, 0xe, 0xa0, 0xd,
    0xb0, 0x0, 0x0, 0x2f, 0x60, 0x1f, 0x70, 0x0,
    0x59, 0xbf, 0xa9, 0xaf, 0xb9, 0x20, 0x9f, 0xff,
    0xff, 0xff, 0xff, 0x30, 0x0, 0xea, 0x0, 0xda,
    0x0, 0x0, 0x2, 0xf6, 0x1, 0xf6, 0x0, 0x0,
    0x6, 0xf2, 0x5, 0xf2, 0x0, 0x0, 0xa, 0xe0,
    0x9, 0xe0, 0x0, 0x0,

    /* U+0024 "$" */
    0x0, 0x0, 0xa4, 0x0, 0x0, 0x0, 0x0, 0xb5,
    0x0, 0x0, 0x4, 0xef, 0xff, 0xfb, 0x0, 0x2f,
    0xfb, 0xec, 0xcf, 0xc0, 0x7f, 0x50, 0xb5, 0x9,
    0xd1, 0x7f, 0x30, 0xb5, 0x0, 0x10, 0x7f, 0x30,
    0xb5, 0x0, 0x0, 0x7f, 0x50, 0xb5, 0x0, 0x0,
    0x5f, 0xff, 0xfd, 0xa8, 0x30, 0x6, 0xab, 0xff,
    0xff, 0xe0, 0x0, 0x0, 0xb5, 0xb, 0xf1, 0x0,
    0x0, 0xb5, 0x9, 0xf1, 0x1, 0x0, 0xb5, 0x9,
    0xf1, 0x5f, 0x40, 0xb5, 0xb, 0xf0, 0x3f, 0xfb,
    0xed, 0xcf, 0xb0, 0x4, 0xef, 0xff, 0xfb, 0x0,
    0x0, 0x0, 0xb5, 0x0, 0x0, 0x0, 0x0, 0xb5,
    0x0, 0x0,

    /* U+0025 "%" */
    0x3e, 0xff, 0xd1, 0x0, 0x0, 0x3f, 0x10, 0x0,
    0xbd, 0x55, 0xe8, 0x0, 0x0, 0xb8, 0x0, 0x0,
    0xba, 0x0, 0xc9, 0x0, 0x3, 0xf1, 0x0, 0x0,
    0xba, 0x0, 0xc9, 0x0, 0xb, 0x80, 0x0, 0x0,
    0xba, 0x0, 0xc9, 0x0, 0x3e, 0x0, 0x0, 0x0,
    0xba, 0x0, 0xc9, 0x0, 0xc7, 0x0, 0x11, 0x0,
    0xbb, 0x11, 0xd9, 0x4, 0xe0, 0xc, 0xfe, 0xf6,
    0x5f, 0xff, 0xf3, 0xc, 0x70, 0x5f, 0x0, 0x6e,
    0x2, 0x44, 0x20, 0x4e, 0x0, 0x5f, 0x0, 0x6f,
    0x0, 0x0, 0x0, 0xc7, 0x0, 0x5f, 0x0, 0x6f,
    0x0, 0x0, 0x4, 0xe0, 0x0, 0x5f, 0x0, 0x6f,
    0x0, 0x0, 0xc, 0x60, 0x0, 0x5f, 0x0, 0x6f,
    0x0, 0x0, 0x5e, 0x0, 0x0, 0x5f, 0x65, 0xae,
    0x0, 0x0, 0xd6, 0x0, 0x0, 0xb, 0xff, 0xf5,

    /* U+0026 "&" */
    0x0, 0x3e, 0xc2, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xfd, 0x10, 0x0, 0x0, 0xe, 0xf2, 0x5f, 0xb0,
    0x0, 0x0, 0x1f, 0xd1, 0x2f, 0xd0, 0x0, 0x0,
    0x8, 0xfc, 0xef, 0x50, 0x0, 0x0, 0x0, 0x9f,
    0xf6, 0x0, 0x0, 0x0, 0x1, 0xdf, 0xfb, 0x0,
    0x0, 0x0, 0x1d, 0xf7, 0xaf, 0xb0, 0x0, 0x0,
    0x6f, 0x80, 0xb, 0xfa, 0x3, 0xb0, 0x7f, 0x30,
    0x0, 0xbf, 0xbe, 0xf3, 0x7f, 0x30, 0x0, 0xc,
    0xff, 0x50, 0x7f, 0x50, 0x0, 0x1d, 0xff, 0x80,
    0x2f, 0xfb, 0xbb, 0xef, 0x7c, 0xf7, 0x4, 0xef,
    0xff, 0xf7, 0x1, 0xb2,

    /* U+0027 "'" */
    0x3f, 0x73, 0xf7, 0x3f, 0x73, 0xf7, 0x3f, 0x70,
    0x10,

    /* U+0028 "(" */
    0x0, 0x0, 0x10, 0x0, 0x4, 0xe3, 0x0, 0x3f,
    0xe3, 0x3, 0xff, 0x30, 0x2e, 0xf4, 0x0, 0xaf,
    0x40, 0x0, 0xbe, 0x0, 0x0, 0xbe, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0xbe, 0x0, 0x0, 0xbe, 0x0,
    0x0, 0xbe, 0x0, 0x0, 0xbe, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0xbe, 0x0, 0x0, 0xbe, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0xbf, 0x20, 0x0, 0x4f, 0xe2,
    0x0, 0x5, 0xfe, 0x20, 0x0, 0x5f, 0xd1, 0x0,
    0x6, 0xf5, 0x0, 0x0, 0x20,

    /* U+0029 ")" */
    0x1, 0x0, 0x0, 0x6e, 0x20, 0x0, 0x5f, 0xd1,
    0x0, 0x6, 0xfd, 0x10, 0x0, 0x6f, 0xd1, 0x0,
    0x7, 0xf7, 0x0, 0x2, 0xf8, 0x0, 0x2, 0xf8,
    0x0, 0x2, 0xf8, 0x0, 0x2, 0xf8, 0x0, 0x2,
    0xf8, 0x0, 0x2, 0xf8, 0x0, 0x2, 0xf8, 0x0,
    0x2, 0xf8, 0x0, 0x2, 0xf8, 0x0, 0x2, 0xf8,
    0x0, 0x2, 0xf8, 0x0, 0x6, 0xf7, 0x0, 0x4f,
    0xe1, 0x4, 0xfe, 0x20, 0x3f, 0xe3, 0x0, 0x8f,
    0x30, 0x0, 0x2, 0x0, 0x0,

    /* U+002A "*" */
    0x0, 0x0, 0x3f, 0x30, 0x0, 0x0, 0x0, 0x3,
    0xf3, 0x0, 0x0, 0x2, 0x0, 0x3f, 0x30, 0x2,
    0x0, 0xfe, 0x97, 0xf7, 0x9e, 0xf0, 0x5, 0xbf,
    0xff, 0xff, 0xb5, 0x0, 0x0, 0x1e, 0xfe, 0x10,
    0x0, 0x0, 0x8, 0xf9, 0xf8, 0x0, 0x0, 0x3,
    0xf9, 0x9, 0xf3, 0x0, 0x0, 0x7d, 0x0, 0xd,
    0x70, 0x0, 0x0, 0x10, 0x0, 0x10, 0x0,

    /* U+002B "+" */
    0x0, 0x0, 0xf, 0x90, 0x0, 0x0, 0x0, 0x0,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0xf, 0x90, 0x0,
    0x0, 0x0, 0x0, 0xf9, 0x0, 0x0, 0x9, 0x99,
    0x9f, 0xd9, 0x99, 0x50, 0xff, 0xff, 0xff, 0xff,
    0xfa, 0x0, 0x0, 0xf, 0x90, 0x0, 0x0, 0x0,
    0x0, 0xf9, 0x0, 0x0, 0x0, 0x0, 0xf, 0x90,
    0x0, 0x0, 0x0, 0x0, 0xf9, 0x0, 0x0,

    /* U+002C "," */
    0x3f, 0x83, 0xf8, 0x3f, 0x86, 0xf7, 0xae, 0x20,
    0x20,

    /* U+002D "-" */
    0x39, 0x99, 0x99, 0x56, 0xff, 0xff, 0xfa,

    /* U+002E "." */
    0x24, 0x37, 0xfb, 0x7f, 0xb0,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0x80, 0x0, 0x0, 0x0, 0xa, 0xf1,
    0x0, 0x0, 0x0, 0x1, 0xf9, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0x20, 0x0, 0x0, 0x0, 0xf, 0xa0,
    0x0, 0x0, 0x0, 0x7, 0xf3, 0x0, 0x0, 0x0,
    0x0, 0xec, 0x0, 0x0, 0x0, 0x0, 0x6f, 0x40,
    0x0, 0x0, 0x0, 0xd, 0xd0, 0x0, 0x0, 0x0,
    0x4, 0xf6, 0x0, 0x0, 0x0, 0x0, 0xbe, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0x70, 0x0, 0x0, 0x0,
    0xa, 0xf1, 0x0, 0x0, 0x0, 0x2, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0x10, 0x0, 0x0, 0x0,
    0x1f, 0xa0, 0x0, 0x0, 0x0, 0x7, 0xf2, 0x0,
    0x0, 0x0, 0x0,

    /* U+0030 "0" */
    0x4, 0xef, 0xff, 0xfb, 0x0, 0x2f, 0xfb, 0xbb,
    0xcf, 0xb0, 0x7f, 0x50, 0x0, 0xb, 0xf1, 0x7f,
    0x30, 0x0, 0x9, 0xf1, 0x7f, 0x30, 0x0, 0x9,
    0xf1, 0x7f, 0x30, 0x0, 0x9, 0xf1, 0x7f, 0x30,
    0x0, 0x9, 0xf1, 0x7f, 0x30, 0x0, 0x9, 0xf1,
    0x7f, 0x30, 0x0, 0x9, 0xf1, 0x7f, 0x30, 0x0,
    0x9, 0xf1, 0x7f, 0x30, 0x0, 0x9, 0xf1, 0x7f,
    0x50, 0x0, 0xb, 0xf0, 0x2f, 0xfb, 0xbb, 0xcf,
    0xb0, 0x4, 0xef, 0xff, 0xfb, 0x0,

    /* U+0031 "1" */
    0x0, 0x6f, 0xf4, 0x0, 0x0, 0x5f, 0xff, 0x40,
    0x0, 0x5f, 0xe8, 0xf4, 0x0, 0x8, 0xf3, 0x6f,
    0x40, 0x0, 0x2, 0x6, 0xf4, 0x0, 0x0, 0x0,
    0x6f, 0x40, 0x0, 0x0, 0x6, 0xf4, 0x0, 0x0,
    0x0, 0x6f, 0x40, 0x0, 0x0, 0x6, 0xf4, 0x0,
    0x0, 0x0, 0x6f, 0x40, 0x0, 0x0, 0x6, 0xf4,
    0x0, 0x0, 0x0, 0x6f, 0x40, 0x0, 0x7b, 0xbd,
    0xfc, 0xbb, 0x4a, 0xff, 0xff, 0xff, 0xf5,

    /* U+0032 "2" */
    0x4, 0xef, 0xff, 0xfb, 0x0, 0x3f, 0xfb, 0xbb,
    0xcf, 0xb0, 0x5f, 0x40, 0x0, 0xb, 0xf1, 0x1,
    0x0, 0x0, 0x9, 0xf1, 0x0, 0x0, 0x0, 0x9,
    0xf1, 0x0, 0x0, 0x0, 0x1c, 0xf0, 0x0, 0x0,
    0x29, 0xff, 0xb0, 0x0, 0x3a, 0xff, 0xc5, 0x0,
    0xa, 0xff, 0xc4, 0x0, 0x0, 0x6f, 0xc3, 0x0,
    0x0, 0x0, 0x7f, 0x30, 0x0, 0x0, 0x0, 0x7f,
    0x30, 0x0, 0x0, 0x0, 0x7f, 0xcb, 0xbb, 0xbb,
    0xb0, 0x7f, 0xff, 0xff, 0xff, 0xf1,

    /* U+0033 "3" */
    0x4, 0xef, 0xff, 0xfb, 0x0, 0x3f, 0xfb, 0xbb,
    0xcf, 0xb0, 0x5f, 0x40, 0x0, 0xb, 0xf0, 0x1,
    0x0, 0x0, 0x9, 0xf1, 0x0, 0x0, 0x0, 0x9,
    0xf1, 0x0, 0x0, 0x0, 0xd, 0xf0, 0x0, 0x7,
    0xbb, 0xdf, 0x80, 0x0, 0xa, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x2e, 0xf0, 0x0, 0x0, 0x0,
    0x9, 0xf1, 0x1, 0x0, 0x0, 0x9, 0xf1, 0x4f,
    0x30, 0x0, 0xb, 0xf1, 0x3f, 0xfb, 0xbb, 0xcf,
    0xb0, 0x4, 0xef, 0xff, 0xfb, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x1f, 0xfe, 0x0, 0x0, 0x0, 0x9f,
    0xfe, 0x0, 0x0, 0x2, 0xfb, 0xce, 0x0, 0x0,
    0xb, 0xf2, 0xce, 0x0, 0x0, 0x4f, 0x90, 0xce,
    0x0, 0x0, 0xde, 0x10, 0xce, 0x0, 0x7, 0xf6,
    0x0, 0xce, 0x0, 0x1f, 0xd0, 0x0, 0xce, 0x0,
    0x9f, 0x40, 0x0, 0xce, 0x0, 0xef, 0xff, 0xff,
    0xff, 0xf8, 0xab, 0xbb, 0xbb, 0xff, 0xb5, 0x0,
    0x0, 0x0, 0xce, 0x0, 0x0, 0x0, 0x0, 0xce,
    0x0, 0x0, 0x0, 0x0, 0xce, 0x0,

    /* U+0035 "5" */
    0xe, 0xff, 0xff, 0xff, 0x80, 0xe, 0xeb, 0xbb,
    0xbb, 0x50, 0xe, 0xc0, 0x0, 0x0, 0x0, 0xe,
    0xc0, 0x0, 0x0, 0x0, 0xe, 0xc0, 0x0, 0x0,
    0x0, 0xe, 0xfb, 0xbb, 0xb7, 0x0, 0xe, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x1d, 0xf0,
    0x0, 0x0, 0x0, 0x9, 0xf1, 0x0, 0x0, 0x0,
    0x9, 0xf1, 0x1, 0x0, 0x0, 0x9, 0xf1, 0x5f,
    0x40, 0x0, 0xb, 0xf0, 0x3f, 0xfb, 0xbb, 0xcf,
    0xb0, 0x4, 0xef, 0xff, 0xfb, 0x0,

    /* U+0036 "6" */
    0x4, 0xef, 0xff, 0xfb, 0x0, 0x2f, 0xfb, 0xbb,
    0xcf, 0xc0, 0x7f, 0x50, 0x0, 0xa, 0xd1, 0x7f,
    0x30, 0x0, 0x0, 0x10, 0x7f, 0x30, 0x0, 0x0,
    0x0, 0x7f, 0x37, 0xbb, 0xb7, 0x0, 0x7f, 0xbf,
    0xff, 0xff, 0x80, 0x7f, 0xfa, 0x0, 0x1d, 0xf0,
    0x7f, 0xa0, 0x0, 0x9, 0xf1, 0x7f, 0x30, 0x0,
    0x9, 0xf1, 0x7f, 0x30, 0x0, 0x9, 0xf1, 0x7f,
    0x50, 0x0, 0xb, 0xf1, 0x2f, 0xfb, 0xbb, 0xcf,
    0xb0, 0x4, 0xef, 0xff, 0xfb, 0x0,

    /* U+0037 "7" */
    0x7f, 0xff, 0xff, 0xff, 0xf1, 0x5b, 0xbb, 0xbb,
    0xbf, 0xf0, 0x0, 0x0, 0x0, 0x2f, 0xb0, 0x0,
    0x0, 0x0, 0xaf, 0x40, 0x0, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0x0, 0x8, 0xf5, 0x0, 0x0, 0x0,
    0x1f, 0xd0, 0x0, 0x0, 0x0, 0x7f, 0x60, 0x0,
    0x0, 0x0, 0xee, 0x0, 0x0, 0x0, 0x6, 0xf8,
    0x0, 0x0, 0x0, 0xd, 0xf1, 0x0, 0x0, 0x0,
    0x5f, 0x90, 0x0, 0x0, 0x0, 0xcf, 0x20, 0x0,
    0x0, 0x4, 0xfa, 0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x4, 0xef, 0xff, 0xfb, 0x0, 0x2f, 0xfb, 0xbb,
    0xcf, 0xb0, 0x6f, 0x50, 0x0, 0xb, 0xf0, 0x7f,
    0x30, 0x0, 0x9, 0xf1, 0x7f, 0x30, 0x0, 0x9,
    0xf1, 0x6f, 0x70, 0x0, 0xd, 0xf0, 0xd, 0xfb,
    0xbb, 0xdf, 0x80, 0xb, 0xff, 0xff, 0xff, 0x40,
    0x5f, 0xa0, 0x0, 0x2e, 0xf0, 0x7f, 0x30, 0x0,
    0x9, 0xf1, 0x7f, 0x30, 0x0, 0x9, 0xf1, 0x7f,
    0x50, 0x0, 0xb, 0xf1, 0x2f, 0xfb, 0xbb, 0xcf,
    0xb0, 0x4, 0xef, 0xff, 0xfb, 0x0,

    /* U+0039 "9" */
    0x4, 0xef, 0xff, 0xfb, 0x0, 0x2f, 0xfb, 0xbb,
    0xcf, 0xb0, 0x6f, 0x50, 0x0, 0xb, 0xf1, 0x7f,
    0x30, 0x0, 0x9, 0xf1, 0x7f, 0x30, 0x0, 0x9,
    0xf1, 0x7f, 0x30, 0x0, 0xd, 0xf1, 0x6f, 0x50,
    0x0, 0xbf, 0xf1, 0x2f, 0xfb, 0xbd, 0xfe, 0xf1,
    0x4, 0xef, 0xff, 0x79, 0xf1, 0x0, 0x0, 0x0,
    0x9, 0xf1, 0x0, 0x0, 0x0, 0x9, 0xf1, 0x4e,
    0x30, 0x0, 0xb, 0xf0, 0x4f, 0xfb, 0xbb, 0xcf,
    0xb0, 0x4, 0xef, 0xff, 0xfb, 0x0,

    /* U+003A ":" */
    0x7f, 0xb7, 0xfb, 0x24, 0x30, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0x43, 0x7f, 0xb7, 0xfb,

    /* U+003B ";" */
    0x7f, 0xb7, 0xfb, 0x24, 0x30, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x31, 0x3f, 0x83, 0xf8, 0x3f,
    0x89, 0xf7, 0x7d, 0x0, 0x0,

    /* U+003C "<" */
    0x0, 0x0, 0xa, 0x20, 0x0, 0xb, 0xf6, 0x0,
    0xa, 0xf7, 0x0, 0x9, 0xf8, 0x0, 0x9, 0xf8,
    0x0, 0x0, 0xaf, 0x70, 0x0, 0x0, 0xaf, 0x70,
    0x0, 0x0, 0xbf, 0x60, 0x0, 0x0, 0xbf, 0x50,
    0x0, 0x0, 0xb3,

    /* U+003D "=" */
    0x9, 0x99, 0x99, 0x99, 0x99, 0x50, 0xff, 0xff,
    0xff, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9, 0x99,
    0x99, 0x99, 0x99, 0x60, 0xff, 0xff, 0xff, 0xff,
    0xfa,

    /* U+003E ">" */
    0x7, 0x60, 0x0, 0x0, 0xcf, 0x50, 0x0, 0x0,
    0xcf, 0x40, 0x0, 0x1, 0xdf, 0x40, 0x0, 0x1,
    0xdf, 0x30, 0x0, 0xc, 0xf4, 0x0, 0xc, 0xf5,
    0x0, 0xb, 0xf5, 0x0, 0xb, 0xf6, 0x0, 0x0,
    0x86, 0x0, 0x0,

    /* U+003F "?" */
    0x0, 0x9f, 0xff, 0xe4, 0x0, 0x9f, 0xdb, 0xbf,
    0xf2, 0x8, 0xb0, 0x0, 0x5f, 0x70, 0x0, 0x0,
    0x3, 0xf7, 0x0, 0x0, 0x0, 0x4f, 0x70, 0x0,
    0x0, 0x1d, 0xf3, 0x0, 0x0, 0x1d, 0xf7, 0x0,
    0x0, 0xc, 0xf8, 0x0, 0x0, 0x3, 0xfa, 0x0,
    0x0, 0x0, 0x3f, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x24, 0x30, 0x0, 0x0, 0x8,
    0xfb, 0x0, 0x0, 0x0, 0x8f, 0xb0, 0x0,

    /* U+0040 "@" */
    0x0, 0x7f, 0xff, 0xff, 0xff, 0xfa, 0x0, 0x6,
    0xfb, 0x99, 0x99, 0x99, 0xaf, 0x90, 0x3f, 0xb0,
    0x0, 0x0, 0x0, 0x8, 0xf6, 0x7f, 0x10, 0x0,
    0x0, 0x0, 0x0, 0xcb, 0x7f, 0x0, 0x1c, 0xfe,
    0x5e, 0x90, 0xbb, 0x7f, 0x0, 0xcd, 0x6a, 0xff,
    0x40, 0xbb, 0x7f, 0x1, 0xf5, 0x0, 0xaf, 0x30,
    0xbb, 0x7f, 0x1, 0xf5, 0x0, 0x4f, 0x30, 0xbb,
    0x7f, 0x1, 0xf5, 0x0, 0x4f, 0x30, 0xbb, 0x7f,
    0x1, 0xf5, 0x0, 0x7f, 0x30, 0xbb, 0x7f, 0x0,
    0xeb, 0x15, 0xff, 0xc6, 0xf6, 0x7f, 0x0, 0x4f,
    0xff, 0x94, 0xff, 0x90, 0x6f, 0x40, 0x2, 0x43,
    0x0, 0x24, 0x0, 0x1d, 0xf3, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xef, 0xff, 0xff, 0xff, 0xff,
    0x40, 0x0, 0x28, 0x99, 0x99, 0x99, 0x99, 0x20,

    /* U+0041 "A" */
    0x0, 0x0, 0xf, 0xff, 0x10, 0x0, 0x0, 0x0,
    0x4, 0xfc, 0xf7, 0x0, 0x0, 0x0, 0x0, 0xaf,
    0x2f, 0xc0, 0x0, 0x0, 0x0, 0xf, 0xc0, 0xaf,
    0x20, 0x0, 0x0, 0x5, 0xf6, 0x4, 0xf7, 0x0,
    0x0, 0x0, 0xaf, 0x10, 0xe, 0xd0, 0x0, 0x0,
    0xf, 0xb0, 0x0, 0x9f, 0x20, 0x0, 0x5, 0xf5,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0xbf, 0xdc, 0xcc,
    0xcf, 0xd0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0x30, 0x6, 0xf5, 0x0, 0x0, 0x4, 0xf8, 0x0,
    0xbf, 0x10, 0x0, 0x0, 0xe, 0xd0, 0x1f, 0xb0,
    0x0, 0x0, 0x0, 0x9f, 0x36, 0xf6, 0x0, 0x0,
    0x0, 0x4, 0xf9,

    /* U+0042 "B" */
    0x3f, 0xff, 0xff, 0xff, 0xe3, 0x3, 0xfe, 0xdd,
    0xdd, 0xdf, 0xe2, 0x3f, 0xa0, 0x0, 0x0, 0x9f,
    0x93, 0xfa, 0x0, 0x0, 0x3, 0xfa, 0x3f, 0xa0,
    0x0, 0x0, 0x4f, 0x93, 0xfa, 0x0, 0x0, 0x1e,
    0xf6, 0x3f, 0xed, 0xdd, 0xde, 0xf8, 0x3, 0xff,
    0xff, 0xff, 0xff, 0x70, 0x3f, 0xa0, 0x0, 0x3,
    0xff, 0x53, 0xfa, 0x0, 0x0, 0x4, 0xf9, 0x3f,
    0xa0, 0x0, 0x0, 0x3f, 0xa3, 0xfa, 0x0, 0x0,
    0x9, 0xf9, 0x3f, 0xfd, 0xdd, 0xdd, 0xff, 0x23,
    0xff, 0xff, 0xff, 0xfe, 0x30,

    /* U+0043 "C" */
    0x0, 0x7f, 0xff, 0xff, 0xd2, 0x0, 0x6, 0xff,
    0xdd, 0xdd, 0xfe, 0x10, 0x3f, 0xe2, 0x0, 0x0,
    0x8f, 0xc0, 0x7f, 0x60, 0x0, 0x0, 0x8, 0x30,
    0x7f, 0x50, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x50,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x50, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0x50, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0x50, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x50,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x60, 0x0, 0x0,
    0x8, 0x30, 0x3f, 0xe3, 0x0, 0x0, 0x8f, 0xc0,
    0x6, 0xff, 0xdd, 0xdd, 0xfe, 0x10, 0x0, 0x7f,
    0xff, 0xff, 0xd2, 0x0,

    /* U+0044 "D" */
    0x3f, 0xff, 0xff, 0xff, 0x90, 0x3, 0xfe, 0xdd,
    0xdd, 0xef, 0x90, 0x3f, 0xa0, 0x0, 0x1, 0xdf,
    0x63, 0xfa, 0x0, 0x0, 0x4, 0xf9, 0x3f, 0xa0,
    0x0, 0x0, 0x3f, 0xa3, 0xfa, 0x0, 0x0, 0x3,
    0xfa, 0x3f, 0xa0, 0x0, 0x0, 0x3f, 0xa3, 0xfa,
    0x0, 0x0, 0x3, 0xfa, 0x3f, 0xa0, 0x0, 0x0,
    0x3f, 0xa3, 0xfa, 0x0, 0x0, 0x3, 0xfa, 0x3f,
    0xa0, 0x0, 0x0, 0x3f, 0x93, 0xfa, 0x0, 0x0,
    0x1d, 0xf6, 0x3f, 0xfd, 0xdd, 0xde, 0xf9, 0x3,
    0xff, 0xff, 0xff, 0xf9, 0x0,

    /* U+0045 "E" */
    0x3f, 0xff, 0xff, 0xff, 0xf5, 0x3f, 0xed, 0xdd,
    0xdd, 0xd4, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f,
    0xa0, 0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0,
    0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f, 0xed,
    0xdd, 0xdd, 0xd4, 0x3f, 0xff, 0xff, 0xff, 0xf5,
    0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0,
    0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f,
    0xa0, 0x0, 0x0, 0x0, 0x3f, 0xfd, 0xdd, 0xdd,
    0xd4, 0x3f, 0xff, 0xff, 0xff, 0xf5,

    /* U+0046 "F" */
    0x3f, 0xff, 0xff, 0xff, 0xf5, 0x3f, 0xed, 0xdd,
    0xdd, 0xd4, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f,
    0xa0, 0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0,
    0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f, 0xed,
    0xdd, 0xdd, 0xd4, 0x3f, 0xff, 0xff, 0xff, 0xf5,
    0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0,
    0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f,
    0xa0, 0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0,
    0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x7f, 0xff, 0xff, 0xe3, 0x0, 0x6, 0xff,
    0xdd, 0xdd, 0xff, 0x30, 0x3f, 0xe2, 0x0, 0x0,
    0x6f, 0xe0, 0x7f, 0x60, 0x0, 0x0, 0x7, 0x50,
    0x7f, 0x50, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x50,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x50, 0x0, 0xcc,
    0xcc, 0xc2, 0x7f, 0x50, 0x0, 0xff, 0xff, 0xf3,
    0x7f, 0x50, 0x0, 0x0, 0x9, 0xf3, 0x7f, 0x50,
    0x0, 0x0, 0xa, 0xf3, 0x7f, 0x60, 0x0, 0x0,
    0x6f, 0xf3, 0x3f, 0xe2, 0x0, 0x5, 0xff, 0xf3,
    0x6, 0xff, 0xdd, 0xdf, 0xd8, 0xf5, 0x0, 0x7f,
    0xff, 0xfd, 0x13, 0xf8,

    /* U+0048 "H" */
    0x3f, 0xa0, 0x0, 0x0, 0x3f, 0xa3, 0xfa, 0x0,
    0x0, 0x3, 0xfa, 0x3f, 0xa0, 0x0, 0x0, 0x3f,
    0xa3, 0xfa, 0x0, 0x0, 0x3, 0xfa, 0x3f, 0xa0,
    0x0, 0x0, 0x3f, 0xa3, 0xfa, 0x0, 0x0, 0x3,
    0xfa, 0x3f, 0xed, 0xdd, 0xdd, 0xdf, 0xa3, 0xff,
    0xff, 0xff, 0xff, 0xfa, 0x3f, 0xa0, 0x0, 0x0,
    0x3f, 0xa3, 0xfa, 0x0, 0x0, 0x3, 0xfa, 0x3f,
    0xa0, 0x0, 0x0, 0x3f, 0xa3, 0xfa, 0x0, 0x0,
    0x3, 0xfa, 0x3f, 0xa0, 0x0, 0x0, 0x3f, 0xa3,
    0xfa, 0x0, 0x0, 0x3, 0xfa,

    /* U+0049 "I" */
    0x7f, 0xff, 0xff, 0xf6, 0x4b, 0xbf, 0xfb, 0xb4,
    0x0, 0xe, 0xe0, 0x0, 0x0, 0xe, 0xe0, 0x0,
    0x0, 0xe, 0xe0, 0x0, 0x0, 0xe, 0xe0, 0x0,
    0x0, 0xe, 0xe0, 0x0, 0x0, 0xe, 0xe0, 0x0,
    0x0, 0xe, 0xe0, 0x0, 0x0, 0xe, 0xe0, 0x0,
    0x0, 0xe, 0xe0, 0x0, 0x0, 0xe, 0xe0, 0x0,
    0x5b, 0xbf, 0xfb, 0xb4, 0x7f, 0xff, 0xff, 0xf6,

    /* U+004A "J" */
    0x0, 0xc, 0xff, 0xff, 0xf0, 0x0, 0xad, 0xdd,
    0xff, 0x0, 0x0, 0x0, 0xd, 0xf0, 0x0, 0x0,
    0x0, 0xdf, 0x0, 0x0, 0x0, 0xd, 0xf0, 0x0,
    0x0, 0x0, 0xdf, 0x0, 0x0, 0x0, 0xd, 0xf0,
    0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0, 0xd,
    0xf0, 0x0, 0x0, 0x0, 0xdf, 0x9, 0x10, 0x0,
    0xd, 0xf5, 0xfd, 0x10, 0x9, 0xfb, 0x8, 0xfe,
    0xdd, 0xfd, 0x10, 0x8, 0xff, 0xfc, 0x10,

    /* U+004B "K" */
    0x3f, 0xa0, 0x0, 0x6, 0xfd, 0x13, 0xfa, 0x0,
    0x4, 0xfe, 0x10, 0x3f, 0xa0, 0x3, 0xfe, 0x20,
    0x3, 0xfa, 0x2, 0xef, 0x30, 0x0, 0x3f, 0xa1,
    0xdf, 0x50, 0x0, 0x3, 0xfa, 0xcf, 0x60, 0x0,
    0x0, 0x3f, 0xff, 0x80, 0x0, 0x0, 0x3, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x3f, 0xac, 0xf7, 0x0,
    0x0, 0x3, 0xfa, 0x1e, 0xf5, 0x0, 0x0, 0x3f,
    0xa0, 0x2f, 0xf4, 0x0, 0x3, 0xfa, 0x0, 0x4f,
    0xf2, 0x0, 0x3f, 0xa0, 0x0, 0x5f, 0xe1, 0x3,
    0xfa, 0x0, 0x0, 0x7f, 0xd1,

    /* U+004C "L" */
    0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0,
    0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f,
    0xa0, 0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0,
    0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f, 0xa0,
    0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0,
    0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f, 0xa0, 0x0,
    0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3f,
    0xa0, 0x0, 0x0, 0x0, 0x3f, 0xfd, 0xdd, 0xdd,
    0xd4, 0x3f, 0xff, 0xff, 0xff, 0xf5,

    /* U+004D "M" */
    0x3f, 0xff, 0x20, 0x0, 0x0, 0x8f, 0xfd, 0x3f,
    0xef, 0x70, 0x0, 0x0, 0xcf, 0xfd, 0x3f, 0xaf,
    0xb0, 0x0, 0x1, 0xfa, 0xfd, 0x3f, 0x9b, 0xf0,
    0x0, 0x5, 0xf6, 0xfd, 0x3f, 0x97, 0xf4, 0x0,
    0x9, 0xf1, 0xfd, 0x3f, 0x92, 0xf9, 0x0, 0xe,
    0xd0, 0xfd, 0x3f, 0x90, 0xed, 0x0, 0x2f, 0x80,
    0xfd, 0x3f, 0x90, 0x9f, 0x20, 0x7f, 0x40, 0xfd,
    0x3f, 0x90, 0x4f, 0x70, 0xbf, 0x0, 0xfd, 0x3f,
    0x90, 0xf, 0xb0, 0xfa, 0x0, 0xfd, 0x3f, 0x90,
    0xb, 0xf5, 0xf6, 0x0, 0xfd, 0x3f, 0x90, 0x7,
    0xfd, 0xf1, 0x0, 0xfd, 0x3f, 0x90, 0x2, 0xff,
    0xd0, 0x0, 0xfd, 0x3f, 0x90, 0x0, 0xef, 0x80,
    0x0, 0xfd,

    /* U+004E "N" */
    0x3f, 0xfc, 0x0, 0x0, 0x2f, 0xa3, 0xff, 0xf3,
    0x0, 0x2, 0xfa, 0x3f, 0xcf, 0xa0, 0x0, 0x2f,
    0xa3, 0xf9, 0xcf, 0x20, 0x2, 0xfa, 0x3f, 0x95,
    0xf9, 0x0, 0x2f, 0xa3, 0xf9, 0xd, 0xf1, 0x2,
    0xfa, 0x3f, 0x90, 0x6f, 0x70, 0x2f, 0xa3, 0xf9,
    0x0, 0xee, 0x2, 0xfa, 0x3f, 0x90, 0x8, 0xf5,
    0x2f, 0xa3, 0xf9, 0x0, 0x1f, 0xc2, 0xfa, 0x3f,
    0x90, 0x0, 0xaf, 0x6f, 0xa3, 0xf9, 0x0, 0x3,
    0xfd, 0xfa, 0x3f, 0x90, 0x0, 0xc, 0xff, 0xa3,
    0xf9, 0x0, 0x0, 0x5f, 0xfa,

    /* U+004F "O" */
    0x0, 0x7f, 0xff, 0xff, 0xf7, 0x0, 0x6, 0xff,
    0xdd, 0xdd, 0xff, 0x60, 0x3f, 0xe2, 0x0, 0x0,
    0x3f, 0xf3, 0x7f, 0x60, 0x0, 0x0, 0x6, 0xf7,
    0x7f, 0x50, 0x0, 0x0, 0x5, 0xf7, 0x7f, 0x50,
    0x0, 0x0, 0x5, 0xf7, 0x7f, 0x50, 0x0, 0x0,
    0x5, 0xf7, 0x7f, 0x50, 0x0, 0x0, 0x5, 0xf7,
    0x7f, 0x50, 0x0, 0x0, 0x5, 0xf7, 0x7f, 0x50,
    0x0, 0x0, 0x5, 0xf7, 0x7f, 0x60, 0x0, 0x0,
    0x6, 0xf7, 0x3f, 0xe3, 0x0, 0x0, 0x3e, 0xf3,
    0x6, 0xff, 0xdd, 0xdd, 0xff, 0x60, 0x0, 0x7f,
    0xff, 0xff, 0xf6, 0x0,

    /* U+0050 "P" */
    0x3f, 0xff, 0xff, 0xff, 0xe3, 0x3, 0xfe, 0xdd,
    0xdd, 0xdf, 0xf2, 0x3f, 0xa0, 0x0, 0x0, 0x8f,
    0x93, 0xfa, 0x0, 0x0, 0x3, 0xfa, 0x3f, 0xa0,
    0x0, 0x0, 0x3f, 0xa3, 0xfa, 0x0, 0x0, 0x8,
    0xf9, 0x3f, 0xed, 0xdd, 0xdd, 0xff, 0x23, 0xff,
    0xff, 0xff, 0xfe, 0x30, 0x3f, 0xa0, 0x0, 0x0,
    0x0, 0x3, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xa0, 0x0, 0x0, 0x0, 0x3, 0xfa, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0x3,
    0xfa, 0x0, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x7f, 0xff, 0xff, 0xf7, 0x0, 0x6, 0xff,
    0xdd, 0xdd, 0xff, 0x60, 0x3f, 0xe2, 0x0, 0x0,
    0x3e, 0xf3, 0x7f, 0x60, 0x0, 0x0, 0x6, 0xf7,
    0x7f, 0x50, 0x0, 0x0, 0x5, 0xf7, 0x7f, 0x50,
    0x0, 0x0, 0x5, 0xf7, 0x7f, 0x50, 0x0, 0x0,
    0x5, 0xf7, 0x7f, 0x50, 0x0, 0x0, 0x5, 0xf7,
    0x7f, 0x50, 0x0, 0x0, 0x5, 0xf7, 0x7f, 0x50,
    0x0, 0x0, 0x5, 0xf7, 0x7f, 0x60, 0x5, 0x70,
    0x6, 0xf7, 0x3f, 0xe2, 0xb, 0xf1, 0x2e, 0xf3,
    0x6, 0xff, 0xde, 0xfd, 0xff, 0x60, 0x0, 0x7f,
    0xff, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x8f,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0x60, 0x0,

    /* U+0052 "R" */
    0x3f, 0xff, 0xff, 0xff, 0xd2, 0x0, 0x3f, 0xed,
    0xdd, 0xdd, 0xfe, 0x20, 0x3f, 0xa0, 0x0, 0x0,
    0x8f, 0x90, 0x3f, 0xa0, 0x0, 0x0, 0x3f, 0xa0,
    0x3f, 0xa0, 0x0, 0x0, 0x3f, 0xa0, 0x3f, 0xa0,
    0x0, 0x0, 0x7f, 0x90, 0x3f, 0xed, 0xdd, 0xdd,
    0xfe, 0x20, 0x3f, 0xff, 0xff, 0xff, 0xd2, 0x0,
    0x3f, 0xa0, 0x1, 0xef, 0x20, 0x0, 0x3f, 0xa0,
    0x0, 0x5f, 0xb0, 0x0, 0x3f, 0xa0, 0x0, 0xb,
    0xf5, 0x0, 0x3f, 0xa0, 0x0, 0x1, 0xfe, 0x10,
    0x3f, 0xa0, 0x0, 0x0, 0x7f, 0x90, 0x3f, 0xa0,
    0x0, 0x0, 0xc, 0xf4,

    /* U+0053 "S" */
    0x0, 0x8f, 0xff, 0xff, 0xb1, 0x0, 0x8f, 0xed,
    0xdd, 0xef, 0xc0, 0x5f, 0xd1, 0x0, 0x0, 0xaf,
    0xa9, 0xf4, 0x0, 0x0, 0x0, 0x91, 0x9f, 0x30,
    0x0, 0x0, 0x0, 0x9, 0xf8, 0x31, 0x0, 0x0,
    0x0, 0x6f, 0xff, 0xff, 0xca, 0x85, 0x0, 0x58,
    0xac, 0xef, 0xff, 0xf9, 0x0, 0x0, 0x0, 0x2,
    0x6f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xfc, 0x29,
    0x0, 0x0, 0x0, 0x1f, 0xca, 0xfa, 0x0, 0x0,
    0xc, 0xf8, 0x1c, 0xfe, 0xdd, 0xde, 0xfb, 0x0,
    0x1c, 0xff, 0xff, 0xfa, 0x0,

    /* U+0054 "T" */
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xbd, 0xdd, 0xff,
    0xdd, 0xdc, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,
    0x0, 0xdf, 0x0, 0x0, 0x0, 0x0, 0xdf, 0x0,
    0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0, 0x0,
    0xdf, 0x0, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0,
    0x0, 0x0, 0xdf, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0x0, 0x0, 0x0, 0x0, 0xdf, 0x0, 0x0, 0x0,
    0x0, 0xdf, 0x0, 0x0, 0x0, 0x0, 0xdf, 0x0,
    0x0, 0x0, 0x0, 0xdf, 0x0, 0x0,

    /* U+0055 "U" */
    0x5f, 0x70, 0x0, 0x0, 0x5f, 0x75, 0xf7, 0x0,
    0x0, 0x5, 0xf7, 0x5f, 0x70, 0x0, 0x0, 0x5f,
    0x75, 0xf7, 0x0, 0x0, 0x5, 0xf7, 0x5f, 0x70,
    0x0, 0x0, 0x5f, 0x75, 0xf7, 0x0, 0x0, 0x5,
    0xf7, 0x5f, 0x70, 0x0, 0x0, 0x5f, 0x75, 0xf7,
    0x0, 0x0, 0x5, 0xf7, 0x5f, 0x70, 0x0, 0x0,
    0x5f, 0x75, 0xf7, 0x0, 0x0, 0x5, 0xf7, 0x4f,
    0x80, 0x0, 0x0, 0x6f, 0x71, 0xff, 0x40, 0x0,
    0x2e, 0xf4, 0x4, 0xff, 0xdd, 0xdf, 0xf6, 0x0,
    0x5, 0xef, 0xff, 0xf7, 0x0,

    /* U+0056 "V" */
    0x9f, 0x40, 0x0, 0x0, 0x7, 0xf5, 0x4f, 0x90,
    0x0, 0x0, 0xc, 0xf0, 0xf, 0xe0, 0x0, 0x0,
    0x1f, 0xb0, 0xa, 0xf3, 0x0, 0x0, 0x5f, 0x70,
    0x6, 0xf7, 0x0, 0x0, 0xaf, 0x20, 0x1, 0xfc,
    0x0, 0x0, 0xed, 0x0, 0x0, 0xcf, 0x10, 0x3,
    0xf8, 0x0, 0x0, 0x8f, 0x50, 0x8, 0xf4, 0x0,
    0x0, 0x3f, 0xa0, 0xd, 0xf0, 0x0, 0x0, 0xe,
    0xf0, 0x1f, 0xa0, 0x0, 0x0, 0x9, 0xf4, 0x6f,
    0x60, 0x0, 0x0, 0x5, 0xf8, 0xbf, 0x10, 0x0,
    0x0, 0x0, 0xfd, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xf7, 0x0, 0x0,

    /* U+0057 "W" */
    0x3f, 0xa0, 0x0, 0x1f, 0xfc, 0x0, 0x0, 0xed,
    0xf, 0xc0, 0x0, 0x4f, 0xef, 0x0, 0x1, 0xfa,
    0xd, 0xf0, 0x0, 0x7f, 0x9f, 0x20, 0x4, 0xf7,
    0xa, 0xf2, 0x0, 0xaf, 0x4f, 0x50, 0x7, 0xf4,
    0x7, 0xf5, 0x0, 0xdc, 0x1f, 0x80, 0xa, 0xf1,
    0x4, 0xf8, 0x0, 0xf9, 0xe, 0xb0, 0xd, 0xe0,
    0x2, 0xfb, 0x3, 0xf6, 0xb, 0xe0, 0xf, 0xb0,
    0x0, 0xfd, 0x6, 0xf3, 0x8, 0xf1, 0x3f, 0x90,
    0x0, 0xcf, 0x9, 0xf0, 0x5, 0xf4, 0x5f, 0x60,
    0x0, 0x9f, 0x3c, 0xd0, 0x2, 0xf7, 0x8f, 0x30,
    0x0, 0x6f, 0x6f, 0xa0, 0x0, 0xf9, 0xbf, 0x0,
    0x0, 0x3f, 0xbf, 0x70, 0x0, 0xcc, 0xed, 0x0,
    0x0, 0xf, 0xff, 0x50, 0x0, 0x9f, 0xfa, 0x0,
    0x0, 0xd, 0xff, 0x20, 0x0, 0x6f, 0xf7, 0x0,

    /* U+0058 "X" */
    0x6f, 0x80, 0x0, 0x0, 0x8f, 0x60, 0xdf, 0x20,
    0x0, 0x2f, 0xc0, 0x4, 0xfb, 0x0, 0xb, 0xf3,
    0x0, 0xa, 0xf5, 0x4, 0xfa, 0x0, 0x0, 0x1f,
    0xd0, 0xdf, 0x10, 0x0, 0x0, 0x7f, 0xdf, 0x70,
    0x0, 0x0, 0x0, 0xdf, 0xd0, 0x0, 0x0, 0x0,
    0xd, 0xfd, 0x0, 0x0, 0x0, 0x7, 0xfd, 0xf7,
    0x0, 0x0, 0x1, 0xfd, 0xe, 0xf1, 0x0, 0x0,
    0xaf, 0x40, 0x5f, 0xa0, 0x0, 0x3f, 0xa0, 0x0,
    0xcf, 0x30, 0xd, 0xf2, 0x0, 0x2, 0xfc, 0x6,
    0xf8, 0x0, 0x0, 0x9, 0xf6,

    /* U+0059 "Y" */
    0x9f, 0x70, 0x0, 0x0, 0x2f, 0xc0, 0x1e, 0xe1,
    0x0, 0x0, 0xbf, 0x30, 0x7, 0xf9, 0x0, 0x4,
    0xfa, 0x0, 0x0, 0xdf, 0x20, 0xd, 0xf1, 0x0,
    0x0, 0x4f, 0xb0, 0x7f, 0x80, 0x0, 0x0, 0xb,
    0xf5, 0xee, 0x0, 0x0, 0x0, 0x2, 0xff, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0x9f, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0x80, 0x0, 0x0, 0x0, 0x0, 0x4f, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x4f, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0x80, 0x0, 0x0,

    /* U+005A "Z" */
    0x2f, 0xff, 0xff, 0xff, 0xff, 0x52, 0xdd, 0xdd,
    0xdd, 0xdf, 0xf5, 0x0, 0x0, 0x0, 0x5, 0xfd,
    0x0, 0x0, 0x0, 0x1, 0xef, 0x30, 0x0, 0x0,
    0x0, 0xbf, 0x70, 0x0, 0x0, 0x0, 0x7f, 0xc0,
    0x0, 0x0, 0x0, 0x2f, 0xf2, 0x0, 0x0, 0x0,
    0xd, 0xf5, 0x0, 0x0, 0x0, 0x9, 0xfa, 0x0,
    0x0, 0x0, 0x4, 0xfe, 0x10, 0x0, 0x0, 0x1,
    0xef, 0x40, 0x0, 0x0, 0x0, 0xbf, 0x80, 0x0,
    0x0, 0x0, 0x2f, 0xfd, 0xdd, 0xdd, 0xdd, 0x42,
    0xff, 0xff, 0xff, 0xff, 0xf5,

    /* U+005B "[" */
    0x2a, 0xaa, 0xa6, 0x4f, 0xff, 0xfa, 0x4f, 0x60,
    0x0, 0x4f, 0x60, 0x0, 0x4f, 0x60, 0x0, 0x4f,
    0x60, 0x0, 0x4f, 0x60, 0x0, 0x4f, 0x60, 0x0,
    0x4f, 0x60, 0x0, 0x4f, 0x60, 0x0, 0x4f, 0x60,
    0x0, 0x4f, 0x60, 0x0, 0x4f, 0x60, 0x0, 0x4f,
    0x60, 0x0, 0x4f, 0x60, 0x0, 0x4f, 0x60, 0x0,
    0x4f, 0x60, 0x0, 0x4f, 0x60, 0x0, 0x4f, 0x60,
    0x0, 0x4f, 0xca, 0xa6, 0x4f, 0xff, 0xfa,

    /* U+005C "\\" */
    0x7f, 0x20, 0x0, 0x0, 0x0, 0x1, 0xfa, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xf1, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0x80, 0x0, 0x0, 0x0, 0x0, 0xaf,
    0x10, 0x0, 0x0, 0x0, 0x3, 0xf7, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0x60, 0x0, 0x0, 0x0, 0x0, 0xdd, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0xe, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x30, 0x0, 0x0, 0x0, 0x0, 0xfa, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0x90, 0x0, 0x0, 0x0, 0x0, 0xaf, 0x10,
    0x0, 0x0, 0x0, 0x2, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xe0,

    /* U+005D "]" */
    0xdf, 0xff, 0xf1, 0x8a, 0xad, 0xf1, 0x0, 0x9,
    0xf1, 0x0, 0x9, 0xf1, 0x0, 0x9, 0xf1, 0x0,
    0x9, 0xf1, 0x0, 0x9, 0xf1, 0x0, 0x9, 0xf1,
    0x0, 0x9, 0xf1, 0x0, 0x9, 0xf1, 0x0, 0x9,
    0xf1, 0x0, 0x9, 0xf1, 0x0, 0x9, 0xf1, 0x0,
    0x9, 0xf1, 0x0, 0x9, 0xf1, 0x0, 0x9, 0xf1,
    0x0, 0x9, 0xf1, 0x0, 0x9, 0xf1, 0x0, 0x9,
    0xf1, 0x8a, 0xad, 0xf1, 0xdf, 0xff, 0xf1,

    /* U+005E "^" */
    0x0, 0x0, 0x9, 0x30, 0x0, 0x0, 0x0, 0x9,
    0xff, 0x30, 0x0, 0x0, 0x8, 0xfa, 0xef, 0x30,
    0x0, 0x7, 0xfa, 0x2, 0xee, 0x20, 0x6, 0xfb,
    0x0, 0x2, 0xee, 0x20, 0xab, 0x0, 0x0, 0x3,
    0xe4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+005F "_" */
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+0060 "`" */
    0x5f, 0x80, 0x0, 0x6, 0xf8, 0x0, 0x0, 0x6f,
    0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 78, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 84, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 143, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 42, .adv_w = 186, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 126, .adv_w = 186, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 216, .adv_w = 292, .box_w = 16, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 218, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 84, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 421, .adv_w = 109, .box_w = 6, .box_h = 23, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 490, .adv_w = 109, .box_w = 6, .box_h = 23, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 559, .adv_w = 176, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 614, .adv_w = 186, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 84, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 678, .adv_w = 148, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 685, .adv_w = 84, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 168, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 789, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 186, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 922, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 992, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1202, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1272, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1342, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1412, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1482, .adv_w = 84, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1497, .adv_w = 84, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1518, .adv_w = 186, .box_w = 7, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1553, .adv_w = 186, .box_w = 11, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1586, .adv_w = 186, .box_w = 7, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1621, .adv_w = 156, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1684, .adv_w = 260, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1796, .adv_w = 211, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1887, .adv_w = 211, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1964, .adv_w = 204, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2048, .adv_w = 211, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2125, .adv_w = 190, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2195, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2265, .adv_w = 220, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2349, .adv_w = 215, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2426, .adv_w = 128, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2482, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2545, .adv_w = 181, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2622, .adv_w = 172, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2692, .adv_w = 267, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2790, .adv_w = 215, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2867, .adv_w = 224, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2951, .adv_w = 204, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3028, .adv_w = 224, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3130, .adv_w = 206, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3214, .adv_w = 211, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3291, .adv_w = 161, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3361, .adv_w = 211, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3438, .adv_w = 188, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3522, .adv_w = 266, .box_w = 16, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3634, .adv_w = 176, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3711, .adv_w = 179, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3795, .adv_w = 179, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3872, .adv_w = 109, .box_w = 6, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3935, .adv_w = 168, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 4034, .adv_w = 109, .box_w = 6, .box_h = 21, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 4097, .adv_w = 186, .box_w = 11, .box_h = 7, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 4136, .adv_w = 160, .box_w = 10, .box_h = 2, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 4146, .adv_w = 150, .box_w = 6, .box_h = 3, .ofs_x = 2, .ofs_y = 11}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 65, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 3, 0, 4, 0, 5, 6, 5,
    7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 8, 0, 0, 0,
    0, 0, 9, 10, 11, 10, 12, 13,
    14, 0, 15, 16, 17, 18, 0, 0,
    10, 19, 10, 20, 21, 22, 23, 24,
    25, 26, 27, 28, 3, 0, 0, 0,
    0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    2, 0, 0, 3, 0, 4, 5, 4,
    6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 7, 0, 0, 0,
    8, 0, 9, 0, 10, 0, 0, 0,
    10, 0, 11, 12, 0, 0, 0, 0,
    10, 0, 10, 0, 13, 14, 15, 16,
    17, 18, 19, 20, 0, 0, 0, 0,
    0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -10, 0, 0, 0, 0,
    -18, 2, 18, -11, 4, 27, 2, 16,
    11, 16, 16, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -22, 0, -9, -4, 0, -22, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 9,
    0, 9, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -22, 0, 0, 0, 0, 0, 0,
    16, -4, 20, 0, -2, -9, -4, -18,
    -13, 16, -18, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, -9, 0,
    0, -22, 0, -16, -7, -4, -22, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -22, 0, 11, -11, 0, 22, 0, 11,
    11, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 2, 18, 0,
    0, 0, 2, 7, 4, 16, 0, 13,
    16, -18, -13, 16, 0, 0, 16, -4,
    0, 0, 0, 0, 0, -11, 0, -4,
    0, 0, -13, 0, 2, 2, 0, -4,
    2, 0, 2, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, -4, 0,
    9, 9, 0, 9, 0, 0, 9, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 4, 0, 4,
    4, 0, 4, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    9, 9, 0, -9, 4, 0, 9, 7,
    -4, 0, 0, -22, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 4, 0, 4,
    0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    20, 20, 0, 20, -9, 11, 20, 9,
    0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 2, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    18, 18, 0, 18, -4, 0, 18, 9,
    0, -2, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 27, 0, -13, 27,
    0, 0, 27, -2, 0, 0, 0, 0,
    0, -9, 0, -9, -4, 0, -20, 0,
    9, 9, 0, -22, -13, -22, 9, 4,
    -11, 0, 0, -22, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 7, 0, 11,
    0, 0, 11, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, 4, 0, -2, 4, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, -4, 0, 27, 27, 0, -9,
    -22, -11, 0, 9, -11, -4, 4, -22,
    -4, 9, 0, 4, 0, 2, 4, 0,
    2, 2, 0, -4, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 16, 0, -18,
    -16, -11, 7, 11, -4, 0, 0, -11,
    0, 4, 0, 0, 0, 0, 0, 0,
    11, 11, 0, -13, -7, -11, 4, 2,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 16, 0, 16,
    -4, 0, 16, 9, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    16, 16, 0, -18, -22, -22, 0, 4,
    -13, -4, 0, -22, 0, 4, 0, 0,
    0, 0, 0, 0, 13, 13, 0, 13,
    -9, 0, 13, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 28,
    .right_class_cnt     = 20,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t FoundryGridnikMedium_20 = {
#else
lv_font_t FoundryGridnikMedium_20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 25,          /*The maximum line height required by the font*/
    .base_line = 7,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if FOUNDRYGRIDNIKMEDIUM_20*/

