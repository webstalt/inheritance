#include <iostream>
// #include <exception>
#include "IntArray.h"
#include "exceptions.h"

IntArray::IntArray(int length)
{
  if (length <= 0) {
    throw Bad_range();
  };
  m_length = length;
  m_data = new int[length];
}

int IntArray::GetSize() const
{
  return m_length;
}

void IntArray::Erase() {
  delete[] m_data;
  m_data = nullptr;
  m_length = 0;
}

int& IntArray::operator[] (int index)
{
  if (index < m_length - 1)
  {
    throw Bad_range();
  }
  return m_data[index];
}

void IntArray::Reallocate(int newLength)
{
    Erase();
    if (newLength < 0)
    {
      throw Bad_range();
    };
    m_data = new int[newLength];
    m_length = newLength;
}

void IntArray::Resize(int newLength)
{
 if (newLength == m_length)
    return;

    if (newLength <= 0)
      {
          Erase();
          return;
      }

    // First we have to allocate a new array
    int* data = new int[newLength];

    if (m_length > 0)
    {
      int elementsToCopy = (newLength > m_length) ? m_length : newLength;

      // Now copy the elements one by one
      for (int index = 0; index < elementsToCopy; ++index)
          data[index] = m_data[index];
    }
    delete[] m_data;

    m_data = data;
    m_length = newLength;
}

void IntArray::Copy(const IntArray& a)
{
   // Set the size of the new array appropriately
  Reallocate(a.GetSize());

  for (int index = 0; index < m_length; ++index)
      m_data[index] = a.m_data[index];
}

int& IntArray::GetElement(int index) const
{
  if (index >= m_length) 
  {
    throw Bad_range();
  }
  return m_data[index];
}

IntArray::~IntArray() 
{
  delete[] m_data;
}

void IntArray::InsertElem(int value, int index) 
{
  if (index < 0 || index >= m_length)
  {
    throw Bad_range();
  }
  
   int* data = new int[m_length+1];

    // Copy all of the elements up to the index
    for (int before = 0; before < index; ++before)
        data[before] = m_data[before];

    // Insert our new element into the new array
    data[index] = value;

    // Copy all of the values after the inserted element
    for (int after = index; after < m_length; ++after)
        data[after+1] = m_data[after];

    delete[] m_data;
    m_data = data;
    ++m_length;
}

void IntArray::RemoveElem(int index) 
{
  if (index < 0 || index >= m_length)
  {
    throw Bad_range();
  }
  
  // If this is the last remaining element in the array, set the array to empty and bail out
    if (m_length == 1)
    {
        Erase();
        return;
    }

    // First create a new array one element smaller than the old array
    int* data = new int[m_length-1];

    // Copy all of the elements up to the index
    for (int before = 0; before < index; ++before)
        data[before] = m_data[before];

    // Copy all of the values after the removed element
    for (int after = index + 1; after < m_length; ++after)
        data[after-1] = m_data[after];

    // Finally, delete the old array, and use the new array instead
    delete[] m_data;
    m_data = data;
    --m_length;
}
