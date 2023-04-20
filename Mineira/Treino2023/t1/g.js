const newArr = n =>
  Array.from({ length: n },
    (_, i) => Array.from({ length: n },
      (_, j) => i * n + j + 1));

const e_tAC = (n, i, j) =>
  ({ x: j, y: i })

const e_r = (n, i, j) =>
  ({ x: j, y: n - i - 1 })

const e_tx = (n, i, j) =>
  ({ x: n - i - 1, y: j })

const e_ty = (n, i, j) =>
  ({ x: i, y: n - j - 1 })

const e_tBD = (n, i, j) =>
  ({ x: n - j - 1, y: n - i - 1 })

function r_a(M, fij) {
  let n = M.length;
  let m = M[0].length;
  const a = newArr(n);
  for (let i = 0; i < n; i++)
    for (let j = 0; j < m; j++) {
      const { x, y } = fij(n, i, j);
      a[i][j] = M[x][y];
    }
  return a;
}

