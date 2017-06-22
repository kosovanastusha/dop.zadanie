#include "koren`.h"
#include "ctest.h"

CTEST(koren`1, test1)
{
    const double result = koren`1(1, 1, -2, 0);
    const double expected = -2;
    ASSERT_EQUAL(expected, result);
}

CTEST(koren`2, test1)
{
    const double result = koren`2(1, 1, -2, 0);
    const double expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(koren`3, test1)
{
    const double result = koren`3(1, 2, 1, 0);
    const double expected = -1;
    ASSERT_EQUAL(expected, result);
}