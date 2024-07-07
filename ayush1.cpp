#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string ch="ayush joshi is my name";
    fstream out("ayush.txt");
    out<<ch;
}
