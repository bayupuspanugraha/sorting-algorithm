function quickSort(data, left, right) {
    if(left<right) {
      var p = partition(data, left, right);
      quickSort(data, left, p-1);
      quickSort(data, p+1, right);
    }
  }
  
  function partition(data, left, right) {
    var pivot = data[right];
    var x=left;
  
    for(var y=left;y<right;y++) {
      if(data[y]<pivot) {
        var temp = data[x];
        data[x]=data[y];
        data[y]=temp;
        x++;
      }
    }
  
    var temp = data[x];
    data[x] = data[right];
    data[right] = temp;
  
    console.log(`Iteration-Left:${left}-Right:${right}:\t${data}`);
  
    return x;
  }
  
  var sampleData = [10,4,9,3,5,8,2,7,6,1];
  console.log(`Raw Data:\t\t${sampleData}`);
  quickSort(sampleData, 0, sampleData.length-1);