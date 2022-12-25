#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{

    ifstream newitem;

    ;
    newitem.open("numbers.txt", ios::in);

    if (newitem.is_open())
    {

        string newline;

        while (getline(newitem, newline))
        {
            cout << newline << endl;
        }
    }
}