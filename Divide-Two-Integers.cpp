class Solution {
public:
    int divide(int dividend, int divisor) {
         if (dividend == INT_MIN && divisor == -1) return INT_MAX; // Handle overflow

        bool negative = (dividend < 0) ^ (divisor < 0); // Check if result is negative
        long long num = abs((long long)dividend);
        long long den = abs((long long)divisor);
        long long quotient = 0;

        while (num >= den) {
            long long temp = den, multiple = 1;
            while (num >= (temp << 1)) {  // Double the divisor (bitwise shift)
                temp <<= 1;
                multiple <<= 1;
            }
            num -= temp;
            quotient += multiple;
        }

        return negative ? -quotient : quotient;
       
    }
};