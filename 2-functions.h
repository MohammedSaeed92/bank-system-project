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
 * deposite - a function
 * deposite : increase the balance by amount
 * entered by user
 * @choice1: the choice of the user
 * Return: transaction choosed
*/
double deposite(double amount, double balance)
{
	int choice1;
	printf("Enter the amount you want to deposite :");
	scanf("%lf", &amount);
	balance += amount;
	printf("%.2f has been deposited your balance is : %.2f\n", amount, balance);
	menu();
	printf("Please enter choice number to continue :");
	scanf("%d", &choice1);
	switches(choice1, amount, balance);
}
/**
 * switches - a function
 * switches : check the user choice and perform
 * the transaction that choosed
 * @choice1: the choice of the user
 * Return: transaction choosed
*/
void switches(int choice1, double amount, double balance)
{
	switch (choice1)
	{
		case 1:
			printf("Your balnce is %.2f\n", balance);
			menu();
			printf("Please enter choice number to continue :");
			scanf("%d", &choice1);
			switches(choice1, amount, balance);
			break;
		case 2:
			deposite(amount, balance);
			break;
		case 5:
			break;
		default:
			printf("Invalid choice\n");
			break;
	}
}
