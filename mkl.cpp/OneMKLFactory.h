#pragma once
#include "OperationBase.h"

enum MklType_t
{
	MatrixMul
};

class OneMKLFactory
{
public:
	OperationBase* GetInstance(MklType_t type);
};

