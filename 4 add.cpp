#include <iostream>

int main() 
{
    int s3=0, s6=0, n, c1, c2,k=0 ;
    n = 0;
    for (int i = 0; i <= 999999; i++) 
    {
        c1 = i;
        n = 0;
       while (n < 3) 
        {
            c2 = c1 % 10;
            c1 /= 10;
            s3 += c2;
            n=n+1;
        }
        while (n< 6)
        {
            c2 = c1 % 10;
            c1 /= 10;
            s6 += c2;
            n=n+1;
        }
        if (s3 == s6)
            k += 1;
        s3 = s6 = 0;
    }
    std::cout << k;
}