/*
 * PlanetaTierra.h
 *
 *  Created on: Feb 15, 2016
 *      Author: jaime
 */

#ifndef NATURALEZA_PLANETATIERRA_H_
#define NATURALEZA_PLANETATIERRA_H_

#include <InitializationManager.h>
#include <singleton_implementacion.h>
namespace Ciencia {
namespace Cosmos {

static void Crear_EspacioTiempo(void)
{

};

class Planeta_Tierra: public Initialization_Manager {
public:
	Planeta_Tierra();
	virtual ~Planeta_Tierra();
};
} /* namespace Cosmos  */
} /* namespace Ciencia */

#endif /* NATURALEZA_PLANETATIERRA_H_ */
