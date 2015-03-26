#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digitnum(long long num){
	int digitNum = 0;
	while(num != 0){
		num/=10;
		++digitNum;
	}
	return digitNum;
}

void printThreeDigit(int temp){
		//database
	char a[30][12];
	strcpy(a[0],"one");
	strcpy(a[1],"two");
	strcpy(a[2],"three");
	strcpy(a[3],"four");
	strcpy(a[4],"five");
	strcpy(a[5],"six");
	strcpy(a[6],"seven");
	strcpy(a[7],"eight");
	strcpy(a[8],"nine");
	strcpy(a[9],"ten");
	strcpy(a[10],"eleven");
	strcpy(a[11],"twelve");
	strcpy(a[12],"thirteen");
	strcpy(a[13],"fourteen");
	strcpy(a[14],"fifteen");
	strcpy(a[15],"sixteen");
	strcpy(a[16],"seventeen");
	strcpy(a[17],"eighteen");
	strcpy(a[18],"nineteen");
	strcpy(a[19],"twenty");
	strcpy(a[20],"thirty");
	strcpy(a[21],"fourty");
	strcpy(a[22],"fifty");
	strcpy(a[23],"sixty");
	strcpy(a[24],"seventy");
	strcpy(a[25],"eighty");
	strcpy(a[26],"ninety");
	strcpy(a[27],"hundred");
	strcpy(a[28],"thousand");
	strcpy(a[29],"million");
	
	int hun_num, ten_num, one_num, temp_len,param =0;
	temp_len = digitnum(temp);
	
	if(temp_len == 3){
		hun_num = temp / 100;
		switch(hun_num){
			case 1:
				printf(" %s ",a[0]);
				break;
			case 2:
				printf(" %s ",a[1]);
				break;
			case 3:
				printf(" %s ",a[2]);
				break;
			case 4:
				printf(" %s ",a[3]);
				break;
			case 5:
				printf(" %s ",a[4]);
				break;
			case 6:
				printf(" %s ",a[5]);
				break;
			case 7:
				printf(" %s ",a[6]);
				break;
			case 8:
				printf(" %s ",a[7]);
				break;
			case 9:
				printf(" %s ",a[8]);
				break;
		}
		printf(" hundred ");
		temp = temp - hun_num*100;
		temp_len = digitnum(temp);
		//printf("> %d",temp_len);  // delelte me
		if(temp_len == 2){
			if(temp == 10) printf(" %s ",a[9]);
			else if((temp >10)&&(temp<20)){
				switch(temp){
					case 11:
					printf(" %s ",a[10]);
					break;
					case 12:
					printf(" %s ",a[11]);
					break;
					case 13:
					printf(" %s ",a[12]);
					break;
					case 14:
					printf(" %s ",a[13]);
					break;
					case 15:
					printf(" %s ",a[14]);
					break;
					case 16:
					printf(" %s ",a[15]);
					break;
					case 17:
					printf(" %s ",a[16]);
					break;
					case 18:
					printf(" %s ",a[17]);
					break;
					case 19:
					printf(" %s ",a[18]);
					break;
				}
			}
			else if(temp == 20) printf(" %s ",a[19]);
			else if(temp > 20) {
				switch(param = temp/10){
					case 2:
					printf(" %s ",a[19]);
					break;	
					case 3:
					printf(" %s ",a[20]);
					break;
					case 4:
					printf(" %s ",a[21]);
					break;
					case 5:
					printf(" %s ",a[22]);
					break;
					case 6:
					printf(" %s ",a[23]);
					break;
					case 7:
					printf(" %s ",a[24]);
					break;
					case 8:
					printf(" %s ",a[25]);
					break;
					case 9:
					printf(" %s ",a[26]);
					break;
				}
				temp = temp - param * 10;
				switch(temp){
					case 1:
					printf(" %s ",a[0]);
					break;	
					case 2:
					printf(" %s ",a[1]);
					break;
					case 3:
					printf(" %s ",a[2]);
					break;
					case 4:
					printf(" %s ",a[3]);
					break;
					case 5:
					printf(" %s ",a[4]);
					break;
					case 6:
					printf(" %s ",a[5]);
					break;
					case 7:
					printf(" %s ",a[6]);
					break;
					case 8:
					printf(" %s ",a[7]);
					break;
					case 9:
					printf(" %s ",a[8]);
					break;				
				}
			}
		}
		else if(temp_len == 1){
				switch(temp){
					case 1:
					printf(" %s ",a[0]);
					break;	
					case 2:
					printf(" %s ",a[1]);
					break;
					case 3:
					printf(" %s ",a[2]);
					break;
					case 4:
					printf(" %s ",a[3]);
					break;
					case 5:
					printf(" %s ",a[4]);
					break;
					case 6:
					printf(" %s ",a[5]);
					break;
					case 7:
					printf(" %s ",a[6]);
					break;
					case 8:
					printf(" %s ",a[7]);
					break;
					case 9:
					printf(" %s ",a[8]);
					break;				
				}			
		}	
	}
	else if(temp_len == 2){
			if(temp == 10) printf(" %s ",a[9]);
			else if((temp >10)&&(temp<20)){
				switch(temp){
					case 11:
					printf(" %s ",a[10]);
					break;
					case 12:
					printf(" %s ",a[11]);
					break;
					case 13:
					printf(" %s ",a[12]);
					break;
					case 14:
					printf(" %s ",a[13]);
					break;
					case 15:
					printf(" %s ",a[14]);
					break;
					case 16:
					printf(" %s ",a[15]);
					break;
					case 17:
					printf(" %s ",a[16]);
					break;
					case 18:
					printf(" %s ",a[17]);
					break;
					case 19:
					printf(" %s ",a[18]);
					break;
				}
			}
			else if(temp == 20) printf(" %s ",a[19]);
			else if(temp > 20) {
				switch(param = temp/10){
					case 2:
					printf(" %s ",a[19]);
					break;	
					case 3:
					printf(" %s ",a[20]);
					break;
					case 4:
					printf(" %s ",a[21]);
					break;
					case 5:
					printf(" %s ",a[22]);
					break;
					case 6:
					printf(" %s ",a[23]);
					break;
					case 7:
					printf(" %s ",a[24]);
					break;
					case 8:
					printf(" %s ",a[25]);
					break;
					case 9:
					printf(" %s ",a[26]);
					break;
				}
				temp = temp - param * 10;
				switch(temp){
					case 1:
					printf(" %s ",a[0]);
					break;	
					case 2:
					printf(" %s ",a[1]);
					break;
					case 3:
					printf(" %s ",a[2]);
					break;
					case 4:
					printf(" %s ",a[3]);
					break;
					case 5:
					printf(" %s ",a[4]);
					break;
					case 6:
					printf(" %s ",a[5]);
					break;
					case 7:
					printf(" %s ",a[6]);
					break;
					case 8:
					printf(" %s ",a[7]);
					break;
					case 9:
					printf(" %s ",a[8]);
					break;				
				}
			}
		}
		else {
				switch(temp){
					case 1:
					printf(" %s ",a[0]);
					break;	
					case 2:
					printf(" %s ",a[1]);
					break;
					case 3:
					printf(" %s ",a[2]);
					break;
					case 4:
					printf(" %s ",a[3]);
					break;
					case 5:
					printf(" %s ",a[4]);
					break;
					case 6:
					printf(" %s ",a[5]);
					break;
					case 7:
					printf(" %s ",a[6]);
					break;
					case 8:
					printf(" %s ",a[7]);
					break;
					case 9:
					printf(" %s ",a[8]);
					break;				
				}
		}
}
	
	

void number2str(long long num){
		
	// logic to convert to num
	int numlen;
	int order,million_count,x;
	long long temp =num;
	numlen = digitnum(num);
	order = numlen/3; // count number of partition
	//printf("\nNumber of digits = %d %d\n",numlen, order);
	million_count = order /2 -1;
	// check for extra partition
	x = num/pow(10,order*3);
	if(x != 0) {
		//printf("\nx = %d %d\n",x);
		++order;
		++million_count;
	}

	
	for(int i = order;i>=1;i--)
	if(i >2){
		temp = num/pow(10,(i-1)*3);
		printThreeDigit(temp);
		if(i%2 != 0)printf(" million ");
		else printf(" thousand ");
		num = num - (temp * pow(10,(i-1)*3));
	}else if(i == 2){
		temp = num/pow(10,(i-1)*3);
		printThreeDigit(temp);
		printf(" thousand ");	
		num = num - (temp * pow(10,3)); // update
	}
	else if(i==1){
		temp = num;
		printThreeDigit(temp);
		printf(" \n ");
	}

	
	
}

int main(){
	long long num;
	char ch;
	
	
	printf("Enter y to enter new number\nEnter any other to exit\n");
	ch = getchar();
	while((ch == 'y') || (ch == 'Y')){
		
		num = 0;
		printf("Enter the number: \n");
		scanf("%lld",&num);
		printf("\n\n\n\n\n\n\n\nEntered number in words: \n");
		printf("======================== \n");
		if(num==0) printf("Zero \n");
		else if(num < 0){
			printf("minus ");
			num = -1 * num;
			number2str(num);
		}
		else{
			number2str(num);
		}
	
	// prompt for new number
		printf("Enter y to enter new number\nEnter any other to exit\n");
		
		ch = getchar();
		ch = getchar();
		system("CLS"); // Remove it for linux or Unix or use "clear" instead of "cls"
	}
	printf("\n\n\n\n\n\n\n\n\n");
	
	return 0;
}
