#include <gtest/gtest.h>
#include "func.h"

TEST(test_01, basic_test_set)
{
    pair <int, int> t (5, 4);
    ASSERT_TRUE((func(10) == t));
}
TEST(test_02, basic_test_set)
{
    pair <int, int> t (5, 5);
    ASSERT_FALSE((func(11) == t));
}
TEST(test_03, basic_test_set)
{
    pair <int, int> t (45, 36);
    ASSERT_TRUE((func(50) == t));
}
TEST(test_04, basic_test_set)
{
    pair <int, int> t (68, 32);
    ASSERT_TRUE((func(70) == t));
}
TEST(test_05, basic_test_set)
{
    pair <int, int> t (64, 60);
    ASSERT_FALSE((func(80) == t));
}
TEST(test_06, basic_test_set)
{
    pair <int, int> t (226, 30);
    ASSERT_TRUE((func(228) == t));
}

//50 - 45 36
//70 - 74 70
//228 226 30

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}