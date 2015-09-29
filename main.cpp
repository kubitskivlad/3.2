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
void assert(int** matrica1, int** matrica2, int ** test, int n, int m, int k);

int main()
{
int ** a1;
	a1 = new int*[2]; 
	a1[0] = new int[2]; 
	a1[0][0] = 1;   
	a1[0][1] = 0;    
	a1[1] = new int[2];     
	a1[1][0] = 0;   
	a1[1][1] = 1;
	int ** b1;
	b1 = new int*[2];
	b1[0] = new int[2];
	b1[0][0] = 1;
	b1[0][1] = 0;
	b1[1] = new int[2];
	b1[1][0] = 0;
	b1[1][1] = 1;
	int ** test1;
	test1 = new int*[2];
	test1[0] = new int[2];
	test1[0][0] = 1;
	test1[0][1] = 0;
	test1[1] = new int[2];
	test1[1][0] = 0;
	test1[1][1] = 1;
	int ** a2;
	a2 = new int*[2];
	a2[0] = new int[3];
	a2[0][0] = 1;
	a2[0][1] = 3;
	a2[0][2] = 2;
	a2[1] = new int[3];
	a2[1][0] = 0;
	a2[1][1] = 4;
	a2[1][2] = -1;
	int ** b2;
	b2 = new int*[3];
	b2[0] = new int[4];
	b2[0][0] = 2;
	b2[0][1] = 0;
	b2[0][2] = -1;
	b2[0][3] = 1;
	b2[1] = new int[4];
	b2[1][0] = 3;
	b2[1][1] = -2;
	b2[1][2] = 1;
	b2[1][3] = 2;
	b2[2] = new int[4];
	b2[2][0] = 0;
	b2[2][1] = 1;
	b2[2][2] = 2;
	b2[2][3] = 3;
	int ** test2;
	test2 = new int*[2];
	test2[0] = new int[4];
	test2[0][0] = 11;
	test2[0][1] = -4;
	test2[0][2] = 6;
	test2[0][3] = 13;
	test2[1] = new int[4];
	test2[1][0] = 12;
	test2[1][1] = -9;
	test2[1][2] = 2;
	test2[1][3] = 5;

	assert(a1, b1, test1, 2, 2, 2);
	assert(a2, b2, test2, 2, 3, 4);

	return 0;
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
void assert(int** matrica1, int** matrica2, int ** test, int n, int m, int k)
{
	int ** result = matric(matrica1, matrica2, n, m, k);
	int w = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			if (result[i][j] == test[i][j]) w = w + 1;
		}
	}
	if (w == k*n) { cout << "OK" << endl; }
	else { cout << "FAIL" << endl; }
}
