/*
 * EspacioTiempo.h
 *
 *  Created on: Feb 16, 2016
 *      Author: jaime
 */

#ifndef NATURALEZA_ESPACIOTIEMPO_H_
#define NATURALEZA_ESPACIOTIEMPO_H_
#include "../BajoNivel/singleton_implementacion.h"
#include "../BajoNivel/entidadinicializable.h"
namespace Ciencia {

class EspacioTiempo {
	SINGLETON_DEFINITION(EspacioTiempo)

	virtual ~EspacioTiempo();
};

} /* namespace Ciencia */

#endif /* NATURALEZA_ESPACIOTIEMPO_H_ */
