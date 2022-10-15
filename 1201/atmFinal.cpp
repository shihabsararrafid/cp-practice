#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int N = 0;

void menu()
{
    cout << "************** Main Menu *************" << endl;
    cout << "1.Open New Account" << endl;
    cout << "2.Close Old Account" << endl;
    cout << "3.Deposit Money" << endl;
    cout << "4.Withdraw Money" << endl;
    cout << "5.Check Balance" << endl;
    cout << "6.Exit" << endl;
    cout << "           Enter your option (1-6)" << endl;
}
class Account
{
    string name;
    int age;
    float Balance;
    long long acountNumber;
    long long pin;

public:
    void OpenAc(string nm, int ag, float bl, long long ac, long long pass)
    {
        name = nm;
        age = ag;
        Balance = bl;
        acountNumber = ac;
        pin = pass;
    }
    long long getAc()
    {
        return acountNumber;
    }
    void getInformation()
    {
        cout << endl;
        cout << endl;

        cout << "*******************************************" << endl;
        cout << "                     Account Holder : " << name << endl;
        cout << "                     AC No. " << acountNumber << endl;
        cout << "                     Bal : " << Balance << endl;

        cout << "*******************************************" << endl;
        cout << endl;
    }
    void depositeAmmount(float bal)
    {
        Balance += bal;
    }
    void withdrawAmount(float bal)
    {
        Balance -= bal;
    }
    float getAmount()
    {
        return Balance;
    }
    long long getPin()
    {
        return pin;
    }
};
Account ac[1000];
int searchAc(long long acc)
{
    int index = -1;
    for (int i = 0; i < N; i++)
    {
        if (ac[i].getAc() == acc)
            return i;
    }
    return -1;
}
void openAccount()
{
    string nm;
    int age;
    float balance;
    long long acNo;
    long long pass;
    cout << "Enter Name :" << endl;
    cin.ignore();
    getline(cin, nm);
    // cin >> nm;
    cout << "Enter Age :" << endl;
    cin >> age;
    cout << "Enter Deposit Amount : " << endl;
    cin >> balance;
    cout << "Enter Account Number :" << endl;
    cin >> acNo;
    cout << "Enter Password :" << endl;
    cin >> pass;
    ac[N].OpenAc(nm, age, balance, acNo, pass);
    cout << "Successfully Opened an account with ac " << acNo << endl;
}
float DepositAccount()
{
    float bal;
    cout << "          ENTER AMMOUNT TO BE DEPOSITED" << endl;
    cin >> bal;
    return bal;
}
float withdrawMoney()
{
    float bal;
    //  long int ac;
    //  cout << "Enter account Number " << endl;
    //   cin >> ac;
    cout << "          ENTER AMMOUNT TO BE WITHDRAWED " << endl;
    cin >> bal;
    return bal;
}
void showingError()
{
    cout << "\n\n"
         << endl;

    cout << "              INVALID ACCOUNT NUMBER" << endl;
    cout << "              PLEASE GIVE A VALID ACCOUNT" << endl;

    cout << "\n"
         << endl;
}
int main()
{

    while (1)
    {

        menu();
        int n;
        int index;
        cin >> n;
        long acNo;
        if (n != 6)
        {
            if (n == 1)
            {
                openAccount();
                N++;
                // return 0;
            }
            else if (n >= 2 && n <= 5)
            {
                long int acNo;
                cout << "             ENTER ACCOUNT NUMBER         " << endl;
                cin >> acNo;
                int index = searchAc(acNo);
                if (index < 0)
                {
                    // system("Color 04");
                    showingError();

                    continue;
                }
                else
                {
                    long long password;
                    cout << "          ENTER YOUR PIN            " << endl;
                    cin >> password;
                    if (password != ac[index].getPin())
                    {
                        cout << endl;
                        cout << endl;
                        cout << "YOUR PIN DIDNOT MATCH . PLEASE PROVIDE RIGHT INFORMATION " << endl;
                        cout << endl;
                        continue;
                    }
                }
                if (n == 3)
                {
                    float bal = DepositAccount();
                    ac[index].depositeAmmount(bal);
                    cout << "             Successfully Deposited Amount of " << bal << endl;
                }
                else if (n == 4)
                {

                    float bal = withdrawMoney();

                    float currBal = ac[index].getAmount();
                    if (bal > currBal)
                    {
                        cout << endl;
                        cout << "         SORRY   !!!! You cannot withdraw more than your current balance" << endl;
                        cout << endl;
                    }
                    else
                    {
                        ac[index].withdrawAmount(bal);
                        cout << "Successful withdrawal of  amount  " << bal << endl;
                    }
                }
                else if (n == 5)
                {
                    ac[index].getInformation();
                }
            }
            else
            {
                cout << "Account Number :" << endl;
                cin >> acNo;
            }
        }
        else
        {
            cout << "********** THANKS FOR BEING WITH US *********" << endl;
            return 0;
        }
    }

    return 0;
}