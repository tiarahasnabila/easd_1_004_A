//karena algoritma cara yang paling cepat,dan bahasanya mudah dipahami
//2 data struktur algoritma yakni quadratine dan loglinear
//faktor faktor yang mempengaruhi efisiensi waktu yakni 
//quicksort karena mudah dipahami sedikit demi sedikit 
//yang termasuk loglinear yakni :quicksort
//buat algoritma

#include <iostream>
using namespace std;

//array of integers to hold values
int Tiara[64];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movements
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 64)
			break;
		else
			cout << "\nMaksimum panjang array adalah 64" << endl;
	}

	cout << "\n----------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n----------------" << endl;

	for (int i = 0; i< n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> Tiara [i];
	}
}
//swaps the element at index x with the element at index y
void swap(int x, int y)
{
	int temp;

	temp = Tiara[x];
	Tiara[x] = Tiara[y];
	Tiara[y] = temp;
}

void mergesort(int low, int high)
{
	int mid, i, TH,k;
	if (low >= high)									
		return;

	mid =  (low+high)/2;	
	mergesort(low, mid);
	mergesort(mid + 1, high);

	i = low;							
	TH = mid+1;										
	k = low;

	TH > mid / TH > high;
	if (Tiara[i] <= Tiara[TH]);


	void display(); {
	cout << "\n-----------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "\n-----------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << Tiara[i] << "";
	}

	cout << "\n\nNumber of comparasions : " << cmp_count << endl;
	cout << "Number of data movements: " << mov_count << endl;
}