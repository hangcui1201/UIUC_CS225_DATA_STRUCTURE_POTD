#include "epoch.h"
/* Your code here! */

// The time_t type is used to hold the number of seconds 
// since the epoch; its actual type (int, long, etc.) 
int hours(time_t sec_since_epoch){
    // time_t: seconds
    // 1 hour = 3600 sec
    return sec_since_epoch/3600;
}

int days(time_t sec_since_epoch){
    // 1 day = 24 hours
    return hours(sec_since_epoch)/24;

}

int years(time_t sec_since_epoch){
    // 1 year = 365 day
    return days(sec_since_epoch)/365;
}