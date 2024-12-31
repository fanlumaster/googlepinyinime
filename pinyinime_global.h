#ifndef PINYINIME_GLOBAL_H
#define PINYINIME_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PINYINIME_LIBRARY)
#  define PINYINIMESHARED_EXPORT Q_DECL_EXPORT
#else
#  define PINYINIMESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PINYINIME_GLOBAL_H
