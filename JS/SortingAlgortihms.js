//BubbleSort JS
var exArray = [1,8,9,2,4,1,19,24,10,13];

function bubbleSort(array){
  for(let i = 0; i < array.length; i++) {
    for(let j = i + 1; j < array.length; j++) {
      if(array[i] > array[j]) {
        let tmp = array[i];
        array[j] = array[i];
        array[i] = tmp;
      }
    }
  }
  return array;
}

function insertionSort(array) {
  for(var i = 1; i < array.length; i++) {
    let j = i-1;
    let tmp = array[i];
    while(j>=0 && tmp > array[j]) {
      array[j+1] = array[j];
    }
    array[j] = array[i];
  }
}

console.log(bubbleSort(exArray));
console.log(insertionSort(exArray));
