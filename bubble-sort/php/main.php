<?php 
function bubbleSort($data, $withOptimization) {
  for($it=0;$it<count($data);$it++) {    
    $isSwapped = false;
    for($y=0;$y<count($data) -1;$y++){
      if($data[$y] > $data[$y+1]){
        $temp = $data[$y];
        $data[$y]= $data[$y+1];
        $data[$y+1] = $temp;
        $isSwapped = true;
      }
    }

    // optimization if no swap happens then means all data are sorted
    if($withOptimization && !$isSwapped) {
      break;
    }

    echo "Iteration-". ($it+1) . ":\t";
    print_r($data);
  }
}

$sampleData = [10,4,9,3,5,8,2,7,6,1];
echo "Raw Data:\t\t";
    print_r($sampleData);
$withOptimization = true;
bubbleSort($sampleData, $withOptimization);
