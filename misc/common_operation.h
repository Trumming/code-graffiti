#ifndef _COMMON_OPERATION_H
#define _COMMON_OPERATION_H

#ifdef _COMMON_OPERATION_C
    #define EXTERN
#else
    #define EXTERN extern
#endif

/**
 * Local function should not declare in the header file!
 * extrern functin declare
**/
EXTERN bool write(int val);
EXTERN int read(void);

/**
 * useful and common macro for bit operation
*/
#define BIT0    0x01u
#define BIT1    0x02u
#define BIT2    0x04u
#define BIT3    0x08u
#define BIT4    0x10u
#define BIT5    0x20u
#define BIT6    0x40u
#define BIT7    0x80u

#define SETBIT(val,index)   ((val) |= (index)
#define CLRBIT(val,index)   ((val) &= ~(index))


#endif