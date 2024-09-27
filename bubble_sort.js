function bubbleSort(arr) {
    let n = arr.length;
    let swapped = false;

    for (let i = 0; i < n - 1; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                [arr[j + 1], arr[j]] = [arr[j], arr[j + 1]];
                swapped = true;
            }
        }

        if (!swapped) break;
    }
    return arr;
}

// function bubbleSort(arr) {
//     let swapped;
//     do {
//         swapped = false;
//         for (let i = 0; i < arr.length - 1; i++) {
//             if (arr[i] > arr[i + 1]) {
//                 [arr[i], arr[i + 1]] = [arr[i + 1], arr[i]];
//                 swapped = true;
//             }
//         }
//     } while (swapped);
//     return arr;
// }

let arr = [29, 10, 14, 37, 13];
console.log(bubbleSort(arr));
