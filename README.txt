                CSAMPLE PROJECT TIMO SARKAR 2020
====================================================================

./csample
    ./sources "enthaltet die quelltexte und c programme"
        ./conditionals.c "Enthält Erklärungen zum conditionals Test im M403"
        ./functions.c "Enthält Erklärungen zum funktionen Test im M403"
    ./include "enthaltet c header files die importiert werden können"
    ./bin     "enthaltet *.exe files die die Resulatate der in sources/.. files darstellt"
    ./confgen.c "generiert platform-spezifischer code um diverse headers zu importieren."
    ./sha256sum.txt "Enthält einen SHA256 bit checksum welche zuerst validiert werden sollte."
    
How to verify this project using gpg (Kleopatra on Windows32&64):    
Simply install gpg on your machine and type this shell oneliner and press enter.

    "$ gpg --verify sha256sum.txt"

How to build this project using a C compiler. I have built this project targeting windows os or 
unix simliar oss. The recommended compiler is GNU GCC which can even build the whole project by 
running ./makefile. However you can also run this by using Visual Studio 2019 using .NET framework
When running this project using gcc simply type this in your shell:

    "$ $var = "TARGET.c"
    "$ gcc -o $var TARGET.c"

Please keep in mind to replace the 'TARGET.c' with the file you like to compile. After building the project
you might want to add this project in your GCCPATH. Go under 'Systemenvironment variables'/edit/path/new and type:

    "$ PATHTOTHISPROJECT"

Replace PATHTOTHISPROJECT with the root location of this Project such as '%DESKTOP%/csample/bin'.

Developed and mantained by Timo Sarkar
Last modifyied on Saturday 12.20 on 11:31 ETC
See changelog.txt for latest chages and Updates
