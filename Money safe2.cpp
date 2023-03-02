#include <iostream>
#include <string>
using namespace std;

class Account
{

private:
    string name;
    string currency;
    int balance{0};

public:
    Account(string accountName, int initialBalance)
    {

        name = accountName;
        if (initialBalance > 0)
        {
            balance = initialBalance;
        }
    }
  
    int getBalance() const
    {
        return balance;
    }
    string getName()
    {
        return name;
    }
    void withdraw(int amount)
    {
        balance = balance - amount;
    }

    void transfer(Account &acct, int amt)
    {
        balance = balance - amt;
        acct.balance = acct.balance + amt;
    }

    void newDeposit(string curr, int amt)
    {
        currency = curr;
        int temp, temp2;
        cout << "enter exchange rate for " << curr << endl;
        cin >> temp;
        temp2 = amt * temp;
        balance += temp2;
    }
};
int main()
{
    
    Account account1(" Musa", 0);
    Account account2(" Omar", 0);
    
    cout << "Initially Account1:" << account1.getName() << " balance is PKR " << account1.getBalance() << endl;
	cout << "Initially Account2:" << account2.getName() << " balance is PKR " << account2.getBalance() << endl;

	cout<<"---------------------------------------------------------------------------"<<endl;
	
    string curr1;
    int amt1;
    cout << "Enter currency in which you want to deposit money in Account 1: " << endl;
    cin >> curr1;
    cout << "Enter amount now : " << endl;
    cin >> amt1;

    account1.newDeposit(curr1, amt1);
    cout << "Account 1 balance after new deposit = " << account1.getBalance() << endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
    cout << "Enter currency in which you want to deposit money for account 2 : " << endl;
    cin >> curr1;
    cout << "Enter amount now : " << endl;
    cin >> amt1;
    
    account2.newDeposit(curr1, amt1);
    cout << "Account 2 balance after new deposit = " << account2.getBalance() << endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
 

    cout << "Enter amount to withdraw from account 1 = " << endl;
    int temp3;
    cin >> temp3;
    account1.withdraw(temp3);
    cout << "New balance after withdrawing is PKR= " << account1.getBalance() << endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
    
	cout << "Enter amount to withdraw from account 2 = " << endl;
    cin >> temp3;
    account2.withdraw(temp3);
    cout << "New balance after withdrawing is PKR= " << account2.getBalance() << endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
    
    cout << "Account1: " << account1.getName() << " balance is PKR " << account1.getBalance() << endl;
	cout << "Account2: " << account2.getName() << " balance is PKR " << account2.getBalance() << endl;
   
    cout<<"---------------------------------------------------------------------------"<<endl;
   
    cout<<"Enter '1' to transfer money from account 1 to 2"<<endl;
	cout<<"Enter '2' to transfer money from account 2 to 1"<<endl;
    int t;
	cin>>t;
	cout<<endl;
	if(t==1){
		
		  int m;
		  cout<<"Enter amount(PKR):";
		  cin>>m;
		  cout<<endl;
		  account1.transfer(account2, m);
    	  int x = account1.getBalance();
    	  int y = account2.getBalance();
  	      cout << "Account 1 balance after transfer = " << x << "\nAccount 2 balance after transfer = " << y << endl;
	} 
	else if(t==2){
		
		  int m;
		  cout<<"Enter amount(PKR):";
		  cin>>m;
		  cout<<endl;
		  account2.transfer(account1, m);
          int x = account2.getBalance();
          int y = account1.getBalance();
          cout << "Account 2 balance after transfer = " << x << "\nAccount 1 balance after transfer = " << y << endl;
	}

    

    return 0;
}