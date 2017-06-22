#include "koren`.h"
#include "ctest.h"

CTEST(proverka1, test1)
{
    const double result = proverka(0, 1, 3);
    const double expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(proverka1, test2)
{
    const double result = proverka(1, 1, -2);
    const double expected = 0;
    ASSERT_EQUAL(expected, result);
}