#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include "largeint.h"

int main(int argc, char *argv[])
{
    char first_string[TOTALDIGITS];                              // storing the input string here
    char second_string[TOTALDIGITS];                              // storing the input string here
    int NUM_OF_GROUPS = TOTALDIGITS / GROUPING_NUM; 
    int first_number[NUM_OF_GROUPS];                             // storing the converted integer array after grouping 
    int second_number[NUM_OF_GROUPS];                             // storing the converted integer array after grouping 
    int result_num[NUM_OF_GROUPS];                             // storing the result after operation
    
    int first_length=0,second_length=0;                                          // length of the input string
    int i,inial_pointer=0,final_pointer=0,flag=0;                       // loop iterating variable
    int first_num_len = 0;                               // first input number length
    int second_num_len = 0;                              // second input number length
    
// ================== initialization of arrays =======================//
    var_int_construct(first_number,NUM_OF_GROUPS); 
    var_int_construct(second_number,NUM_OF_GROUPS); 
    var_int_construct(result_num,NUM_OF_GROUPS); 

    printf("\t\t\tWELCOME TO THE LARGE INT EDITOR \n");
// ============================ Getting data from user =================================//   
    printf("Enter the first number\n");
    gets(first_string);
    printf("Enter the second number\n");
    gets(second_string);
// ============================ Processing First number started =================================//    
    first_length = strlen(first_string);    
    process_input(first_string,first_number,first_length, &first_num_len);
// ============================ Processing Second number started =================================//    
    second_length = strlen(second_string);
    process_input(second_string,second_number,second_length, &second_num_len);
// =============================Calling addition operation ================================//
   large_int_addition(first_number,second_number,first_num_len,second_num_len,NUM_OF_GROUPS,result_num);
//     large_int_multiply(first_number,second_number,first_num_len, second_num_len, NUM_OF_GROUPS,result_num);
    
    //==========delete me=============
//          printf("\nThe final addition value is :\n");
//          int max=0;
//          if(first_num_len>second_num_len) max= first_num_len;
//          else max= second_num_len;
//          for(i=0;i<max;i++){          
//                printf("%d",result_num[i]);
//          }
//
// 
//         printf("\n");



  //========End delete me ==================

  system("PAUSE");	
  return 0;
}





