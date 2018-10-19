//<Splice Array> -- splice arrays
//CSIS 112-<Section Number>
//<Sources if necessary>


//Include statements
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Global declarations: Constants and type definitions only -- NO variables

//Function prototypes
int* splice(int* arr1, int* arr2, int len1, int len2, int numSplice);
void FillArray(int* arr, int arrLen);
void PrintArray(int* arr, int arrLen);
int GetInput();

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Cody Moore -- Lab Number 6" << endl << endl;

	//Variable declarations
	int arr1Len;
	int arr2Len;
	int spliceLen;

	//Program logic
	
	srand(100); // seed random

	std::cout << "Please input the number of integers in the first array." << std::endl; // get array lengths
	std::cin >> arr1Len;

	std::cout << "Please input the number of integers in the second array." << std::endl;
	std::cin >> arr2Len;

	std::cout << "Please input the point at which to splice the first array." << std::endl; // get point at which to splice
	std::cin >> spliceLen;

	int* arr1 = new int[arr1Len]; // create arrays
	int* arr2 = new int[arr2Len];

	FillArray(arr1, arr1Len); // fills arrays with random nums between 1 and 100
	FillArray(arr2, arr2Len);

	std::cout << "First Array:" << std::endl; // prints first array
	PrintArray(arr1, arr1Len);

	std::cout << std::endl << std::endl << "Second Array:" << std::endl; // print second array
	PrintArray(arr2, arr2Len);

	std::cout << std::endl;
	int* arr3 = splice(arr1, arr2, arr1Len, arr2Len, spliceLen); // splices array

	PrintArray(arr3, arr1Len + arr2Len);

	delete arr1; // frees memory
	delete arr2;
	delete arr3;


	//Closing program statements
	system("pause");
	return 0;
}

//Function definitions

int * splice(int * arr1, int * arr2, int len1, int len2, int numSplice)
{
	int* splicedArr = new int[len1 + len2];

	for (int i = 0; i < numSplice; i++) // iterates through arr1 up to numSplice and puts them in spliced arr
	{
		splicedArr[i] = arr1[i];
	}
	for (int i = 0; i < len2; i++) // iterates through arr2 and puts them in spliced arr
	{
		splicedArr[numSplice + i] = arr2[i];
	}
	for (int i = numSplice; i < len1; i++) // iterates through the rest of arr1 and puts them in spliced arr
	{
		splicedArr[len2 + i] = arr1[i];
	}

	return splicedArr;
}

void FillArray(int* arr, int arrLen)
{
	for (int i = 0; i < arrLen; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
}

void PrintArray(int * arr, int arrLen)
{
	for (int i = 0; i < arrLen; i++)
	{
		std::cout << setw(3) << arr[i] << " "; // setw to make it pretty and justified
		if ((i + 1) % 10 == 0) // i + 1 required because 0 % 10 ends the row prematurely
		{
			std::cout << std::endl;
		}
	}
}

int GetInput()
{
	int num;

	std::cin >> num;

	if (num > 0 && )
	{

	}
}
