 #include "unity.h"
 #include "substring.h"
 /* Required by the unity test framework */
 void setUp(){}
 /* Required by the unity test framework */
 void tearDown(){}
  
 void test_substring(void)
 {
   TEST_ASSERT_EQUAL(4, substring("Hello_boss_of_class"));
 }
 void test_substring2(void)
 {
 TEST_ASSERT_EQUAL(2 , substring("hi_hello"));
 }
 int test_main(void)
 {
 /* Initiate the Unity Test Framework */
   UNITY_BEGIN();
  
 /* Run Test functions */
   RUN_TEST(test_substring);
   RUN_TEST(test_substring2);
   /* Close the Unity Test Framework */
   return UNITY_END();
 }
