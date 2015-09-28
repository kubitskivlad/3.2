//
//  main.cpp
//  3.2
//
//  Created by Kubitski Vlad on 27.09.15.
//  Copyright (c) 2015 Kubitski Vlad. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int ** matric(int** matrica1,int** matrica2,int n, int m, int k);
void show(int** matrica, int n1, int n2);

int main()
{
    int** matrica1 = new int* [3];
    for (int i = 0; i < 3; i++)
    {
        matrica1[i] = new int [2];
        
    }
    cout << "введите матрицу 1" << endl;
    for (int er = 0; er < 3; er++)
    {
        for (int er1 = 0; er1 < 2; er1++)
        {
            
            cin >> matrica1[er][er1];
           
        }
        
    }
  //  show(matrica1, 3, 2);

    int** matrica2  = new int* [2];
  
    for (int i = 0; i < 2; i++)
    {
        matrica2[i] = new int [4];
        
    }
    cout<<"введите матрицу 2"<<endl;
    for (int er = 0; er < 2; er++)
    {
        for (int er1 = 0; er1 < 4; er1++)
        {
            
            cin>>matrica2[er][er1];

        }
    }
  //  show(matrica2, 2, 4);
    int** result = matric(matrica1, matrica2, 3, 2, 4);
    for (int er = 0; er < 3; er++)
    {
        for (int er1 = 0; er1 < 4; er1++)
        {
            cout<<result[er][er1]<<" ";
        }
        cout<<endl;
    }

}

int ** matric(int** matrica1,int** matrica2,int n, int m,int k)
{
    int** result;
    result = new int* [n];
    for (int i = 0; i < n; i++)
    {
        result[i] = new int [k];
        
    }
    
    for (int z = 0; z < n; z++)
    {
        for (int w = 0; w < k; w++)
        {   int sum = 0;
            for (int q = 0; q < m; q++)
            {
                 sum = sum + (matrica1[z][q] * matrica2[q][w]);
            }
            result[z][w] = sum;
        }
    }
    return result;
}
void show(int** matrica, int n1, int n2)
{
    for (int er = 0; er < n1; er++)
    {
        for (int er1 = 0; er1 < n2; er1++)
        {
            cout<<matrica[er][er1]<<" ";
        }
        cout<<endl;
    }
}