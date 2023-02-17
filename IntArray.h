#ifndef INTARRAY_H
#define INTARRAY_H

#include <cassert> // for assert()
// #include <exception>

class IntArray
{
  public:
      IntArray(int size);
    int GetSize() const;
    ~IntArray();

    int& operator[](int index);

    void Copy(const IntArray& a);
    
    void Erase();
    // any existing elements will be destroyed
    void Reallocate(int newSize);

    // any existing elements will be kept
    void Resize(int newSize);

    int& GetElement(int index) const;

    void InsertElem(int value, int index);

    void RemoveElem(int index);

  private:
    int m_length;
    int* m_data;
};

// class bad_range: public std::exception 
// {
// public:
//   virtual const char * what() const noexcept override
//   {
//     return "ERROR: выход за пределы массива";
//   }
// };


// class bad_length: public std::exception 
// {
// public:
//   virtual const char * what() const noexcept override
//   {
//     return "ERROR: неправильная длина массива";
//   };
// };
// class bad_range : public std::exception
// {
// public:
//     virtual const char* what() const noexcept override  {return "Harmonic mean exception ";}
// };

#endif