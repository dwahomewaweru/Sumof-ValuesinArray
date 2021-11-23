// SumofValuesinArray.cpp
// Using for loop to compute sum of values in an array.

#include <iostream>
using namespace std;

int main()
{
    int nums[5];// Declare an interger array of size five.
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << " Input a value to be stored in the Array : \n";// Prompt user to input five values.
        cin >> nums[i];
    }
    cout << "The Input values stored in the array are :" << endl;// Output values stored in the array 

    for (int x = 0; x < 5; x++) {
        cout << nums[x] << "\t";//Output the five values entered by the user
        sum = sum + nums[x];
    }
    cout << "\n";
    cout << "The sum of the values entered is : ";
    cout << sum << "\t and the size of the array is : ";
    cout << sizeof(nums) << "bytes \n\n";

    return 0;
}