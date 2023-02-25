#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

/**
 * print_line - a function
 * Description : it will prints a line of minus symbol to frame header
 * Return: a line of minus symbol
*/
char print_line(void)
{
	int i;

	for (i = 0; i <= 139; i++)
	{
		printf("-");
	}
}
/**
 * print_space - a function
 * Description : it wil prints spaces in order to center output
 * Return: spaces
*/
char print_space(void)
{
	int i;

	for (i = 0; i <= 61; i++)
	{
		printf(" ");
	}
}
/**
 * login - a function
 * Description : check user input and logs the uset into the system
 * Return: a welcome statement and a menu
*/
char login(void)
{
	char user[15];
	int pass;

	printf("enter your username :");
	scanf("%s", user);
	printf("enter your password :");
	scanf("%d", &pass);
	if (strcmp(user, "Mohammed") == 0)
	{
		if (pass == 1234)
		{
			print_line();
			print_space();
			printf("Welcome %s \n", user);
			print_line();
		} else
		{
			printf("Invalid password\n");
		}
	} else
	{
		printf("User %s doesn't exist\n", user);
	}
}
/**
 * registering - a function
 * registering : register a new user in the system by asking
 * to input a nusername and password
 * Return: a welcome statement and a menu
*/
char registering(void)
{
	char user[15];
	int pass;

	printf("enter a username :");
	scanf("%s", user);
	printf("enter a password :");
	scanf("%d", &pass);
	print_line();
	print_space();
	printf("Welcome %s \n", user);
	print_line();
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

			break;
		case 2:
			registering();
			break;
		default:
			printf("Invalid choice");
			break;
	}
}
