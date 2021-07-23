
#include <iostream>
using namespace std;
class triangle 
{
    float hight, width;
    public:
      triangle(float a=0 ,float b=0)
    {
        hight=a;
        width=b;
    }
    void get_data()
    {
        cout<<"Enter hight of triangle "<<endl;
        cin >>hight;
        cout<<"Enter width of triangle "<<endl;
        cin >>width;
    }
     void show_data()
    {
        cout<<"The hight of triangle :"<<hight<<endl;
        cout<<"The width of triangle :"<<width<<endl;
        cout<<endl;
    }
    triangle operator+(triangle s1)
    {
        triangle s3;
        s3.hight=hight+s1.hight;
        s3.width=width+s1.width;
        return  s3;
    }
      triangle operator-(triangle s1)
    {
        triangle s3;
        s3.hight=hight-s1.hight;
        s3.width=width-s1.width;
        return  s3;
    }
     triangle operator*(triangle s1)
    {
        triangle s3;
        s3.hight=hight*s1.hight;
        s3.width=width*s1.width;
        return  s3;
    }
     triangle operator/(triangle s1)
    {
        triangle s3;
        s3.hight=hight/s1.hight;
        s3.width=width/s1.width;
        return  s3;
    }
   triangle operator++()
   {
       width++;
       hight++;
       return *this;
   }
   triangle operator++(int)
   {   
       triangle temp = *this;
        ++*this;
       return temp;
   }
   bool operator!()
   {
       return !(width&&hight);
   }
};

int main()
{
    triangle test1(3,4),v,t(0,0);
    test1++;
    test1.show_data();   //output (4,5)
    v=test1++;          //v---->(4,5),test1----->(5,6)
    test1.show_data(); //output (5,6)
    v.show_data();    //output (4,5)
    
    
    if(!t)
    cout<<"ture";
    else
    cout<<"FALSE";
    return 0;
}