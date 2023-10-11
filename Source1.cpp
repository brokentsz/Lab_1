#include <iostream>
#include "Header1.h"
bool AND(bool a, bool b)
{
    if (a == true && b == true) return true;
    else return false;

}
bool OR(bool a, bool b)
{
    if (a == true || b == true) return true;
    else return false;

}
bool NOT(bool a)
{
    return !a;

}
bool IMP(bool a, bool b)
{
    if (a == true && b == false) return false;
    else return true;

}
bool XOR(bool a, bool b)
{
    if (a == b) return false;
    else return true;

}
bool EQU(bool a, bool b)
{
    if (a == b) return true;
    else return false;

}
