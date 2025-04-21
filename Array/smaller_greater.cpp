// Find all the smaller and greater elements for the given value
#include <iostream>
#include <vector>
using namespace std;

class Test
{
private:
    int *array;
    int size; // no of element in array

public:
    Test(int a[], int n)
    {
        size = n;
        array = new int[size];
        for (int i = 0; i < size; i++)
        {
            array[i] = a[i];
        }
    }

    ~Test()
    {
        delete[] array;
    }

    void smaller(int x)
    {
        bool found = false;
        for (int i = 0; i < size; i++)
        {
            if (array[i] < x)
            {
                cout << array[i] << " ";
                found = true;
            }
        }
        if (found != true)
        {
            cout << "There is no element present smaller than " << x;
        }
        cout << endl;
    }

    void greater(int x)
    {
        bool found = false;
        for (int i = 0; i < size; i++)
        {
            if (array[i] > x)
            {
                cout << array[i] << " ";
                found = true;
            }
        }
        if (found != true)
        {
            cout << "There is no element present smaller then " << x;
        }
        cout << endl;
    }
};

int main()
{

    int size; // no of elements
    cout << "Enter the number of elements present in the array : ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int value; // Element from which we want greater and smaller element
    cout << "Enter the value for which we want greater or smaller elements :";
    cin >> value;

    Test process(arr, size);

    cout << "Smaller elements are : ";
    process.smaller(value);
    cout << "Greater elements are : ";
    process.greater(value);
}