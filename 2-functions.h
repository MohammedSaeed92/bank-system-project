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
 * @amount: the amount entered by user
 * @balance: the user current balance
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
 * withdraw - a function
 * withdraw : decrease the balance by amount
 * entered by user
 * @amount: the amount entered by user
 * @balance: the user current balance
 * Return: transaction choosed
*/
double withdraw(double amount, double balance)
{
	int choice1;
	if (balance == 0)
	{
		printf("Your balance is %.2lf\n", balance);
		menu();
		printf("Please enter choice number to continue :");
		scanf("%d", &choice1);
		switches(choice1, amount, balance);
	}
	printf("Enter the amount you want to withdraw :");
	scanf("%lf", &amount);
	if (amount <= balance)
	{
		balance -= amount;
		printf("You have successfully withdrawn %.2lf", amount);
		printf(" Your current balance is %.2lf\n", balance);
		menu();
		printf("Please enter choice number to continue :");
		scanf("%d", &choice1);
		switches(choice1, amount, balance);
	} else
	{
		printf("You don't have sufficient balance\n");
	menu();
	printf("Please enter choice number to continue :");
	scanf("%d", &choice1);
	switches(choice1, amount, balance);
	}
}
/**
 * transfer - a function
 * transfer : transfer the amount entered by user
 * to the entered account
 * @amount: the amount entered by user
 * @balance: the user current balance
 * Return: transaction choosed
*/
double transfer(double amount, double balance)
{
	int choice1;
	double account;
	if (balance == 0)
	{
		printf("Your balance is %.2lf\n", balance);
		menu();
		printf("Please enter choice number to continue :");
		scanf("%d", &choice1);
		switches(choice1, amount, balance);
	}
	printf("Enter the account you want to transfer to :");
	scanf("%lf", &account);
	printf("Enter the amount you want to transfer :");
	scanf("%lf", &amount);
	if (amount <= balance)
	{
		balance -= amount;
		printf("You have successfully transfered %.2lf", amount);
		printf(" to the account %.0lf", account);
		printf(" Your current balance is %.2lf\n", balance);
		menu();
		printf("Please enter choice number to continue :");
		scanf("%d", &choice1);
		switches(choice1, amount, balance);
	} else
	{
		printf("You don't have sufficient balance\n");
		menu();
		printf("Please enter choice number to continue :");
		scanf("%d", &choice1);
		switches(choice1, amount, balance);
	}
}
/**
 * switches - a function
 * switches : check the user choice and perform
 * the transaction that choosed
 * @choice1: the choice of the user
 * @amount: the amount entered by user
 * @balance: the user current balance
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
		case 3:
			withdraw(amount, balance);
			break;
		case 4:
			transfer(amount, balance);
			break;
		case 5:
			break;
		default:
			printf("Invalid choice\n");
			break;
	}
}
