#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("Data/DanhSachTaiKhoan.txt");
    if (!file)
    {
        cerr << "Khong mo duoc file tai khoan!\n";
        exit(1);
    }

    char ch;
    string line;
    string field;
    string user;
    string password;

    cout << "tai khoan:\n";
    while ((ch = getch()) != 13)
    {
        if (ch >= 'A' && ch <= 'Z' || ch <= '0' && ch >= '1')
        {
            cin.putback(ch);
            cout << ch;
            getline(cin, user);
        }
    }
    cout << "mat khau:\n";
    while ((ch = getch()) != 13)
    {
        if (ch >= 'A' && ch <= 'Z' || ch <= '0' && ch >= '1')
        {
            cin.putback(ch);
            cout << ch;
            getline(cin, password);
        }
    }

    cout << "user: " << user << '\n';
    cout << "pass: " << password << '\n';
    int pos = 0;
    bool check = 0;
    while (getline(file, line))
    {
        // while((pos = line.find("|")) != string::npos)
        pos = line.find("|");
        if (user == line.substr(0, pos))
        {
            line.erase(0, pos + 1);
            pos = line.find("|");
            if (password == line.substr(0, pos))
            {
                check = 1;
            }
        }
    }

    cout << (check ? "1" : "0") << endl;

    return 0;
}