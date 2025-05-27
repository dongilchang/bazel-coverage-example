#include <gtest/gtest.h>
#include "mul.hpp"

TEST(MUL, mul_basic)
{
    ASSERT_EQ(0, mul(0,1));
}
