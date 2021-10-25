#include <conio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
using namespace std;
class User
{
public:
    int pin=0,amount=0,inputPassword=0;
    string username,password,str1,bale,name;
    string inputUsername;
    long long mobile_No=0,mob=0,balance=0,bal=0;
    string str2 = "1234";
    string str3 = "12345";
    string str4 = "12346";

    void login()
    {
        system("cls");
        cout << "->CURRENTLY ATM IS IN BETA TESTING PHASE" << endl
             << "->CAN ONLY BE USED FOR TESTING & DEMONSTRATION" << endl;
        cout << endl
             << "                     ********************* Welcome to ATM *********************                     " << endl;
        cout << " ->ENTER YOUR ACCOUNT NO :";
        cin >> inputUsername;
        string str1 = inputUsername;
        cout << " ->ENTER PIN :";
        cin >> inputPassword;
        check();
        pin_a();
    }
    void check()
    {
        string str1 = inputUsername;

        string str2 = "1234";
        string str3 = "12345";
        string str4 = "123456";
        int balance = 0;
        long long mobile = 0;

        if (str1 == str2)
        {

            ifstream fileok("./1234/pin.txt");
            while (fileok >> pin)
            {
                bale = pin;
            }

            name = "Priyanshu";
            ifstream file_a("./1234/balance.txt");
            while (file_a >> balance)
            {
                bal = balance;
            }
            file_a.close();
            ifstream file_m("./1234/mob.txt");
            while (file_m >> mobile)
            {
                mob = mobile;
            }
            file_m.close();
        }
        else if (str1 == str3)
        {
            ifstream fileok("./12345/pin.txt");
            while (fileok >> pin)
            {
                bale = pin;
            }
            name = "Praman";
            ifstream file_a("./12345/balance.txt");
            while (file_a >> balance)
            {
                bal = balance;
            }
            file_a.close();
            ifstream file_m("./12345/mob.txt");
            while (file_m >> mobile)
            {
                mob = mobile;
            }
            file_m.close();
        }
        else if (str1 == str4)
        {
            ifstream fileok("./123456/pin.txt");
            while (fileok >> pin)
            {
                bale = pin;
            }
            name = "Raviraj";
            ifstream file_a("./123456/balance.txt");
            while (file_a >> balance)
            {
                bal = balance;
            }
            file_a.close();
            ifstream file_m("./123456/mob.txt");
            while (file_m >> mobile)
            {
                mob = mobile;
            }
            file_m.close();
        }
    }
    int pin_a()
    {
        if (inputPassword == pin)
        {
        }
        else
        {
            cout << "WRONG PIN ENTERD!!!" << endl
                 << "->TRY AGAIN" << endl;
            _getch();
            login();
        }
        system("cls");
    }
    void pin__update()
    {
        int pin_old, pin_new;
        cout << "ENTER OLD PIN :";
        cin >> pin_old;
        cout << "ENTER NEW PIN :";
        cin >> pin_new;
        if (pin_new > 999 && pin_new < 9999)
        {
            if (inputUsername == str2)
            {
                if (pin_old == pin)
                {
                    ofstream fileout;
                    fileout.open("./1234/pin.txt");
                    fileout << pin_new;
                    cout << endl
                         << "NEW PIN IS  :" << pin_new;
                    fileout.close();
                    _getch();
                }
            }
            else if (inputUsername == str3)
            {
                if (pin_old == pin)
                {
                    ofstream fileout;
                    fileout.open("./12345/pin.txt");
                    fileout << pin_new;
                    cout << endl
                         << "NEW PIN IS  :" << pin_new;
                    fileout.close();
                    _getch();
                }
            }
            else if (inputUsername == str4)
            {
                if (pin_old == pin)
                {
                    ofstream fileout;
                    fileout.open("./123456/pin.txt");
                    fileout << pin_new;
                    cout << endl
                         << "NEW PIN IS  :" << pin_new;
                    fileout.close();
                    _getch();
                }
            }
        }
        else
            cout << "->WRONG PIN ENTERED  /OR/" << endl
                 << "->PIN SHOULD OF EXACTLY 4 DIGITS";
    }
    string getAccountNo()
    {
        return inputUsername;
    }
    string getName()
    {
        return name;
    }
    double getBalance()
    {
        return bal;
    }
    long int getMobileNo()
    {
        return mob;
        _getch();
    }
    int cashWithDraw()
    {
        int amount = 0;
        int num = 0;
        cout << "ENTER AMOUNT YOU WANT TO WITHDRAW : ";
        cin >> amount;
        if (amount > 0 && amount < bal)
        {
            bal -= amount;
            cout << endl
                 << "***************PLEASE COLLECT YOUR CASH**********************" << endl;
            ofstream fileout;
            fileout.open("./1234/balance.txt");
            fileout << bal;
            cout << endl
                 << "AVAILABLE BALANCE :" << bal;
            fileout.close();
            _getch();
        }
        else
        {
            cout << endl
                 << "INVALID INPUT OR INSUFFICIENT BALANCE";
            _getch();
        }
        return 0;
    }
    int addbalance(int add_a)
    {
        cout << add_a << endl;
        bal += add_a;
        cout << "YOUR UPDATED BALANCE IS : " << bal << endl;
        ofstream fileout;
        fileout.open("./1234/balance.txt");
        fileout << bal;
        fileout.close();
        _getch();
    }
    long long setMobile()
    {
        long long mob_prev, mob_new, star;
        cout << "ENTER OLD MOBILE NUMBER :";
        cin >> mob_prev;
        cout << "ENTER NEW MOBILE NUMBER :";
        cin >> mob_new;
        if (mob_new > 999999999 && mob_new < 9999999999)
        {
            if (inputUsername == str2)
            {
                if (mob_prev == mob)
                {
                    mob = mob_new;
                    ofstream fileout;
                    fileout.open("./1234/mob.txt");
                    fileout << mob;
                    cout << endl
                         << "NEW MOBILE NUMBER IS  :" << mob;
                    fileout.close();
                    _getch();
                }
            }
            else if (inputUsername == str2)
            {
                if (mob_prev == mob)
                {
                    mob = mob_new;
                    ofstream fileout;
                    fileout.open("./1234/mob.txt");
                    fileout << mob;
                    cout << endl
                         << "NEW MOBILE NUMBER IS  :" << mob;
                    fileout.close();
                    _getch();
                }
            }
            else if (inputUsername == str2)
            {
                if (mob_prev == mob)
                {
                    mob = mob_new;
                    ofstream fileout;
                    fileout.open("./1234/mob.txt");
                    fileout << mob;
                    cout << endl
                         << "NEW MOBILE NUMBER IS  :" << mob;
                    fileout.close();
                    _getch();
                }
            }
        }
        else
            cout << "->OLD MOBILE ENTERED IS WRONG  /OR/" << endl
                 << "->NEW MOBILE SHOULD BE OF 10 DIGITS";
    }
    void brach()
    {
        string pin;
        cout << "ENTER PIN CODE OR NAME OF CITY : ";
        cin >> pin;
        if (pin == "452001" || pin == "indore" || pin == "Indore" || pin == "INDORE")
        {
            cout << endl
                 << "1. SAPNA SANGEETA";
            cout << endl
                 << "2. RANJIT HANUMAN";
            cout << endl
                 << "3. VIJAY NAGR";
        }
        else if (pin == "462001" || pin == "bhopal" || pin == "Bhopal" || pin == "BHOPAL")
        {
            cout << endl
                 << "1. CM OFFICE";
            cout << endl
                 << "2. M.P NAGAR";
            cout << endl
                 << "3. RAISEN ROAD";
        }
        else
            cout << "CURRENTLY THERE IS NO BRACH THERE , SORRY FOR INCONVINIENCE CAUSED :|";
    }
    void brach_n()
    {
        cout << "->NEAREST BRACH IS 50 METERS FROM HERE " << endl
             << "->Infront Of Apna Sweets , Sapna Sangeeta" << endl;
    }
    void FD()
    {
        int fd_a;
        time_t my_time = time(NULL);
        cout << "->ENTER AMOUNT YOU WANT TO CREAT FD OF (MINMUM AMOUNT IS 25,0000) :  ";

        cin >> fd_a;
        if (fd_a >= 25000)
        {
            // cout <<"sucess";
            ofstream fileout_f("fd.txt", std::ios_base::app);
            fileout_f << "ACCOUNT NUMBER : " << str1 << endl
                      << "AMOUNT :  " << fd_a << endl
                      << ctime(&my_time) << endl;
            cout << "FD CREATED SUCESFULLY :) " << endl
                 << "FD DEATILS: " << endl
                 << "ACCOUNT NUMBER : " << str1 << endl
                 << "AMOUNT : " << fd_a << endl
                 << ctime(&my_time) << endl;
            fileout_f << "//////////////////////////////////////////////////////////////" << endl;
        }
        else
        {
            cout << "ENTER MIN OF 25000";
        }
    }
    void FD_s()
    {
        string search, line_1;
        search = "Account Number : " + str1;
        int offset;
        ifstream file;
        file.open("fd.txt");
        if (file.is_open())
        {
            bool found = false;
            if (file.is_open())
            {
                while (getline(file, line_1) && !found)
                {
                    if (line_1.compare(search) == 0)
                    {
                        found = true;
                    }
                }
                file.close();
                if (found)
                {
                    cout << "*********************** FD  Found *******************" << '\n';
                }
                else
                {
                    cout << "\nNO FD FOUND!\n";
                }
            }
        }
        cout << "->TO FIND MORE DETAILS ABOUT YOUR FD\n->OR TO BREAK YOUR FD PLEASE VISIT NEAREST BRANCH" << endl;
        brach_n();
    }
};
int main()
{
    system("cls");
    int choice = 0;
    int add;
    User user1;
    long begin, end, newMobileNo, oldMobileNo;
    user1.login();
    do
    {
        system("cls");
        do
        {
            int amount = 0;

            system("cls");
            cout << "->CURRENTLY ATM IS IN BETA TESTING PHASE" << endl
                 << "->CAN ONLY BE USED FOR TESTING & DEMONSTRATION" << endl;
            cout << endl
                 << "          ********** WELCOME TO ATM **********" << endl;
            cout << endl
                 << "SELECT OPTIONS ";
            cout << endl
                 << "1. SHOW USER DETAILS";
            cout << endl
                 << "2. CHECK BALANCE";
            cout << endl
                 << "3. CASH WITHDRAW";
            cout << endl
                 << "4. ADD BALANCE";
            cout << endl
                 << "5. UPDATE MOBILE NO.";
            cout << endl
                 << "6. CHECK MOBILE NUMBER";
            cout << endl
                 << "7. NEAREST BANK BRANCH";
            cout << endl
                 << "8. FIND BANK BRANCH AT DIFFRENT LOCATION";
            cout << endl
                 << "9. CREAT FD";
            cout << endl
                 << "10. CHECK FOR EXESTING  FD";
            cout << endl
                 << "11. CHANGE ATM PIN";
            cout << endl
                 << "0. EXIT" << endl
                 << endl;
            cout << "->PRESS ANY SERIAL NUMBER FROM THE ABOVE OPTIONS :  ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << endl
                     << "******** USER DETAILS ARE :- ";
                cout << endl
                     << "-> ACCOUNT NO : " << user1.getAccountNo();
                cout << endl
                     << "-> NAME       : " << user1.getName();
                cout << endl
                     << "-> BALANCE    : " << user1.getBalance();
                cout << endl
                     << "-> MOBILE NO. : " << user1.getMobileNo();
                _getch();
                break;
            case 2:
                cout << endl
                     << "->YOUR ACCOUNT BALANCE IS :" << user1.getBalance();
                _getch();
                break;
            case 3:
                user1.cashWithDraw();
                break;
            case 4:
                cout << "->ENTER AMOUNT YOU WANT TO ADD ADD : ";
                cin >> add;
                user1.addbalance(add);
                _getch();
                break;
            case 5:
                user1.setMobile();
                _getch();
                break;

            case 6:
                cout << "->YOUR MOBILE NUMBER IS :" << user1.getMobileNo();
                _getch();
                break;

            case 7:
                user1.brach_n();
                _getch();
                break;
            case 8:
                user1.brach();
                _getch();
                break;

            case 9:
                cout << "->INTREST RATE OF FD ID 6.5% PER ANNUM FOR 1 YEAR  :)" << endl;
                user1.FD();
                _getch();
                break;
            case 10:
                user1.FD_s();
                _getch();
                break;
            case 11:
                user1.pin__update();
                _getch();
                break;
            case 0:
                exit(0);
                _getch();
            }
        } while (1);
    } while (1);
    return 0;
}
