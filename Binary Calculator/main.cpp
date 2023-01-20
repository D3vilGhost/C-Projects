#include<bits/stdc++.h>
using namespace std;
 
int main(){
    cout<<"\t\t\t\t ---- Welcome to Binary Calculator ---- "<<endl<<endl;

    cout<<"Enter 1: If You want AND of two numbers"<<endl;
    cout<<"Enter 2: If You want OR of two numbers"<<endl;
    cout<<"Enter 3: If You want XOR of two numbers"<<endl;
    cout<<"Enter 4: If You want NOT of a numbers"<<endl;
    cout<<"Enter 5: If You want to Exit"<<endl;

    char input;
    cin>>input;
    long long int a,b,d;
    switch(input){
        case '1':
            system("cls");
            cout<<"\t\t\t\t- You have Choosed AND Operation! -"<<endl<<endl;
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            system("cls");
            cout<<endl;
            d=a&b;
            cout<<"AND of "<<a<<" & "<<b<<" is : "<< d <<endl<<endl;
            main();
            break;
        case '2':
            system("cls");
            cout<<"\t\t\t\t- You have Choosed OR Operation! -"<<endl<<endl;
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            system("cls");
            cout<<endl;
            d=a|b;
            cout<<"OR of "<<a<<" & "<<b<<" is : "<< d <<endl<<endl;
            main();

            break;
        case '3':
            system("cls");
            cout<<"\t\t\t\t- You have Choosed XOR Operation! -"<<endl<<endl;
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            system("cls");
            cout<<endl;
            d=a^b;
            cout<<"XOR of "<<a<<" & "<<b<<" is : "<< d <<endl<<endl;
            main();

            break;
        case '4':
            system("cls");
            cout<<"\t\t\t\t- You have Choosed NOT Operation! -"<<endl<<endl;
            cout<<"Enter the Number: ";
            cin>>a;
            system("cls");
            cout<<endl;
            d=~a;
            cout<<"NOT of "<<a<<" is : "<< d <<endl<<endl;;
            main();
            break;
        case '5':
            system("cls");
            break;
        default:
            system("cls");
            cout<<"\t\t\t\t--! Please Choose from given Options !--"<<endl<<endl;
            main();
            break;
    }
return 0;
}