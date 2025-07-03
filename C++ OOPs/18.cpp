//User-defined Data Structure:
//Vector is a like an array that expands its size when needed and also shrinks when needed.
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);//it will add 10 to the vector and an array of 1 size will be created.
    v.push_back(9);
    // in a vector when the size and Capacity are the same then vector doubles the capacity.
    //it'll make a new array and store the elements of previous array in it. 
    // after insertion of 9 our array size is 2.
    v.push_back(21);//Now,another array of 3 size is created and new array is formed with 3 elements.
    //now again the size of array is doubled 0,1,2,3.
    //size increases by 1 and capacity is doubled every time.
    v.push_back(2);//This time the array didn't doubled because there was existing space in the array.
    //when size equal to capacity then only array will be doubled.
    v.push_back(5);//as the size and capacity are same,so,array size is doubled to 8 and we 
    //can store 8 elements and then we can fulfil the array further and when size and capacity will be 
    //equal then we'll increase the size.
    v.push_back(90);
    v.push_back(4);
    v.push_back(12);
    v.pop_back();// it will remove the last element in an array.
    v.pop_back();
    v.push_back(10);
    cout<<v.at(0)<<endl;
    cout<<v.size()<<endl;
  return 0;
}
//vector is basically an array of unlimited size.
