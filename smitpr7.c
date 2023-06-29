#include<stdio.h>

void cal(){
	int a,sum,choice,x,y,sub,multi,div,mod,per;
	
	printf("press 1 for +\n");
	printf("press 2 for -\n");
	printf("press 3 for *\n");
	printf("press 4 for /\n");
	printf("press 5 for %\n");
	printf("press 0 for Exit.\n");
	
	
	do{
	printf("Enter Your Choice: ");
	    scanf("%d",&a);
	switch(a){
		
		case 1:
		printf("Enter the first number:");
		scanf("%d",&x);
		printf("Enter the second number: ");
		scanf("%d",&y);
		sum=x+y;
		printf("Addition of x & y is :%d\n",sum);
		break;
		
		case 2:
		printf("Enter the first number:");
		scanf("%d",&x);
		printf("Enter the second number: ");
		scanf("%d",&y);
		sub=x-y;
		printf("Substraction of x & y is :%d\n",sub);
		break;
		
		case 3:
		printf("Enter the first number:");
		scanf("%d",&x);
		printf("Enter the second number: ");
		scanf("%d",&y);
		multi=x*y;
		printf("Multiplication of x & y is :%d\n",multi);
		break;
		
		case 4:
		printf("Enter the first number:");
		scanf("%d",&x);
		printf("Enter the second number: ");
		scanf("%d",&y);
		div=x/y;
		printf("Division of x & y is :%d\n",div);
		break;
		
		case 5:
		printf("Enter the first number:");
		scanf("%d",&x);
		printf("Enter the second number: ");
		scanf("%d",&y);
		mod=x%y;
		printf("Modulus of x & y is :%d\n",mod);
		break;
	
		default:
			printf("Your Choice is Invalid.....");
			break;
			
		}
	}while(a != 0);
}

void main (){
	
	cal();
}
	
	
	

