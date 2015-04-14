#ifndef GRAPHICS_ABSTRACTVALUEADAPTER_H
#define GRAPHICS_ABSTRACTVALUEADAPTER_H

/*!
  * \file valueadapter.h
  * \brief Объявление классов адаптеров для конвертации значений шкал.
  *
  * \file valueadapter.cpp
  * \brief Реализация классов адаптеров для конвертации значений шкал.
  */

#include <graphics/commonprerequisites.h>

class QDateTime;

namespace Graphics {

//! Адаптер для конвертации дат и времени в числовые значения для шкал.
class GRAPHICS_EXPORT DateTimeValueAdapter {
public:
    //! Конвертация даты \c val в число.
    static double toAdapted(const QDateTime &val);
    //! Конвертация числа \c val в дату.
    static QDateTime fromAdapted(double val);
};

} // namespace Graphics

#endif // GRAPHICS_ABSTRACTVALUEADAPTER_H
