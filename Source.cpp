#include <iostream>
using namespace std;

int main()
{
    for (int a = 0; a < 2; ++a)
        for (int b = 0; b < 2; ++b)//сывсвыс
            for (int c = 0; c < 2; ++c)
                if ((a == b || c == b) == true)
                    cout << a << ' ' << b << ' ' << c << '\n';
    return 0;
}