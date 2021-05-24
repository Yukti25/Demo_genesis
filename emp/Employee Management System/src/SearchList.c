#include<string.h>
#include<stdio.h>
#include"../inc/Employee.h"
int checkDate(int date, int month, int year){
    if(month <= 12){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(date <= 31 ){
                return 1;
            }
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11){
            if(date <= 30 ){
                return 1;
            }
        }
        if(year % 4 == 0){
            //leap year
            if(month == 2){
                if(date <= 29){
                    return 1;
                }
            }
        }
        else{
            //not a leap year
            if(month == 2){
                if(date <= 28){
                    return 1;
                }
            }
        }
    }
    return 0;
}

int checkBU(char *bu){
    char *BU1 = "ICP";
    char *BU2 = "Embedded";
    char *BU3 = "Medical";
    char *BU4 = "Transportation";

    if((strcmp(bu, BU1) == 0) || (strcmp(bu, BU2) == 0) || (strcmp(bu, BU3) == 0) || (strcmp(bu, BU4) == 0) ){
        return 1;
    }
    return 0;

}

int checkRole(char *role){
    char *Role1 = "Intern";
    char *Role2 = "Associate Engineer";
    char *Role3 = "Lead";
    char *Role4 = "Program Manager";

    if((strcmp(role, Role1) == 0) || (strcmp(role, Role2) == 0) || (strcmp(role, Role3) == 0) || (strcmp(role, Role4) == 0) ){
        return 1;
    }
    return 0;

}

void searchJoiningDate(info *acc, int date, int month, int year)
{
    
    info *p;
    p = acc;

    if(acc == NULL){
        printf("Account is NULL");
        return;
    }
    else{
        int flag = 0;
        while(p != NULL){
            
            if((p->day == date) && (p->month == month) && (p->year == year)){
                flag = 1;
                printf("%s\t", p->empname);
                printf("%d\t", p->e_id);
                printf("%s\t",p->BU);
                printf("%s\t\n",p->role);
            }
        }
        if(flag == 1){
            return;
        }
        printf("No records found\n");
        return;
    }
}

void searchBU(info *acc, char *BU)
{
    
    info *p;
    p = acc;

    if(acc == NULL){
        printf("Account is NULL");

        return;
    }
    else{
        int flag = 0;
        while(p != NULL){
            
            if(p->BU == BU){
                flag = 1;
                printf("%s\t", p->empname);
                printf("%d\t", p->e_id);
                printf("%s\t",p->BU);
                printf("%s\t\n",p->role);
            }
        }
        if(flag == 1){
            return;
        }
        printf("No records Found\n");
        return;
    }
}

void searchRole(info *acc, char *Role)
{
    
    info *p;
    p = acc;

    if(acc == NULL){
        printf("Account is NULL");
        return;
    }
    else{
        int flag = 0;
        while(p != NULL){
            if(p->role == Role){
                flag = 1;
                printf("%s\t", p->empname);
                printf("%d\t", p->e_id);
                printf("%s\t",p->BU);
                printf("%s\t\n",p->role);
            }
        }
        if(flag == 1){
            return;
        }
        printf("No records found\n");
        return;
    }
}