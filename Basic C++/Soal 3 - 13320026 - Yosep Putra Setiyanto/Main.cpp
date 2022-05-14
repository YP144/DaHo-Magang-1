#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
    {
    // deklarasi

    int c,n;

    //input

    cout << "Masukan jumlah suku = ";
    cin >> n;

    // inisiasi

    int fib[n];

    // Process

    if (n<1)
        {
        cout << "Input Angka Positif!" << endl;
        }
    else if (n == 1)
        {
        fib[0] = 1;
        }
    else if (n == 2)
        {
        fib[0] = 1;
        fib[1] = 1;
        }
    else if (n > 2)
        {
        fib[0] = 1;
        fib[1] = 1;
        for (int i=3 ; i<n+1 ; i++)
            {
            int a = 1;
            int b = 1;
            for (int j=0 ; j<i-2 ; j++)
                {
                c=a+b;
                a=b;
                b=c;
                }
            fib[i-1]=c;
            }
        }

    // output

    cout << "Angka Fibonacci hingga " << n << " suku :" << endl;
    for (int k=0 ; k<n ; k++)
        {
        cout << fib[k] << " ";
        }
    }
