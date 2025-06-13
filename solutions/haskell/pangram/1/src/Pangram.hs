module Pangram (isPangram) where

import Data.Char 

isPangram :: String -> Bool
isPangram text =
  (length [ c | c <- ['a'..'z'], c `elem` lower]) == 26
  where lower = map toLower text