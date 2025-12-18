#include <iostream>
using namespace std;

void readArray(int arr[], int &n) {
    cout << "تعداد اعداد را وارد کنید: ";
    cin >> n;
    cout << "اعداد را وارد کنید:" << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
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
void printResults(int arr[], int n) {
    cout << "جمع: " << sum(arr, n) << endl;
    cout << "تفریق: " << subtract(arr, n) << endl;
    cout << "ضرب: " << multiply(arr, n) << endl;
}

int main() {
    int arr[100];
    int n;
    readArray(arr, n);
    printResults(arr, n);
    return 0;
}
#include <cmath>
float DegreeOne(float a, float b){
    float r;
    r = -b/a;
    return r;
}
float DegreeTwo(float a, float b, float c){
    float delta, root, root1, root2;
    delta = (b*b) - 4*(a*c);
    if (delta < 0){
        return 'without root';
    }
    else{
        if(delta == 0){
            root = -b / (2*a);
            return root;
        }
        else if(delta > 0){
            root1 = ((-b) + sqrt(delta))/(2*a);
            root2 = ((-b) - sqrt(delta))/(2*a);
            return root1, root2; 
        }
    }
}
