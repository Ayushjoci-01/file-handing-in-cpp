#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str2;
    ifstream in("ayush.txt");
    getline(in,str2);
    cout<<str2;
}
