#include "OneMKLFactory.h"

#include <iostream>
#include "CBLASNative.h"


OperationBase* OneMKLFactory::GetInstance(MklType_t type)
{
	switch (type)
	{
	case MatrixMul:
		return new CBLASNative(Order_t::RowMajor, Transpose_t::NoTrans, Transpose_t::NoTrans);
		break;
	default:
		break;
	}
}
