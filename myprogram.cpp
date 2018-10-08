#include <iostream>
#include <locale.h>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char Option;
	float Salary, NewSalary;
	printf("Options:\n");
	printf("1 - New salary\n");
	printf("2 - Vacation\n");
	printf("3 - Thirteen first salary\n");
	printf("4 - Quit\n");
    printf("Choose one option\n");
    scanf("%d", &Option);
    	switch (Option)
    	{
    	case 1:
    		printf("How much is your salary?\n");
    		scanf("%f",Salary);
    			if ((Salary > 0) and (Salary <= 350))
    				NewSalary = ((Salary/100)*15)
				;
				if ((Salary > 350) and (Salary <= 600))
					NewSalary = ((Salary/100)*10)
				;
				if (Salary > 600)
					NewSalary = ((Salary/100)*5)
				;
			printf("Your new salary is $ \n", NewSalary);
			break;
		case 2:
			printf("oi");
			break;
        }
    	
	return 0;
}
