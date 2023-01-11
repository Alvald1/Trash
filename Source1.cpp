#include <iostream>
#include <set>
#include <algorithm>
using namespace std;



int main() {
    set<int>a{};
    int p[] = { 18, 52 }, q[] = { 16,41 };//выссысвывсывс
    auto f = [a, p, q](int x) {
        bool A = a.count(x);
        bool P = x >= p[0] && x <= p[1];
        bool Q = x >= q[0] && x <= q[1];
        return (P<=A)&&(!Q||A);
    };
    for (int x = 0; x < 10000; ++x) 
        if (!f(x)) a.insert(x);
    
    return 0;
}
     