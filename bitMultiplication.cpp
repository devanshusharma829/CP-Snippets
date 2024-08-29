int bitMultiplication(int a, int b)
{
    int ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans += a;
        }
        a = a << 1;
        b = b >> 1;
    }
    return ans;
}