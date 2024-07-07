#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream in("input.txt");
    if(!in.is_open())
    {
        cout<<"file not created"<<endl;
        return 1;

    }
    int worldcount=0;
    string world;

    while(in>>world)
    {
        worldcount++;

    }
    ifstream out("output.txt");
    if(!out.is_open())
    {
        cout<<"file not created"<<endl;
        return 1;

    }
    out<<"count"<<
}