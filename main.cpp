#include <sstream>
#include "TestTelCoColorCodeInfoProvider.h"

int main() {
    TelCoColorCoder::testNumberToPair(4, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::BROWN);
    TelCoColorCoder::testNumberToPair(5, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::SLATE);

    TelCoColorCoder::testPairToNumber(TelCoColorCoder::MajorColor::BLACK, TelCoColorCoder::MinorColor::ORANGE, 12);
    TelCoColorCoder::testPairToNumber(TelCoColorCoder::MajorColor::VIOLET, TelCoColorCoder::MinorColor::SLATE, 25);

    TelCoColorCoder::testTraceTelCoColorCodeMap();

    std::cout << TelCoColorCoder::GetTelCoColorCodeMap();
    return 0;
}