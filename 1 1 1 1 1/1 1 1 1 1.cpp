// 1 1 1 1 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void f(int m[5]) {
	for (int i = 0; i < 3; i++)
	m[i] *= 2;
	m++;
}


int main()
{
	int a[5] = { 1,1,1,1,1 };
	f(a);
	for (int i = 0; i < 5; i++)
	cout << a[i];

    return 0;
}

