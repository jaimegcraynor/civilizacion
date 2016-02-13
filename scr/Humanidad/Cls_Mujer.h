
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
