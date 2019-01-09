#ifndef _C_TEMPLATE_H
#define _C_TEMPLATE_H

#ifdef _C_TEMPLATE_C
    #define EXTERN
#else
    #define EXTERN extern
#endif

/**
 * Local function should not declare here!
**/
EXTERN bool write(int val);
EXTERN int read(void);

#endif