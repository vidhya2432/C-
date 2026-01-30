#include <iostream>
#include<string>
using namespace std;
int main()
{
    int a=10;
    float b=24.01;
    char c='A';
    string d="C++ Program";
    
    cout<<a<<'\n';
    cout<<b<<'\n';    //Program to print datatypes(int,float,char,str)
    cout<<c<<'\n';
    cout<<d<<'\n';
   
    int Roll_No;
    float Marks_Percentage;
    string Std_Name;
    
    cin>>Roll_No;
    cin>>Marks_Percentage;      //Getting input from User
    cin>>Std_Name;
    
    cout<<"Roll_No:" <<Roll_No <<'\n';
    cout<<"Marks_Percentage:" <<Marks_Percentage <<'\n';
    cout<<"Std_Name:" <<Std_Name <<'\n';
    
    float r, area;
    float pi=3.14;
    
    cout<<"Enter the radius:";       //Area of Circle
    cin>>r;
    
    
    area=pi*r*r;
    
    cout<<"Area Of Circle:" << area <<'\n';
    
    
    float len,breath;
    float radius;
    float pi_val=3.14;
    float area_rec,area_circle;
    
    cout<<"Enter the length of Rectangle:";
    cin>>len;
    cout<<"Enter the breath of Rectangle:";    //Area of Rectangle and Circle and Comapre it
    cin>>breath;
    
    area_rec=len*breath;
    cout<<"Area Of Rectangle:"<<area_rec<<'\n';
    cout<<"Enter the radius:";
    cin>>radius;
    area_circle=pi_val*radius*radius;
    
    
    cout<<"Area Of Circle:"<<area_circle<<'\n';
    
    cout<<(area_rec<area_circle) <<'\n';
    cout<<(area_rec>area_circle) <<'\n';
    cout<<(area_rec==area_circle) <<'\n';
    cout<<(area_rec!=area_circle) <<'\n';
    
    string First_name;
    string last_name;
    
    cout<<"Enter the firstname:";
    cin>>First_name;
    
    cout<<"Enter the lastname:";   //Get two String and add it
    cin>>last_name;
    
    string Name = First_name+last_name;
    cout<<Name;
    

   return 0;
}