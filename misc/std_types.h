
/* if your complier is using ansi-c99 standard, you should define the below Macro */
//#define _ANSI_C99_

/*
define the standard types for using and typing easier
*/

/* Public types */
typedef signed char     sint8;          /*  -128 ~ +127  */
typedef unsigned char   uint8;          /*     0 ~ 255   */

typedef signed short    sint16;         /*  -32768 ~ +32767 */
typedef unsigned short  uint16;         /*       0 ~ +65535 */

typedef signed long     sint32;         /*  -2147483648 ~ +2147483647  */
typedef unsigned long   uint32;         /*            0 ~ +4294967295  */

#ifndef _ANSI_C99_
typedef unsigned char   boolean;        /*  boolean type, value is true or false */
#ifndef true
  #define true    ((boolean)1u)
#endif

#ifndef false
  #define false   ((boolean)0u)
#endif

#else
typedef bool            boolean;        /*  boolean type, value is true or false */
#endif

/* use to define is the function/feature On or Off */
#define STD_ON  (1u) /* function/feature ON */
#define STD_OFF (0u) /* function/feature OFF */


