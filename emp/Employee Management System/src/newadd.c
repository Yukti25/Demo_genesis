/**
 * file newadd.c
 * author your Meher
 * brief 
 * version 0.1
 * date 2021-04-21
 * 
 * Copyright (c) 2021
 * 
 */

#include "../inc/Employee.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
/**
 * @brief add new employee and experienced employee details.
 *
 */

user add(info *acc, char *empname, char *phone_no, char *mail, int em_id, char *BU, char *role, char *address, char *citizenship, char *adhaar, char *pan, float ctc, int month, int day, int year, char *marital_status, char *gradclg, float cgpa, char *prevorg, int expyrs, int compworked, int salary, int leave, char *personal_mail_id, int noofdatt, int noofleaves)
{

  info *new_add, *b;
  new_add = acc;
  new_add = (info *)malloc(sizeof(info));

  new_add->e_id = em_id;
  strcpy(new_add->empname, empname);
  strcpy(new_add->mail, mail);
  strcpy(new_add->BU, BU);
  strcpy(new_add->role, role);
  strcpy(new_add->address, address);
  strcpy(new_add->citizenship, citizenship);
  strcpy(new_add->pan, pan);
  strcpy(new_add->gradclg, gradclg);
  strcpy(new_add->marital_status, marital_status);
  strcpy(new_add->prevorg, prevorg);
  strcpy(new_add->phone_no, phone_no);
  strcpy(new_add->adhaar, adhaar);
  new_add->ctc = ctc;
  new_add->month = month;
  new_add->day = day;
  new_add->year = year;
  new_add->cgpa = cgpa;
  new_add->expyrs = expyrs;
  new_add->compworked = compworked;

  if (acc == NULL)
  {
    free(new_add);
    return NO_DETAILS_EXIST;
  }
  else
  {
    b = acc;
    while (b->nt != NULL)
    {
      b = b->nt;
    }
    b->nt = new_add;
    return SUCCESS;
  }
}
info *newadd(info *acc, char *empname, char *phone_no, char *mail, int em_id, char *BU, char *role, char *address, char *citizenship, char *adhaar, char *pan, float ctc, int month, int day, int year, char *marital_status, char *gradclg, float cgpa, char *prevorg, int expyrs, int compworked, int salary, int leave, char *personal_mail_id, int noofdatt, int noofleaves)
{
  info *new_add;
  new_add = (info *)malloc(sizeof(info));

  new_add->e_id = em_id;
  strcpy(new_add->empname, empname);
  strcpy(new_add->mail, mail);
  strcpy(new_add->BU, BU);
  strcpy(new_add->role, role);
  strcpy(new_add->address, address);
  strcpy(new_add->citizenship, citizenship);
  strcpy(new_add->pan, pan);
  strcpy(new_add->gradclg, gradclg);
  strcpy(new_add->marital_status, marital_status);
  strcpy(new_add->prevorg, prevorg);
  strcpy(new_add->phone_no, phone_no);
  strcpy(new_add->adhaar, adhaar);
  new_add->ctc = ctc;
  new_add->month = month;
  new_add->day = day;
  new_add->year = year;
  new_add->cgpa = cgpa;
  new_add->expyrs = expyrs;
  new_add->compworked = compworked;

  if (acc == NULL)
  {
    acc = new_add;
    printf("NULL\n");
    return SUCCESS;
  }
  else
  {
    printf("added\n");
    add(acc, empname, phone_no, mail, em_id, BU, role, address, citizenship, adhaar, pan, ctc, month, day, year, marital_status, gradclg, cgpa, prevorg, expyrs, compworked, salary, leave, personal_mail_id, noofdatt, noofleaves);
    free(new_add);
    return SUCCESS;
  }
}
int validname(char *empname)
{

  int count = 0;
  int n = strlen(empname);
  for (int i = 0; i < n; i++)
  {

    if ((empname[i] >= 'a' && empname[i] <= 'z') || (empname[i] >= 'A' && empname[i] <= 'Z'))
      count++;
  }
  if (count == n)
    return 1;
  /*printf("Valid Employee name \n");*/
  else
    return 0;
  /*printf("Invalid Employee name \n");*/
}

int validmail(char *mail)
{

  int i, count = 0, j;
  int n = strlen(mail);
  for (i = 0; i <= n; i++)
  {
    if (mail[i] == '@' || mail[i]=='.')
    {
      count++;
    }
  }
  if(count >= 2){
    return 1;
  }

  /*printf("Valid mail id  \n");*/

  return 0;
  /*printf("Invalid mail id \n");*/
}

int validphno(char *phone_no)
{
  int i, n, count = 0;
  n = strlen(phone_no);

  for (i = 0; i < n; i++)
  {
    if (phone_no[i] >= 48 && phone_no[i] <= 57)
    {
      count++;
    }
  }
  if (count == 10)
    return 1;
  /* printf("Valid phone number \n");*/
  else
    return 0;
  /* printf("Invalid phone number \n");  */
}

int validadhaar(char *adhaar)
{
  int i, n, count = 0;
  n = strlen(adhaar);

  for (i = 0; i < n; i++)
  {
    if (adhaar[i] >= 48 && adhaar[i] <= 57)
    {
      count++;
    }
  }
  if (count == 12)
    return 1;
  /*printf("Valid Adhaar number \n");*/
  else
    return 0;
  /*printf("Invalid Adhaar number \n");  */
}
