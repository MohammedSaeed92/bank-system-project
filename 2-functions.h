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
 * switches - a function
 * switches : check the user choice and perform
 * the transaction that choosed
 * @choice1: the choice of the user
 * Return: transaction choosed
*/
void switches(int choice1)
{
	switch (choice1)
	{
		case 1:
			printf("Your balnce is %f\n", balance);
			menu();
			printf("Please enter choice number to continue :");
			scanf("%d", &choice1);
			switches(choice1);
			break;
		case 2:
			printf("Enter the amount to Deposite :");

			break;
		default:
			printf("Invalid choice\n");
			break;
	}
}
