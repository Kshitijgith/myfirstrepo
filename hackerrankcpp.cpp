#include<iostream>
using namespace std;
int main()
{int i,a,b;
cout<<"enter value of a and b";
cin>>a>>b;

for(i=a;i<=b;i++)
{if(i==1)
{
    cout<<"one";
    
}
if(i==2)
{
    cout<<"two";
    
}
if(i==3)
{
    cout<<"three";
    
}
if(i==4)
{
    cout<<"four";
    
}
if(i==5)
{
    cout<<"five";
    
}
if(i==6)
{
    cout<<"six";
    
}
if(i==7)
{
    cout<<"seven";
    
}
if(i==8)
{
    cout<<"eight"<<endl;
    
}
if(i==9)
{
    cout<<"nine"<<endl;
    
}
}
for(i=a;i<=b;i++)
{
if(i%2==0)
{
cout<<  " even "<<endl;

}
else
{
cout<<"odd "<<endl;
}
}
return 0;
}