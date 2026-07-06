#include <sys/time.h>

typedef struct tm TM;

struct tm* create_time() {
  time_t rawtime;
  struct tm* inf;

  time(&rawtime);
  return localtime(&rawtime);
}

Long* TM_tm_gmtoff(TM* t) {
  return (Long*)(&t->tm_gmtoff);
}

String* TM_tm_zone(TM* t) {
  return (String*)(&t->tm_zone);
}
