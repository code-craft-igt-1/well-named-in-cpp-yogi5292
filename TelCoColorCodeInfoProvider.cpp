#include <sstream>
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

    std::string GetTelCoColorCodeMap()
    {
        std::stringstream ColorCodePairInfo;
        for(int pairNumber = 1; pairNumber <= 25; pairNumber++)
        {
            ColorCodePairInfo << pairNumber << " " << GetColorFromPairNumber(pairNumber).ToString() << "\n";
        }
        return ColorCodePairInfo.str();
    }
}