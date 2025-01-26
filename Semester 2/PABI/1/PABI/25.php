<?php 
 // tampilkan hasil query 
 while ($row= mysqli_fetch_row($result)) { 
  echo "$row[0] $row[1] $row[2] $row[3] $row[4]"; 
  echo "<br />"; 
 } 
?>