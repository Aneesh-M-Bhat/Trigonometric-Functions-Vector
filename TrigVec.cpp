#include <iostream>
#include <cmath>
#include <vector>
#define PI 3.14159265

int main()
{
    std::vector<float> sine,cosine,tangent;

    for(int i = 0; i < 360; i++) {
        sine.push_back(sin(PI*i/180));
        cosine.push_back(cos(PI*i/180));
        tangent.push_back(tan(PI*i/180));
    }
    for ( int i = 0 ; i < 360 ; i++)
    { 
        std::cout << i << " degrees:" << "\t";
        std::cout << "Sin => " << sine.at(i) << "\t";
        std::cout << "Cos => " << cosine.at(i) << "\t";
        std::cout << "Tan => " << tangent.at(i) << std::endl;
    }
    
}