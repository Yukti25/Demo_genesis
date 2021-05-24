#include "unity.h"
#include "../inc/attendance.h"
info *att=NULL;
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_newatt(void)
{
  TEST_ASSERT_EQUAL(84, newatt(att,1122,22));
  TEST_ASSERT_EQUAL(46, newatt(att,1234,12));
  TEST_ASSERT_EQUAL(0, newatt(att,11 ,123));
  TEST_ASSERT_EQUAL(0, newatt(att,11 ,1234));
}
void test_newlea(void)
{
  TEST_ASSERT_EQUAL(12, newlea(att,1122,12));
  TEST_ASSERT_EQUAL(2, newlea(att,1122,22));
  TEST_ASSERT_EQUAL(0, newlea(att,111 ,123));
}
int test_main(void){
  UNITY_BEGIN();
  RUN_TEST(test_newatt);
  RUN_TEST(test_newlea);
  return UNITY_END(); 
}
