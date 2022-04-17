#include <iostream>

using namespace std; 

bool login () {
 string password = "";
 int intentos = 0;

 while (intentos <= 3) { 
system ("cls");
if (intentos == 3){
cout << " No se ha podido validar su password, por favor contacte al administrador del sistema "
<< endl;

return false;

}

cout << " Ingrese su Password:  ";
cin >> password;

if (password == "1234"){
    system ("cls");
return true;
}
intentos++;
}

return false;
}