 #include "unity.h"
 #include "prime.h"
 /* Required by the unity test framework */
 void setUp(){}
 /* Required by the unity test framework */
 void tearDown(){}
  
 void test_prime(void)
 {
   TEST_ASSERT_EQUAL(-1, prime(5));
   TEST_ASSERT_EQUAL(-1, prime(7));
 }
 void test_prime2(void)
 {
 TEST_ASSERT_EQUAL(1 , prime(4));
 TEST_ASSERT_EQUAL(1, prime(22));
 }
 int test_main(void)
 {
 /* Initiate the Unity Test Framework */
   UNITY_BEGIN();
  
 /* Run Test functions */
   RUN_TEST(test_prime);
   RUN_TEST(test_prime2);
   /* Close the Unity Test Framework */
   return UNITY_END();
 }
