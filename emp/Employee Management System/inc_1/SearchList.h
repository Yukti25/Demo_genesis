#ifndef __SEARCH_LIST_H__
#define __SEARCH_LIST_H__

typedef struct info
{
    char empname[60];
    char phno[50];
    char mail[60];
    int empid;
    char bu[60];
    char address[60];
    char citizenship[15];
    char adhaar[50];
    char pan[20];
    char role[20];
    float ctc;
    int month;
    int day;
    int year;
    char gradclg[40];
    float cgpa;
    char maritalstatus[20];
    char prevorg[40];
    int expyrs;
    int compworked;
    struct info *a;
} info;

typedef struct list
{
    int empid;
    char name;
    char role;
    char BU;
    struct list *b;
} list;


int checkDate(int date, int month, int year);
int checkBU(char *bu);
int checkRole(char *role);
void searchJoiningDate(info *acc, int date, int month, int year);
void searchRole(info *acc, char *Role);
void searchBU(info *acc, char *BU);


#endif