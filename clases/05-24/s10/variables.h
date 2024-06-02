#define MAX_STR 60
#define MAX_REG 100

typedef struct STUDENT {
    int CIF;
    char names[MAX_STR];
    char lastNames[MAX_STR];
    int year;
} STUDENT;

int position = 0;

STUDENT students[MAX_REG];
