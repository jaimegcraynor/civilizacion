
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
		Poblacion poblacion_;
	};
};
