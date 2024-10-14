long long binExp(int k)
{
    long long base = 2;
    long long ans = 1;
    while (k > 0)
    {
        if (k % 2 == 1)
        {
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        k /= 2;
    }
    return ans;
}