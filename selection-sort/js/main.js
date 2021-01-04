function selectionSort(data) {
    for(var it=0;it<data.length-1;it++) {
      var minIndex = it;
      var minValue = data[minIndex];
      for(var y=it+1;y<data.length;y++) {
        if(data[y]<minValue) {
          minIndex = y;
          minValue = data[y];
        }
      }
  
      data[minIndex] = data[it];
      data[it] = minValue;
      console.log(`Iteration-${it+1}:\t${data}`);
    }
  }
  
  sampleData = [10,4,9,3,5,8,2,7,6,1];
  console.log(`Raw Data:\t\t${sampleData}`);
  selectionSort(sampleData);