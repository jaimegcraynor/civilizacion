#ifndef HUMANIDAD_H
#define HUMANIDAD_H
#include "humano.h"
#include "Dios.h"

namespace humanidad
{
class humano;
class Poblacion
	{
	public:
		//private: TODO:need to protect this
		//habitantes
		int Habitantes_count_;
		//hold pointer to each human.
		humano * Humanos[1024];
		
		public:
			int Habitantes_Count (void){return this->Habitantes_count_; };
			Poblacion(void);
			~Poblacion(void);
	};
}

#endif //HUMANINAD_H
