
#include "stdio.h"
#include "stdlib.h"

#include "Dios.h"
#include "humanidad.h"
//#include "ADAN.h"
//#include "EVA.h"


using namespace humanidad;
namespace Divinidad
{

	void * Dios::CreaHumanidad(void)
	{

		printf("Soy Dios, y estoy creando a la humanidad (insecto) \n ");

		//lets create Adan then Eva, just for fun.
		//ADAN first human

		ADAN * Adan = new ADAN();
		EVA * Eva = new EVA();

		this->poblacion_->Humanos[0] = (humano*)Adan;
		this->poblacion_->Humanos[1] = (humano*)Eva;
		this->poblacion_->Habitantes_count_ = 2;

		return (void*)0;//poblacion;
	}


	Dios::Dios(void)
	{
		this->poblacion_ = new Poblacion();

	}

	Dios::~Dios(void)
	{


	}
}
