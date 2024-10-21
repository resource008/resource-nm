<!--
Nama    : Agus Pranata Marpaung
NIM     : 13323033
Kelas   : 31TK2
-->

<?php
    tanpa_strip_tags();
    memakai_strip_tags();
    function tanpa_strip_tags()
    {
        echo "Sebelum diterapkan fungsi strip_tags"."<br>";
        $kalimat = "<b>Pusat</b> <i>Ilmu Secara</i> <b>Detil</b>";
        echo $kalimat;
        echo"<br><br>";
    }
    function memakai_strip_tags()
    {
        echo "Sesudah diterapkan fungsi strip_tags"."<br>";
        $kalimat = "<b>Pusat</b> <i>Ilmu Secara <i> <b>Detil</b>";
        echo strip_tags($kalimat,"<i>");
    }
?>