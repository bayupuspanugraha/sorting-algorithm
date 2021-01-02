function insertionSort(data) {
    for(var it=1;it<data.length;it++) {    
      var target = data[it];
      var prev = it-1;
  
      while(prev>=0 && data[prev]>target) {
        data[prev+1] = data[prev];
        prev -=1;
      }
  
      data[prev+1] = target;
  
      console.log(`Iteration-${it}:\t[${data}]`);
    }
  }
  
  sampleData = [10,4,9,3,5,8,2,7,6,1];
  console.log(`Raw Data:\t\t[${sampleData}]`); 
  insertionSort(sampleData);