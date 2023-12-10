<!DOCTYPE html>
<html>
<body>
<h1>Problema Reginei în Șah</h1>
<p>Programul rezolvă clasicul "Problema Reginei în Șah" pentru o tablă de dimensiune N x N, respectiv 8 x 8.Reaminitm din regulile şahului că regina este cea mai puternica piesă de şah. Se ştie că regina ameninţă toate câmpurile situate pe aceeaşi coloană, rând sau diagonală în raport cu câmpul pe care ea se află, rezultă că fiecare coloană a tablei de şah va putea conţine o singură regină.Totodată reamintim că o regină atacă linia, coloana şi cele 2 diagonale pe care se află.</p>
<img src="poze\tabla_sah.jpg" width="500">
<p>Astfel, se caută o soluție astfel încât nicio pereche de două regine să nu fie pe același rând, pe aceeași coloană, sau pe aceeași diagonală. Problema cu opt regine este doar un caz particular pentru problema generală, care presupune plasarea a n regine pe o tablă de șah n×n în aceleași condiții.
Problema poate fi destul de costisitoare computațional, întrucât sunt 4426165368 aranjamente posibile ale celor opt regine pe o tablă 8×8, dar numai 92 de soluții. Se pot utiliza scurtături care reduc cerințele de calcul, sau reguli aproximative, care evită căutarea cu forța brută. De exemplu, aplicând o regulă simplă, care constrânge fiecare regină să stea pe coloana sau rândul ei, deși încă se consideră că se folosește forța brută, se poate reduce numărul de posibilități.</p>
<img src="poze\8regine.jpg" width="500">
<h2>Metoda Backtracking</h2>
<p>Metoda Backtracking urmareste generarea progresiva numai a posibilelor solutii rezultat. Se porneste de la o solutie vida si se adauga in ea elemente, de la stanga spre dreapta, cata vreme sunt indeplinite conditiile interne. Daca la un moment dat nu mai sunt sanse sa se ajunga la o solutie rezultat, se incheie generarea solutiei cu acel prefix (pre-solutie) si se revine la reasignarea elementului anterior. De aici provine si numele metodei-generare cu revenire.</p>
<p>Tehnica de backtracking este esențială în rezolvarea problemei Reginei în Șah, deoarece ne permite să explorăm recursiv toate posibilitățile și să revenim asupra deciziilor luate în cazul în care am ajuns într-o stare invalidă. În contextul acestei probleme, backtracking-ul este folosit pentru a plasa reginele pe tabla de șah astfel încât să nu existe conflicte între ele.
Funcția <b>nuAtaca</b> asigură că regina plasată într-o anumită poziție nu atacă nicio altă regină pe aceeași linie, coloană sau diagonală.
Funcția <b>rezolvaTabla</b> parcurge recursiv coloanele și încearcă să plaseze reginele în fiecare coloană în parte.</p>
<p>Programul afișează tabla de șah pentru fiecare soluție găsită și numărul total de soluții posibile.</p>
<h2>Bibliografie:</h2>
</body>
</html>