<?php 
// cara mengakses MySQL menggunakan mysql extension: 
$link = mysql_connect("localhost", "root", "qwerty"); mysql_select_db("universitas"); 
$result = mysql_query("SELECT * FROM mahasiswa"); 
$row = mysql_fetch_assoc($result); 
// cara mengakses MySQL menggunakan mysqli extension: 
$mysqli = new mysqli("localhost", "root", "qwerty", "universitas"); 
$result = $mysqli->query("SELECT * FROM mahasiswa"); 
$row = $result->fetch_assoc(); 
// cara mengakses MySQL menggunakan PDO: 
$pdo = new PDO('mysql:host=localhost; dbname=universitas', 'root', 'qwerty'); 
$statement = $pdo->query("SELECT * FROM mahasiswa"); 
$row = $statement->fetch(PDO::FETCH_ASSOC); 
?>

