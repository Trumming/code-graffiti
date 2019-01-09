/**
 * use the method to declare functions 
 * to avoid compiler do the implict declare 
 *  
**/

#define _C_TEMPLATE_C

/*
dependeny files, header files
*/
#include "c-template.h"

/*
local variable declare
*/
static int c_temp;

/*
remote variable declare
not recommend in this way. use interface to reduce global varibles is better.
all variable will be static, use api to r/w it.
*/
//int c_remote;

/*
local function declare
*/
static int fun(int i, char j);

/*
remote function will declare in the header file but c file
*/


/* code starting */
static int fun(int i, char j)
{

}

/**
 * interface to handle the variable
 * 
**/
bool write(int val)
{
    bool ret_val = true;
    if((val > MIN) && (val < MAX))
    {
        c_temp = val;
    }   
    else
    {
        /* code */
        c_temp = c_temp;
        ret_val = false;
    }
    return ret_val;
}
/**
 * interface to handle the variable
 * 
**/
int read(void)
{
    return c_temp;
}
