#include <iostream>
using namespace std;

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA
if( blue>red)
{
swap (blue,red);
}
if( blue > green);
{
swap (blue,green);
}
if ( green> red)
{
swap (green,red);
}




  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
/*
void rearrangeColor(int&Red, int&Green ,int&Blue)
{
int tempRed, tempGreen ,tempBlue;

if ( Green>Red)
{
    Red = tempGreen;
}
if ( Blue>Red)
{
    Red = tempBlue;
}
if ( Green = Red)
{
Green=0;
}
if((Green < tempBlue)&&(Red !=tempBlue))
{
    Green = tempBlue;
}
if((Green < tempRed)&&(Red !=tempRed))
{
    Green = tempRed;
}
if(Blue > tempRed)
{
    Blue = tempRed;
}
if(Blue > tempGreen)
{
    Blue = tempGreen;
}
}*/
