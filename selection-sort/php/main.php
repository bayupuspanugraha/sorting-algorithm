<?php
function selectionSort($data) {
  for($it=0;$it<count($data)-1;$it++) {
    $minIndex = $it;
    $minValue = $data[$minIndex];

    for($y=$it+1;$y<count($data);$y++) {
      if($data[$y]<$minValue) {
        $minIndex = $y;
        $minValue = $data[$y];
      }
    }

    $data[$minIndex] = $data[$it];
    $data[$it] = $minValue;

    echo "Iteration-" . ($it + 1) . ":\t"; 
    print_r($data);
  }
}

$sampleData = [10,4,9,3,5,8,2,7,6,1];
echo "Raw Data:\t\t";
print_r($sampleData);
selectionSort($sampleData);