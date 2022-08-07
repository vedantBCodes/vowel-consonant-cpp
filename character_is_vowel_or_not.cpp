#include<iostream>
using namespace std;
switch_case()
{
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<ch<<" is a vowel"<<endl;
        break;
    default:
        cout<<ch<<" is a consonant"<<endl;
    }
}
if_else()
{
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
       cout<<ch<<" is a vowel:";
    else
        cout<<ch<<" is a consonant:";
}
int main()
{
    switch_case();
    if_else();
    return 0;
}
