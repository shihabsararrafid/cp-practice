#include <iostream>
#include <string>
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

public:
    void OpenAc(string nm, int ag, float bl, long long ac)
    {
        name = nm;
        age = ag;
        Balance = bl;
        acountNumber = ac;
    }
    long long getAc()
    {
        return acountNumber;
    }
    void getInformation()
    {
        cout << "AC No. " << acountNumber << endl;
        cout << "Bal : " << Balance << endl;
    }
    void depositeAmmount(float bal)
    {
        Balance += bal;
    }
    void withdrawAmount(float bal)
    {
        Balance -= bal;
    }
};
Account ac[1000];
void openAccount()
{
    string nm;
    int age;
    float balance;
    long long acNo;
    cout << "Enter Name :" << endl;
    getline(cin, nm);
    // cin >> nm;
    cout << "Enter Age :" << endl;
    cin >> age;
    cout << "Enter Deposit Amount : " << endl;
    cin >> balance;
    cout << "Enter Account Number " << endl;
    cin >> acNo;
    ac[N].OpenAc(nm, age, balance, acNo);
    cout << "Successfully Opened an account with ac " << acNo << endl;
}
float DepositAccount()
{
    float bal;

    cout << "Enter amount " << endl;
    cin >> bal;
    return bal;
    // cout << "Successfully deposited Amount" << endl;
    //  ac[N].OpenAc(nm, age, balance, acNo);
}
float withdrawMoney()
{
    float bal;
    long int ac;
    cout << "Enter account Number " << endl;
    cin >> ac;
    cout << "Enter amount to be deposited " << endl;
    cin >> bal;
    return bal;
}
int searchAc(long long acc)
{
    int index = -1;
    for (int i = 0; i < N; i++)
    {
        if (ac[i].getAc() == acc)
            return i;
    }
    return -1LL;
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
            else if (n == 3)
            {
                long int ac;
                cout << "Enter account Number " << endl;
                cin >> ac;
                //  float bal = DepositAccount();
                //  ac[N].depositeAmmount(bal);
                float bal;

                cout << "Enter amount " << endl;
                cin >> bal;

                cout << "Successfully Depositede Amount of " << bal << endl;
            }
            else if (n == 4)
            {
                float bal = withdrawMoney();
                ac[N].withdrawAmount(bal);
                cout << "Successfully withdrawed amount" << endl;
            }
            else if (n == 5)
            {
                ac[N].getInformation();
            }
            else
            {
                cout << "Account Number :" << endl;
                cin >> acNo;
            }
        }
        else
        {
            cout << "Thanks for being with us" << endl;
            return 0;
        }
    }

    return 0;
}