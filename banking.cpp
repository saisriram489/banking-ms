#include<iostream>
using namespace std;
#include<iomanip>
class bank{
    char N[20];
    int acnumber;
    char actype[20];
    int balance;
    bool accountOpened = false;
    public:
    void openingbal();
    void deposit();
    void withdraw();
    void show();
};
void bank :: openingbal(){
    cout<<endl;cout<<"Enter Name : ";
    cin>>N;
    cout<<"Enter A/c no.: ";
    cin>>acnumber;
    cout<<"Enter A/c Type : ";
    cin>>actype;
    cout<<"ENter Opening Balance: ";
    cin>>balance;
    accountOpened = true;

}
void bank :: deposit(){
    if (!accountOpened) {
        cout << "No account has been opened. Please open an account first." << endl;
        return;
    }
    int deposit=0;
    cout<<"Enter Deposit Amount ";
    cin>>deposit;
    balance=deposit+balance;
    cout<<"Deposit balance "<<balance;
}
void bank:: withdraw(){
    if (!accountOpened) {
        cout << "No account has been opened. Please open an account first." << endl;
        return;
    }
    int withdraw;
    cout<<"Balance Amount"<<balance;
    cout<<"Enter Withdraw Amount ";
    cin>>withdraw;
    if(balance>withdraw){
        balance-=withdraw;
        cout<<"After Withdraw Balance is"<<balance;
    }
    else{
        cout<<"Not Enough Balance\n";
    }
}
void bank :: show(){
    if (!accountOpened) {
        cout << "No account has been opened. Please open an account first." << endl;
        return;
    }
    cout<<endl;
    cout<<setw(50)<<"Details"<<endl;
    cout<<setw(50)<<"Name :  "<<N<<endl;
    cout<<setw(50)<<"A/c No. : "<<acnumber<<endl;
    cout<<setw(50)<<"A/c Type : "<<actype<<endl;
    cout<<setw(50)<<"Balance : "<<balance<<endl;

}
int main(){
    bank o1;
    int choice;
    do{
    cout<<"Banking Management System"<<endl;
    cout<<endl;
    cout<<"Choice list "<<endl;
    cout<<"1)To add \n";
    cout<<"2)To Deposit \n";
    cout<<"3)To Withdraw\n";
    cout<<"4)To Display All Details\n";
    cout<<"5)Exit\n";
    cout<<"Enter your choice :-";
    cin>>choice;
    
    switch (choice){
        case 1:o1.openingbal();
        break;
        case 2:o1.deposit();
        break;
        case 3:o1.withdraw();
        break;
        case 4:o1.show();
        break;
        case 5: goto end;
        default: cout<<"Invalid Option...";

    }
    }while(1);
end:
return 0;

}
