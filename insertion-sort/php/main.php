<?php
function insertionSort($data) {
  for($it=1;$it<count($data);$it++) {    
    $target = $data[$it];
    $prev = $it-1;

    while($prev>=0 && $data[$prev]>$target) {
      $data[$prev+1] = $data[$prev];
      $prev -=1;
    }

    $data[$prev+1] = $target;

    echo "Iteration-" . $it . ":\t";
    print_r($data);
  }
}

$sampleData = [10,4,9,3,5,8,2,7,6,1];
echo "Raw Data:\t\t"; 
print_r($sampleData);

insertionSort($sampleData);