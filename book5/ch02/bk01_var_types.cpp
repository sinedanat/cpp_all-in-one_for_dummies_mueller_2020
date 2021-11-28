#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    char Char = CHAR_MAX;
    unsigned char UChar = UCHAR_MAX;
    short Short = SHRT_MAX;
    unsigned short UShort = USHRT_MAX;
    int Int = INT_MAX;
    unsigned int UInt = UINT_MAX;
    long Long = LONG_MAX;
    unsigned ULong = ULONG_MAX;
    long long LongLong = LLONG_MAX;
    unsigned long long ULongLong = ULLONG_MAX;
    bool Bool = true;
    float Float = FLT_MIN;
    double Double = DBL_MIN;
    long double LDouble = LDBL_MIN;

    cout << "Char\t\t\t" << Char << "\t\t\t" <<
         sizeof(Char) << endl;
    cout << "Unsigned Char\t\t" << UChar << "\t\t\t" <<
         sizeof(UChar) << endl;
    cout << "Short\t\t\t" << Short << "\t\t\t" <<
         sizeof(Short) << endl;
    cout << "Unsigned Short\t\t" << UShort << "\t\t\t" <<
         sizeof(UShort) << endl;
    cout << "Int\t\t\t" << Int << "\t\t" <<
         sizeof(Int) << endl;
    cout << "Unsigned Int\t\t" << UInt << "\t\t" <<
         sizeof(UInt) << endl;
    cout << "Long\t\t\t" << Long << "\t\t" <<
         sizeof(Long) << endl;
    cout << "Unsigned Long\t\t" << ULong << "\t\t" <<
         sizeof(ULong) << endl;
    cout << "Long Long\t\t" << LongLong << "\t" <<
         sizeof(LongLong) << endl;
    cout << "Unsigned Long Long\t" << ULongLong << "\t" <<
         sizeof(ULongLong) << endl;
    cout << "Bool\t\t\t" << (Bool ? "True" : "False") <<
         "\t\t\t" << sizeof(Bool) << endl;
    cout << "Float\t\t\t" << Float << "\t\t" <<
         sizeof(Float) << endl;
    cout << "Double\t\t\t" << Double << "\t\t" <<
         sizeof(Double) << endl;
    cout << "Long Double\t\t" << LDouble << "\t\t" <<
         sizeof(LDouble) << endl;

    return 0;
}

// Char                                            1
// Unsigned Char                                   1
// Short                   32767                   2
// Unsigned Short          65535                   2
// Int                     2147483647              4
// Unsigned Int            4294967295              4
// Long                    2147483647              4
// Unsigned Long           4294967295              4
// Long Long               9223372036854775807     8
// Unsigned Long Long      18446744073709551615    8
// Bool                    True                    1
// Float                   1.17549e-38             4
// Double                  2.22507e-308            8
// Long Double             3.3621e-4932            16
