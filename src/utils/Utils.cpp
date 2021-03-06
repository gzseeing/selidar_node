#include <time.h>
#include "Utils.h"

namespace NS_NaviCommon
{
  
  unsigned long
  getUs ()
  {
    struct timespec t;
    t.tv_sec = t.tv_nsec = 0;
    clock_gettime (CLOCK_MONOTONIC, &t);
    return t.tv_sec * 1000000LL + t.tv_nsec / 1000;
  }
  
  unsigned int
  getMs ()
  {
    struct timespec t;
    t.tv_sec = t.tv_nsec = 0;
    clock_gettime (CLOCK_MONOTONIC, &t);
    return t.tv_sec * 1000L + t.tv_nsec / 1000000L;
  }

}
