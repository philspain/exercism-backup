#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age
{
    class space_age
    {
    private:
        long _seconds = 0;
        double SECONDS_IN_YEAR = 31557600;
        double
            MERCURY = 0.2408467,
            VENUS = 0.61519726,
            EARTH = 1.0,
            MARS = 1.8808158,
            JUPITER = 11.862615,
            SATURN = 29.447498,
            URANUS = 84.016846,
            NEPTUNE = 164.79132;

    public:
        space_age(long seconds);
        long seconds() const;
        double
        on_mercury() const,
            on_venus() const,
            on_earth() const,
            on_mars() const,
            on_jupiter() const,
            on_saturn() const,
            on_uranus() const,
            on_neptune() const;
    };
} // namespace space_age

#endif // SPACE_AGE_H