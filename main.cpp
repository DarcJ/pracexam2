#include "SumofCube.cpp"
#include "SumofCubeT.cpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r = SumofCube(4);
    int t = SumofCubeT(4,0);

    cout << r << " " << t << endl;

    return 0;
}
