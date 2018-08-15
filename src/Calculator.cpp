/*
 * Calculator.cpp
 *
 *  Created on: 15 aug. 2018
 *      Author: ACH11739
 */

#include "Calculator.h"
#include <iostream>

Calculator::Calculator()
{
	// TODO Auto-generated constructor stub
	
}

Calculator::~Calculator()
{
	// TODO Auto-generated destructor stub
}

float Calculator::getFirNumber() const
{
	return fir_number;
}

void Calculator::setFirNumber(float firNum)
{
	fir_number = firNum;
}

float Calculator::getSecNumber() const
{
	return sec_number;
}

void Calculator::setSecNumber(float secNum)
{
	sec_number = secNum;
}

int Calculator::getOpirationNum() const
{
	return opiration_num;
}

void Calculator::setOpirationNum(int opirationNum)
{
	opiration_num = opirationNum;
}

void Calculator::operation_type(int op_no)
{
	switch (op_no)
	{
		case 1:
			std::cout<<getFirNumber()<<" + "<<getSecNumber()<<"= "<<add_fun(getFirNumber(),getSecNumber())<<"\n";
			break;
		case 2:
			std::cout<<getFirNumber()<<" - "<<getSecNumber()<<"= "<<sub_fun(getFirNumber(),getSecNumber())<<"\n";
			break;
		case 3:
			std::cout<<getFirNumber()<<" * "<<getSecNumber()<<"= "<<mul_fun(getFirNumber(),getSecNumber())<<"\n";
			break;
		case 4:
			std::cout<<getFirNumber()<<" / "<<getSecNumber()<<"= "<<div_fun(getFirNumber(),getSecNumber())<<"\n";
			break;
	}
}

float Calculator::add_fun(float fir_num, float sec_num)
{
	return fir_num+sec_num;
}

float Calculator::sub_fun(float fir_num, float sec_num)
{
	return fir_num-sec_num;
}

float Calculator::mul_fun(float fir_num, float sec_num)
{
	return fir_num*sec_num;
}

float Calculator::div_fun(float fir_num, float sec_num)
{
	return fir_num/sec_num;
}
