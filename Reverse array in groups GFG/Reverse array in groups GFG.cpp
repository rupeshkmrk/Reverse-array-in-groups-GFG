// Reverse array in groups GFG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T-- > 0)
	{
		int N;
		int K;
		cin >> N >> K;
		int *arr = new int[N];
		string str = "";
		int count = 0;
		string finalString = "";
		for (int i = 0;i < N;i++)
		{
			cin >> arr[i];
			count++;
			if (count <= K)
			{
				str = to_string(arr[i]) + " " + str;

			}
			if (count == K || i == N-1)
			{
				count = 0;
				finalString = finalString + str;
				str = "";
			}
			
		}
		cout << finalString << endl;
	}
	
    return 0;
}

