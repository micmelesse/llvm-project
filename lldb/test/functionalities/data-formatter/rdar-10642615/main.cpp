//===-- main.cpp ------------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include <Accelerate/Accelerate.h>
#include <vecLib/vecLibTypes.h>

int main()
{
	vFloat valueFL = {1,0,4,0};
	vDouble valueDL = {1,4};
	int16_t valueI16[8] = {1,0,4,0,0,1,0,4};
	int32_t valueI32[4] = {1,0,4,0};
	vUInt8 valueU8 = {1,0,4,0,0,1,0,4};
	vUInt16 valueU16 = {1,0,4,0,0,1,0,4};
	vUInt32 valueU32 = {1,2,3,4};
	vSInt8 valueS8 = {1,0,4,0,0,1,0,4};
	vSInt16 valueS16 = {1,0,4,0,0,1,0,4};
	vSInt32 valueS32 = {4,3,2,1};
	vBool32 valueBool32 = {false,true,false,true};
	return 0; // Set break point at this line.
}
