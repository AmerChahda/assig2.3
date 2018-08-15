/**
 * Simple_cal_test.cpp
 *
 * @author Amer Chahda AC
 * @version 0.1
 * @date 14 aug. 2018
 *
 */


#include "Calculator.h"
#include "gtest/gtest.h"
#include <iostream>


TEST (Simple_cal_Test, addition_test)
{
	// Arrange
	Calculator caltest;
	float fir_num =1;
	float sec_num=1;
	float result;
	// Act
	result = caltest.add_fun(fir_num , sec_num);
	// Assert
	ASSERT_TRUE(result==2);
	ASSERT_FALSE(result==2);
}

TEST (Simple_cal_Test, division_test)
{
	// Arrange
	Calculator caltest;
	float fir_num =1;
	float sec_num=1;
	float result;
	// Act
	result = caltest.div_fun(fir_num , sec_num);
	// Assert
	ASSERT_TRUE(result==2);
	ASSERT_FALSE(result==2);
}

TEST (Simple_cal_Test, subtruction_test)
{
	// Arrange
	Calculator caltest;
	float fir_num =1;
	float sec_num=1;
	float result;
	// Act
	result = caltest.sub_fun(fir_num,sec_num);
	// Assert
	ASSERT_TRUE(result==0);
	ASSERT_FALSE(result==2);
}

TEST (Simple_cal_Test, multblication_test)
{
	// Arrange
	Calculator caltest;
	float fir_num =1;
	float sec_num=1;
	float result;
	// Act
	result = caltest.mul_fun(fir_num , sec_num);
	// Assert
	ASSERT_TRUE(result==1);
	ASSERT_FALSE(result==2);
}

int main(int argc, char **argv)
{

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
