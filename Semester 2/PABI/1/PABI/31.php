<?php 
// cek hasil query 
if (!$stmt) { 
    die('Query Error :'.mysqli_errno($link).' '.mysqli_error($link)); 
} 
else { 
    echo "Penambahan ".mysqli_stmt_affected_rows($stmt)."data berhasil<br />"; 
} 
?> 
