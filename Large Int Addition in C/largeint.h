#ifndef LARGEINT_H
#define LARGEINT_H
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ largeint.h ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
===========================================================================
|| It contains the declarations of the large int functions and variables ||
===========================================================================
 */
 
// ========= Global variables ==========//
    #define TOTALDIGITS	500  // maximum number of digits in the number
    #define GROUPING_NUM 4   // number of digits considered for sub-grouping the digits
// ========End Global variables ========//

//=======General functions==========//
   void var_int_construct(int [],int);
   void clear(char [],int);
   void process_input(char [],int [],int ,int*);
   
// ============================= Declaring different large int functions Prototype ==========================//
   void large_int_addition(int [],int [],int,int,int,int []);            // function to add two large integers
   void large_int_substraction(int [],int []);        // function to subtract two large integers
   void large_int_multiply(int [],int [],int,int,int,int []);            // function to multiply two large numbers
   void large_int_recursion(int []);                     // function for recursion
// =============================End Declaring large int functions Prototype =================================//

#endif /* LARGEINT_H */
