#ifndef RUNTIME_TYPES_H
#define RUNTIME_TYPES_H

#include "TypeInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TypeInfo* theAnyTypeInfo;
extern const TypeInfo* theCloneableTypeInfo;
extern const TypeInfo* theByteArrayTypeInfo;
extern const TypeInfo* theCharArrayTypeInfo;
extern const TypeInfo* theIntArrayTypeInfo;
extern const TypeInfo* theStringTypeInfo;

#ifdef __cplusplus
}
#endif

#endif // RUNTIME_TYPES_H