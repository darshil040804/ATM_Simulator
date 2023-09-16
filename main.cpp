#include <iostream>
#include <string>

using namespace std;

/* Mini Project - ATM
   -> Check Balance
   -> Cash withdraw
   -> User Details
   -> Update Mobile No.
*/

class ATM {
private:
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;

public:
    void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a) {
        account_No = account_No_a;
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_No = mobile_No_a;
    }

    long int getAccountNo() {
        return account_No;
    }

    string getName() {
        return name;
    }

    int getPIN() {
        return PIN;
    }

    double getBalance() {
        return balance;
    }

    string getMobileNo() {
        return mobile_No;
    }

    void setMobile(string mob_prev, string mob_new) {
        if (mob_prev == mobile_No) {
            mobile_No = mob_new;
            cout << endl << "Successfully Updated Mobile no." << endl;
        }
        else {
            cout << endl << "Incorrect !!! Old Mobile no" << endl;
        }
    }

    void cashWithDraw(int amount_a) {
        if (amount_a > 0 && amount_a < balance) {
            balance -= amount_a;
            cout << endl << "Please Collect Your Cash" << endl;
            cout << "Available Balance: " << balance << endl;
        }
        else {
            cout << endl << "Invalid Input or Insufficient Balance" << endl;
        }
    }
};

int main() {
    int choice = 0, enterPIN;
    long int enterAccountNo;

    ATM user1;
    user1.setData(1234567, "John", 1111, 74000.00, "5173334444");

    do {
        cout << endl << "****Welcome to ATM*****" << endl;
        cout << endl << "Enter Your Account No: ";
        cin >> enterAccountNo;
        cout << endl << "Enter PIN: ";
        cin >> enterPIN;

        if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN())) {
            do {
                int amount = 0;
                string oldMobileNo, newMobileNo;

                cout << endl << "**** Welcome to ATM *****" << endl;
                cout << endl << "Select Options: " << endl;
                cout << "1. Check Balance" << endl;
                cout << "2. Cash withdraw" << endl;
                cout << "3. Show User Details" << endl;
                cout << "4. Update Mobile no." << endl;
                cout << "5. Exit" << endl;
                cin >> choice;

                switch (choice) {
                case 1:
                    cout << endl << "Your Bank balance is: " << user1.getBalance() << endl;
                    break;

                case 2:
                    cout << endl << "Enter the amount: ";
                    cin >> amount;
                    user1.cashWithDraw(amount);
                    break;

                case 3:
                    cout << endl << "*** User Details are :- " << endl;
                    cout << "-> Account no: " << user1.getAccountNo() << endl;
                    cout << "-> Name: " << user1.getName() << endl;
                    cout << "-> Balance: " << user1.getBalance() << endl;
                    cout << "-> Mobile No.: " << user1.getMobileNo() << endl;
                    break;

                case 4:
                    cout << endl << "Enter Old Mobile No.: ";
                    cin >> oldMobileNo;
                    cout << endl << "Enter New Mobile No.: ";
                    cin >> newMobileNo;
                    user1.setMobile(oldMobileNo, newMobileNo);
                    break;

                case 5:
                    exit(0);

                default:
                    cout << endl << "Enter Valid Data !!!" << endl;
                }
            } while (1);
        }
        else {
            cout << endl << "User Details are Invalid !!! " << endl;
        }
    } while (1);

    return 0;
}
