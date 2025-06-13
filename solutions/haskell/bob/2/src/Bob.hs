module Bob (responseFor) where

import Data.Char
import qualified Data.Text as T
import           Data.Text (Text)

isQuestion :: Text -> Bool
isQuestion xs = (T.pack "?") `T.isSuffixOf` (T.strip xs)

isYelling :: Text -> Bool
isYelling xs = 
  (T.length (T.filter (\c -> isUpper c) xs)) > 0 && 
  (T.length (T.filter (\c -> isLower c) xs)) == 0

isQuiet :: Text -> Bool
isQuiet xs = T.strip xs == T.pack ""

responseFor :: Text -> Text
responseFor xs
  | isYelling xs && isQuestion xs = T.pack "Calm down, I know what I'm doing!" 
  | isYelling xs = T.pack "Whoa, chill out!"
  | isQuestion xs = T.pack "Sure."
  | isQuiet xs = T.pack "Fine. Be that way!"
  | otherwise = T.pack "Whatever."
