/******************
Name: Ben Bar
ID: 212234363
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
	int option = 0;
	char eye = 'a';
	char nose = 'a';
	char mouth = 'a';
	int faceSize = 0;
	int i = 0;
    int noseSpaces = 0;
    int number = 0;
    int rightSum = 0;
    int leftSum = 0;
    int numberLength = 0;
    int temp = 0;
    int divisorsSum = 0;
    int reversedNumber = 0;
    int isPrime;
	int power = 0;
	int j = 0;
	int digitsSquareSum = 0;
	int smile = 1;
	int cheer = 1;
	int check = 0;
	int maxNumber = 0;
  	while(option != 7){
  	    printf("Choose an option:\n");
  		printf("\t1. Happy Face\n");
  		printf("\t2. Balanced Number\n");
  		printf("\t3. Generous Number\n");
  		printf("\t4. Circle Of Joy\n");
  		printf("\t5. Happy Numbers\n");
  		printf("\t6. Festival Of Laughter\n");
  		printf("\t7. Exit\n");
  		scanf(" %d",&option);
		switch(option){
        	case 1:{
                printf("Enter symbols for the eyes, nose, and mouth:\n");
        		scanf(" %c %c %c",&eye,&nose,&mouth);
        		printf("Enter face size:\n");
        		scanf(" %d",&faceSize);
        		while(faceSize % 2 == 0 || faceSize <= 0){
        			printf("The face's size must be an odd and positive number, please try again:\n");
        			scanf(" %d",&faceSize);
        		}
        		//eye print
        		printf("%c", eye);
        		for(i =0; i< faceSize; i++){
        			printf(" ");
        		}
        		printf("%c\n", eye);
        		//nose print
                noseSpaces = faceSize/2 + 1;
        		for(i = 0; i< noseSpaces; i++){
        			printf(" ");
        		}
        		printf("%c", nose);
        		for(i = 0; i< noseSpaces; i++){
        			printf(" ");
        		}
        		for(i = 0; i< faceSize; i++){
        			printf(" ");
        		}
        		//mouth print
        		printf("\n\\");
        		for(i = 0; i< faceSize; i++){
        			printf("%c", mouth);
        		}
        		printf("/\n");
        		break;
            }
            case 2:{
            	rightSum = 0;
                leftSum = 0;
                numberLength = 0;
              	printf("Enter a number:\n");
              	scanf(" %d",&number);
              	while(number < 1){
              		printf("Only positive number is allowed, please try again:\n");
              		scanf(" %d",&number);
              	}
            	temp = number;
            	while (temp != 0){
            		temp = temp/10;
            		numberLength++;
            	}
            	temp = number;
        		for(i = 0; i< numberLength; i++){
        			if(i < numberLength/2){
        				rightSum += temp%10;
        			}
        			else if((i > numberLength/2 && numberLength %2 != 0) || numberLength % 2 == 0){
        				leftSum += temp%10;
        			}
        			temp /= 10;
        		}
            	if(rightSum == leftSum){
            		printf("This number is balanced and brings harmony!\n");
            	}
            	else{
            		printf("This number isn't balanced and destroys harmony.\n");
            	}
        		break;
            }
            case 3:{
              printf("Enter a number:\n");
              scanf(" %d",&number);
              while(number < 1){
                printf("Only positive number is allowed, please try again:\n");
                scanf(" %d",&number);
              }
              divisorsSum = 1;
              for(i = 2; i <= number/2; i++){
				if(number % i == 0){
                    divisorsSum += i;
				}
              }
              if(divisorsSum > number){
                printf("This number is generous!\n");
              }
              else{
				printf("This number does not share.\n");
              }
        		break;
            }
            case 4:{
              	isPrime = 1;
        		reversedNumber = 0;
              	printf("Enter a number:\n");
            	numberLength = 0;
            	scanf(" %d",&number);
            	while(number < 1){
             	   printf("Only positive number is allowed, please try again:\n");
             		scanf(" %d",&number);
             	}
        	  	temp = number;
        		while (temp != 0){
        			temp = temp/10;
        			numberLength++;
        		}
                temp = number;
                for(i = numberLength - 1; i >= 0; i--){
                	power = 1;
					for(j = 1; j < i; j++) {
						power *= 10;
					}
                  reversedNumber += (temp%10)*power;
                  temp /= 10;
                }

                for(i = 2; i <= number/2; i++){
                  if(number%i == 0){
                    isPrime = 0;
                    i = number;
                  }
                }
                if(isPrime == 1){
                	for(i = 2; i< reversedNumber/2; i++){
                		if(reversedNumber%i == 0){
                			isPrime = 0;
                			i = reversedNumber;
                		}
                	}
                }
                if(isPrime == 1){
                  printf("This number completes the circle of joy!\n");
                }
                else{
                  printf("The circle remains incomplete.\n");
                }
        		break;
            }
            case 5:{
        		printf("Enter a number:\n");
        		scanf(" %d",&number);
        		while(number < 1) {
        			printf("Only positive number is allowed, please try again:\n");
        			scanf(" %d",&number);
        		}
        		i = 0;
        		printf("Between 1 and %d only these numbers bring happiness: 1",number);
        		for(i = 7; i <= number; i++) {
        			digitsSquareSum = 0;
					temp = i;
        			while(temp != 0) {
        				digitsSquareSum += (temp%10) * (temp%10);
        				temp = temp/10;
        				if(temp == 0) {
        					if(digitsSquareSum == 1) {
        						temp = 0;
        						printf(" %d",i);
        					}
        					else if(digitsSquareSum != 4){
        						temp = digitsSquareSum;
        						digitsSquareSum = 0;
        					}
        				}
        			}
        		}
        		printf("\n");
        		break;
            }
            case 6:{
        		printf("Enter a smile and cheer number:\n");
        		check = scanf(" smile: %d , cheer : %d",&smile,&cheer);
        		do {
        			temp = scanf("%*[^\n]%*c");
        		}
        		while(temp == -1);
        		while(check != 2 || smile < 1 || cheer < 1) {
        			printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
        			check = scanf(" smile: %d , cheer : %d",&smile,&cheer);
        			do {
        				temp = scanf("%*[^\n]%*c");
        			}
        			while(temp == -1);
        		}
        		printf("Enter maximum number for the festival:\n");
        		scanf(" %d",&maxNumber);
        		do {
        			temp = scanf("%*[^\n]%*c");
        		}
        		while(temp == -1);
        		while(maxNumber < 1) {
        			printf("Only positive maximum number is allowed, please try again:\n");
        			scanf(" %d",&maxNumber);
        			do {
        				temp = scanf("%*[^\n]%*c");
        			}
        			while(temp == -1);
        		}
        		for(i = 1; i <= maxNumber; i++) {
        			if(i % smile == 0 && i % cheer == 0) {
        				printf("Festival!\n");
        			}
        			else if(i % smile == 0) {
						printf("Smile!\n");
        			}
        			else if(i % cheer == 0) {
						printf("Cheer!\n");
        			}
        			else {
        				printf("%d\n",i);
        			}
        		}
              break;
            }
            case 7:{
              break;
            }
            default: printf("This option is not available, please try again.\n");
    	}
    }
	// Festival of Laughter: Prints all the numbers between 1 the given number:
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/
	printf("Thank you for your journey through Numeria!\n");
	return 0;
}
