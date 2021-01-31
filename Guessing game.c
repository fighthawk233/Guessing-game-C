#include<stdio.h>
int main(void)
{
	int guessnumber = 6;
	int number;
	_Bool isguessed = 0;
	int counter = 1;
	printf( "I have already input an int from 1 to 10,you guess it\n" );
	while (isguessed ==0 && counter <= 3)
	{
		printf("Enter a number ");
		scanf("%d",&number);
		if (number == 6)
			isguessed = 1;
		else if (number > 6 && counter < 3)
			printf("Wrong,a bit bigger\n");
		else if (number < 6 && counter < 3)
			printf("Wrong,a bit smaller\n"); 
		if (isguessed == 0 && 3 - counter > 1)
			printf("You have %d chances\n", 3 - counter);
		else if (isguessed == 0 && 3 - counter == 1)
			printf("You only have 1 chance\n");
		else if (isguessed == 0 && 3 - counter == 0)
			printf("You lose\n");
		else
			printf("Congratulations\n");
		counter++;
	}
	system("pause");
	return 0;
}