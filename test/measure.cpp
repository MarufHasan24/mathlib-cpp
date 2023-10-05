#include <iostream>
#include "./../measure.cpp"

using namespace std;
using namespace mlb;

int main(){
    int towD [][2] = {{0, 0}, {0, 4}, {3, 4}, {3, 0}};
    int threeD[][3] = {{0, 0, 0}, {0, 2, 0}, {3, 2, 0}, {3, 0, 0}, {0, 0, 2}, {0, 2, 2}, {3, 2, 2}, {3, 0, 2}};
    cout << "Perimeter of a rectangle: " << perimeter(towD, 4) << endl;
    cout << "Area of a rectangle: " << area(towD, 4) << endl;
    cout << "Volume of a cuboid: " << volume(threeD, 8) << endl;
    cout << "Surface area of a cuboid: " << surfaceArea(threeD, 8) << endl;
    float* angle = tringleAngle(towD[0], towD[1], towD[2]);
    cout << "Angle of a triangle: " << angle[0] << endl;
    float* median = tringleMedian(towD[0], towD[1], towD[2]);
    cout << "Median of a triangle: " << median << endl;
    return 0;
}