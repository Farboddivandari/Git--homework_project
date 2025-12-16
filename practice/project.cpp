#include <iostream>
#include <cmath>
using namespace std;
long long factorial(int x)
{
    if (x == 0)
        return 1;
    return x * factorial(x - 1);
}
long long entekhab(int k, int n)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}
int BMM(int x, int y)
{
    int a, b;
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    a = (x > y) ? y : x;
    b = (x > y) ? x : y;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long KMM(long long x, long long y)
{
    return abs(x * y) / BMM(x, y);
}

int main()
{
  cout<<"Hello"<<endl;
  cout<< "please choose a projet:"<<endl<<"1.Simple calculator"<<endl<<"2.Root finder of first and second degree equations"<<endl<<"3.Advanced calculator"<<endl;
  int choice;
cin>>choice;
switch (choice) {
case 1 : {break;}
case 2:{break;}
case 3:{ cout<<"please enter two numbers for searching BMM"<<endl;
int x,y;
cin>>x>>y;
cout<<"please enter two numbers for searching KMM"<<endl;
int a,b;
cin>>a>>b;
cout<<"please enter two numbers for searching C(k,n)"<<endl;
int n,k;
cin>>k>>n;
cout<< "BMM : "<< BMM(x,y)<<endl<<"KMM : "<<KMM(a,b) <<endl<<"C(k,n) : "<<entekhab(k,n);
break;
}
}
}
