#include<iostream>
using namespace std;
class rectangle
{
private:
int rc,length,width;
public:
setdata(int a,int b)
{
length=a;
width=b;
}
void rectangledata()
{
rec = length* width;
}
void displaydata()
{
cout<<"the value of rectangle is : " <<rec;
}
int main()
{
rectangle r1,r2;
r1.setdata(19,2);
r1.rectangledata():
r1.dispalydata();
}





