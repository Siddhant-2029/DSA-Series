#include<iostream>
using namespace std;
int main()
{ int a=7,b=8;
    //bitwise and operator &
    cout<<(a & b)<<endl;
    //here now in decimal a=7=111 and b=8=1000 so & of a and b will be 0000 or 0

    //bitwise or operaator |
    cout<<(a|b)<<endl;
    //here or of a and b will be 1111 or 15

    //bitwise xror operator ^
    cout<<(a^b)<<endl;
    // xror works like 1 for unlikes and 0 for like so for a and b it will be 1111 or 15
   
   
   
    return 0;
}
