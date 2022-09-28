#include <gtest/gtest.h>
#include "my_header_only_lib.hpp"

TEST(test_case_name, test_name)
{
	ASSERT_EQ(1, my_sum<int>(1, 0)) << "1 is not equal 0";
}