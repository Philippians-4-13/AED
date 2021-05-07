#include <iostream>
#include <cassert>
#include <string>
#define NDEBUG

using namespace std;

int main() 
{
    //Tipo de dato: bool
    assert (true&&false||true == true);
    assert (true||false == true);
    assert (!false == true);
    assert (true + false == true); 
    assert (true - false == true);
    assert (true < 2);
    
    //Tipo de dato: unsigned
	assert(7 + 3 == 10);
    assert(7 - 3 == 4);
    assert(7 * 3 == 21);
    assert(7 / 3 == 7/3);
    assert(7 % 3 == 1);

    //Tipo de dato: int
	assert(-24 + 12 == -12);
    assert(-24 - 12 == -36);
    assert(-24 * 12 == -288);
    assert(-24 / 12 == -2);

    //Tipo de dato: double
    assert(2.4 + 3.5 == 5.9);
    assert(2.4 - 3.5 == -1.1);
    assert(2.4 * 3.5 == 8.4);
    assert(2.4 / 3.5 == 2.4/3.5);

    //Tipo de dato: char
    assert('A'<'B');
    assert('A'+'B'+'B'+'A');

    //Tipo de dato: string
    assert (string("Se me") + string(" trabo la pc :(") == "Se me trabo la pc :(");
}