#include <QDateTime>

#include "graphics/valueadapter.h"


namespace Graphics {

double DateTimeValueAdapter::toAdapted(const QDateTime &val)
{
    return double(val.toTime_t());
}

QDateTime DateTimeValueAdapter::fromAdapted(double val)
{
    return QDateTime::fromTime_t(val);
}

} // namespace Graphics
