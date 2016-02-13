#ifndef DIOS_H
#define DIOS_H

#include "Poblacion.h"

namespace Divinidad
{
	using namespace humanidad;
	class Dios
	{
		public:
			~Dios(void);
		
			static Dios& getInstance()
			{
				static Dios instance;
				return instance;
			};

			void * CreaHumanidad(void);
			

	protected:
		
	private:
		Dios(void);
		Poblacion * poblacion_;
	};
};
#endif//DIOS_H
