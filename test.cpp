#include <bitset>
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;


int main()
{
    bitset<2> a(0);
    cout << a << endl;
    a ^= 0x1;
    a ^= 0x1;

    cout << a;
}

