#ifndef INTARRAY_H
#define INTARRAY_H

#include <cassert> // for assert()

template <typename T> class Array
{
  public:
      Array(unsigned size);
    T GetSize() const;
    virtual ~Array();

    int& operator[](int index);

    void Copy(const Array& a);
    
    void Erase();
    // any existing elements will be destroyed
    void Reallocate(int newSize);

    // any existing elements will be kept
    void Resize(int newSize);

    int& GetElement(int index) const;

    void InsertElem(T value, int index);

    void RemoveElem(int index);

  private:
    unsigned m_length;
    T* m_data;
};

#endif