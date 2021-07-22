#include <iostream>
using namespace std;
class triangle 
{
    float hight, width;
    public:
    triangle()
    {
        hight=0;
        width=0;
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
   
    triangle(float a ,float b)
    {
        hight=a;
        width=b;
    }
};

int main()
{
    triangle test1(3,4),test2,results;
    test2.get_data();
    
    results=test1+test2;
    results.show_data();
    
    results=test1-test2;
    results.show_data();
    
    results=test1*test2;
    results.show_data();
    
    results=test1/test2;
    results.show_data();
    return 0;
}
