bool isPalindrome(long int x)
{
    long int ogn = x;
    long int rev = 0, rem = 0;
    while (x != 0 && x > 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }

    if (rev == ogn)
    {
        return true;
    }
    else
    {
        return false;
    }
}