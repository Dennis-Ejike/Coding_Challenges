#include <stdio.h>
int num1, num2;
char reply1, reply2;
int main(){
	printf("Hello, how are you today?\n");
	scanf("%s", &reply1);
	printf("Shall we begin?\n");
	printf("reply 'Y' to begin or 'N' to end program\n");
	scanf("%s", &reply2);
	while (reply2!='Y' && reply2!='N' && reply2!='y' && reply2!='n'){
		printf("pls reply 'Y' to begin or 'N' to end program\n");
		scanf("%s", &reply2);		
	}
	if (reply2=='N' || reply2=='n'){			
		printf("Program Ended!!!\n");
		printf("Try again later.");
	}
	if (reply2=='Y' || reply2=='y'){			
		printf("What is the first number?\n");
		scanf("%d", &num1);
		printf("What is the second number\n");
		scanf("%d", &num2);
		if(num1>num2){
			printf("%d is greater than %d\n", num1, num2);
		}
		else if(num2>num1){
			printf("%d is greater than %d\n", num2, num1);
		}
		else if (num1=num2){
			printf("%d is equal to %d\n", num1, num2);
		}
		else {
			printf("pls enter valid numbers\n");
		}
		printf("Wow! We make an awesome team!!!\n");
		printf("High five dude!!!");
	}
}
