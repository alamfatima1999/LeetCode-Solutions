class Solution
{
public:
    int pivotInteger(int n)
    {
        if (n == 1)
            return 1;
        int L = 1, R = n;

        while (L < R)
        {
            int mid = (L + R) / 2;
            int leftSum = (mid * (mid - 1)) / 2;
            int rightSum = (n * (n + 1)) / 2 - mid - leftSum;
            if (leftSum == rightSum)
                return mid;
            else if (leftSum > rightSum)
                R = mid - 1;
            else
                L = mid + 1;
        }
        return -1;
    }
};