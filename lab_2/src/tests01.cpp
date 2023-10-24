#include <gtest/gtest.h>
#include "Thirteen.h"

TEST(test_1, AllMetods)
{
    Thirteen a("123");
    Thirteen b("2");

	size_t sizea = a.GetSize();
	size_t expectSizea = 3;
    size_t sizeb = b.GetSize();
	size_t expectSizeb = 1;

	unsigned char* numsa = a.GetNums();
	unsigned char expectNumsa[] = {'3', '2', '1'};
    unsigned char* numsb = b.GetNums();
	unsigned char expectNumsb[] = {'2'};

    int to_10a = a.translate_to_10();
    int expectto_10a = 171;
    int to_10b = b.translate_to_10();
    int expectto_10b = 2;
    
    std::string ab = a.plus(b);
    std::string expectab = ("125");
    std::string a_b = a.minus(b);
    std::string expecta_b = ("121");
    std::string b_a = b.minus(a);
    std::string expectb_a = ("negative number");

    std::string aab = a.big(b);
    std::string expectaab = ("true");
    std::string abb = a.small(b);
    std::string expectabb = ("false");
    std::string aabb = a.equally(b);
    std::string expectaabb = ("false");

// проверка
    ASSERT_EQ(sizea, expectSizea);
    ASSERT_EQ(sizeb, expectSizeb);

	for (size_t q = 0; q < sizea; q++) 
		ASSERT_EQ(numsa[q], expectNumsa[q]);
    for (size_t q = 0; q < sizeb; q++) 
		ASSERT_EQ(numsb[q], expectNumsb[q]);

    ASSERT_EQ(to_10a, expectto_10a);
    ASSERT_EQ(to_10b, expectto_10b);

    ASSERT_EQ(ab, expectab);
    ASSERT_EQ(a_b, expecta_b);
    ASSERT_EQ(b_a, expectb_a);

    ASSERT_EQ(aab, expectaab);
    ASSERT_EQ(abb, expectabb);
    ASSERT_EQ(aabb, expectaabb);

}

TEST(test_2, AllMetods)
{
    Thirteen a("321A");
    Thirteen b("2CC");

	size_t sizea = a.GetSize();
	size_t expectSizea = 4;
    size_t sizeb = b.GetSize();
	size_t expectSizeb = 3;

	unsigned char* numsa = a.GetNums();
	unsigned char expectNumsa[] = {'3', '2', '1', 'A'};
    unsigned char* numsb = b.GetNums();
	unsigned char expectNumsb[] = {'2', 'C', 'C'};

    int to_10a = a.translate_to_10();
    int expectto_10a = 6952;
    int to_10b = b.translate_to_10();
    int expectto_10b = 506;
    
    std::string ab = a.plus(b);
    std::string expectab = ("3519");
    std::string a_b = a.minus(b);
    std::string expecta_b = ("2C1B");
    std::string b_a = b.minus(a);
    std::string expectb_a = ("negative number");

    std::string aab = a.big(b);
    std::string expectaab = ("true");
    std::string abb = a.small(b);
    std::string expectabb = ("false");
    std::string aabb = a.equally(b);
    std::string expectaabb = ("false");

// проверка
    ASSERT_EQ(sizea, expectSizea);
    ASSERT_EQ(sizeb, expectSizeb);

	for (size_t q = 0; q < sizea; q++) 
		ASSERT_EQ(numsa[q], expectNumsa[q]);
    for (size_t q = 0; q < sizeb; q++) 
		ASSERT_EQ(numsb[q], expectNumsb[q]);

    ASSERT_EQ(to_10a, expectto_10a);
    ASSERT_EQ(to_10b, expectto_10b);

    ASSERT_EQ(ab, expectab);
    ASSERT_EQ(a_b, expecta_b);
    ASSERT_EQ(b_a, expectb_a);

    ASSERT_EQ(aab, expectaab);
    ASSERT_EQ(abb, expectabb);
    ASSERT_EQ(aabb, expectaabb);

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}