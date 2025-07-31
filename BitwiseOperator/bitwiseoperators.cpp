#include<iostream>
using namespace std;
int main()
{ int a=7,b=8;
    //bitwise and operator &
    cout<<(a&b)<<endl;
    //here now in decimal a=7=111 and b=8=1000 so & of a and b will be 0000 or 0

    //bitwise or operaator |
    cout<<(a|b)<<endl;
    //here or of a and b will be 1111 or 15

    //bitwise xror operator ^
    cout<<(a^b)<<endl;
    // xror works like 1 for unlikes and 0 for like so for a and b it will be 1111 or 15
   
    // right shift operator >>
    cout<<(a>>2)<<endl;
    // here right shift a which was 111 shifted by two places so it will be 001 so output will 1

    // left shift perator <<
    cout<<(a<<2)<<endl;
    //and here it shift to left by 2 so a which was 111 will become 11100 or 4+8+16=28

   
   
    return 0;
}
