#include "space_age.h"

namespace space_age
{
    space_age::space_age(long seconds)
    {
        this->_seconds = seconds;
    }

    long space_age::seconds() const
    {
        return this->_seconds;
    }

    double space_age::on_mercury() const
    {
        return (_seconds / SECONDS_IN_YEAR) / MERCURY;
    }

    double space_age::on_venus() const
    {
        return (_seconds / SECONDS_IN_YEAR) / VENUS;
    }

    double space_age::on_earth() const
    {
        return (_seconds / SECONDS_IN_YEAR) / EARTH;
    }

    double space_age::on_mars() const
    {
        return (_seconds / SECONDS_IN_YEAR) / MARS;
    }

    double space_age::on_jupiter() const
    {
        return (_seconds / SECONDS_IN_YEAR) / JUPITER;
    }

    double space_age::on_saturn() const
    {
        return (_seconds / SECONDS_IN_YEAR) / SATURN;
    }

    double space_age::on_uranus() const
    {
        return (_seconds / SECONDS_IN_YEAR) / URANUS;
    }

    double space_age::on_neptune() const
    {
        return (_seconds / SECONDS_IN_YEAR) / NEPTUNE;
    }
} // namespace space_age
