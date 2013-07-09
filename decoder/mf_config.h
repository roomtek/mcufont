/* Configuration constants for mcufont. */

#ifndef _MF_CONFIG_H_
#define _MF_CONFIG_H_

/* Encoding for the input data.
 * With the unicode encodings, the library supports the range of unicode
 * characters 0x0000-0xFFFF (the Basic Multilingual Plane).
 * 
 * ASCII: Plain ascii (somewhat works with ISO8859-1 also)
 * UTF8:  UTF8 encoding (variable number of bytes)
 * UTF16: UTF16 encoding (2 bytes per character, compatible with UCS-2)
 * WCHAR: Use compiler's wchar_t (usually same as UTF16)
 */
#define MF_ENCODING_ASCII 0
#define MF_ENCODING_UTF8  1
#define MF_ENCODING_UTF16 2
#define MF_ENCODING_WCHAR 3
#ifndef MF_ENCODING
#define MF_ENCODING MF_ENCODING_UTF8
#endif

/* Enable or disable the kerning module.
 * Disabling it saves some code size and run time, but causes the spacing
 * between characters to be less consistent.
 */
#ifndef MF_USE_KERNING
#define MF_USE_KERNING 1
#endif

/* Enable or disable the advanced word wrap algorithm.
 * If disabled, uses a simpler algorithm.
 */
#ifndef MF_USE_ADVANCED_WORDWRAP
#define MF_USE_ADVANCED_WORDWRAP 1
#endif

/* Number of vertical zones to use when computing kerning.
 * Larger values give more accurate kerning, but are slower and use somewhat
 * more memory. There is no point to increase this beyond the height of the
 * font.
 */
#ifndef MF_KERNING_ZONES
#define MF_KERNING_ZONES 16
#endif

/* Minimum space between characters, in percents of the glyph width.
 * Increasing this causes the kerning module to leave more space between
 * characters.
 */
#ifndef MF_KERNING_SPACE_PERCENT
#define MF_KERNING_SPACE_PERCENT 15
#endif

/* Minimum space between characters, in pixels. Added to the percentual
 * spacing. This pixel-based value guarantees enough space even with small
 * fonts.
 */
#ifndef MF_KERNING_SPACE_PIXELS
#define MF_KERNING_SPACE_PIXELS 3
#endif

/* Maximum adjustment done by the kerning algorithm, as percent of the
 * glyph width.
 */
#ifndef MF_KERNING_LIMIT
#define MF_KERNING_LIMIT 20
#endif

/* Spacing of tabulator stops. The value is multiplied by the width of the
 * space character in the current font.
 */
#ifndef MF_TABSIZE
#define MF_TABSIZE 16
#endif


/* Add extern "C" when used from C++. */
#ifdef __cplusplus
#define MF_EXTERN extern "C"
#else
#define MF_EXTERN extern
#endif

#endif

