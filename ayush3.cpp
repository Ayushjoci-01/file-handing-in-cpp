#include<iostream>
#include<fstream>
using namespace std;
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string ch="ayush joshi is my name";
    fstream out("sample.txt");
    out<<ch;
    ifstream in("sample.txt");
    getline(in,ch);
    cout<<ch;
}