#include <iostream>
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