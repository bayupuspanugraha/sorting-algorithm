<?php

//Passed by reference for the collection in recursive
//by using `&` on $variableName
function quickSort(&$data, $left, $right) {
  if($left<$right) {
    $p = partition($data, $left, $right);
    quickSort($data, $left, $p-1);
    quickSort($data, $p+1, $right);
  }
}

function partition(&$data, $left, $right) {
  $pivot = $data[$right];
  $x = $left;
  for($y=$left;$y<$right;$y++) {
    if($data[$y]<$pivot) {
        $temp = $data[$x];
        $data[$x] = $data[$y];
        $data[$y] = $temp;
        $x++;
    }
  }

  $temp = $data[$x];
  $data[$x] = $data[$right];
  $data[$right] = $temp;

  echo "Iteration-Left:" . $left . "-Right:" . $right . ":\t";
  print_r($data);

  return $x;
}

$sampleData = [10,4,9,3,5,8,2,7,6,1];

echo "Raw Data:\t\t";
print_r($sampleData);

quickSort($sampleData,0,count($sampleData)-1);