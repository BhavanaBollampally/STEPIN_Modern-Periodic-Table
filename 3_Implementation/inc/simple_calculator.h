/** 
* @file simple_calculator.h
* Calculator application with 7 mathematical operations
*
*/
#ifndef __SIMPLE_CALCULATOR_H__
#define __SIMPLE_CALCULATOR_H__

void calculator_operations();
/**
  * system("cls");  use system function to clear 
  *screen instead of clrscr();
  * Press 'Q' or 'q' to quit 
  * Press 'H' or 'h' to Display
  *Enter 'C' or 'c' to clear the screen and  
  * display available option
    *  + symbol for Addition 
    *  - symbol for Subtraction 
    *  * symbol for Multiplication 
    *  / symbol for Division 
    *  ? symbol for Modulus
    *  ^ symbol for Power 
    *  ! symbol for Factorial 
*/
void addition();
/**
 *Addition Of two Numbers
*/
void subtraction();
/**
*Substraction of two numbers
*/
void multiplication();
/**
*Multiplication of two numbers
*/
void division();
/**
*Division of two numbers
*/
void modulus();
/**
*Modulus of two numbers
*/
void power();
/**
*Power of a given number
*/
int factorial();
/**
*Factorial of a given number
*/
#endif













