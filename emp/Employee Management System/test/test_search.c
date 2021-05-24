#include "unity.h"
#include "SearchList.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_checkDate(void)
{
  TEST_ASSERT_EQUAL(1, checkDate(10,10,2010));
  TEST_ASSERT_EQUAL(0, checkDate(111,12,2020));
}

void test_checkBU(void)
{
  TEST_ASSERT_EQUAL(1, checkBU("ICP"));
  TEST_ASSERT_EQUAL(1, checkBU("Embedded"));
  TEST_ASSERT_EQUAL(1, checkBU("Medical"));
  TEST_ASSERT_EQUAL(1, checkBU("Transportation"));
  TEST_ASSERT_EQUAL(0, checkBU("Embedde  d"));
}

void test_checkRole(void)
{
  TEST_ASSERT_EQUAL(1, checkRole("Intern"));
  TEST_ASSERT_EQUAL(1, checkRole("Associate Engineer"));
  TEST_ASSERT_EQUAL(1, checkRole("Lead"));
  TEST_ASSERT_EQUAL(1, checkRole("Program Manager"));
  TEST_ASSERT_EQUAL(0, checkRole("Intern s"));
}

int test_main(void){
  UNITY_BEGIN();
  RUN_TEST(test_checkDate);
  RUN_TEST(test_checkBU);
  RUN_TEST(test_checkRole);
  return UNITY_END();  
}