#include <iostream>
using namespace std;

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA




  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
void rearrangeColor(int&Red, int&Green ,int&Blue)
{
int tempRed, tempGreen ,tempBlue;

if ( tempGreen>Red)
{
    Red = tempGreen;
}
if ( tempBlue>Red)
{
    Red = tempBlue;
}
if ( Blue > tempRed)
{
    Blue = tempRed;
}
if ( Blue > tempGreen)
{
    Blue = tempGreen;
}
if( Red == tempRed && Blue == tempBlue)
{
    Green = tempGreen;
}
if(Red == tempBlue && Blue == tempGreen)
{
    Green = tempRed;
}
if(Red == tempGreen && Blue == tempBlue)
{
    Green = tempRed;
}
}
