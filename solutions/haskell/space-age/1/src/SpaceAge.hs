module SpaceAge (Planet(..), ageOn) where

secondsInAYear = 31557600
data Planet = Mercury
            | Venus
            | Earth
            | Mars
            | Jupiter
            | Saturn
            | Uranus
            | Neptune

ageOn :: Planet -> Float -> Float
ageOn planet seconds = (seconds / secondsInAYear) / (getPlanetaryYear planet)

getPlanetaryYear :: Planet -> Float
getPlanetaryYear Mercury = 0.2408467
getPlanetaryYear Venus = 0.61519726
getPlanetaryYear Earth = 1.0 -- we're home
getPlanetaryYear Mars =  1.8808158
getPlanetaryYear Jupiter = 11.862615
getPlanetaryYear Saturn = 29.447498
getPlanetaryYear Uranus = 84.016846
getPlanetaryYear Neptune = 164.79132