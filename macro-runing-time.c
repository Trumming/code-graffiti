/*#include <stdio.h>*/

/*How many timer you want to create*/
#define TIMER_CNT   1

/*configation of time tools*/
#define TIME_TICK_UPDATA_PERIOD 2   /* mean 2ms*/

/*attributes of time tools*/
unsigned short int _start_t[TIMER_CNT];
unsigned short int _end_t[TIMER_CNT];
unsigned short int _used_t[TIMER_CNT];
unsigned short int _time_tick = 0;

/*method of time tools*/
#define START_TIME(x)   {_start_t[(x)]=_time_tick;}
#define END_TIME(x)     {_end_t[(x)]=_time_tick;}
#define CALC_USED_TIME(x)   _used_t[(x)]=(_end_t[(x)]>=_start_t[(x)])?(_end_t[(x)]-_start_t[(x)]):((~_start_t[(x)])+_end_t[(x)]);
#define GET_USED_TIME(x)    (TIME_TICK_UPDATA_PERIOD*_used_t[(x)])

/*should called by some ISR, like timer isr, time task etc*/
void UpdateTimeTick(void)
{
    _time_tick++;
}

int main(void)
{
    START_TIME(0);
    /*your test code*/
    END_TIME(0);
    CALC_USED_TIME(0);
    printf("used time is %dms\n",GET_USED_TIME(0));
    return 1;
}
