#include <iostream>
#include <exception>

#include "IntArray.h"
#include "exceptions.h"

int main() 
{
    // Declare an array with 10 elements
    IntArray array(10);

    // Fill the array with numbers 1 through 10
    for (int i = 0; i < 10; ++i)
        array[i] = i + 1;

    IntArray b(7);
    for (int i = 0; i < 7; ++i)
    {
        b[i] = i + 1;
    }

    try 
    {
    array.Resize(8);

    array.GetElement(4);

    array.RemoveElem(3);
    array.Reallocate(7);
    array.Copy(b);
    array.InsertElem(3, 5);
    array.RemoveElem(5);

    }
    catch (Bad_range& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    catch (Bad_length& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
};
