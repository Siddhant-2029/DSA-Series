#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 cout<<"Enter binary number\n";
 int binary;
 cin>>binary;
  int number=0;
  int power=0;
 for(int i=binary;i!=0;){
    int reminder = i%2;
    number= number + reminder*pow(2,power);
    power++;
    i=i/10;
 }  
 cout<<number;
    return 0;
}
