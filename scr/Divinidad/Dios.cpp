#include "Dios.h"
#include "humanidad.h"
namespace Divinidad
{

	void * Dios::CreaHumanidad(void)
	{
		this->poblacion_ = new Poblacion();
		this->poblacion_->Habitantes_count_ = 2;
		//lets create Adan then Eva, just for fun.
        
		//first human
		ADAN * Adan = new ADAN();
		EVA * Eva = new EVA();
		/*this->poblacion_[0] = (humano*)Adan;
		this->poblacion_[0] = (humano*)Eva;
		*/
		return (void*)0;//poblacion;
	}


	Dios::Dios(void)
	{
	}

	Dios::~Dios(void)
	{
	}
}
