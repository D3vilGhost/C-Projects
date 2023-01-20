#include <bits/stdc++.h>
#include<fstream>
using namespace std;
void newRegistration();
void login();
void forgot();

int main()
{
    cout << "\t\t\t\t----- Welcome to Login/Registeration portal -----" << endl<<endl;
    cout << "Enter 1: If you want to Register" << endl;
    cout << "Enter 2: If you want to Login " << endl;
    cout << "Enter 3: If you forgot your password " << endl;
    cout << "Enter 4: If you want to Exit! " << endl;

    int input;
    cin >> input;
    switch(input){
        case 1:
            system("cls");
            newRegistration();
            break;
        
        case 2:
            system("cls");
            login();
            break;
        
        case 3:
            system("cls");
            forgot();
            break;
        
        case 4:
            cout<<"\t\t\t\t----Thank you for using our service----"<<endl<<endl;
            break;

        default :
            system("cls");
            cout<<"\t\t\t\tPlease select from the given options !!"<<endl<<endl;
            main();
    }

}
void newRegistration()
{
    string remail,rpassword;
    cout<<endl<<endl;
    cout << "\t\t\t\t\t----Welcome to Fresh Registeration----" << endl;

    cout << "Enter your E-mail address: ";
    cin >> remail;
    cout << "Set your password: ";
    cin >> rpassword;

    string userid,pass;
    int flag=0;
    ifstream check("records.txt");
    while(check>>userid>>pass){
        if(userid==remail){
            flag=1;
            break;
        }
    }
    check.close();

    if(flag==1){
        system("cls");
        cout<<"\t\t\t\t\t ---This User ID already exists!!---"<<endl;
        cout<<"\t\t\t\t\t ---Try again with something else!!---"<<endl;
        newRegistration();
    }
    else{
        ofstream save("records.txt",ios::app);//to append in already existing records
        save<<remail<<" "<<rpassword<<endl;
        system("cls");
        cout<<"\t\t\t\tCongratulations! You are now connected with us!!"<<endl<<endl;
        cout<<endl;
        main();
    }
    
}

void login()
{
    int flag=0;
    string id,pass,email,password;
    cout << "\t\t\t\t----Login to your account----" <<endl<<endl;
    cout << "Enter your E-mail address: ";
    cin >> email;
    cout << "Enter your password: ";
    cin >> password;
    
    ifstream input("records.txt");
    while(input>>id>>pass){
        if(id==email && pass==password){
            flag=1;
            break;
        }
    }
    input.close();
    system("cls");

    if(flag==1){
        cout<<"\t\t\t\t----- Login was Successfull!----"<<endl;
        cout<<"\t\t\t\t----- Thanks for logging in :)----"<<endl<<endl<<endl;
        main();
    }
    else{
        cout<<"\t\t\t\t\t!!!!!-- Login Error --!!!!!"<<endl;
        cout<<"\t\t\t\tPlease check your Username or password!!"<<endl<<endl<<endl;
        main();
    }

}

void forgot(){
    int flag=0;
    string userid,id,pass;
    system("cls");
    cout<<"\t\t\t\t----You forgot your password?...No worries!----"<<endl;
    cout<<"Enter your userid: ";
    cin>>userid;
    
    ifstream check("records.txt");
    while(check>>id>>pass){
        if(userid==id){
            flag=1;
            break;
        }
    }
    check.close();

    if(flag==1){
        cout<<endl;
        cout<<"Your account is found!"<<endl;
        cout<<"Your password is: "<<pass<<endl;
        main();
    }
    else{
        system("cls");

        cout<<"\t\t\t\t----Sorry! Your account was not found :( ----"<<endl<<endl;
        main();
    }
}
