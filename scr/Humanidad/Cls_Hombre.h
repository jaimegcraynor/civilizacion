#ifndef CLS_HOMBRE_H
#define CLS_HOMBRE_H
#include "humano.h"
namespace humanidad
{

	class Cls_Hombre : public humano
	{
	private:
		int soloyoveoesto;
	public:
		const Genero_enum Genero(){return Genero_;}
	public:

		Cls_Hombre(void);
		~Cls_Hombre(void);
	};
}
#endif //CLS_HOMBRE_H
