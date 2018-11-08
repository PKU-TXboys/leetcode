#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        long long cmp = 0;
        int neg = 1;
        if(x < 0)
        {
            x = -x;
            neg = -1;
        }
        while(x != 0)
        {
            result = result * 10 + x % 10;
            cmp = cmp * 10 + x % 10
            x = x / 10;
            printf("%d,%d\n", result, x, cmp);
        }
        if(result != cmp)
            return 0;
        result = result * neg;
        
        return result;
    }
};

int main(){
    cout << Solution().reverse(1534236469) << endl;
    return 0;
}