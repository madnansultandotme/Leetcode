class Solution {
public:
    int reverse(int x) {
        int result = 0;

        while (x != 0) {
            int last_digit = x % 10;
            x /= 10;
            
            // Check for overflow before actually updating result
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && last_digit > 7)) {
                return 0;
            }
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && last_digit < -8)) {
                return 0;
            }

            result = result * 10 + last_digit;
        }

        return result;
    }
};
