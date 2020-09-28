bool PrimeNumber(int n)
{
    int potentialFactor = 2;
    while(n%potentialFactor!=0) potentialFactor++;
    if(n==potentialFactor) return true;
    return false;
}
