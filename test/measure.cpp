#include "../measure.cpp"
#include "../scripts/tester.cpp"

using namespace std;
using namespace mlb;

int main()
{
    int towD[][2] = {{0, 0}, {0, 4}, {3, 4}, {3, 0}};
    int threeD[][3] = {{0, 0, 0}, {0, 2, 0}, {3, 2, 0}, {3, 0, 0}, {0, 0, 2}, {0, 2, 2}, {3, 2, 2}, {3, 0, 2}};
    tester::describe("Perimeter of a rectangle", [towD, threeD]()
                     {
                         tester::toClose("Perimeter of a rectangle", 14.2854, perimeter((int (*)[2])towD, 4));
                         tester::toClose("Area of a rectangle", 12, area((int (*)[2])towD, 4));
                         tester::toClose("Volume of a cuboid", 4, volume((int (*)[3])threeD, 8));
                         tester::toClose("Surface area of a cuboid", 108, surfaceArea((int (*)[3])threeD, 8));
                         float *angle = tringleAngle((int*)towD[0], (int*)towD[1], (int*)towD[2]);
                         tester::toClose("Angle of a triangle", 1.32582, angle[0]);
                         float *median = tringleMedian((int*)towD[0], (int*)towD[1], (int*)towD[2]);
                         tester::toClose("Median of a triangle", 2.06155, median[0]); });
    return 0;
}