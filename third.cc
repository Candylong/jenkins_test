#include "third.h"
#ifdef __cplusplus
extern "C" {
#endif
DLL_EXPORT int Sum(int a, int b)
{
    return a + b;
}

int Mutiplay(int a, int b)
{
    return a* b;
}

int Dec(int a, int b)
{
    return a - b;
}

#ifdef __cplusplus
}
#endif