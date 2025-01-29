class Solution:
    def reverse(self, x):
        INT_MAX = 2**31-1
        INT_MIN = -2**31

        if x < 0:
            sign = -1
            x = abs(x)
        else:
            sign = 1

        reversed_x = 0

        while x != 0:
            rem = x % 10
            x = x // 10

            if reversed_x > (INT_MAX - rem)//10:
                return 0

            reversed_x = reversed_x * 10 + rem

        return sign * reversed_x