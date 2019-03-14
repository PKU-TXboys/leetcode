#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        else if(n == 1)
            return x;
        else if(n == -2147483647 - 1)
            return 1.0 / x / myPow(x, 2147483647);
        else if(n < 0)
            return 1.0 / myPow(x, -n);
        else if (n % 2 == 1)
            return x * myPow(x, n - 1);
        else
        {
            double tmp = myPow(x, n / 2);
            return tmp * tmp;
        }
    }
};

int main(){
    cout << Solution().myPow(0.001, 2147483647) << endl;
    return 0;
}