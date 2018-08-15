/**
 * Simple_cal.cpp
 *
 * @author Amer Chahda AC
 * @version 0.1
 * @date 14-08-2018
 */
#include "Calculator.h"
#include <iostream>



int main(int argc, char **argv)
{

	Calculator cal;
	//bool cal_more=true;
	int op_no;
	float fir_num;
	float sec_num;

	std::cout<<"\tWellcome in my simple calculator:\n";
	std::cout<<"\tEnter the number of the function from the following menu:\n"
				"\t\t1 -For adding two numbers.\n"
				"\t\t2 -For subtracting two numbers.\n"
				"\t\t3 -For multiplying two numbers.\n"
				"\t\t4 -For dividing two numbers.\n"
				"\t\t0 -For Exit.\n";
		std::cin>>op_no;
		while(op_no!=0)
		{
			if(op_no >= 1 && op_no <= 4)
			{
				std::cout<<"Enter the first number: ";
				std::cin>>fir_num;
				cal.setFirNumber(fir_num);
				std::cout<<"Enter the second number: ";
				std::cin>>sec_num;
				cal.setSecNumber(sec_num);
				cal.setOpirationNum(op_no);
				cal.operation_type(op_no);

			}
			else
			{
				std::cout<<"Please choose a number from 0 - 4.\n";
				std::cin>>op_no;
			}
			std::cout<<"\tTo continue enter the number of the function from the following menu:\n"
							"\t\t1 -For adding two numbers.\n"
							"\t\t2 -For subtracting two numbers.\n"
							"\t\t3 -For multiplying two numbers.\n"
							"\t\t4 -For dividing two numbers.\n"
							"\t\t0 -For Exit.\n";
			std::cin>>op_no;
		}
		std::cout<<"Thank you for using my simple calculator, Hope you like it.\n\t\tUse it again! ";



	return 0;
}
