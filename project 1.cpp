#include <iostream>
#include <fstream>
using namespace std;

void readFromFile(int arr[], int& size)
{
    int number;

    ifstream fin("input.txt");

    if (!fin.is_open())
    {
        cout << "Error opening the file!" << endl;
        return;
    }

    while (fin >> number)
    {
        arr[size] = number;
        size++;
    }
    fin.close();
}

void displayArray(int arr[], int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

//1) Check if a certain integer exists in the array if the number is present return the index where the number is present.
int findNumber(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
            return i;
    }

    return -1;
}

//2) A function that can modify the value of an integer when called with the index of the integer in the array 
//and return the new value and old value back to the user.
void modifyArray(int arr[], int size, int index)
{
    int oldNumber = arr[index];
    int newNumber = 25;

    arr[index] = newNumber;

    cout << "\nOld number: " << oldNumber << "\nNew number: " << newNumber << "\n";
}

//3) A function that adds a new integer to the end of the array
void addNumber(int arr[], int size, int newNumber)
{
    arr[size++] = newNumber;
}

int main()
{
    int arr[100]; //An array to store integers
    int size = 0;  //Variable to store size of the array.

    readFromFile(arr, size);  //Function to read from file.
    displayArray(arr, size); //Function to display the array.

    int target = 6;

    if (findNumber(arr, size, target))
        cout << endl << target << " is present in the array" << endl;
    else
        cout << endl << target << " is not present in the array" << endl;

    target = 11;

    if (findNumber(arr, size, target))
        cout << endl << target << " is present in the array" << endl;
    else
        cout << endl << target << " is not present in the array" << endl;


    modifyArray(arr, size, 7); //To change the value at a particular index.
    displayArray(arr, size); //Function to display the array.

    cout << endl << "Adding value 89 to the end of the array:";
    addNumber(arr, size, 89);
    displayArray(arr, size); //Function to display the array.


    return 0;
}

