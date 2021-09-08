#include "unity.h"
#include <simple_calculator.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_power(void);
void test_factorial(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_modulus);
  RUN_TEST(test_power);
  RUN_TEST(test_factorial);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
 
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}
void test_modulus(void) {
  TEST_ASSERT_EQUAL(1, modulus(10, 3));
  
  TEST_ASSERT_EQUAL(2, modulus(11, 9));
}

void test_power(void) {
  TEST_ASSERT_EQUAL(8, power(2, 3));
  
  TEST_ASSERT_EQUAL(9, power(3, 2));
}

void test_factorial(void) {
  TEST_ASSERT_EQUAL(6, factorial(3));
 
  TEST_ASSERT_EQUAL(120, factorial(5));
}



























