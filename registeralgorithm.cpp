#include <iostream>
#include<fstream>
using namespace std;

bool logIn(){
    string userName,password,un,pw;

    cout<<"enter your name: "; cin>>userName;
    cout<<"enter your password: "; cin>>password;

    ifstream read(userName+".txt");
    getline(read,un);
    getline(read,pw);

    if (un==userName && pw==password)
    {
        return true;
    }
    else return false;
    


    
}


int main(){
    int choice;

    cout<<"1: Register ,2: login, your choise is:";cin>>choice;

    if (choice==1)
    {
        string userName,password;
        cout<<"enter your username:";cin>>userName;
        cout<<"enter your password:";cin>>password;

        ofstream  file;
        file.open(userName+".txt");
        file<<userName<<endl<<password;
        file.close();
        main();
    }
    else if(choice==2){
        bool status=logIn();
        if (!status)
        {
            cout<<"false login"<<endl;
            system("pause");
            return 0;
        }
        else{
            cout<<"succesfully logged in "<<endl;
            system("pause");
            return 1;
        }
        
    }
    
    
}