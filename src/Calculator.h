/*
 * Calculator.h
 *
 *  Created on: 15 aug. 2018
 *      Author: ACH11739
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator
{
	public:
		Calculator();
		virtual ~Calculator();
		float getFirNumber() const;
		void setFirNumber(float firNum);
		float getSecNumber() const;
		void setSecNumber(float secNum);
		int getOpirationNum() const;
		void setOpirationNum(int opirationNum);
		void operation_type(int op_no);
		float add_fun(float fir_num,float sec_num);
		float sub_fun(float fir_num,float sec_num);
		float mul_fun(float fir_num,float sec_num);
		float div_fun(float fir_num,float sec_num);
	private:
		int opiration_num;
		float fir_number;
		float sec_number;
};

#endif /* CALCULATOR_H_ */
