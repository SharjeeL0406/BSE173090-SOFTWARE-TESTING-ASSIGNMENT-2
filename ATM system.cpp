#include<iostream>
using namespace std;
static double balance=15000;
static String actualpin="1234";
static int array[5]={1234,5678,1472,4521,1214};
int Pincheck(string pin)
{
   if(pin==actualpin)
 return 1;
else
return 0;
}
int Transection(double amount)
{
  if(amount < balance && balance >500)
    cout<<"Here your money"<<endl;
else
cout<<"Can't withdraw"<<endl;
}
int Transfermoney(string pin,double amount,string accountnum)
{  
  int check=0;
int a=0;
for(a=0;a<5;a++)
{
   if(accountnum==array[a])
{ 
  check=1;
break;
}
}
if(check==1)
{
  if(pin==actualpin && amount<balance && balance>500)
  {
   cout<<"money has been tranfer"<<endl;
}
 else
{ 
     cout<<"enter data may be wrong"<<endl;
}
}
else
   cout<<"no account number found"<<endl;

}

void main()
{
 
   int a=0;
   int b;
   double amount;
   string accountnum;
   string pin;
  do{
 cin>>pin;
 if(Pincheck(pin)==actualpin){
 	a=1;
 	cout<<"Welcome"<<endl;
 }
 else {
 	a=0;
 	cout<<"Wrong PIN enter again"<<endl;
 }
     
} while(a==0);
  cin>>b;
 switch(b)
  {
   case 1:
{
    cin>>amount;
    Transection(amount);
   break;
}


 case 2:
{
    cin>>amount;
cin>>accountnum;
cin>>pin;
    Transection(pin,amount,accountnum);
   break;
}
}
         

}


