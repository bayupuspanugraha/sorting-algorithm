function bubbleSort(data, withOptimization) {
    for(var it in data) {    
      var isSwapped = false;
      for(var y=0;y<data.length-1;y++) {
        if(data[y]>data[y+1]) {
          var temp = data[y];
          data[y] = data[y+1];
          data[y+1] = temp;
          isSwapped = true;
        }
      }
  
      // optimization if no swap happens then means all data are sorted
      if(withOptimization && !isSwapped) {
        break;
      }
  
      console.log(`Iteration-${parseInt(it) + 1}:\t[${data}]`);
    }
  }
  
  
  sampleData = [10,4,9,3,5,8,2,7,6,1];
  console.log(`Raw Data:\t\t[${sampleData}]`);
  withOptimization = false;
  bubbleSort(sampleData, withOptimization);