#include "pch.h"
#include <ImageProcessor.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(UnitTests)
{
public:

    TEST_METHOD(TestRGB)
    {
        Await(ImageProcessor::RunRgbAsync());
    }
};
