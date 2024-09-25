#include <iostream>
#include "IntArray.h"

int IntArray::count = 0;

IntArray::IntArray()
{
   array = new int[5];
   size = 5;
   fill_array();
   count++;
}

IntArray::IntArray(int size)
{
    array = new int[size];
    this->size = size;
    fill_array();
    count++;
}

IntArray::IntArray(const IntArray& right)
{
    array = new int[right.size];
    size = right.size;
    
    //copy the values of the array (in the heap) of right --> deep copy
    for(int i=0; i < size; i++)
        {
            array[i] = right.array[i];
        }
        count++;
}

IntArray::~IntArray()
{
    delete[] array;
    count--;
}

//IntArray a;
//IntArray b(3);
//IntArray c;
//c = b = a;
//similar to the copy constructor, but we are not creating an object.
//work on existing objects
IntArray& IntArray::operator=(const IntArray& right)
{
    if(right.size == this->size)
    {
        for(int i=0; i<size; i++)
        {
            array[i] = right.array[i];
        }
    }
    else
    {
        delete[] array;
        this->array = new int[right.size];
        size = right.size;
        for(int i = 0; i < size; i++)
        {
            array[i] = right.array[i];
        }
    }
}
//c = a + b; element by element addition
IntArray IntArray::operator+(const IntArray& right)
{
    IntArray result(right.size);
    if(size == right.size)
    {
        for(int i=0; i < size; i++)
        {
            result.array[i] = array[i] + right.array[i];
        }
    }
    else
    {
    
    }
    return result; //local object --> return type IntArray without &
                    //result will be copied to the stack or a CPU register
                    //copy constructor will be called automatically.
}

void IntArray::fill_array()
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 100;
    }
}

int IntArray::get_count()
{
    return count;
}