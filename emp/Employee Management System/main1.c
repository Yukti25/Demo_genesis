#include "../inc/Employee.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
info temp = {0};
int see;
/*char empname[100];
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
*/
info *(*fp1)(info *, char *, char *, char *, int, char *, char *, char *, char *, char *, char *, float, int, int, int, char *, char *, float, char *, int, int, int, int, char *, int, int) = newadd;
user (*fp2)(info *, int, int, int) = update;
user (*fp3)(info *, int, info *, int *) = search_by_empid;
int (*fp4)(info *, int, int) = newatt;
int (*fp5)(info *, int, int) = newlea;

int main()
{
    info *emp;
    while (1)
    {
        printf("******EMPLOYEE MANAGEMENT SYSTEM******\n");
        printf("***********WELCOME*************\n");
        printf("1: Add/Remove Employee information \n");
        printf("2: Update Employee Information\n");
        printf("3: Search Employee List\n");
        printf("4: Attendance and Leave\n");
        printf("5: Employee Calculator\n");
        printf("6: Display Employee Information\n");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("*****Employee Management System*****\n");
            printf("1: Add new employee details.\n 2: Add experienced employee details. \n 3: Delete employee details.\n");
            printf("Enter the choice: \n");
            int option;
            scanf("%d", &option);
            switch (option)
            {
            case 1:
            {
                int e_id;
                char empname[100];
                char phone_no[15];
                char mail[60];
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
                printf("Enter employee id: \n");
                scanf("%d", &e_id);
                printf("Enter employee name: \n");
                scanf("%99s", empname);
                if (validname(empname) == 0)
                {
                    printf("INCORRECT NAME \n");
                    break;
                }
                printf("Enter employee Phone Number: \n");
                scanf("%s", phone_no);
                if (validphno(phone_no) == 0)
                {
                    printf("INCORRECT PHONE NUMBER \n");
                    break;
                }
                printf("Enter employee mail ID: \n");
                scanf("%s", mail);
                if (validmail(mail) == 0)
                {
                    printf("INCORRECT MAIL ID \n");
                    break;
                }
                printf("Enter employee BU: \n");
                scanf("%60s", BU);
                if (checkBU(BU) == 0)
                {
                    printf("INCORRECT BU");
                    break;
                }
                printf("Enter employee Role: \n");
                scanf("%60s", role);
                if (checkRole(role) == 0)
                {
                    printf("INCORRECT ROLE");
                    break;
                }
                printf("Enter employee permanent address: \n");
                scanf("%60s", address);
                printf("Enter employee citizenship: \n");
                scanf("%10s", citizenship);
                printf("Enter employee Adhaar Number: \n");
                scanf("%s", adhaar);
                if (validadhaar(adhaar) == 0)
                {
                    printf("INCORRECT ADHAAR NUMBER \n");
                    break;
                }
                printf("Enter employee PAN : \n");
                scanf("%10s", pan);
                printf("Enter employee CTC: \n");
                scanf("%f", &ctc);
                printf("Enter employee joining date: \n");
                scanf("%d-%d-%d", &day, &month, &year);
                printf("Enter Employee Graduation CGPA: \n");
                scanf("%f", &cgpa);
                printf("Enter Employee Graduation college: \n");
                scanf("%60s", gradclg);

                printf("****FRESHER EMPLOYEE DETAILS ADDED****\n");
                emp = (*fp1)(emp, empname, phone_no, mail, e_id, BU, role, address, citizenship, adhaar, pan, ctc, month, day, year, marital_status, gradclg, cgpa, prevorg, expyrs, compworked, salary, leave, personal_mail_id, noofdatt, noofleaves);
                break;
            }
            case 2:
            {
                int e_id;
                char empname[100];
                char phone_no[15];
                char mail[60];
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
                printf("Enter employee id: \n");
                scanf("%d", &e_id);
                printf("Enter employee name: \n");
                scanf("%s", empname);
                if (validname(empname) == 0)
                {
                    printf("INCORRECT NAME \n");
                    break;
                }
                printf("Enter employee Phone Number: \n");
                scanf("%s", phone_no);
                if (validphno(phone_no) == 0)
                {
                    printf("INCORRECT PHONE NUMBER \n");
                    break;
                }
                printf("Enter employee mail ID: \n");
                scanf("%s", mail);
                if (validmail(mail) == 0)
                {
                    printf("INCORRECT MAIL ID \n");
                    break;
                }
                printf("Enter employee BU: \n");
                scanf("%60s", BU);
                if (checkBU(BU) == 0)
                {
                    printf("INCORRECT BU");
                    break;
                }
                printf("Enter employee Role: \n");
                scanf("%60s", role);
                if (checkRole(role) == 0)
                {
                    printf("INCORRECT ROLE");
                    break;
                }
                printf("Enter employee permanent address: \n");
                scanf("%60s", address);
                printf("Enter employee citizenship: \n");
                scanf("%10s", citizenship);
                printf("Enter employee Adhaar Number: \n");
                scanf("%s", adhaar);
                if (validadhaar(adhaar) == 0)
                {
                    printf("INCORRECT ADHAAR NUMBER \n");
                    break;
                }
                printf("Enter employee PAN : \n");
                scanf("%10s", pan);
                printf("Enter employee CTC: \n");
                scanf("%f", &ctc);
                printf("Enter employee joining date: \n");
                scanf("%d-%d-%d", &day, &month, &year);
                printf("Enter Employee Graduation CGPA: \n");
                scanf("%f", &cgpa);
                printf("Enter Employee Graduation college: \n");
                scanf("%60s", gradclg);
                printf("Enter number of companies worked: \n");
                scanf("%d", &compworked);
                printf("Enter years of experience: \n");
                scanf("%d", &expyrs);
                printf("Enter previously worked organisation: \n");
                scanf("%40s", prevorg);

                printf("****EXPERIENCED EMPLOYEE DETAILS ADDED****\n");
                emp = (*fp1)(emp, empname, phone_no, mail, e_id, BU, role, address, citizenship, adhaar, pan, ctc, month, day, year, marital_status, gradclg, cgpa, prevorg, expyrs, compworked, salary, leave, personal_mail_id, noofdatt, noofleaves);
                break;
            }

            case 3:
            {
                int e_id;
                printf("Enter employee id to be deleted: \n");
                scanf("%d", &e_id);
                user id = (*fp3)(emp, e_id, &temp, &see);
                printf("Employee details is successfully deleted \n");
            }
            default:
                printf("Exit\n");

                break;
            }
            break;

        case 2:
            printf("1.Update Employee Details.\n");
            printf("Press 0 to exit.\n");
            printf("Enter the choice: \n");
            int op;
            scanf("%d", &op);
            switch (op)
            {
            case 1:
            {
                char empname[100];
                int e_id;
                int salary;
                int leave;
                char address[100];
                char personal_mail_id[15];
                char phone_no[15];
                char marital_status[51];
                char BU[51];
                char role[31];
                struct info *nt;
                printf("Enter Employee ID:\n");
                scanf("%d", &e_id);
                user id = (*fp3)(emp, e_id, &temp, &see);
                if (id == EMPID_DOESNT_EXISTS)
                {
                    break;
                }
                if (see = 1)
                {
                    int choice;
                    printf("Choose any of the below options you want to update: ");
                    printf("1. Update Name; \n");
                    printf("2. Update Role: \n");
                    printf("3. Update Salary: \n");
                    printf("4. Update BU: \n");
                    printf("5. Update Address: \n");
                    printf("6. Update Phone number: \n");
                    printf("7. Update Marital Status: \n");
                    printf("8. Update Leave: \n");
                    printf("9. Update Personal MailID: \n");
                    scanf("%d", &choice);
                    switch (choice)
                    {
                    case 1:
                        printf("Enter the name: \n");
                        scanf("%99s", empname);
                        if (validname(empname) == 0)
                        {
                            printf("INCORRECT NAME \n");
                            break;
                        }
                        break;
                    case 2:
                        printf("Enter the salary: \n");
                        scanf("%d", &salary);
                        break;
                    case 3:
                        printf("Enter the leave: \n");
                        scanf("%d", &leave);
                        break;
                    case 4:
                        printf("Enter the address: \n");
                        scanf("%99s", address);
                        break;
                    case 5:
                        printf("Enter the personal mail id: \n");
                        scanf("%14s", personal_mail_id);
                        if (validmail(personal_mail_id) == 0)
                        {
                            printf("INCORRECT MAIL ID \n");
                            break;
                        }
                        break;
                    case 6:
                        printf("Enter the phone number: \n");
                        scanf("%s", phone_no);
                        if (validphno(phone_no) == 0)
                        {
                            printf("INCORRECT PHONE NUMBER \n");
                            break;
                        }
                        break;
                    case 7:
                        printf("Enter the marital status: \n");
                        scanf("%50s", marital_status);
                        break;
                    case 8:
                        printf("Enter the BU: \n");
                        scanf("%50s", BU);
                        if (checkBU(BU) == 0)
                        {
                            printf("INCORRECT BU");
                            break;
                        }
                        break;
                    case 9:
                        printf("Enter the role: \n");
                        scanf("%30s", role);
                        if (checkRole(role) == 0)
                        {
                            printf("INCORRECT ROLE");
                            break;
                        }

                        break;
                    }
                    user id = (*fp2)(emp, e_id, choice, 0);
                    printf("\n\n***DETAILS UPDATED \n\n");
                    break;
                }
                else
                {
                    printf("\n\n NO RECORD FOUND \n\n");
                    break;
                }
            }
            }

        case 3:

            printf("1. To search employees by Joining Date\n");
            printf("2. To search employees from BU unit\n");
            printf("3. To search employees by roles\n");
            int opt;
            scanf("%d", &opt);
            switch (opt)
            {
            case 1:
                printf("Enter Joining Date\n");
                int date, month, year;
                scanf("%d", &date);
                printf("Enter joining month\n");
                scanf("%d", &month);
                printf("Enter joining year\n");
                scanf("%d", &year);
                if (checkDate(date, month, year))
                {
                    searchJoiningDate(emp, date, month, year);
                }
                else
                {
                    printf("Enter Correct Date");
                }
                break;

            case 2:
                printf("Enter BU\n");
                char bu[20];
                scanf("%s", bu);
                if (checkBU(bu))
                {
                    searchBU(emp, bu);
                }
                else
                {
                    printf("BU entered is incorrect");
                }
                break;

            case 3:
                printf("Enter Role\n");
                char role[20];
                scanf("%s", role);
                if (checkRole(role))
                {
                    searchBU(emp, role);
                }
                else
                {
                    printf("Role entered is incorrect");
                }
                break;

            default:
                break;
            }
            break;
        case 4:
            printf("1:Attendance.\n2.Leaves.\n3.Exit\n");
            printf("Enter the choice: \n");
            int opti;
            scanf("%d", &opti);
            switch (opti)
            {
            case 1:
            {
                printf("Enter Employee id:\n");
                int e_id;
                scanf("%d", &e_id);
                user id = (*fp3)(emp, e_id, &temp, &see);
                if (id == EMPID_DOESNT_EXISTS)
                {
                    break;
                }
                printf("Enter no.of.days present in this month:\n");
                int noofdatt;
                scanf("%d", &noofdatt);
                //att->emp_id = empid;
                //att->no_of_datt= noofdatt;
                printf("Attendance report of this month: ");
                int atten = (*fp4)(emp, e_id, noofdatt);
                printf("%d", atten);
                break;
            }
            case 2:
            {
                printf("Enter Employee id:\n");
                int e_id;
                scanf("%d", &e_id);
                user id = (*fp3)(emp, e_id, &temp, &see);
                if (id == EMPID_DOESNT_EXISTS)
                {
                    break;
                }
                printf("Enter no.of.leaves taken\n");
                int noofleaves;
                scanf("%d", &noofleaves);
                printf("Number of leaves left: ");
                int atten = (*fp5)(emp, e_id, noofleaves);
                printf("%d", atten);
                break;
            }
            default:
                printf("exit\n");
                break;
            }

        default:
            break;
        }
        printf("\n1 to continue\n");
        printf("0 to stop");
        int enter;
        scanf("%d", &enter);
        if (enter == 0)
        {
            break;
        }
    }
    return 0;
}