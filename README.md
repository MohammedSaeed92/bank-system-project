## **Bank system**

in this project there will be a main screen shows to the user as below :    
1- Balance   
2- Withdraw   
3- Deposit   
4- Transfer   
5- exit   

### user should register or login first in order to perform any transaction   

### login credintials :
* #### username : Clanguage
* #### password : 1234

# Files contents
## bank.c
contains the main function and the login/register switch which inside it we will call the desired functions   
## functions.h    
definition of functions :
* print_line()
* print_space()
* login()
* registering()
* menu()
* switches()
* deposite()
* withdraw()
* transfer()
## 1-functions.h
contains the first 4 functions mentioned above
* print_line() : which draws a line above and bellow the user wilcoming message - the line width is 140 character as per my terminal screen width 😆
* print_space() : which prints 80 space before the "Hello" before register or login
* login() : log the user in before he can do any transaction - after 3 unsuccessful tries a message will apear asking the user to try later and the program exit
* registering() : regiser a new user by entering username and a password and then logs in the new user automatilly
## 2-functions.h
contains 5 functions :
* menu() : display the transactions menu
* deposite() : increase the user's balance by the amount he enter
* withdraw() : checks the balance of the user and if it's more than the amount the user want to withdraw then it substracts the amount entered from th balance
* transfer() : ask the user for the account number that he wants to transfer to and then ask for the amount and check if the balance is more than the amount the it will substracts the amount from the balance
* switches() : call a function (that choosed by the user to perform the desired task) depending on user input

