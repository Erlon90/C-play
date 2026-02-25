#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//1
int multp(int x, int y)
{
    if(y == 0 || x == 0)
    {
        return 0;
    }
    else
    {
        return x + multp(x, y-1);
    }
}
//5*4 = 5+5*3 +0

//2
int maior(int vet[], int n,int maior_at)
{
    if(n == 1)
    {
        return vet;
    }
    if(n > 1)
    {
        if(vet[n] > maior_at)
        {
            maior_at = vet[n];
        }
        return maior(vet[], n-1, maior_at);
    }
    return maior_at;
}

//3
int search(int v[],int a,int n)
{
    if(a == v[n])
    {
        return 1;
    }
    if(n > 0)
    {
        return search(v,a,n-1);
    }
    return 0;
}

//4




int main(void)
{


	return 0;
}
