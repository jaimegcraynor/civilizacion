#ifndef CLS_MUJER_H
#define CLS_MUJER_H
#include "humano.h"
namespace humanidad
{
	class Cls_Mujer : public humano
	{
	public:
		const Genero_enum Genero(){return Genero_;}
		Cls_Mujer(void);
		~Cls_Mujer(void);
	};
}
#endif //CLS_MUJER_H
