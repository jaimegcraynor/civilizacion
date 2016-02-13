#include "stdafx.h"

namespace Divinidad
{

	void * Dios::CreaHumanidad(void)
	{
		this->poblacion = new Poblacion();
		this->poblacion->Habitantes_count_ = 2;
		//lets create Adan then Eva, just for fun.
        
		//first human
		ADAN * Adan = new ADAN();
		EVA * Eva = new EVA();
		this->poblacion[0] = (humano*)Adan;
		this->poblacion[0] = (humano*)Eva;
		*/
		return (void*)NULL;//poblacion;
	}


	Dios::Dios(void)
	{
	}

	Dios::~Dios(void)
	{
	}
}