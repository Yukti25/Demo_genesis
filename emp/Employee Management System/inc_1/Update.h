#ifndef __UPDATE_H__
#define __UPDATE_H__

#include<stdio.h>
#include<string.h>
#include<malloc.h>

typedef enum user{
    SUCCESS = 0,
    NO_EMPACC_EXIST = 8,
    EMPID_DOESNT_EXISTS = 5,
    EMPID_EXIST = 1
}user;

typedef struct info{
    char empname[100];
    int empid;
    int salary;
    int leave;
    char address[100];
    char personal_mail_id[15];
    int phone_no;
    char marital_status[11];
    char BU[51];
    char role[31];
    struct info *nt;
}info;

user update(info *,int,int,int);
user search_by_empid(info *, int , info *, int *);

#endif