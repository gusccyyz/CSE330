//
//  Vector.h
//  Lab6
//
//  Created by Mbusi Hlatshwayo on 6/2/15.
//  Copyright (c) 2015 Mbusi Hlatshwayo. All rights reserved.
//

#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>
#include <cstring>

using namespace std;

template <class T>
class Vector
{
private:
	   unsigned int my_size;
	   unsigned int my_capacity;
	   T * buffer;
    
public:
	   typedef T * Iterator;
	   
	   Vector();
	   Vector(unsigned int size);
	   Vector(unsigned int size, const T &initial);
	   Vector(const Vector<T> &v);	// Constructor that copies
	   ~Vector();
	   
	   unsigned int capacity() const;	// Returns capacity of vector
	   unsigned int size() const;	// Returns the number of elements in the vector
	   bool empty() const; // is vector empty?
	   
	   Iterator begin();	// Returns iterator pointing the first element of the vector
	   Iterator end();  // Returns iterator pointing to the last element of vector
	   T &front();	// Returns reference to the first element
	   T &back();	// Returns reference to the last element
	   
	   void push_back(const T & value); // Adds new element to back of vector
	   void pop_back(); // Removes the last element of vector
	   void reserve(unsigned int capacity); // Adjusts the capacity of vector
	   void resize(unsigned int size); // Readjusts the size of vector
    
	   T & operator[](unsigned int index);
	   Vector<T> & operator=(const Vector<T> &);
    
    
};

// Adjusts the capacity of vector
template<class T>
void Vector<T>::reserve(unsigned int capacity)
{
    if(buffer == 0)
    {
        my_size = 0;
        my_capacity = 0;
    }
    
    if (capacity <= my_capacity) {
        return;
    }
    T * new_buffer = new T [capacity];
    assert(new_buffer);
    copy(buffer, buffer + my_size, new_buffer);
    my_capacity = capacity;
    delete[] buffer;
    buffer = new_buffer;
}

template<class T>
Vector<T>::Vector() // default constructor
{
    my_capacity = 0;
    my_size = 0;
    buffer = 0;
}

template<class T>
Vector<T>::Vector(unsigned int size) //Constructs the vector with the given size
{
    my_capacity = size;
    my_size = size;
    buffer = new T[size];
}

template<class T>
Vector<T>::Vector(unsigned int size, const T &initial)
{
   
    my_size = size;
    my_capacity = size;
    buffer = new T [size];
    
    // loop through vector and assign initial param to buffer [index]
    for (int index = 0; index < size; index++) {
     
        buffer[index] = initial;
    
    }

}

template<class T>
Vector<T>::Vector(const Vector<T> &v)
{
    my_size = v.my_size;
    my_capacity = v.my_capacity;
    // create new array and assign it to buffer
    buffer = new T[my_size];
   
    // loop through vector and copy elements to buffer
    for (int index = 0; index < my_size; index++) {
        
        buffer[index] = v.buffer[index];
    
    }

}

template<class T>
Vector<T>::~Vector()
{
    delete[]buffer;
}

// Method return the capacity of the vector
template<class T>
unsigned int Vector<T>::capacity() const
{
    return my_capacity;
}

// Method to return the size of the vector
template<class T>
unsigned int Vector<T>::size() const
{
    return my_size;
}

// check if  the vector is empty
template <class T>
bool Vector<T>::empty() const
{
    if (my_size == 0) {
        
        return true;
        
    } else {
        
        return false;
        
    }
}

// Returns iterator pointing the first element of the vector
template<class T>
typename Vector<T>::Iterator Vector<T>::begin()
{
    return buffer;
}

// Returns iterator pointing to the last element of vector
template<class T>
typename Vector<T>::Iterator Vector<T>::end()
{
    return buffer + size();
}

// Return the first element of the vector
template<class T>
T &Vector<T>::front()
{
    return buffer[0];
}

// Return the last element of the vector
template<class T>
T &Vector<T>::back()
{
    return buffer[my_size - 1];
}

// Add 5 to the capacity of the vector
template<class T>
void Vector<T>::push_back(const T &v)
{
    if (my_size >= my_capacity)
        reserve(my_capacity + 5);
    buffer [my_size++] = v;
}

// remove last element of vector
template<class T>
void Vector<T>::pop_back()
{
    my_size--;
}


// Readjusts the size of vector
template<class T>
void Vector<T>::resize(unsigned int size)
{
    reserve(size);
    my_size = size;
}

// return reference to numbered element
template<class T>
T &Vector<T>::operator[](unsigned int index)
{
    
    return buffer[index];

}

template<class T>
Vector<T> &Vector<T>::operator = (const Vector<T> & v)
{
    delete[ ] buffer;
    my_size = v.my_size;
    my_capacity = v.my_capacity;
    buffer = new T [my_size];
    
    for (int i = 0; i < my_size; i++) {
    
        buffer[i] = v.buffer[i];
    
    }
    
    return *this;
}