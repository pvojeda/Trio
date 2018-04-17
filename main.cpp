#include <iostream>
using namespace std;

void rearrangeColors(int&, int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

rearrangeColors(red,green,blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
void rearrangeColors(int&R, int&G,int&B)
{
int greatest;
int mid;
int least;

if (R>=G && R>=B && G>=B)
{
greatest = R;
mid = G;
least = B;
}
else if (R>=G && R>=B && B>=G)
{
greatest = R;
mid = B;
least = G;
}
else if (G>=R && G>=B && R>=B)
{
greatest = G;
mid = R;
least = B;
}
else if (G>=R && G>=B && B>=R)
{
greatest = G;
mid = B;
least = R;
}
else if (B>=R && B>=G && G>=R)
{
greatest = B;
mid = G;
least = R;
}
else if (B>=R && B>=G && R>=G)
{
greatest = B;
mid = R;
least = G;
}
else
{
cout<<"ERROR\n";
}
R=greatest;
G=mid;
B=least;
}
