<?php 
// siapkan "data" query 
$nama_mhs="Neil Situmorang"; 
// hubungkan "data" dengan prepared statements 
mysqli_stmt_bind_param($stmt, "s", $nama_mhs); 
?>