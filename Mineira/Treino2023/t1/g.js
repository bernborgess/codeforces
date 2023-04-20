let M = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]];

const newArr = n => m => 
  Array.from({length:n},x=>Array.from({length:m},x=>1));

function r_a(M) {
    let n = M.length;
    let m = M[0].length;
    const a = newArr(n)(m);
    for(let i=0;i<n;i++)
        for(let j=0;j<m;j++) 
            a[i][j] = M[j][i];
    return a;
}





