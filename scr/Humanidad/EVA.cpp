#include "StdAfx.h"
#include "EVA.h"
namespace humanidad
{
	EVA::EVA(void)
	{
		wcsncpy_s (this->Nombre_ , L"EVA",3);
	}

	EVA::~EVA(void)
	{
	}
}