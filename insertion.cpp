// Insert an element at given position
#include <iostream>
#include <vector>
using namespace std;

class Array
{
public:
   vector<int> arr;

public:
   // Inser element at the given position
   void insert_at_pos(int pos, float x)
   { // pos = position where we want to insert ,x= element to inserted
      if (pos < 0 || pos > arr.size())
      {
         cout << "Invalid Position!!" << endl;
      }
      arr.push_back(0);
      for (int i = arr.size() - 2; i >= pos; i--)
      {
         arr[i + 1] = arr[i];
      }
      arr[pos] = x;
   }

   void inset_begining(int x)
   {

      arr.push_back(0);
      for (int i = arr.size() - 2; i >= 0; i--)
      {
         arr[i + 1] = arr[i];
      }
      arr[0] = x;
   }

   void insert_at_end(int x)
   {
      arr.push_back(x);
   }

   void display()
   {
      for (int i = 0; i < arr.size(); i++)
      {
         cout << arr[i] << " ";
      }
      cout << endl;
   }
};
int main()
{
   Array arr1;
   arr1.arr = {1,2,4,5};
   cout << "In the begining array was : ";
   arr1.display();
   arr1.insert_at_pos(2, 3);
   cout << "After inserting element at the given position, Array : ";
   arr1.display();
   arr1.inset_begining(0);
   cout<<"After inserting element at the begining, Array : ";
   arr1.display();
   arr1.insert_at_end(6);
   cout<<"After inserting element at the end, Array : ";
   arr1.display();
}