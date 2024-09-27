function selectionSort(arr) {
    let n = arr.length;

    for (let i = 0; i < n - 1; i++) {
        let minInd = i;
        for (let j = i + 1; j < n; j++) {
            if (arr[j] < arr[minInd]) {
                minInd = j;
            }
        }

        if (minInd !== i) {
            // Avoiding extra variable and swapping through destructuring
            [arr[minInd], arr[i]] = [arr[i], arr[minInd]];
        }
    }
    return arr;
}

let arr = [29, 10, 14, 37, 13];
console.log(selectionSort(arr));
