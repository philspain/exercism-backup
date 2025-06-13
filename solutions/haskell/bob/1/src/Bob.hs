module Bob (responseFor) where

isQuestion :: String -> Bool
isQuestion "" = False
isQuestion xs = 
  stripped /= "" && last (stripped) == '?'
  where stripped = [ c | c <- xs, c /= ' ']

isYelling :: String -> Bool
isYelling xs = 
  (length [c | c <- xs, c `elem` ['A'..'Z']]) > 0 && 
  (length [c | c <- xs, c `elem` ['a'..'z']]) == 0 

isQuiet :: String -> Bool
isQuiet "" = True
isQuiet xs = (length [c | c <- xs,  c `elem` " \t\r\n"]) == length xs

responseFor :: String -> String
responseFor xs
  | isYelling xs && isQuestion xs = "Calm down, I know what I'm doing!" 
  | isYelling xs = "Whoa, chill out!"
  | isQuestion xs = "Sure."
  | isQuiet xs = "Fine. Be that way!"
  | otherwise = "Whatever."
