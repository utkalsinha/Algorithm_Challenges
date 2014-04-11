#include "largeint.h"

//====================Defining rest of the functions ====================//
void var_int_construct(int temp[],int length){              // initialization function definition
     int i;
     for(i=0;i<length;i++){
                           temp[i]=0;
     }                    
}
void clear(char temp[],int length){              // initialization function definition
     int i;
     for(i=0;i<length;i++){
                           temp[i]='\0';
     }                    
}
// ===============input processing and grouping function =======================//
void process_input(char temp_char[],int temp_int[],int temp_char_length, int *num_len){  
     int flag=0,i;
     int input_group_num=0,inial_pointer=0,final_pointer =0;
     char temp[GROUPING_NUM+1];
     
     if(flag=temp_char_length % GROUPING_NUM) input_group_num = temp_char_length/GROUPING_NUM +1;    // checking for number of groups    
     else  input_group_num = temp_char_length/GROUPING_NUM;
     int pointer_chk = temp_char_length-GROUPING_NUM;                           // variable to check whether initial pointer is > GROUPING_NUM    
     
     clear(temp,GROUPING_NUM+1);   // clearing the character array
     for(i=input_group_num-1;i>=0;i--){     // === Converting and Inserting numbers in the first_number array 
                        if(temp_char_length > GROUPING_NUM){
                                       inial_pointer = temp_char_length - GROUPING_NUM;
                                       final_pointer=GROUPING_NUM; 
                                       temp_char_length -= GROUPING_NUM;
                        }
                        else {
                                       inial_pointer = 0;
                                       final_pointer = temp_char_length;
                                       temp_char_length = 0;
                        }                        
                        strncpy(temp, &temp_char[inial_pointer], final_pointer);
                        temp_int[i] = atoi(temp);
                        clear(temp,GROUPING_NUM+1);
     }
     *num_len = input_group_num;     
}

//================================== Largeint Addition operation ==========================//

void large_int_addition(int firstnum[],int secondnum[],int first_num_len, int second_num_len, int num_of_groups, int result[]){
     var_int_construct(result,num_of_groups);  // initialize result array
     int i,max=0,carry =0;
     int base_number = pow(10,GROUPING_NUM);  // used to check whether there is a carry or not
     if(first_num_len > second_num_len) max = first_num_len;
     else max = second_num_len;
     for(i=max-1;i>=0;i--){
          if(first_num_len == 0){    
                 result[i] = secondnum[second_num_len-1] + carry;
                 second_num_len--;
                 printf("");
          }
          else if(second_num_len == 0){
                 result[i] = firstnum[first_num_len-1] + carry; 
                 first_num_len--;   
          }
          else{       
                 result[i] = firstnum[first_num_len-1] + secondnum[second_num_len-1] + carry;
                 first_num_len--;
                 second_num_len--;
                 
          }
          if(result[i]/base_number == 1){
                 carry=1;
                 result[i] = result[i] - base_number;
          }
          else carry = 0;

     }
     //==========delete me=============
          printf("\nThe final addition value is :\n");
          for(i=0;i<max;i++){          
                printf("%d",result[i]);
          }

          printf("\n");
}

//===============Large int multiplication================//
void large_int_multiply(int firstnum[],int secondnum[],int first_num_len, int second_num_len, int num_of_groups,int result[]){

}


