#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int sum = 0;
    while (b <= 4'000'000) {
        if (b % 2 == 0) {
            sum += b;
        }

        int c = a + b;
        a = b;
        b = c;
    }

    cout << sum << endl;
}
