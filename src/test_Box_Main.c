#include "unity.h"
#include "Box_Main.h"


void setUp(){}

void tearDown(){}

void test_Box_MainTest1(void)
  { 
     TEST_ASSERT_EQUAL(625, Box_Volume(5,5,5,5));
  }
  void test_Box_MainTest2(void)
{
    TEST_ASSERT_EQUAL(626, Box_Volume(4,5,4,3));
}

    void test_Box_Id(void)
{ 
    TEST_ASSERT_EQUAL(101, Box_FindBox(101));
}

  void test_Box_Id2(void)
{
    TEST_ASSERT_EQUAL(102, Box_FindBox(102));
}

void test_Box_Count_Color(void)
{
    TEST_ASSERT_EQUAL(2, Count_Color("Red"));
}
int main(void)
{

  UNITY_BEGIN();
  
  RUN_TEST(test_Box_MainTest1);
  RUN_TEST(test_Box_MainTest2);
  RUN_TEST(test_Box_Id);
  RUN_TEST(test_Box_Id2);
  RUN_TEST(test_Box_Count_Color);
  
  return UNITY_END();
}