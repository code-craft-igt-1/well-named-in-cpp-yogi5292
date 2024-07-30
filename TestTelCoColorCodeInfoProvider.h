#include "TelCoColorCodeInfoProvider.h"

namespace TelCoColorCoder
{
    void testNumberToPair(int pairNumber,
        MajorColor expectedMajor,
        MinorColor expectedMinor);

    void testPairToNumber(
        MajorColor major,
        MinorColor minor,
        int expectedPairNumber);
}