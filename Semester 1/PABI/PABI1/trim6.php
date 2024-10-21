<!--
Nama    : Agus Pranata Marpaung
NIM     : 13323033
Kelas   : 31TK2
-->

<?php
    $kata = "1 kelereng";
    $trim_kata = trim($kata,"0..9");
    echo $trim_kata; // "kelereng"
    echo "<br>";

    $kata = "2 buah";
    $trim_kata = trim($kata,"0..9");
    echo $trim_kata; // "orang"
    
    $kata = "3 orang";
    $trim_kata = trim($kata,"0..9");
    echo $trim_kata; // "orang"
?>