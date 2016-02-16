/*
 * singleton_implementacion.h
 *
 *  Created on: Feb 15, 2016
 *      Author: jaime
 */

#ifndef BAJONIVEL_SINGLETON_IMPLEMENTACION_H_
#define BAJONIVEL_SINGLETON_IMPLEMENTACION_H_
#include "stddef.h"

#define SINGLETON_DEFINITION(ClassName) \
private:\
ClassName();\
static ClassName *Instance_;\
public:\
static ClassName * GetInstance(void);\


#define SINGLETON_IMPLEMENTATION(ClassName) \
ClassName & ClassName::GetInstance(void)\
{\
	/*if (ClassName==NULL) Instance_ = new ClassName():*/\
	return ClassName::Instance_;\
};\

#define ENTITY_SINGLETON_IMPLEMENTATION(ClassName,ClassEntity) \
ClassName * ClassName::GetInstance(void)\
{\
	/*if (ClassName==NULL) Instance_ = new ClassName((const char*)#ClassEntity);*/\
	return ClassName::Instance_;\
};




#endif /* BAJONIVEL_SINGLETON_IMPLEMENTACION_H_ */
