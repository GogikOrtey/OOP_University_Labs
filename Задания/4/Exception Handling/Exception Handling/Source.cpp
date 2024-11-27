#include "templates.h"
#include "MyComplex.h"
#include <iostream>

int main()
{
    Data<int> di1;
    Data<MyComplex> dc1;

    try
    {
        di1.add(1);
        di1.add(5);
        di1.add(10);
        di1.info();
        di1.del();
        di1.info();
        std::cout << di1.multy() << "\n";

        di1.del();
        di1.del();
        //di1.del();


        dc1.add(MyComplex(1, 2));
        dc1.add(MyComplex(3, 6));
        std::cout << dc1.multy() << "\n";
        dc1.add(MyComplex(0, 0));
        dc1.multy();

    }
    catch (Data<int>::Empty)
    {
        std::cout << "array is empty\n";
    }
    catch (Data<int>::Full)
    {
        std::cout << "array is full\n";
    }
    catch (Data<int>::Zero)
    {
        std::cout << "array has element 0\n";
    }
    catch (Data<MyComplex>::Zero)
    {
        std::cout << "array has element 0\n";
    }
    return 0;
}
