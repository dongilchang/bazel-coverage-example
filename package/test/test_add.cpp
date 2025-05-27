#include <gtest/gtest.h>
#include "add.hpp"

TEST(ADD, add_basic)
{
    ASSERT_EQ(0, add(-1,1));
}

