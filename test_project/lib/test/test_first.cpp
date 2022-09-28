#include <gtest/gtest.h>
#include "my_header_only_lib.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(my_sum<int>(40, 2), 42);
}
