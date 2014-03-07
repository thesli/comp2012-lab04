#include <iostream>
using namespace std;

class MoneyType
{
public:
    MoneyType();
    MoneyType(long,long);
    void Initialize(long,long);
    long DollarsAre();
    long CentsAre();
    MoneyType Add(const MoneyType &);
    void Normalize();
private:
    long dollars;
    long cents;
};