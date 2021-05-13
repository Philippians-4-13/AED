#include <iostream>
#include <cassert>
#include <string>
//#define NDEBUG

using namespace std;

int main() 
{
    //Tipo de dato: bool
    assert ((true and false) or true == true);
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
    assert(2.4e-2 + 3.5 == 3.524);
    assert(2.4e-2 - 3.5 == -3.476); 
    assert(2.4e-2 * 3.5 == 0.084);
    assert(2.4e-2 / 3.5 >= 0.0068);

    //Tipo de dato: char
    assert('A'<'B');
    assert('C'-'B'==1);

    //Tipo de dato: string
    assert (string("Se me") + string(" trabo la pc :(") == "Se me trabo la pc :(");
    assert (string("Reprobado").length()==9);
    assert (string("Mejore la RAM, ahora debería funcionar mejor"s).length());
}