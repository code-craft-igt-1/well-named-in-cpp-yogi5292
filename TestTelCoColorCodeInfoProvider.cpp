#include <assert.h>
#include <sstream>
#include "TelCoColorCodeInfoProvider.h"

namespace TelCoColorCoder
{
    void testNumberToPair(int pairNumber,
        MajorColor expectedMajor,
        MinorColor expectedMinor)
    {
        TelCoColorCoder::ColorPair colorPair =
            TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void testPairToNumber(MajorColor major,
        MinorColor minor,
        int expectedPairNumber)
    {
        int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }

    void testTraceTelCoColorCodeMap()
    {
        std::string telCoColorCodeInfo = GetTelCoColorCodeMap();

        for(int pairNumber = 1; pairNumber <= 25; pairNumber++)
        {
            std::stringstream temp;
            temp << pairNumber << " " << GetColorFromPairNumber(pairNumber).ToString();
            assert(telCoColorCodeInfo.find(temp.str()) != std::string::npos);
        }
    }
}
