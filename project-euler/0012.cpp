#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull n_divisors(ull n)
{
    ull result = 1;
    for (ull i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ull count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            result *= (count + 1);
        }
    }
    if (n > 1) {
        result *= 2;
    }
    return result;
}

int main()
{
    ull i = 1;
    ull n = 1;
    while (true) {
        n = (i * (i + 1)) / 2;
        if (n_divisors(n) > 500) {
            cout << n << endl;
            break;
        }
        i++;
    }
}
