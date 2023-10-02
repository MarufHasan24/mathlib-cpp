#include <cmath>
#include <bits/stdc++.h>
#define PI 3.141592653589793
namespace mathlib {
    // Function to measure length of a line from it's edge points 
    float lineWidth(int x[], int y[]){
        return sqrt(pow(x[1]-x[0], 2) + pow(y[1]-y[0], 2));
    }
    // Function to measure Perimeter from edge points
    float Perimeter(int towD[][2], int len){
        float sum = 0;
        for(int i = 0; i < len-1; i++){
            sum += lineWidth(towD[i], towD[i+1]);
        }
        sum += lineWidth(towD[len-1], towD[0]);
        return sum;  
    }
    // Function to measure area of a rectangle from it's edge points
    float Area(int towD[][2], int len){
        float sum = 0;
        for(int i = 0; i < len-1; i++){
            sum += towD[i][0]*towD[i+1][1] - towD[i+1][0]*towD[i][1];
        }
        sum += towD[len-1][0]*towD[0][1] - towD[0][0]*towD[len-1][1];
        return abs(sum/2);
    }
    // Function to measure volume of a cuboid from it's edge points
    float Volume(int threeD[][3], int len){
        float sum = 0;
        for(int i = 0; i < len-1; i++){
            sum += threeD[i][0]*threeD[i+1][1]*threeD[i+2][2] - threeD[i+2][0]*threeD[i+1][1]*threeD[i][2];
        }
        sum += threeD[len-1][0]*threeD[0][1]*threeD[1][2] - threeD[1][0]*threeD[0][1]*threeD[len-1][2];
        return abs(sum/6);
    }
    // Function to measure surface area of a cuboid from it's edge points
    float SurfaceArea(int threeD[][3], int len){
        float sum = 0;
        for(int i = 0; i < len-1; i++){
            sum += lineWidth(threeD[i], threeD[i+1])*lineWidth(threeD[i+1], threeD[i+2]);
        }
        sum += lineWidth(threeD[len-1], threeD[0])*lineWidth(threeD[0], threeD[1]);
        return abs(sum*2);
    }
    float* tringleAngle(int x[], int y[], int z[]){
        float a = lineWidth(x, y);
        float b = lineWidth(y, z);
        float c = lineWidth(z, x);
        static float result[3];
        result[0] = acos((pow(b, 2) + pow(c, 2) - pow(a, 2))/(2*b*c));
        result[1] = acos((pow(a, 2) + pow(c, 2) - pow(b, 2))/(2*a*c));
        result[2] = acos((pow(a, 2) + pow(b, 2) - pow(c, 2))/(2*a*b));
        return result;
    }
}