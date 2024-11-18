// bai13_luythua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "luythua\n";
    int so, luythua = 1,mu;
    cin >> mu;
    cin >> so;
    for (int i = 1; i < mu; i++)
    {
        luythua*= so;
    }
    cout << luythua * so;
    return 0;
}


