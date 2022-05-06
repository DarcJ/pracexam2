#include "sumOfCube.cpp"
#include "_sumOfCube.cpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r = sumOfCube(4);
    int t = sumOfCube(4,0);

    cout << r << " " << t << endl;

    return 0;
}
