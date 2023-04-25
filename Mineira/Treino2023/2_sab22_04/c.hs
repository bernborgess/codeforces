main =
  interact $
    unlines
      . map (show . solve)
      . pairs
      . lines

pairs :: [a] -> [(a, a)]
pairs [] = []
pairs (x : y : xs) = (x, y) : pairs xs

solve :: (String, String) -> Int
solve (s, t) =
  case comp of
    0 -> n * (n + 1) `div` 2
    1 -> 2 * (n - 1)
    2 -> 6
    _ -> 0
  where
    n = length s
    xor s' t' = if s' == t' then 0 else 1
    diff = zipWith xor s t
    accum x (c, l)
      | (x, l) == (1, 0) = (c + 1, x)
      | otherwise = (c, x)
    (comp, lst) = foldr accum (0, 0) diff
