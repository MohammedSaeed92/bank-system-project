#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double balance = 0;
double amount;
int choice1;
int retry = 1;
#include "functions.h"
#include "1-functions.h"
#include "2-functions.h"

/**
 * main - Entry point
 * Description: we will use switch() to enable different options each
 * one will perform a specific task of the bank system operations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;

	print_space();
	printf("Hello\n");
	printf("1.login\n2.register\n");
	printf("Please enter choice number to continue :");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			login();
			menu();
			printf("Please enter a number for transaction :");
			scanf("%d", &choice1);
			switches(choice1);
			break;
		case 2:
			registering();
			menu();
			printf("Please enter a number for transaction :");
			scanf("%d", &choice1);
			switches(choice1);
			break;
		default:
			printf("Invalid choice");
			break;
	}
}
