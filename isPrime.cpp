bool isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n < 4)
    {
        return 1;
    }
    if (!(n % 2) || !(n % 3))
    {
        return 0;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (!(n % i) || !(n % (i + 2)))
        {
            return 0;
        }
    }
    return 1;
}