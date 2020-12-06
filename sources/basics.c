#include <stdio.h> // das ish eifach damit s programm weiss dass mer en standart bibliothek importiert also nd wichtig eifach dass mer das überall schribe muess
#include <stdlib.h> // s gliiche da
#include <math.h> // math lib

/* entweder*/ void main( void ) {
// wenn d funktion kei return wert hed
}
// oder s standart int main() {}
int main(/*optionali variable münd da ine protokolliert werde zb.:*/ int i, char a, float b, const *argv) { // da beginnt mer d hauptfunktion main. ...egal
  // alles was zwüsche dene klammere staht, wird uusgfüert
  // btw...
  // Alli linie wo mit emene doppel-slash beginned sind kommentär und werded   // fum programm ignoriert.
  // so...
  // was ich jz erchääre sind datentypen also wie char, string, bool, int     // usw...
  // lets get started.:
  int nummer1 = 10; // da wird en variable mit em typ int=nummer mit em name   // nummer1 deklariert. Int datetype chönnen nur ganzzahle und kei           // kommazahle sii.
  bool bool1 = true; // da wird en  boolesche-wert deklariert; das sind       // abfragigswert wie wahr oder falsch. Jede deklaration muess mit emene     // semicolon abtrennt werde.
  float float1 = 0.5; // hier... basically s gliiche wie bim int eifach dass   // float, kommazahle sind.
  // es gid ebe no strings und char: strings sind textkettene wie       'hallowelt'. Luege nöchst linie.:
  string string1 = "helloworld"; // jede string beginnt und ended mit emene afüehrigszeiche.
  // jetzt chömid chars.:
  char char1 = 'T'; // s gliiche wie string nur dass char en einzelcharakter isch und mit single ahfüerigszeiche beginned. Remind:: Jede variable muess nd immer char1, string1 und so heisse; du chasch basically jede name geh.
  // guet jtz chömmer mathi berechnige mit de variable mache wo mmer vorher deklariert hend; dazue mümmer JZ GANTZ WICHTIG D MATHI BIBLIOTHEK IMPORTIERE LUEG UF LINIE: 3!
  // so jz chömid rechnige:
  // ganz eifach:
  const int eins = 1; // const staht dafür dass de deklarierte date-typ also 'int' immer gliich bliibt also es absolut funere constante.
  const int zwei = 2; // same here
  printf(eins); // s resultat muess immer au en datetyp ha;
  // lömmer das mal laufe und lueged was use chunnt:
  // ups... btw... nd vergesse de return wert z schriibe, de isch ganz WICHTIG!
  // return 0;
  // okay es gid fähler ich muess luege was falsch isch... wart churz...
  // komisch es ish echt komisch sorry... ich muess überlegge
  // uf jede fall isch das en fähler fum compiler und nd fum programm also alles oke ich mach wiiter.:
  // also wiiter mit escape characters:
  printf("text"\n "dieser text wird auf einer neuen linie angezeigt"); // \n staht für newline
  printf("text"\t"text") // \t staht für tab und ish eif en tabulator abstand
  // wiiter mit hmm.... okay... ich mache en churzi iifüerig für functions und control-flow: lets start with functions.: Basically chasch du im 'int main() {...}' en eigedi neui hauptfunktion erstelle und zwar eso:

    func main2() {
    // alles da inne wird id function main2 verpackt und
    //...
    }
    // ... jtzt abgruefe
    main();

    // jzt if the else und so scheiss also basically control-flow-logics:
  bool wert = true;
  if (wert == true) {
    print("true");
  } else (wert != true) {
    printf("false");
  }

  // jetzt no swich-case-brake also en anderi version fu if-else:
  switch;
    wert == true;
  case;
    wert != true /*also false*/
  break;
    // da chasch de code ine schriibe wo er mache sött wenn öbbis fu switch oder case zuestimme sött

  //---------------------------------------------------------------------------------------------
  // Jtzt no try-catch-and-throw en besseri und sicheri version fu switch-case-break
  try /* da tued s programm de wert uuffange */ (wert == true);
  catch
    printf(ERR); /* falls try zuestimmt sött er s printf uusfüere */
  throw
    return wert; /* die linie ish verliichbar mit em else bi if-else */
  // also als erschtes hemmer en neui variable namens wert mit em wert true deklariert. denne fragemer de code wenn de wert fu 'wert' gleich true ish gib "true" ufm screen uus. Suscht gib eifach "false" ufm screen us. Thats easy right?
  // Es chunnt nd am tescht aber es ish echt en vorteil wenn mer es schu weiss.
  // also wiiter mit wert charaktere:
  int zahl = 10;
  int rechnung2 = 20 + %i;
  // zersch hemmer en zahl mit em wert 10 deklariert und die in en rechnig mit 20 iigfüegt. also wird 20 +  %i grechnet. S %i staht für de letschti definierti int wert und das ish int zahle = 10;
  // es gid au so zeiche für char wie: %c und wiiteri.
  /*

  übrigends so macht mer multi-line comments. :) nerdy facts but more comfortably right? okay lets move on...

  */
  /*******************************************************************
  *                         Type-casting in C                        *
  *******************************************************************/
  int i;

  char c = 'A';
  i = (int)c;
  printf("char c nach int i: %d\n", i);

  i = 67;
  c = (char)i;
  printf("int i nach char c: %c\n", i);

  float f = 2.345;
  i = (int)f;
  printf("float f nach int i: %d\n", i);
  // ND DE RETURN WERT VERGESSE:
  return 0;

  // arigato gozai masu!
  // completely over-engineered XD 
  // try to rewrite it asap XDxD

}
