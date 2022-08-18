#include<ctime>
/*convert tm to time_t*/
time_t Time_mktime(tm TM);

/*convert time_t to c_str*/
const char* Time_ctime(time_t TIME);

/*convert tm to c_str*/
const char* Time_asctime(tm TM);

/*convert time_t to localtime*/
tm Time_localtime(time_t TIME);
