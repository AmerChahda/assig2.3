/**
 * Simple_cal_test.cpp
 *
 *  @date 14 aug. 2018
 *  @Author Amer Chahda AC
 */

#include <iostream>
#include "gtest/gtest.h"
TEST (Simple_cal_Test, addition_test)
{
	// Arrange
	int fir_num =1;
	int sec_num=1;
	int result;
	// Act
	result = fir_num + sec_num;
	// Assert
	ASSERT_TRUE(result==2);
}


int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
