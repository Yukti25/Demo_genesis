#ifndef __EMP_H__
#define __EMP_H__
typedef enum user{
    SUCCESS = 0,
    NO_DETAILS_EXIST=2,
    NO_EMPACC_EXIST = 8,
    EMPID_DOESNT_EXISTS = 5,
    EMPID_EXIST = 1,
    NO_EMPLOYEE_EXIST=3

}user;

typedef struct info
{
    char empname[100];
    char phone_no[15];
    char mail[60];
    int e_id;
    char BU[60];
    char role[60];
    char address[60];
    char citizenship[15];
    char adhaar[50];
    char pan[20];
    float ctc;
    int month;
    int day;
    int year;
    char marital_status[20];
    char gradclg[40];
    float cgpa;
    char prevorg[40];
    int expyrs;
    int compworked;
    int salary;
    int leave;
    char personal_mail_id[15];
    int noofdatt;
    int noofleaves;
    struct info *nt;
} info;

//add employee header



user add(info *acc, char *empname, char *phone_no, char *mail, int em_id, char *BU, char *role, char *address, char *citizenship, char *adhaar, char *pan, float ctc, int month, int day, int year, char *marital_status, char *gradclg, float cgpa, char *prevorg, int expyrs, int compworked, int salary, int leave, char *personal_mail_id, int noofdatt,int noofleaves);
info *newadd(info *acc, char *empname, char *phone_no, char *mail, int em_id, char *BU, char *role, char *address, char *citizenship, char *adhaar, char *pan, float ctc, int month, int day, int year, char *marital_status, char *gradclg, float cgpa, char *prevorg, int expyrs, int compworked, int salary, int leave, char *personal_mail_id, int noofdatt,int noofleaves);


int validname(char *empname);
int validphno(char *phone_no);
int validmail(char *mail);
int validadhaar(char *adhaar);

//update header



user update(info *,int,int,int);
user search_by_empid(info *, int , info *, int *);


//search list header
int checkDate(int, int , int );
int checkBU(char *);
int checkRole(char *);
void searchJoiningDate(info *, int, int, int);
void searchRole(info *, char *);
void searchBU(info *, char *);


//attendance header


int newatt(info *,int  ,int );
int newlea(info *,int ,int );


#endif