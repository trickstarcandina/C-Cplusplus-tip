https://www.spoj.com/PTIT/problems/P163SUMA/
https://www.spoj.com/PTIT/problems/P193SUMH/





/*Frederica Bernkastel
▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒
▒░░░░░    ░░░░░░░▒▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░▒
▒░░░░░   ░░░░░░▒▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓█▓▓▓▓▒▓▒▒▓▓▓▓▒▒▒▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▓░▒
▒        ░░░░░▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓█▓▓▓▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▓▒▒▒▓▒▒▒▒▓▓▒▒
▒        ░░░▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▓▓▓▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓█▓▓▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓
▒░░░░░░░░░░▒▓▒▒▒▒▓▓▒▒▒▒▒▒▒▒▓▓▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓
▒░░░░░░░░▒▓▓▒▒▒▒▓▓▒▒▒▒▒▒▒▒▓▓▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓█▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓
▒░░░░░░░░▓▓▒▒▒▓▓▓▒▒▒▒▒▒▒▓▓▓▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓█▓▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓█▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓
▒░░░░░░▒▓▓▒▒▒▓▓▓▓▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▓▒▓▓▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓█▓▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓
▒░░░░░░▓▓▒▒▓▓▓▓▓▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▓▒▒▓▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓█▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓
▒░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▓▓▒▓▓▓▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▒▒▒▓▒▓▓▓▓▒▒▒▒▒▓▓▓▓▓▓▓▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓█▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓
▒░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓
▒░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓██▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓
▒░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓█▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓██▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓██▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓██▓▓█▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓██▓▓█▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓██▓██▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓█▓▓▓██▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓█▓▓▓██▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███████▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓█▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▒▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█
▒░░░░░░▒▓█▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓██▓▓▓███▓▓▓▓▓█▓▒▓▓▓▓▓▓▓▓▓▓▓█▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓██▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█
▒░░░░░░▓▓▓▓█▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓██▓▓▓▓▓████▓▓█▓▒▓▓▓▓▓▓▓▓▓▓▓█▓▒▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓██▓▓▓▓▓▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░░▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓████▓▓▓▓▓▓████▓▒▓▓▓▓▓▓▓▓▓▓▓█▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓█████▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓██▓▓▓▓▓▓▓▓▓▓▓▓▓█▓█▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░░▓▓▓▓▓████████▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓██▓▒▓▓▓▓▓▓▓▓▓▓▓█▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓██▓▓▓▓▓▓▓▓▓▓▓▓▓█▓█▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░░▓▓▓▓▓▓▓▓▓▓▓█████████████▓▓▓▓▓▓▓▓▓▓██▓▒▓▓▓▓▓▓▓▓▓▓▓█▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▒▓███████▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓█████████▓▓▓███▓▓▒▓█▓▒▓▓▓▓▓▓▓█▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓█████▓▓▓▒▒█▓▓▓▓▓▓████▓▓▓▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓███████████████▓▓▒▒█▓▒▓▓▓▓▓▓▓▓▓▓▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▒▒▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█████████████████▒▒▒▒▒▓▓▒▒▓▓▓▓▓▓██▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓█████▓▓▓▓▓▓▓▓▓█▓▓▒█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓█▓▓████████▓▓█████████▓▓▒░░░░░░░░░░▒▒▒▒▒▒▒▓▓▓▓▓▓███████▓▓▓▓▓▓▓▓██████▓▒▒████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓██▓████▓▓█▓▒▒▓█████████▓▒░░░░░░░░░░░░░░░░░░░░░░░░░▒▒██████████████████▓▓▓█████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▒▒█▓░▓█████████▓▓▒░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓█████████████████████▓▒▒▒▓▓▓▓▓▓▓███████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▒░▒▓░▒▓███████▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░░███████████████████▓▒░░░░░░▓█▓▓▓███████▓▓████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▒░░▒░░▓██▓▓████▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█████████████████████▓▒░░░░▓█▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓░░░░░░██▓▓▓▓▓█▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓█████████████████████▓▒░░░▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▒░░░░░▓█▓▓▓▓▓█▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓████▓▓██████████▓▒▓████▓░░▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░▓█▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓███▓▓▓▓▓▓▓▓▓▓██▓▒▓██▓▒░▒▒▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓░░░░▒▒▒█████▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒███▓▓▓▓▓▓▓▓▓███▒▓▓▒░░░░░░▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓█▓░░░░░░░▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓███▓▓▓▓▓▓▓███▒░▒░░░░░░░░▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓█▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒░▒█████▓███▓▓░░░░░░░░░░░░▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓█▓░░░░░░░░░░░░░░░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▓▓▓██▓▓▒░░░░░░░░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓██▒░░░░░░░░░░░░░░░░▒▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓██▒░░░░░░░░░░░░░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓██▓▒░░░░░░░░░░░░░░░▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓█▓▓▓░░░░░░░░░░░░░░▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓█▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓█▓▓█▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓█▓▓██▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓█▓▓█▓▓▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓█▓▓▓█▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓█▓▓██▓▒░░░░░░░░░░░░░▒░░░▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓██▓▓█▓▓▓▒░░░░░░░░░░░░░░░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓██▓▓██▓▓▓▓░░░░░░░░░░░░░▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓██▓▓██▓▓▓▓▓▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓██▓▓██▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓███▓██▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒█▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓███▓██▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▓██▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░▒▓▓▓▒▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓██▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▓▒▒▒▒▒▒▒▒▒▒▒▓██▓▓█▓▓▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░▒▓▓▓▒▒▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓██▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▓▓▓▒▒▒▒▒░░░░░▒▒▒▓▓██▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░▒▓▒▒▒▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓██▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░▒▒▓▓▓▓▒▒▒░▒░▒▒░░░░░░░░░▓▓▓█▓██▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
▒░░░░░▒▓▒▒▒▒▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓██▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░▒▒▓▓▓▓▓▓▒▒▒░░░░░░░░░░░░░░░░░▒▓▓▓█▓█▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█
▒░░░░░░▓▓▒▒▒▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▒▓▓▓██▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓███▓▓▓▓████████▓▓▓██▒▒░░░░░░░░░░░░░░░░░▒▒▒░▒▓▓▓██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█
▒░░░░░░▒▓▒▒▒▒▓▓▓▓▓▓▓█▓▒▒▓▓▓▒▒▓▓▓██▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓██▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░▒▓▓▒▒▒▓▓▓▓███▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓█▓▓▓▓▓██▓▓▓▓▓██▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓█
▒░░░░░░▒▓▒▒▒▒▒▓█▓▓▓▓█▓▒▓▓▓▒▒▒▓▓▓██▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓█████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▒░░░░░▒▒▒▒▒▒░▒▒▒░░░░▒▓▓▓██▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓██▓▓▓▓▓███▓▓▓▓▓██▓▓▓▓▓▓▓▓███▓▓▓▓▓█
▒░░░░░░░▒▓▒▒▒▒▓▓█▓▓▓█▓▒▓▓▓▒▒▒▒▓▓▓█▓██▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓████▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▒░░░▒▒▒▒░░▒▒▒▓▓▒░░░░▓▓▓▓█▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓█▓▓▓▓▓███▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓██▓▓▓▓▓█
▒░░░░░░░░▓▓▒▒▒▓▓█▓▓▓█▓▒▓▓▓▒▒▒▒▓▓▓████▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓████▓▓▓▓▓▓▓▓▓▓▓▓▒▒░▒▒▒░▒▓▒░░░░░░░▒▓▒░░░▒▓▓▓▓█▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓██▓▓▓▓▓███▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓██▓▓▓▓▓█
▒░░░░░░░░▒▓▒▒▒▒▓▓▓▓▓█▓▒▓▓▒▒▒▒▒▓▓▓████▓▓▓▓▓▓▓▓▓▓▓▓█████▓▓▓▓▓████▓▓▓▓▓▓████▓▒░░░▓▒▒▒▒░░░░░░░░░░░░▒▒▒▓▓▓█▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓██▓▓▓▓▓██▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓███▓▓▓▓█
▒░░░░░░░░░▒▓▒▒▒▒▓█▓▓█▓▒▓▓▒▒▒▒▒▒▓▓████▓▓▓▓▓▓▓▓▓▓▓▓██▓██▓▓▓▓▓████▓▓▓▓▓▓▓▒▓▓░░▒▒▒▒░░▓▒░░░░░░░░░░░░▒▒▓▓▓██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓██▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓███▓▓▓▓█
▒░░░░░░░░░▒▓▒▒▒▒▒▓█▓█▓▓▓▓▒▒▒▒▒▒▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓██▓██▓▓▓▓▓▓███▓▓▓▓▓▓▓▒▓▓▒▒▓▒░░░░░░░░░░░░░░░░░░▒▓▓▓▓█▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓███▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓███▓▓▓█
▒░░░░░░░░░░▒▓▒▒▒▒▓▓██▓▓▓▒▒▒▒▒▒▒▓▓▓███▓▓▓▓▓▓▓▓▓▓▓██▓▓▓██▓▓▓▓▓▓███▓▓▓▓▓▓▒░░▓▓▒░░░░░░░░░░░░░░░░░░░▓▓▓▓█▓▓▓▓▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓███▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓███▓▓▓█
▒   ░░░░░░░░▓▓▒▒▒▓▓██▓▓▓▒▒▒▒▒▒▒▓▓▓███▓▓▓▓▓▓▓▓▓▓███▓▓▓▓██▓▓▓▓▓███▓▓▓▓▓▓▒░░▓▓▒░░░░░░░░░░░░░░░░░░▒▓▓▓██▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓███▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓███▓▓▓█
▒░  ░░░░░░░░▒▓▓▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▓▓▓███▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓██▓▓▓▓████▓▓▓▓▓▓░░▒▒▒░░░░░░░░░░░░░░░░░░▒▓▓▓█▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓██████▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓███▓▓▓█
▒░  ░░░░░░░░░░▓▓▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓███▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓██▓▓▓▓▓███▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓█████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓███▓▓▓█
▒         ░░░░▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓███▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓████▓▓▓███▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓███▓▓▓█
▒        ░░░░░░░▒▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓███████▓▓▓▓▓▒░░▒▓▓▓▓██▓▓▓▒░░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████████████████████████▓███▓▓▓▓▓▓▓▓███▓▓█
▒        ░░░░░░░░▒▓▓▓▓▒▓▓▓▓▓▓███████▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓███▒░░░░░░▓▓▓▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█████████████████████████████████▓▓▓▓▓▓▓▓███▓▓█
▒         ░░░░░░░░▒▓▓▓▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓░░░░░▓▓▒░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▓▓▒▒▒▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██████████████████████████████████▓▓▓▓▓▓▓▓███▓▓█
▒         ░░░░░░░░░▓▓▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓███████████████████████▓▓▓▓▓▓▓▓██████▓▓▓▓▓▓████▓█
▒         ░░░░░░░░░▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓███████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓▓▓▓▓███▓█
▒         ░░░░░░░░░▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▓████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓▓▓▓▓██▓█
▒         ░░░░░░░░▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓█████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓▓▓██▓█
▒         ░░░░░░░░▒▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓▓██▓█
▒         ░░░░░░░▒▓▓▓▓▓▓▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓███████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████▓██▓█
▒        ░░░░░░░░▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓███████▓▓▓█▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓███████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████
▒        ░░░░░░░░▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓█████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███████
▒         ░░░░░░▒▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▓████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███████
▒        ░░░░░░░▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓███▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓█▓▓██████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████
▒        ░░░░░▒▓█▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓█▓▓███████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████
▒         ░░░▒███▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓█████▓▓██▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▓▓▓███████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████
▒░░░░░░░░░░░▓███▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▓▓▓█▓██████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████
▒░░░░░░░░░░▒███▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓█████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███
▒░░░░░░░░▒▓████▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓█▓▓▓▓▓▓▓▓▓██▒▒░░░░░░░░▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓███████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███
▒░░░░░░░░▓█████▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓░░░░░░░░░░▓▓▓▓▓▓█▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓███████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████
▒░░░░░░▒▓█████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▓▓▓▓█▓▓▓▓▓▓▓███▓▓▒░░░░░░░░░░░▒▓▓▓█▓▓▓██▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓█████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████
▒░░░░░▒███████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓██▓▓▓▓▓▒░░░░░░░░░░░▒▓▓▓▓█▓▓▓▓▓███▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓█████████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█████
▒░░░▒▓████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓██▓▓▓▓▓▓▓▓░░░░░░░░░░░░▒▓▓▒▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓█████████████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████
▒░░▒██████████▓▓▓▓▓▓▓▓▓▓▓▓▓████▓▓▓█▓▓▓▓▓▓▒░░░░░░░░░░░░░░▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓██▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓██▓████████████████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████
▒░▒▓█████████▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▒▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░▒▓▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▒░░▒▓█▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓█████████████████████████████████████████████▓▓▓▓▓▓▓▓▓▓▓▓▓▓█████
▒░███████████▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▓▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░▒▓▒▒▒▒▓▓▓▓▓▓▒▓▓▓▓▓▓▓▒░░░░▒▓▓▓▓▓▓▓▓▓▓▓█▓▓▓█████████████████████████████████████████████████▓▓▓▓▓▓▓▓███████
▒▓██████████▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░▓▓▒▒▒▒▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▒░░░░░░▒███▓▓▓██▓▓▓█████████████████████████████████████████████████████████████████
▓███████████▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▓▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░▒▓▒▒▒▒▓▓▓▓▓▓▒▒▒▓▓▓▓▓▓▓▒░░░░░░░█████▓▓▓▓▓▓█████████████████████████████████████████████████████████████████
████████████▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▓▓▓▓▓▓▓▓░░░░░░▒▓▓▓▓▓▓▓▓▓▓██████████████████████████████████████████████████████████████████
████████████▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░▒▓▒▒▒▒▒▓▓▓▓▓▓▒▒▒▓▓▓▓▓▒▓▓░░░░░░▒▓▓▓▓▓▓▓▓▓▓██████████████████████████████████████████████████████████████████
████████████▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░▒▓▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▓▓▓▓▓▒▒▓░░░░░░▒▓▓▓▓▓▓▓▓▓███████████████████████████████████████████████████████████████████
████████████▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░▓▓▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▓▓▓▓▓▒▒▒▒░░░░░▒▓▓▓▓▓▓▓▓████████████████████████████████████████████████████████████████████
████████████▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▒░░░░░░░░░░░░░░░░▓▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▓▓▓▓▓▒▒▒▒░░░░░▓▓▓▓▓▓▓▓▓████████████████████████████████████████████████████████████████████
████████████▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▓▓▓▓▓▒▒▒▒▒░░░▒▓▓▓▓▓▓▓▓█████████████████████████████████████████████████████████████████████
▒▓██████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓░░░░░░░ ░░░░░░░▒▓▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▓▓▓▒▒▒▒▓▒░░░▒▓▓▓▓▓▓▓██████████████████████████████████████████████████████████████████████
▒▒██████████▓▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▒░░░░░░░ ░░░░░░░▒▓▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▓▓▓▒▒▒▒▓▒░░░▒▓▓▓▓▓▓███████████████████████████████████████████████████████████████████████
▒░░▓████████▓▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▓▓░░░░░░░  ░░░░░░░▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▓▓▓▒▒▒▒▒▒░░░▒▓▓▓▓▓▓▓██████████████████████████████████████████████████████████████████████
▒░░▒▓▓▓████▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▓▒░░░░░░    ░░░░░░▓▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▓▒▒▒▒▒▒▓░░░▒▓▓▓▓▓▓▓▓█████████████████████████████████████████████████████████████████████
▒░▒▒░░░▒▓█▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▒▒▒▒▒░░░ ░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▓▒▒▒▒▒▒▒▒░░▒▓▓▓▓▓▓▓▓▓████████████████████████████████████████████████████████████████████
▒░▒▒░░░░▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▓░░░  ░░░░░░░░░░░░▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▓▓▓▓▓▓▓▓▓▓███████████████████████████████████████████████████████████████████
▒░▒▒░▒▒▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▒▒▒▒▓░░░          ░░░▒▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒▓▓▓▓▓▓▓▓▓████████████████████████████████████████████████████████████████████
▒░▓█████▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒░░░          ░░░▒▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒░▒▓▓▓▓▓▓▓▓▓██▓▓████████████████████████████████████████████████████████████████
▒▒█████▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒░░░          ░░░▒▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒▒▓▓▓▓▓▓▓▓▓██▓▓████████████████████████████████████████████████████████████████
▓▒▓███▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░         ░░▒▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▒░▒▓▓▓▓▓▓▓▓██▓▓████████████████████████████████████████████████████████████████
*/
/*
                              _,add8ba,
                            ,d888888888b,
                           d8888888888888b                        _,ad8ba,_
                          d888888888888888)                     ,d888888888b,
                          I8888888888888888 _________          ,8888888888888b
                __________`Y88888888888888P"""""""""""baaa,__ ,888888888888888,
            ,adP"""""""""""9888888888P""^                 ^""Y8888888888888888I
         ,a8"^           ,d888P"888P^                           ^"Y8888888888P'
       ,a8^            ,d8888'                                     ^Y8888888P'
      a88'           ,d8888P'                                        I88P"^
    ,d88'           d88888P'                                          "b,
   ,d88'           d888888'                                            `b,
  ,d88'           d888888I                                              `b,
  d88I           ,8888888'            ___                                `b,
 ,888'           d8888888          ,d88888b,              ____            `b,
 d888           ,8888888I         d88888888b,           ,d8888b,           `b
,8888           I8888888I        d8888888888I          ,88888888b           8,
I8888           88888888b       d88888888888'          8888888888b          8I
d8886           888888888       Y888888888P'           Y8888888888,        ,8b
88888b          I88888888b      `Y8888888^             `Y888888888I        d88,
Y88888b         `888888888b,      `""""^                `Y8888888P'       d888I
`888888b         88888888888b,                           `Y8888P^        d88888
 Y888888b       ,8888888888888ba,_          _______        `""^        ,d888888
 I8888888b,    ,888888888888888888ba,_     d88888888b               ,ad8888888I
 `888888888b,  I8888888888888888888888b,    ^"Y888P"^      ____.,ad88888888888I
  88888888888b,`888888888888888888888888b,     ""      ad888888888888888888888'
  8888888888888698888888888888888888888888b_,ad88ba,_,d88888888888888888888888
  88888888888888888888888888888888888888888b,`"""^ d8888888888888888888888888I
  8888888888888888888888888888888888888888888baaad888888888888888888888888888'
  Y8888888888888888888888888888888888888888888888888888888888888888888888888P
  I888888888888888888888888888888888888888888888P^  ^Y8888888888888888888888'
  `Y88888888888888888P88888888888888888888888888'     ^88888888888888888888I
   `Y8888888888888888 `8888888888888888888888888       8888888888888888888P'
    `Y888888888888888  `888888888888888888888888,     ,888888888888888888P'
     `Y88888888888888b  `88888888888888888888888I     I888888888888888888'
       "Y8888888888888b  `8888888888888888888888I     I88888888888888888'
         "Y88888888888P   `888888888888888888888b     d8888888888888888'
            ^""""""""^     `Y88888888888888888888,    888888888888888P'
                             "8888888888888888888b,   Y888888888888P^
                              `Y888888888888888888b   `Y8888888P"^
                                "Y8888888888888888P     `""""^
                                  `"YY88888888888P'
                                       ^""""""""'
*/
/*
LLIuU12U21UUUsu5KSKXX5XIXISIXIXI1KEPZdu2EPbgMRZIbPdbbPdqbMBbSqbPDdDbbPbPdPEdDKIuIIqqbPdPPqPqPUKRIJMDdqqSqXXqBBQDddDX55IdBMggRDMgMgMgRgggMgMgMggDRgMgRg
LvYYLYvLvLv77Yj111juJjJjsjYjsjYLJPSSXqrj5XSDZSUISX5S25IbDE1uUS5K55IXXPPEdDZMggbK21LjjU2S5XI5IUvUP1rIXKI511j1IPSqq5s11j2MgZdDEZEDEDEDEDEDEZEDEDEZggDggM
us1JJvL7vrr7u1UjuJusJsjYJYsYJYvsdjS5XKrYS2qSYvSISISU5qZP27uU2j1USXdZggMgMgRMRMBQQgPj7ivYU25SX1YirSXvY2PSX2XKq551v7u211RMDbEbZEDZZZZEZEDdZdDEZEZdgggDMg
JJJsvv77ir7uJJYsLYLYvLvYvYvYv7vbJs1X5Prr21Lr7Jj2juJ5dP1YvJsjuXqZDgDgDDDDZgZgDRggDQRgXji::rvJ7i:i:iLqU7v2I5U2uJs7r1UjsMRDddbEdDZEdDdEdZdEbDEDEZdgZgDgDR
uYuvv7ri7LJLYvLvL77777v777777rPjsYsI5XJ.Uj:iJJUJYv5PS7vvYjSPDZgEDEZEEbZbZdZdDZgZZPEDQDKY:   ..i7rirrj2usUJJ771Lr1usvgREPdPEdZdgdZEDEZdZEZEZEgdDDgZgDgg
jssL7rrvsYvLvv7v7777r777r7r7i51YsYs1I5X.i5:r77r7jDqsLJsIXZEgdEdZdEdZdDPEbZZgEDbdPPqPEQgZq1. .r7vvv77rrvvrri.7Jr1JLvgRZqPKbPPPdPbPbPdPEZgZDZDbdEDdgDggQ
1YJ777JLLvvvv7v7v71Uvrrr7r7isIYYrsUsUUXj:srrr:vPQMdKbPdbZbEdDbEdDbEEZdZEDdEqqSqPEdZEDEgQBMZ2:.r7vvJLY7rr7rivsruJv7RBDPbPdPPSKSP5XXPXqPZEEbPqPPdEgZggRM
jYYLLjLL7L7v7v7v7rrqUjrrrrr7IjJirvsjvSPRKs:::2RQbPPdqPPZdddZEZdZdEdEbZbZPPS5IPbDZDbZbEdZgBMDKv:i7LvsYJsJ7iLYrYY7LQBgPdbEddKqPZPqbEPPKPqqXKXbdgDMgggMMR
sv1jjLYvv7v7v7v77r:7qUUYrii112r:777YqddPggY7ZQEqPqqSqPEPZdEdEPdbZbdbZEdKX25KdEZEEPEbddZEDDMRMd1iivsLYLJrrsviv7rJBQgPEdZddPPbDZEDMggZZPPPPPDgMgRgggMgQg
sJUussvv7v777777r7i.JK1UuLvIJs:i:iYDDPSXPggQgPKPqqXbdZdEPEPbPdPPbZdEdP52UPdDEEdEdgZggRMQQBQRQBE57r7YYLi7s7rvrr5BQgdgZDZDEDDgDgMQMRMMggZgDMgMgMgggggQMR
UJUssLL7v7v777rrrr7::1U12u5sUiri:LDDPSqKdZDPPPPPXUPDDbdbdqPbdqPPZZZbPU2KgDDbEPDZggMMQQBQBQBQQQBMXj7r7rY7:r7ivDBRMDgDMZDDgggDMMQMRMQggDggMgRgMgMgggRRQM
1uuJYYvv7777rrrrrrrr.ruJsUs1r7L7YgEbIKPZZEqPPPPK1KbbqPqqSbEq5PbZEZPS1PEgZEEgZgRQRQQBQBQBBBBBQQQBRd2sir::iiiqBBggZDZgDgDMgggMMQgRgRggDMgMgMMRgRgRgMRQRQ
2J1Ysvv7v77rrrriiir77.vJJYJvijuJEdbX5KZZZPPKPdq1XPbXKSXIPZK5PEDdd2ssdDDEgZggRgQQBBBBBBBRQRRgRQQRQQDSv ..:LQBBggZDZDDggMgMgQMQgRgMgMgRgMgMgRgMMMgQMRMQM
ujjJvL77rrr7rrir7J1SS7.vuuLvYusPEbPSIEEDPPqPddU5XqXKIS2bZKISXbq277IgDgZggQMQRQQBBBQRMRMgdZEEEgMBBQQQdviJgBQMDgDMgMgQMRgMMQMQMRgRgRMQMRgMgQMQgRMRMQRQRQ
2s1Ysvvr7r7rrivuS22u2Xr.s1JsjLIDdPP2PEgPbbbPgSS5I2S5S2PDI1U12svivbQgMgMMQQQQBBBRgPPXPbgMQMgEZdZEgMRQBBBBBZZEZEDDMgRgQgRRQRRMRgRMRMQgRgRMRgRgRMRMRMQRQR
JujJv777rriiijSX2UjU2K7..JIUJsPZKbXIPgEPdEXdK2I2u1u1sSdJvYvY7riuMQgRgMRQRQQBQREbKPqbPbPbbgMQZEPEbggRgMZdPEEZEZEDDgDggQgMgRgRMRMRMQgMgRgMgRgMgRgRMQRQQQ
usuvvr7rrii7IXS25UI55:iK7.s5jugPPPqIDgZPd52KuvUsJJuY1EJ7JYYvLvPQQgQRQMQQBQRdPPbbZEZbPPPqqSXXZggdbbZdEPbPbqddEdZEDdDEDEZEgZDEgDgDMDMgMgMgRgRgRgRgRRQRRg
sYLv77iiirsKSSII2SKX.rZQQv.rsPdPKPXSZMP55uIS712u1I15ZPjX25U1uZMgZMgQRBQQDbXqqPPbbEbZbdPPPPXS2PEQDdPPqPPPKqKPddPZdEdZEbPEEEbEdDdEZgMQRRMRgRgMgRgQgMgMMR
L7vrrr7vU5PXK5X5SPI.YQgbgQ1.7DdqKKq2DZq15Uq5IPPSq5SPgIqXXSSSRMgDMMBQRggdZdEPPPdbdPdPEbEPbqbPqS55ggPKbPPKPPqSqSqPPPEPKKEbZdZbDDEEDEZZggQMMMRgQgMggZggQg
2U1115KPqPXK5SSqqU.URZPqPZRESgqK5Kq2bZKPXqqPPZbEPdbMDPqPSXPQMggQBBQgEPKPPEZgZdPdPdPdPdPEPEPPPb5IUPgDqbPbPP5SIqPbPdPIUPPEbZbEEgPbdEPdPZgQRRgMDgZDDMgQMR
dKbPbqqXX5SIIUXKI.IBDPSJu2dEDKX2uIb5ZDdPPPEPEdZdZdDRgdZPPPQMDgQQQZZEDEdqPPddgZDbdPEbdPdddbbqPbd55uSggqPPPPbPbbdqPPIJ5XPKdqPPgDEPEdEPdPDgRggdZDMgRgQRQR
PKPqXK55U2U2UI55.uQDPK1uUXPdPSssYXEZEMPPPPPEPZEZEZdMZEPbdQgggQDPSKPbdMggPPXPPEEgZZbEbEPPPbPPqPqX2I1IdgXXPEPdEZPPXuY55qXPqqXPDDbddEbEbddZggddbgMQDggQRQ
dKPXXI52IU2USXK:vQgPqUSXKXEbdIss2KgDgDPKPqdddPdbZbEgDbPdMMgEDPPKPPPqbPDgRgdXSKEbDZZPPPdqPPbPPqqISI51IPgqddEddbdbIs21S2SXK5SXEbPbEbEbdbZPgEZbdPEdDdZERR
PPPPKK5KSXSKUJ:rBMdPIuSPXPEDbqUIIXDRZMPqqPKdPbbPdPdMbPPgDS2SXbPEPdPbPqKPPgRMPS2qPZddPbPPqPqbqPK5IqXPX2ZQPZdEdDdX2q55255SXKSPddqEbdbdPddddZEZdEPZEDdDDg
YsI2S22ujv7i:.:RQdbI1JKqPPggPKX5XSEggZDKZPbPPPdqdXZZqPgRQMQQQgdEgEbqPPPqPqbgBgPuISbbbqKqbqqKKS5USKbPP5IgQPEbZPq2KqPqbqqqPSPbgqPPPPEPEbEbEEZbZbEdZZgZDZ
77rrii:::::i..PBZEXIY1KZEZgMPbXXSqqgggZdbZPbPZdbPbEEPgBBBBBBBQZKqMbPqbPPXPXXdQRZ2u1I5XIS5XSS2U1UIqKbPbSqQRbZPbXqbEbZdPqP5SqgdPSPKbPPPdbdbZdEbdPEdgZgZg
s7L77iiiiii:.sBgEq5JuqEbbKRQEPbSPKPbMDgdEEEdDEEdZdZZgRBBQ2Lr77LjUSMPKqbdPXq5IXRQM5sYJJS5SIX5SI5U5SPbZbEXEQEPEPbPZbZDZPdPqSEgZKPXqKPqbPdPEbDdbqdEZdDZgZ
Yvv7rriiiii.:QREqIuKPbXKqqdBgPPPKbPPZMZZbEdDdDEgZgMB7r77iir7r77rUUSQPSSPPbXKI11gQQqJssYUu1uI5SIX5KdDEEdEqQRPPZdEbZDZbEbEqbZgPPqPKPKKKPPdbZEgPKPZdZEgZg
Y7L77rriiii.PBDqPPq25XPKqKPMBdqPPbEbZgMEgDMgQMPdRK57ir7r77v777J11L1XMdUJ5KKXSUJYEQBdUYI2XKPXSUI2KPZZDEgEZEBZPPEbDDDbEdgPPdgDEddqbqqKPKPPZdDDE5bbEdZEDg
vvvvrrii:i:rQRdZPUvs5qXPPb2jgBgEZZEgERRgMbjP2Yr77ri77vvvvv7Yu5I21qS5KMZ1LjUU1SIuLKMBZU1PqPqdPPKqXddDZgDgEDRQbEbZDZdEPgZEdgggZDEZEdPPPdPEZZDgPqbZbEdDZM
L7v77rrii:.5BDgPuvsSqPdqqIqZBBBQbEEPMqJsJrrrrr7rr777v7v7vsS5uvUqdq5J7sRg5YJvLY1js7UMBEU2dKbbDEEEdPDZgDMDZERBQgQZEdEbgDgZgMMZgDDZDdEbEbEEgEgDPKDEEdEEgg
vvv7r7ii:.iQQESXIu2KqXIqPRBBBBQKiYL77vrrrv7v7v777vvv77rJ2Ui.iJU5jv777rvMgSU1U5UUJuLIDBP1SdPEEZEZEEEDEgDMZZDBMgRQgEPDggZMMMZgggZDEZdZZDdgDggDKPEZdEdDgM
L7L7riii.:dRZ5qSU15UIqQBQMQQBBBvir7777v7Lvv7v7v777vr7uXUJr:iLv7r7vLvv7r7ERqIXPEPEKSjSZQX5ZDbgZZEZEggggMDgdgBQZQMQDZggZMMRDgDgdDdDEgggEggMDMbPdDEdPgggD
vv77ri:::qDbKbS2j2IZQBBMEQQBQBB7rv7v7vvLvvvv777I1vrsKXsSIY7L77777vvLvL77rPQDSKPZZDqSuIbb2dDgDgbEbDDRgMgMZgZBQgMQgRQRZggRggggZDEDZDZgZgggDgZbPZEEbZDggM
7rv7ri::KgbPEdIJXDQQBRZbgQBQBBQrr7vv77LvLvLv77PIUU5dUsPjrirrrr7r77v77r7rri5RgqPPZdDbbXKKPqgggggZgEggggMggggRBgMMRRQRQRQQQMMZDbDZgDgDggMDgDZPEdEbEEgZMZ
77vvr:.SQEPZb51DQRZQQgPEMBQBBP7qUv7PuL7vvsvvJZb7sPQDsMv:iriririrriiii77ssuJdRQZEbZZDZgEdXKbQMQgRMggMgRMRgMDQBRgQgQQQQBBBBBBBggDggMgggMDggQEdEZbZdgZggZ
L7L7i LBZbDd55RQDPMQRqEZQBBQBPr:XgPXKKIJjLs5ZP7rUXiMMgi:iirii.::rv5ZQQBgEKSu5ZBRDPEEDEgZDPqqggRgRMRgMgRgRgggBMMMQQBBBBQS25ZBBQMDgggDRRRDRgEPEbEdZZDDgd
777r.:QBEDEPEQgZqERBZPPgQBQQQBD7:vZMsYY21sSPJ7rJqr.:uIiiii:.:sbBQBBM27::.....rKBQgEZEZdDZgEdqEEggMgRgRgMgRDRRRgQQBBBE17rr7rv5BQQgREDMQgRRgPZdEdZZZDgEb
7r7r:1BDgZjqBddPdEQQdPEgBQQMQBgrvrvMRULr7rYrrruSr.::::ii:.:uBBBBPr......:::...:YQBRDgEZZZEZZgEZEgDMgRMMgMgMgQQQRBBgJ7rLJSSSuvLRBQgMgQRQQMbEEDZDDgEZddq
777i:gMgD5iQgPPdPgQQqbbMQBRRQBDrr7rg2sX2r::77U5::i:iiii:.LBBBRr. ..::i:i:::::....URQggZDbdbEdDEZEZbDDMgRgRDMQQQBB5r77USdDMdPXsrXBBMQRQQQZDEgZDbdqbPddg
vr7:vQMDE77BZqdPbgQDPPZgBQRMQBRrvvJJ77vsSS5JXX:.::i::::.PBBBr   :iii:.:.::i::::. .7KEZgZgEZdEddPEdZbEdZZMMgMBMQE7ir7UqggQgDIuu7:SBBQQRgPqKK5XIKKbPZDMD
77r:2QZgPrsBPbPbPQQgKbdgQQMRRBQ7rv777vv7r7Y1si:i:::i:::bBBJ  ..iri:::r7juS5SIIUUsJjSUUPgZDdZEEddbEPdEZdEbddDDgPJJ5SPbggMEPPbqbS51PqK5X255qXPPPPEbEZMgM
v77:PRggZ:sQdPbqPgQDPPEDQQQgQBB7ir7rriririi::::::::::.r1J:  ..:r::rsSKEbPqdEQggZgdZgQP5IEEgEZdgdEPdPdPEddqPqbPEDRMQgZddqbPbPDZgZbIKKPPdqdbEbZbEEgDggQK
77ridQEgE:7BdPPPXMQMPddDMQQRMBBYSBQgPI7ii::::i::::.:....  ....:iijSbdMBBBBBBBBBBBBQBBBBP2XbgDDdZEDEEPdPEbdPdPdbZdDEgEZdZdDdDdZdZbdPbPbPdddddPEEDdddDdP
vr7iDQgZM.rQEPbqqEQMbPEZgQBQQQBgPJsSBBBBBdY::::::::...........::1gBQBBBRgMBBBQBBBMBBRPj5QX1jKdDdZbZdEbdbdbEbEEZEZdZdZdZbEbdPEdZdDdEdDZEbPqPbgDZddEq7ii
77riPQDDMi.QEbPPXEQQPPPZEQQBQQQBi .. :uBBBBR7:::::::.....:....:LQBQBKYPd1gQBBBDBPbgUr7:7RBE5sJIdDgEDEEbEbEbgZEDQgRgMggDRggDggRgMDgEdSU1XbggMZEPZgU::ii
vr7:UQgDRI.XgPdPqqRRZPEdZDQQBQQBQr.::...:vPQRsi::::::::...... JBBBQ:. LBg1ZQBPr1PK7irrr:PQMEgPIsu5ZDDdEPbPPdEYI2UIdPEEEUPEDdbdEPbIUuIqggRDEPddDKr.:irr
v77irQMMgRivgdPEPqEQgdPdEDgQQBQBBBY::iiii7YUXbJ:::::::::.:.... :2BM... .2P1L:jPPjrir7vrirRMMDgMRq2LuUKPEbdbbbDEZPbPbKPPPPEdEPbXI25PgQQgMEEbEZZu. :irrr
Lrvi:5QgggSrgPddZKPgQEdPEEDDMMQRBBBK7LIXqSSIqPg5i:i::::.......  sBSvr:   i15dK2rrrv7vrri:5QgMbZMBQMPKuJjISqPDbZgMggDgEEdEbbqKuugMRBQRDZPEPPqKr..::ii7r
v77r:rgQEddjqEPddEKdggPdbZEDZZZRRQQBgDQBBBBBBBRBqiii::::....... :..iJqqZEbXSY7rr7v77ri::.7RQMZbDgQRQBBQdX5u11uY1U5U5UI5KS2jsr:dBRQZEdZdEbdSv:..::i:rrr
Lrvri.5BMPZKKbdPEbdPEZgPEdDDgZDZgMQQBBBBZ1dQPDBBBLr:i::::.......   .:irr7r7r777r7rri::::::QQRDdPDDgDMRBBBMgDQMi:rrYJ2qdqXLvriUBMZPPPDDDdbJ:..:::iiii7i
v777i.iQQDPdKdPPPZPPPddEPddDZDEDEggQQQgL. .DquZBBXrrii::::.......::rii:iirr7rrrriii:..::..PBgMZPdZEgZDDQBBQQQB2r77jPdPIu77i7PBgDEZEgEb27:. ......::iii
v7vrr:.vBMEPdPbPPPEqbbddZPEbZZgZgEDdgZQZr.  SKurXd7ii::::.......::iiririrrririiii::...::: 2BgggEdbDEZEDZgDQQQBgirvKSs7v7iiIRBZDEggDPY:    ..::i:::::i:
v777ii::uQZPPPPbKbPEKbbddEbEbDZgDgZZbEDBQZL.:gBE5E7i::::.......::::i:iiiiiiiii::::...:.:. 7BDggMdbbdPEdZEEPdDQBDuIsri7rrYMBBDgDDEbJ:.:rJUKPZEDZgdgDMRQ
Y7vrri:.iXRPPPbbEqbPEqPPEbZbZPDZgDgEDEDQMqBBBZI:Ld7ii::::.......::::i:i:i:i:::::......:.. rBgdRggbPdEXdPdEDEdPZQBBQdSvXQBBBQQgDq2Y775KPbZPEbEPEbEdZZgD
v777rri::vgDXdPXdDqbPEPKKEbEbZdZZgZDEDEgMv:i:...Ubii::::.:.....:.:::::::::::::.........:. iBgdZQMgPPEZKqPEdEdZPqXdgQQBBBQQZdq5jusU5qPbPZPdqPqbqPPPPEEZ
v7vrrii:::qDKPZU7gDPbPZPXXddEbEdEEgEDEgDQEiii::.ESr:::::........:.:::::::.:.:............ iQRZEDQMZPPEDPqXSXPKqqdPP5SIIUIuusu15SbbDddPbqKXXSqKPqbPdbEd
v7v7rrii.:1DKbdD.rQMdbPEbXSZdEdEbEEgZgZggBviii::EUri::::.........:.:.:...:............... .RRDEEZQMEPbdDPPX5IS552XXPPdPqSqPbPEEZddPbqPKPqPKPqPqPqdPddd
L7L7rii:::1EPqEDi 7BgPdPdPPSbdEbZPEEgEDDRQg:i:::gJ7ii::::................................ .dQZDEZDQQZKbbDdDddqK5I1uYjuXPDZgDZEdPbPbPdbEPdbbPbqPqPKPPEd
v7v7rrii.:5PPPdgi..7QgbZPbEZ5qEDddPZEDZgDMQu::.Lbj77rrrrri::.............................. SMgdDEdEQQZKdEZEgDgdPqKSS1JvLYu1SSPPdbEPdPbqbKqXqSXSqKqKbPb
Y7v7rri:.YZKdqDP:.:.rggdEPbEZIKZDbdPEEDZgDQMr.:Ud1UuuvYvsv7rr:...........................  vEDdPdEPqgggEZdEEgZgZDEEPdPq2UjJYsYJJ1jUu1uU121I2S5XKPPbbZd
vvv7rr:.iDKqbbg1.:::.rDQEEPEEDSSZgddPdEDZDDBg:.JqI7:::......ir............................ .SddbqdZ51ZDMgZPdPDZDZgZgddXqSK5SI52I22U225I55X5KSKKPKPPbbb
Y7Y7r::rgdSKbEg:::i::.:ZQddqdEDIUdDbdPEEDZDDBX .i:      .:.  i: ................... ....... v2ZdbSdbjsddZDgdbqEdZEZdEPPqPSqSSSXXqKPKqqPqPqPPPqPqbPbPZP
Lvv7:iuMdI5qPQY.:i:i::.:dgPdPPPE1uPgbdbEEZEEMBL       .irJ7  ..................... . . ....  LuDdPKPKYLKPPPZZEPPqdbEbEbEddbdPbPdPbPdPbqPqPqPqPqbqbPEdd
vrrrjbgb5IPXZdi.iiiiii:.:EZEEKXPZu1ZDbbPZEEbgMB7 .::ii:    .................... . . . . .... :vvDEbKPXJ72XqXPdgZZPbPEbdbEbddEbDdZEZdZPdPbPbPdPbPbPbbZb
7L5ggZPI2PKbKL:iiriiii::.7ZEdbSXPdL5DZbddZddPZgBU .vJsvi..:7:............... . . .       ...  i7iXDdqPKurv1XSXSbbDEDbbPdbEbDEZEZdZdZEZddbEbZddPbPdbEbE
RDMEdXI5PKPKui:iiiiiiii::.qZdbPIqdS7PZdPDEZdPqEDBD  irrrii7r.         . ... . . . .       . .  :i.vZEPbbKY7rsSqXKXbdZdZddPbPdbEbZbEEDEDdZEZbDdEdEdZdDb
ZEPPSXXPKPSur:iriiiiiiii:.7QqdbX5dPuUZbdbEEgPPqbgBu  :ir:..  .:i::...            .       . . .  .. .JPPbPbSY:i7U2IIKKPPEdDdEbEPEbdbDdZEDbEdZEggggQMQgM
EPbqPqqXKX27iiririiiiiii:.iBEXZSUKES1PEqdPEEPIKKDBu.. .:i.7v7r7sSKbX2vrii::.rv.                      .ruqbbPPYrirvu2XXqKbbZdDdDZDZgEgDDDMRQQBQQgDbEdgM
dPqPXqKqKS7iirirrririiii:.iBZSPK15ddsKPPPdbEqSSKbB7.ii  .:uZPZXYri::7DBBQdqSKU                         ..r1dEZPIv7iirvLuUSSPPZdZZgZDZgEZqSY7i.     .:r
EKbqPKPKI7iirrrrriririii: YQEXS521DZu2PPbPdPX2qSEQi.:ir.  rPBBQi.:r72IU7rii.                        ...     :7IKEbP1vii::::.::iiiii::..          .:ir:
dPPdPPXJrrirrrrrrriririi..bZPdUIJjbQU2PEPdPEI5KXDD..:::i.  iiUXXPPJ7i.  ..                         :7jY7..      .:iv1KqP52uJ7r::.:::.        .:iiiirrr
ZPdPqUvirr7rrrrrrrrirri..IgPbb2ssLKMPuPbbPEP2I5UZ1..::::ii  :vjrrrri          . .     .          .7ss7ririi:...             .....    ..rSL .::::::iiri
DEPXY7rrr7r7r7rrrrrrrr:.LQbPqd5r71SMb5PdPEdXjIuSKv.::::::ii.  :iii::............ . . .          ijL7rriiii:::i:i:iiiii:i:::::::irvsSPgMBBB5....::::rrr
EI17777r7r7r7rrrrirri:.vQZbqq5d7J2XDZXEPEbbu2JJKUi:::::::::i:  .:. .iiri:...... .             iuJrririiiiii:::::::iirr7vLLjjUU55KKPqPXKXPbQZr...::iirr
uLvLvv7777r7r7rririi..vQgdPbKJbUJ55DDbbbddUU1sjqv.:::::::::::i. .rvs7r::........            .Jjvrriririiii:::::::::i:iirrrr77vLsYu12252SSPqRR2:..::irr
jvjLL7777r7r7rrrrii.:2BDEKPbKrZSjUPZZPdPd5UUJL2Xr.i:::::::::::i. .Lri:.........           :L27iiiiiirii:i:::::::::::i:iiiirr77vvYLjJU15IXSKKZQZ7:.:iri
Jsssvv77r7rrrrrri:.vMBZZPPqE2ibZ15bDPddPSI21vs1K:.::::::::::::::...r::........          :I5Jii:iiiiiiiii:::::::::::::::iiiirr77vvLYujU1525IKqbgBgs::ii
jLjvLv777rrrrrri:.IQRddPbqbDJ:bZ5SEdZPb5K5SssYIu .i:::::::::::..:Ir ::..... . .       iXdjr:::i:iiiiiii:i:::::::::::::i:iiiirr77vvsLujUU5IS5XXqqDQg2r.
JsYY7v77rrrrrri:iDQgddqPqPdgiibEIbdEbbKKKqUusJUr i:i::::::::..:7YjI7.... .         .ruuuri::.::::i:i:::::::::::::::::::i:i:iirr77vvYLJjU252I2SSqqPZQQK
JYJLv77rrrrii::LQMEPdqPPddRu:7gqXPdPPKPKKSIusj2 .ii:i:i::::.i7v7LvJU1:          i7jJviirr .:::::::::::::::::::::::::::::::i:iirr77vvLLj111I2SKP55UKqgQ
ssYY77r7rrir::JBgbqPKqKPPgPi:XEPPdbdqPqqXKIYLI7 :iii:i:ii:.r777YLYvsj5ULri::i7sIZ2vi:i:ivi  .::::::::::::::::::::::::::::::i:iirr77v7vvJs1IS21J22KqPqP
jvsvv77rriri:LQZPKqXKKPqdg7.vgdPdPdqPqqXqXu7us. rir:iiii..r7vLYLsvYvJsJjSIX2UJY7J7vi:iiirL.  ..:::::::::::::::::::::::::::::::iiii7777vY1U1sjuI5X5SIKS
LYLv77rrrri:7MdPXqXKSPKbDj:7dEPdPPKqKPqPK5Ljui ririiirr. 7vYvYvLvL7v7v7v7v77r7rir7r7irrrr7s.   ..::::::::::::::::::::::::::::::i:ii77sJJLJsUuUu1uU2XXq
JvJvvr7rriiigEPXPSKXPqPZ5:vZDPdPPKPPPqPXXJ1Ur.rrrrrirr  7vvvYvL7v77rrr7r7rrrrrrirvrvr:rrrrvj.   ..::::::::i:::::i:::::::::::::::::7vJvvvJjuJjYjJUIXSPS
YYsLvv77ri:dgbqqKPqPqPPbivZDbdPPPdPdPdS5UX2i.r77rrr77. rvLvYvYvv7v7v777v77r777rrrs7vvri7r7rLU:   ..::i:::i:iii:i:iiiiiii:i:i:i:irLYL7YJ211Juj2US5SSXXX
sLjLsvLvviIQZPPPbPbPdbD1uggEZbZbEddPdK52PJiivvvvLvLsr rujYuJJsjYJLJYJYJLJYsvYvLvvLU7uY77vvv7uKi ...:iirrrirrrr7rrrrr7rririrrrrvJUYYJI2IUIUSSXSKXXSXSPK
7rvLvYvvrvMRbdPbPdbEPEddDgEZdZbEPEPP5I22rrvYvLvYLYL7 :jUj1JjYjYJLjYjsJsJLsvsYsLYv7UjLuv77vvv7u2r.:...::iiirrrrr7rrrrrrrrr7r77u11Y225IIU52S5XIXXKSqSPqX
*/
/*                                                                                                                                                                                                                                                                                
                                                           ..::r7Ls1IKKdPZDggRRQMQRQMRgMDDdbqKI2ss77ii::.....iiri:                                    
                                               .i72PQBBBBBBBBQBBBBBBBBBBBQBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBb.                                
                                       .ijdBBBQBBBBBBBQBBBQBgdIu7r:..      ....:.:::...                      ..ivbBBBBBr                              
                                  .vRBBBBBBBBBBBBEI7i.           ..:r7sJjYs77i:::.....:irvu11vi                     JBBBB:                            
                              :5BBQBQBXr.          ..::r7YJU121uL7i:.                        .7XED1:                  rBBBR                           
                           rQQBBBdi                                  .i7JuI2SSKSqKqKPKS1J7i.      iqBZ7                 gBBBi                         
                        :QBBBBj.    uqr71PERQRZPUJ77rrr77LY15bgBBBBBQDU7:.             .:rubgRd2i    .5BDr               YBBBP                        
                      1BBBBP.      7i              ..:::ii7rrii:.               .......        :IRBPi   .qBq.             rBBBB                       
                    2BBBBu                 ..::::..                          rr:irr77LY25qPPXI7.   :SBMr   rgQr            rQBBg                      
                   BBBBU             .7IK5ULL77rvv1SEgQQQi                  PB.              .i7IKSr.  UBd.   2gu.          jBBBr                     
                   BQQ             YQBJ.                vr                 BX                      :jdu  :MQ:   :u7.         EBBQ                     
                   BB.            qQ:                 Q:                  Qg                          .5E   qd:    .          BBBg                    
                  iBBi           :g                   :Br                 g7                             Kv   sv               BQB7                   
                  BBB            i                      M                 .          .i7LJU11Y7i.         i.    .               BBB:                  
                 BBBM                                  ig                      .vgQBQBBBBBBBBBBBBBBBXi                          .BBBv                 
               .BBBB                   :LUKKXJ7:.      iB                   .qBBBBBBPi jBBBBBQBBBBBQBBBd                          BQBQ                
              PBBBZ                 YBBBBBBBBBBBQBQg7                     .BBBBBv       BBQBQQQBQBBDiYMBBS                         MBBQX              
            vBBBB:        ..:ir:  .BBQBEi.:.:SBBBBBBBBBY                 SBBBq       .:.MBBBBBBBBBBR.  :BBQ  :P57rv.       .s1Ujs7i7BBBBB1            
          .BBBQJ  .gBBg1ri:irLsJ. 7BBBBBBBBBBBBBBBBBBBBBBr :717         jBBB1     JBBBQBBBBBgggQQBBBBBBBBBBJ   LDBQ.       ...:rr7v7ir7PBBBu          
         LBBBB  iBBs                   .:i7vu2qdQBBQBBBBBBBBBQB         .BBBDi7qBBBBBQ5r.           .i1KPUi  vK       .:i::          .i: 7BBBr        
        1BQBZ  BQ   iU.                             .rPBBBQd7.            jBBBBBBEi         BB5                   7RQBBBBBBBBBQP:      .u  SQBB       
        BBBB  B: iBPr    ..                            MBB                  :DJ             JBBBB:            .uBBBBBBg. .:iLPBBBBS      J  .BBQ:     
       vBBB  B   B   :BBBBBBQBQM7.                     QBB                                   :BBBBBRLi...:r5BBBBBBBBY   .       7BBBr     r   BBB:    
       IBBB PY  rY  QBBBBQdIUPBBBQBq.   KQD            QBB                                      YgBBBBBBBBBBBBBPv.     QBr        PQBU    r:  .BBB    
       UBBR B   22  v:          BBBBBBBBBBg          .gBBB                                            ....             BBB         EBBi   ij   ZQBv   
       :BBB B   Es         rB7  .BBBBBBBgi         :BBBBBs                                                         .uBBBBQQ         BBB   iI   :BBQ   
        BBB B   ri         gBB                   rQBQBS.                  dBBBBBEr  B                          .vBBBBBBBRBBBgi      gBB   rU   .BBB   
        rBB.Kr   QI        BBQ                 7BBBB7                     5DQQBBBBB XI7iiiiirr7.           .vgBBBBBEr   :BBBBBBR:   BQB   ri   :BBB   
         QQBiB    DBr     BBBB              iQBBBBB2                            iBB: .:i::...:7:       .vgBBBBBBK.      ZBQBEBQBBE 7BBP   P.   dQBK   
          BBBqPL.        BBBBB:          :KQdDBBBBBB7             .DBBBBBBBBJ   7BB.               :SBBBBQBBBS.        7BQB        BBB    B   .QBB.   
           BBB..IMQZr   KBBBBBB:      iIDPi   51  5BBE            BBQBBBQBBBB .BBBB           .JMBQBBBBBBBB           UBBB.       QBB    BU   BBBq    
           :BBB    iBJ  BBB7YBBBBi    ..            BBB7    iJ             .  BBBR       :uMBBBQBBBQKr. BQB         vQBBBBU       PU    MB   BBBM     
            7BBB.      LBBQ:gBBBBBBq.                vBBBMSBBB                     .rXBBBBBBBBP7.       BBQ     .7gBBBBBQd           .rEJ  rBBBK      
             ZBBB      EBQBBBBr BBBBBBR7.              sBBBQg               .:7ugBBBBBBBDY:            BBBQ:JEBBBBBBBBBB.         .7J7.   BBBB:       
              BBBr     BBBQBQq  BBBuBBBBBBBDjr.                    .:7jdQBBBBBBBBBBBBB               rBBBBBBQBQBEiiBQBR                iBBQBj         
              7QBQ     BBQQBB  .BB:  .75BBBBBQBBBBBBBQRZdqPDBBBBBBBBBBBBBBBgS7i.   vBB5           :XBBBBBQBBBv    RBB5               .sBBBg           
               BBB     BQBQBq  1BB      BBB iKMBQBBBQBQBBBBBBBBgUjBBBr:.            BBB      isDQBBBBBBBQBBr    :BBB7               :QBBB:            
               BBQ.    BBQQQB  BBBr    gBBS          QBB2         BBb               DQBiiPBBBBBBBBBBBBJgBQ:    rBBBi               UBBB5              
               qBB:    BQBQBBBgBBBg    BBB           BBB          BBd               uBQBBBQBBBQBBBRs   RBB    IBBB.               vBBB:               
               sBBi    BBQQQBBBQBBBBBdjBBBsr:        BB5          BBD       .rIDBBBBBBBBBBBBBBQs.      SBBs 7BBBB                 BBB                 
               YBBi    qBBQQQQQQQBBBQBBBQBBBBBQBBBBBBBBBBBBBQBBBQBQBBBBBQBQBQBBBBBQBBBBBBXv:            BBBBBBBX                 QBB.                 
               vBQ:    iBBQQBQQQQQBQQQQQQQBBBBBBBBBBBQBBBBBBBBBBBQBQBBBBBBBBBBBBBBBgv.BBg                BBQBB:                 :BBX                  
               2QB.     QBBBBBQQQBQQQQQBQQQQQQQBQBQBQQQQQQQBQBQBQBQBBBQBBBBBBBQSi     BBB             .EBBBBJ                   BBQ                   
               bBB      gBBiYQBBBBBBBQBBBBBQQQBBBBBBBQQQQBBBBBBBBBBBBBBQ1Lr.          BBBK          LBBQBQX                   .BBB.                   
               BQB      .BBQ JQBB 2BBBMQBBBBBBBBBBBBBBBBBBBBBBBBgK7. BBr               BBB2      .dBBBQBJ                    vBBBi                    
               QBB       dBBQ 5BB  YBBg  .iKBBK    .YBBBB:           QBJ                BBBi   LBBBBBQi                     BQBQ                      
               BBb        BBBsiBBB  2BBR    QBQ       ZBBq          .BBM                 BBBrBBBBBQJ                      qBBBI                       
              rBB7         BBBBQs.   DBBB   JBBQ       BBB          .BBB               .iBBBBBBBu        :i:     rs:    PBBQQ                         
              qBQ.          dBBBQDPJ.rQBQ    XBBM      7BB.          BBB         .iXQBBBBBQBgr       vPZUi   :gBBP.  :MBBBB.                          
              BBB             UBBQBBBBBQBQgui7BBB7      BBI          gBQqI2UPgBBBBBBBBBQg7.      iEBMv    rBBBP    vBQBBg.                            
              BBB                :7PQBBBBBQBBBBBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBBBBBBP7:       .uBBP:    IBBQs    iQBBBBJ                               
             .BBD                       .:rv15PEQQBBBBBBBBBBBBBBBBBBBRgbKUJrr..           rbBRv    7BBBb:    iQBBBBP.                                 
             7BBu     .i      Ei                                                      :SRQ1.   rgBBgi     vBBBBBd:                                    
             UBBr     bQ      .BB:             .:i77v7v77rriiirr777i.             i1Zdu:  .7gBBqi     :KBBBBB5.                                       
             ZBB.     id        1BQQ7.                                     .:7Y5S27i.:i5DQPv.     .jQBBBBBv                                           
             MBB.      r2.        .1QBBBDIsri:..          ... . ..:i7vJj1uuYL7rir71XqU7.       rRBBBBQS.                                              
             QBB        :MQs.           .::iii::....   .....         ..::ir7vJYvi:         :PBBBBBPi                                                  
             RBB          .XBBQ2r.                           ..:ir77vvvrr:.             sBBBBBQ7                                                      
             MBBY             iUdQQQMgKSuJv7r7r7r7r77vvvvv7vrri::.                  .5BBBBBS.                                                         
              BBB.                    ...........                                :bQBQBQ7                                                             
               BBBi                                                          .vBBBBBdi                                                                
                BQBQ.                                             .LgBBQBBBQBQBBBu.                                                                   
                 7BBBBr                                      :7DBBBBBBBBBBBBQU:                                                                       
                   7BQBBBqr.                         .i7KMBBBBBQBBBgPYr:.                                                                             
                     .SBBBQBBBQQbXuY77rrrvvjUPEQBBBBQBQBBBQBPv:                                                                                       
                         :2gBBBBBBBBBBBBBBBBBBBQBBBMqYi.                                                                                              
                               ..:i77v7vrri:..                                                                                                        
*/                                                                                                                                           
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      