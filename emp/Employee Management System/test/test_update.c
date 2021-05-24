#include "../inc/Update.h"
#include "unity.h"
//#include "unity_internals.h"


info *acc=NULL;
void setUp()
{

}
void tearDown()
{

}
int empid;
char empname[60];
int salary;
int leave;
char address[60];
char personal_mail_id[15];
int phone_no;
char marital_status[50];
char BU[100];
char role[50];

void test_search_by_empid(void)
{
    info temp ={0};
    int e_id;
    int see;
        e_id = 2;
        see = 0;
        TEST_ASSERT_EQUAL(SUCCESS, search_by_empid(acc,e_id,&temp,&see));
        TEST_ASSERT_EQUAL(0,see);
}

void test_update(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,2,1,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,2,2,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,2,3,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,2,4,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,2,8,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,2,6,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,2,7,1));
    
}
int main (void)
{
    UNITY_BEGIN();
    RUN_TEST(test_update);
    RUN_TEST(test_search_by_empid);
    return UNITY_END();
}
