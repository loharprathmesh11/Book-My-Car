#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;

class car;
class Bill
{
    int rate[7];
    public:
    void setdata(){
    rate[0]=10;
    rate[1]=15;
    rate[2]=20;
    rate[3]=25;
    rate[4]=30;
    rate[5]=35;
    rate[6]=40;
    }
    friend void Kharcha(Bill,car,int);
};

class locatiion
{  
    public:
    char pick[100];
    char drop[100];
};

class car: public locatiion     // Class Car
{
    int distance;
    public:
    int dis;
    int z;
    int choice ,p , b , c , t ;
    void recommend ();
    int all_details();
    void enquiry();
    int rent();
    int brentals();
    int breserve();
    int bintercity();
    friend void Kharcha(Bill,car,int);
    void dist(){
        cout<<"Enter distance to be travelled\n";
        cin>>dis;
        distance = dis;
    }
    
    void show_cars()
    {
        cout<<" 1. Tata "<<endl;
        cout<<" 2. Tesla "<<endl;
        cout<<" 3. BMW "<<endl;
        cout<<" 4. Audi "<<endl;
        cout<<" 5. Lamborghini "<<endl;
        cout<<" 6. Rolls Royce "<<endl;
        cout<<" 7. Electric (Ola S1 , S1 pro) "<<endl;
    }
};

void Kharcha(Bill r , car t,int j){
    t.dist();
    r.setdata();
    cout<<"Total Rent will be ₹"<<((t.distance)*(r.rate[j-1]))<<endl;
}
// class driver
// {
//     public : 
//     int age ;
//     char dname[100];
//     int phone_no;
    
// };

class customer     // Class customer inherited from Class car
{
    public :
    char name[100];
    string cusername;
    string phone_no;
    string phone_no1;
    int age;
    string Pass,rePass;
    string Password;
    string uname;
    void registration(){
        cout<<"||---------Registration Form------||"<<endl<<endl;
        cout<<" Enter your name: ";
        cin>>name;
        cout<<"Enter your mobile No: ";
        cin>>phone_no;
        try{
        if(phone_no.size()!=10){
            throw phone_no;
        }
        }
        catch(string a){
            cout<<"\tEnter a valid mobile number\n";
            exit(0);
        }
        cout<<"Enter your age: ";
        try{
        cin>>age;
        if(age<18 || age>80){
            throw age;
        }
        }
        catch(int a){
          cout<<"You are not eligible due age\n";
          exit(0);
        }
        cout<<"Create a username: ";
        cin>>cusername;
        cout<<"Create a password: ";
        cin>>Pass;
        try{
        cout<<"Enter the same password: ";
        cin>>rePass;
        if(rePass!=Pass){
          throw(rePass);
        }
        }
        catch(string a){
          cout<<"wrong Password entered";
          exit(0);
        }
    }
    void login1(){
        cout<<endl<<"<--------LOGIN FORM-------->\n"<<endl<<endl;
        cout<<"ENTER THE USERNAME\n";
        cin>>uname;
        cout<<"ENTER Phone_no\n";
        cin>>phone_no1;
        cout<<"Enter Password\n";
        cin>>Password;
        if(Password!=Pass ||  uname!=cusername || phone_no!=phone_no1){
          cout<<"DATA NOT MATCHING \n";
          login1();
        }
    }
    void login()
    {   
        cout<<"||-------- Login Form --------||"<<endl<<endl;
        cout<<"  Enter your name : ";
        cin>>cusername;
        try{
        phone_no;
        cout<<"  Enter your mobile no. : ";
        cin>>phone_no;
        cout<<"  Enter your age : ";
        cin>>age;
        if(phone_no.size()!=10){
            throw phone_no;
        }
      }
        catch(string a){
            cout<<"\tEnter a valid mobile number\n";
            exit(0);
        }
    }
};

void car :: recommend()
{
    cout<<" Enter the number of passengers : ";
    cin>>p;
    cout<<" Enter the number of babies : ";
    cin>>b;
    cout<<endl;
    if (p>=1 && b>=1)
    {
        cout<<" We would recommend SUV , Sedan "<<endl;
        cout<<" Baby on the board "<<endl;
    }
    else if(p==1)
    {
        cout<<" We would recommend Bike"<<endl;
        
    }
    else if(p==2)
    {
        cout<<" We would recommend Auto"<<endl;
    }
    else
    {
        cout<<" We would recommend Prime Sedan , Prime SUV , Mini"<<endl;
    }
}

void car :: enquiry()
{
    cout<<" Get in touch "<<endl;
    cout<<" Call us at 9910010011 "<<endl;
    cout<<" Mail us at carrentalsys@gmail.com "<<endl;
    cout<<" Visit our website www.rentyurcar.com "<<endl;
}

int car :: rent()
{
    show_cars();
    cout<<" Enter your car choice : ";
    cin>>c;
    cout<<endl;
    car d;
    Bill b;
    switch(c)
    {
        case 1:
          cout<<" You have selected Tata "<<endl;
          break;
          
        case 2 :
          cout<<" You have selected Tesla "<<endl;
          break;
        
        case 3 :
          cout<<" You have selected BMW "<<endl;
          break;
          
        case 4 :
          cout<<" You have selected Audi "<<endl;
          break;
        
        case 5 :
          cout<<" You have selected Lamborghini "<<endl;
          break;
        
        case 6 :
          cout<<" You have selected Rolls Royce "<<endl;
          
        case 7 :
          cout<<" You have selected Electric (Ola S1 , S1 pro) "<<endl;
          
    }
    Kharcha(b,d,c);
    cout<<endl;
    
    cout<<" Enter your Pick-up location : ";
    cin>>pick;
    cout<<" Enter your Drop location : ";
    cin>>drop;
    cout<<endl;
    cout<<" 1. Rentals "<<endl;
    cout<<" 2. Reserve "<<endl;
    cout<<" 3. Intercity "<<endl;
    cout<<" Select your Type ";
    cin>>t;
    cout<<endl;
    switch(t)
    {
        case 1 :
          cout<<" You have selected Rentals "<<endl;
          break;
        case 2 :
          cout<<" You have selected Reserve "<<endl;
        //   breserve();
          break;
        case 3 :
          cout<<" You have selected Intercity "<<endl;
        //   bintercity();
          break;
    }
    
    return c;
}

int car :: all_details()
{
    cout<<"*-------------------------------*"<<endl;
    cout<<"  Welcome to Car Rental System "<<endl;
    cout<<"*-------------------------------*"<<endl;
    
    
    cout<<" 1. Show all cars "<<endl;
    cout<<" 2. Car Enquiry "<<endl;
    cout<<" 3. Rent a car "<<endl;
    cout<<" 4. Our recommendation "<<endl;
    cout<<" 5. Exit "<<endl;
    cout<<" Enter your choice : ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
          show_cars();
          break;
        
        case 2 :
          enquiry();
          break;
        
        case 3 :
          rent();
          break;
          
        case 4 :
          recommend();
          break;
        
        case 5 :
          cout<<"Thank You for Visiting";
          break;
        
    }
    return choice;
    cout<<endl;
}
int main()
{
    
    car c;
    Bill b;
    customer c1;
    int d;
    cout<<"IF YOU ARE REGISTERED USER\n"
        <<"ENTER 1 FOR YES\n"
        <<"ENTER 0 FOR NO\n";
    cin>>d;
    if(d==1){
      c1.login();
    }
    else{
      c1.registration();
      c1.login1();
    }
    
    cout<<endl<<endl;
    while(c.all_details()!=5){
       c.all_details();
    }
    ofstream in;
    in.open("file.txt");
    in<<"User's name is: "<<c1.cusername<<"\n";
    in<<"User's mobile No. is: "<<c1.phone_no<<"\n";
    in.close();
    return 0;
}
