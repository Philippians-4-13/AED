#include <iostream>
#include <cassert>

using namespace std;

int main() 
{
    bool vTrue = true, vFalse = false;
    assert (vTrue&&vFalse||vTrue);
    assert (vTrue||vFalse);
    assert (!vFalse);

    vTrue = 1;
    vFalse = 0;

    assert (vTrue + vFalse); 
    assert (vTrue - vFalse);
    assert (vTrue = 1 < 2);
    
    unsigned uA = 7, uB = 3; 
	assert(uA + uB);
    assert(uA - uB);
    assert(uA * uB);
    assert(uA / uB);
    assert(uA % uB);

    int iA = -24, iB = 12;
	assert(iA + iB);
    assert(iA - iB);
    assert(iA * iB);
    assert(iA / iB);

    double dA = 2.4, dB = 3.5;
    assert(dA + dB);
    assert(dA - dB);
    assert(dA * dB);
    assert(dA / dB);

    char cA ='A', cB ='B';
    assert(cA<cB);
    assert(cA+cB+cB+cA);

    string sA = "Abecedario", sB ="012345";
    string sC = sA + sB;
}