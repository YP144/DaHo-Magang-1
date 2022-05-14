#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
    {
    // Inisiasi dan deklarasi

    int n,index,a;
    string b;
  	
    // Input

    cout << "Masukan Jumlah Data = ";
    cin >> n;
    string nama[n];
    int umur[n];
    for (int k = 0; k<n; k++)
        {
        cin >> nama[k] >> umur[k];
        }

    // process

    // proses sorting dan pencarian index
    for (int i = 0; i < n-1; i++)
        {
        index = i;
        for (int j = i+1; j < n; j++)
            {
            if (umur[index] < umur[j])
                {
                index = j;
                }
            else if ((nama[index] > nama[j]) and (umur[index] == umur[j]))
                {
            	index = j;
			    }
            }

    // proses pertukaran elemen

        // store elemen yang akan ditukar
        b = nama[index];
        a = umur[index];

        // pertukaran dari elemen lain
        nama[index] = nama[i];
        umur[index] = umur[i];

        // kembalikan elemen yang di store
        nama[i] = b;
        umur[i] = a;
        }

     // Output

    cout << "\nSetelah diurutkan :" << endl;
    for (int i = 0; i < n; i++)
        {
        cout << nama[i] << " "<< umur[i] << endl;
        }
    }