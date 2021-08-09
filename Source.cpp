// Shiri Yona 
#include<iostream>
using namespace std;
void findvector(int vector[], int size)
{
	int num, i=0;
	bool flag = true;
	cin >> vector[i];
	num= vector[i];
	while (vector[i]!=0 && i< size)
	{ 
		for (int i = 1; i < size; i++)
		{
			cin >> vector[i];
			if (num < vector[i])
			{
				flag = false;
			}
		}
	}
	while (flag == false)
	{
		cout << "ERROR" << endl;
		i = 0, flag = true;
		cin >> vector[i];
		num = vector[i];
		while (vector[i] != 0 && i<=10)
		{
			for (int i = 1; i < 10; i++)
			{
				cin >> vector[i];
				if (num < vector[i])
				{
					flag = false;
				}
			}
		}

	}
}
int merge(int vector1[], int vector2[], int vector3[], int size)
{
	int index_a = 0, index_b = 0, index_c = 0, index_d = 0, vector4[30] = {};
	while (index_a < size || index_a < size || index_a < size)
	{
		if (vector1[index_a] > vector2[index_b])
		{
			if (vector1[index_a] > vector3[index_c])
			{
				vector4[index_d++] = vector1[index_a++];
			}
			else if (vector1[index_a] < vector3[index_c])
			{
				vector4[index_d++]=vector3[index_c++];
			}

		}
		if (vector1[index_b] > vector3[index_a])
		{

			if (vector1[index_b] > vector3[index_c])
			{
				vector4[index_d++] = vector2[index_b++];
			}
			else if (vector1[index_b] < vector3[index_c])
			{
				vector4[index_d++] = vector3[index_c++];
			}
		}
	}
	return vector4[3*size];
}
int main()
{
	int const size = 10;
	int vector1[size] = {};
	cout << "enter values for the first vector:" << endl;
	findvector(vector1, size);
	int vector2[size] = {};
	cout << "enter values for the second vector:" << endl;
	findvector(vector2, size);
	int vector3[size] = {};
	cout << "enter values for the third vector:" << endl;
	findvector(vector3, size);
	int temp = merge(vector1, vector2, vector3, size);
}


/*examples:
enter 10 numbers:
1 3 5 7 9 11 13 15 17 19
enter 1 number:
12
not found

enter 10 numbers:
1 3 5 5 9 11 13 15 17 19
ERROR
1 3 5 2 9 11 13 15 17 19
ERROR
1 3 5 7 9 11 13 15 17 19
enter 1 number:
5
the number 5 was found at index 2
*/
