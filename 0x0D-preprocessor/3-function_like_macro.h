#include <stdlib.h>
#ifndef ABS
#define ABS(x) (abs(x))
#else
#undef ABS
#define ABS(x) (abs(x))
#endif /*ABS*/
