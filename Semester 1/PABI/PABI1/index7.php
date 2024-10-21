<!--
Nama    : Agus Pranata Marpaung
NIM     : 13323033
Kelas   : 31TK2
-->

<?php
require_once ('header.php');
?>

    <main>
        Selamat datang di mata kuliah PABI, tempat belajar PABI yang happy
    </main>

    <?php
    $pelajaran = "PABI SISOP SISTAN PLSJ ANJAR";
    print_r(explode(" ",$pelajaran,3));
    ?>

<?php
require_once ('footer.php');
?>