<!--
Nama    : Agus Pranata Marpaung
NIM     : 13323033
Kelas   : 31TK2
-->

<?php
    $nama = "__andi__";
    $trim_nama = trim($nama);
    echo $trim_nama; // "__andi__"
    echo "<br>";

    $trim_nama = trim($nama,"_");
    echo $trim_nama; // "andi"
?>