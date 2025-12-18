#include <iostream>
#include <cmath>
using namespace std;
long long factorial(int x)
{
    if (x == 0)
        return 1;
    return x * factorial(x - 1);
}
long long entekhab(long long k, long long n)
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
    int sum(int arr[], int n) {
        int s=0;
        for (int i=0; i<n; i++) {
            s += arr[i];
        }
        return s;
    }
    int subtract(int arr[], int n) {
        int s=arr[0];
        for (int i=1; i<n; i++) {
            s -= arr[i];
        }
        return s;
    }
    int multiply(int arr[], int n) {
        int p = 1;
        for (int i=0; i<n; i++) {
            p *= arr[i];
        }
        return p;
    }
    float DegreeOne(float a, float b){
        float r;
        r = -b/a;
        return r;
    }
   void DegreeTwo(float a, float b, float c){
        float delta, root, root1, root2;
        delta = (b*b) - 4*(a*c);
        if (delta < 0){
            cout<<"without root"<<endl;
        }
        else{
            if(delta == 0){
                root = -b / (2*a);
              cout<< root<<endl;
            }
            else if(delta > 0){
                root1 = ((-b) + sqrt(delta))/(2*a);
                root2 = ((-b) - sqrt(delta))/(2*a);
               cout<<root1<<endl<< root2; 
            }
        }
    }

int main()
{
    cout << "Hello" << endl;
    cout << "please choose a projet:" << endl
         << "1.Simple calculator" << endl
         << "2.Root finder of first and second degree equations" << endl
         << "3.Advanced calculator" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << " Please enter the array size" << endl;
        int size;
        cin >> size;
        cout << "please enter the numbers" << endl;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        cout << " sum :" << sum(arr, size) << endl
             << "subtract : " << subtract(arr, size) << endl
             << "multiply : " << multiply(arr, size) << endl;
        break;
    }
    case 2:
    {
        int n;
        cout << "Please specify the type of equation." << endl
             << "1.First degree equation" << endl
             << "2.Quadratic equation" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            float a, b;
            cout << "Please enter the coefficients of the equation." << endl;
            cin >> a >> b;
            cout << DegreeOne(a, b);
            break;
        }

        case 2:
        {
            float a, b, c;
            cout << "Please enter the coefficients of the equation." << endl;
            cin >> a >> b >> c;
         DegreeTwo(a, b, c);
            break;
        }
        }
        break;
    }
    case 3:
    {
        cout << "please enter two numbers for searching BMM" << endl;
        int x, y;
        cin >> x >> y;
        cout << "please enter two numbers for searching KMM" << endl;
        int a, b;
        cin >> a >> b;
        cout << "please enter two numbers for searching C(k,n)" << endl;
        int n, k;
        cin >> k >> n;
        cout << "BMM : " << BMM(x, y) << endl
             << "KMM : " << KMM(a, b) << endl
             << "C(k,n) : " << entekhab(k, n);
        break;
    }
    }
    return 0;}
    
