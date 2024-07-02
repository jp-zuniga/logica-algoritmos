#define MAX_REG 1000

typedef struct CITY {
  int id;
  char name[30];
  char description[100];
} CITY;

int pos = 0;

CITY cities[MAX_REG];
