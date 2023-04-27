--
--    author:  bernborgess
--    problem: c - 1823
--    created: 27.April.2023 17:51:18
--

import Control.Monad


primes :: [Int]
primes = sieve [2..]
  where
    sieve (p:xs) = p : sieve [x |x <-xs, x `mod` p >0]

-- crivo :: Int -> [Int]
-- crivo n = 



solve :: [Int] -> IO ()
solve divi = do
  n <- readLn :: IO Int
  
  -- xs <- map read . words <$> getLine :: IO [Int]
  let lineIO = getLine :: IO String
  let stois = map read . words :: String -> [Int]
  let xsIO = stois <$> lineIO :: IO [Int]
  xs <- xsIO

  when (n == 1) $ print divi 

main :: IO ()
main = do
  t <- readLn :: IO Int
  -- let divi = crivo (10 ^ 7 + 10)
  -- let divi = crivo (10 ^ 2 + 10)
  let divi = take 100 primes
  replicateM_ t (solve divi)