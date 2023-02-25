#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
#include "1-functions.h"

/**
 * menu - a function
 * menu : display the transactions menu
 * Return: a menu of transactions
*/
void menu(void)
{
	printf(" 1. Balance\n 2. Deposite\n 3. Withdraw\n");
	printf(" 4. Transfer\n 5. Exit\n");
}
/**
 * main - Entry point
 * Description: we will use switch() to enable different options each
 * one will perform a specific task of the bank system operations
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*int choice1;*/
	int choice;
	/*double amount, balance;*/

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

			break;
		case 2:
			registering();
			menu();
			break;
		default:
			printf("Invalid choice");
			break;
	}
}
