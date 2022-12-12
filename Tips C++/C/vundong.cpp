#include<iostream>
using namespace std;
void nhap(int arr[],int n){
	for(int i=0;i<n;i++)
		cin>>arr[i];
}
void xuat(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void kkk(int arr[], int heapSize, int i) {
	int lar = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2; 
	if (l<heapSize && arr[l] > arr[lar])
		lar = l;
	if (r < heapSize && arr[r] > arr[lar])
		lar= r;
	if (lar != i) {
		swap(arr[i], arr[lar]);
		kkk(arr, heapSize, lar);
	}
}
void heapSort(int arr[], int n) {
	for (int i = n / 2 - 1; i >= 0; i--)
		kkk(arr, n, i);
	xuat(arr,n);
	for (int i = n - 1; i >= 0; i--) {
		swap(arr[0], arr[i]);
		kkk(arr, i, 0);
		xuat(arr,n);
	}
}
int main() {
	int n; cin>>n;
	int arr[n]; 
	nhap(arr,n);
	heapSort(arr,n);
	xuat(arr,n);
	return 0;
}