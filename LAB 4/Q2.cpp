// 2. Two-Factor Login – Friend Function
#include <iostream>
using namespace std;

class UserAccount
{
private:
    string username;
    int loginAttempts = 0;
    int accountStatus = 1;     // 1 = Active, 0 = Inactive

public:
    friend void checkAccount(UserAccount u);
};

void checkAccount(UserAccount u)
{
    string name;

    cout << "Enter Username: ";
    cin >> name;

    // Check whether this is the same account
    if (u.username == "" || u.username == name)
    {
        u.username = name;
        u.loginAttempts++;

        cout << "\n         Account Details\n";
        cout << "Username: " << u.username << endl;
        cout << "Login Attempts: " << u.loginAttempts << endl;

        if (u.loginAttempts >= 3)
        {
            u.accountStatus = 0;
            cout << "Account Status: Account Locked\n";
            return;
        }
        else
            cout << "Account Status: Account Active\n";
    }
    else
    {
        // New username → new account
        UserAccount newUser;
        newUser.username = name;
        newUser.loginAttempts = 1;

        cout << "\nNew account created.\n";
        cout << "Username: " << newUser.username << endl;
        cout << "Login Attempts: " << newUser.loginAttempts << endl;
        cout << "Account Status: Account Active\n";

        u = newUser;
    }

    char choice;
    cout << "\nDo you want to login again? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
        checkAccount(u);
}

int main()
{
    UserAccount u;
    checkAccount(u);

    return 0;
}
