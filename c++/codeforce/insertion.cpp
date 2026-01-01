#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n+1];
    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int pos,val;
    cout<<"Enter the position where new element to be inserted:";
    cin>>pos;
    cout<<"Enter the value to be inserted:";
    cin>>val;
    for(int i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
        cout<<a[i]<<" ";

    }
    a[pos-1]=val;
    cout<<"Updated Array is :\n";
    for(int i=0;i<n+1;i++)
    cout<<a[i]<<" ";
    return 0;
}
//  #include <stdio.h>
//  int main() {
//     int size, position, newValue;
//     // Input the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     int arr[size + 1];  // Creating a larger array to accommodate the new element
//     // Input array elements
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     // Input position and value to insert
//  printf("Enter the position to insert: ");
//     scanf("%d", &position);
//     printf("Enter the new value: ");
//     scanf("%d", &newValue);
//     // Shifting elements to make space for the new element
//     for (int i = size; i >= position; i--) 
//    {
//         arr[i] = arr[i - 1];
//     }
//      arr[position - 1] = newValue;
//     // Printing the updated array
//     printf("Array after insertion: ");
//  for (int i = 0; i <= size; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
//  }