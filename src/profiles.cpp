#include <iostream>
#include "../headers/profiles.h"
#include <fstream>
#include <windows.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::ofstream;
using std::ios;

void profiles(){
    ofstream file("txt/profiles.txt", ios::app);
    string username;
    int age;
    string gender;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Select gender [M/F]: ";
    cin>>gender;
    cout<<"[";
    for(int x=0;x<20;x++){
        cout<<"=";
        Sleep(500);
    }
    file<<username<<"|"<<age<<"|"<<gender<<endl;
    cout<<"]"<<endl;
    cout<<"Profile created!";

/*

    ofstream file("profiles.txt", ios::app);
    string name;
    int age;
    cin>>name;
    file<<name<<endl;
*/
}