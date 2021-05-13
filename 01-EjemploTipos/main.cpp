#include <iostream>
#include <cassert>
#include <string>
//#define NDEBUG

using namespace std;

int main() 
{
    //Tipo de dato: bool
    assert (true and false or true == true);
    assert (true or false == true);
    assert (not false == true);
    assert (true + false == true); 
    assert (true - false == true);
    assert (true < 2);
    
    //Tipo de dato: unsigned
	assert(7u + 3u == 10u);
    assert(7u - 3u == 4u);
    assert(7u * 3u == 21u);
    assert(7u / 3u == 2u);
    assert(7u % 3u == 1u);

    //Tipo de dato: int
	assert(-24 + 12 == -12);
    assert(-24 - 12 == -36);
    assert(-24 * 12 == -288);
    assert(-24 / 12 == -2);

    //Tipo de dato: double
    assert(2.4 + 3.5 == 5.9);
    assert(2.4 - 3.5 == -1.1);
    assert(2.4 * 3.5 == 8.4);
    assert(2.4 / 3.5 >= 0.68);

    //Tipo de dato: char
    assert('A'<'B');
    assert('C'-'B'==1);

    //Tipo de dato: string
    assert (string("Se me") + string(" trabo la pc :(") == "Se me trabo la pc :(");
    assert (string("Reprobado").length()==9);
}