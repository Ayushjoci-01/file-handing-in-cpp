#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string ch;
    ofstream out("ayush.txt");
    cout<<"enter your name"<<endl;
    getline(cin,ch);
    out<<ch;
     out.close();
    fstream in("ayush.txt");
    string content;
    getline(in,content);
    cout<<"the content of the file is"<<content;

   
}