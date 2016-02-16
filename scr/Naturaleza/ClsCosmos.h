/*
 * ClsCosmos.h
 *
 *  Created on: Feb 15, 2016
 *      Author: jaime
 */

#ifndef NATURALEZA_CLSCOSMOS_H_
#define NATURALEZA_CLSCOSMOS_H_
#include "singleton_implementacion.h"
#include "entidadinicializable.h"
namespace Ciencia {
namespace Cosmos {
class Cls_Cosmos : public entidad_inicializable {
//this is going to be a initializable class

SINGLETON_DEFINITION(Cls_Cosmos)


virtual ~Cls_Cosmos();

void Crear_EspacioTiempo(void)
{

};

};

} /* namespace Cosmos */
} /* namespace Ciencia */
#endif /* NATURALEZA_CLSCOSMOS_H_ */
