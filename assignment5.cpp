#include<iostream>
using namespace std;
class shape
{
public:
int width, height;
void get_data()
{
cout<<"Enter the value of width:";
cin>>width;
cout<<"Enter the value of height:";
cin>>height;
}
virtual void display_area() = 0;
};
class triangle : public shape
{
void get_data();
void display_area()
{
float area = 0.5 * width * height;
cout<<"The Area of Triangle is:"<<area<<endl;
}
};
class rectangle : public shape
{
void get_data();
void display_area()
{
float area = width * height;
cout<<"The Area of Rectangle is:"<<area<<endl;
}
};
int main()
{
shape *st;
triangle t;
rectangle r;
st = &t;
st->get_data();
st->display_area();
st = &r;
cout<<"============================"<<endl;
st->get_data();
st->display_area();
return 0;
}
