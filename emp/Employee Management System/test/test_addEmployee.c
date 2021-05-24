#include "unity.h"
#include "addemp.h"

info *emp=NULL;

void setUp()
{

}
void tearDown()
{

}
char empname[60];
char phone_no[50];
char mail[60];
int empid;
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

void test_newadd(void){
    empid = 1234 ;
    strcpy(empname, "abc");
    strcpy (mail, "abc@gmail.com");
    strcpy(BU,"aerospace");
    strcpy(role,"Programmer Manager");
    strcpy(address,"xyz");
    strcpy(citizenship,"indian");
    strcpy(pan,"gyt546");
    strcpy(gradclg,"seoul");
    strcpy(marital_status,"single");
    strcpy(prevorg,"johnson");
    strcpy(phone_no,"9876543217");
    strcpy(adhaar,"345678956787");
     ctc=400000;
     day=2;
     month=2;
     year=2021;
     cgpa=9.2;
    expyrs=2;
    compworked=4;
  TEST_ASSERT_EQUAL(SUCCESS,newadd(emp,empname,phone_no,mail,empid,BU,role,address,citizenship,adhaar,pan,ctc,month,day,year,gradclg,cgpa,marital_status,prevorg,expyrs,compworked));
  
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_newadd);
    return UNITY_END();
}