#include "TelCoColorCodeInfoProvider.h"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void TraceTelCoColorCodeMap()
    {
        for(int pairNumber = 1; pairNumber <= 25; pairNumber++)
        {
            ColorPair colorPair = GetColorFromPairNumber(pairNumber);
            std::cout << pairNumber << colorPair.ToString() << "\n";
        }
    }
}