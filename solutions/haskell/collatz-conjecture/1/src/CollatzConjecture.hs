module CollatzConjecture (collatz) where

collatz :: Integer -> Maybe Integer
collatz n
 | n <= 0 = Nothing
 | otherwise = Just (countSteps n 0)

countSteps :: Integer -> Integer -> Integer
countSteps n steps 
  | n == 1 = steps
  | even n = countSteps (n `div` 2) next
  | otherwise = countSteps (3 * n + 1) next
  where next = steps + 1
