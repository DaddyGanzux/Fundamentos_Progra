#include <iostream>
#include <math.h>
#include <time.h>
#include <Locale>
#include <codecvt>
#include <string>
#include <thread>   
#include <chrono>  

void imprimirLento(const std::string& texto, int retrasoMilisegundos)
{
	for (char c : texto) 
	{
		std::cout << c;  
		std::cout.flush();  
		std::this_thread::sleep_for(std::chrono::milliseconds(retrasoMilisegundos));  
	}
	std::cout << std::endl;  
}
int main()
{
	setlocale(LC_ALL, "es_MX.UFT-8");

	char respuesta;
	bool respuestaValida = false;
	bool esSi = false;
	float Altura = 0;
	int edad = 0;
	int opcion = 0;
	std::string name = " ";
	std::string sintoma1 = " ";
	std::string sintoma2 = " ";
	std::string sintoma3 = " ";

	std::cout << "Buenas tardes señor, ¿qué se le ofrece?\n";
	std::cout << "1- Buenas tardes, me gustaria obtener una consulta 2- Me gustaria obtener una consulta 3- Quisiera comprar medicamento\n";
	std::cin >> opcion;
	switch (opcion)
	{
	case 1:
		
		{
			std::cout << "Claro, pero primero tenemos que rellenar un cuestionario, ¿esta bien? (s/n)\n";
			std::cin >> respuesta;
			if (respuesta == 's' || respuesta == 'S')
			{
				esSi = true;
				respuestaValida = true;
			}
			else
				if (respuesta == 'n' || respuesta == 'N')
				{
					esSi = false;
					respuestaValida = true;
				}
		}

		if (esSi)
		{

			std::cout << "Perfecto, primero sea amable de decirme su nombre (solo su nombre)\n";
			std::cin >> name;

			std::cout << "Muy bien, ¿Cuántos años tiene?\n";
			std::cin >> edad;

			std::cout << "De acuerdo, ¿Cuándo mide señor/a " << name << "?\n";
			std::cin >> Altura;

			std::cout << "Voy a confirmar sus datos: Su nombre es " << name << " tiene " << edad << " de edad y mide " << Altura << " metros ¿correcto? (s/n) \n";
			std::cin >> respuesta;
			if (respuesta == 's' || respuesta == 'S')
			{
				esSi = true;
				respuestaValida = true;
			}
			else
				if (respuesta == 'n' || respuesta == 'N')
				{
					esSi = false;
					respuestaValida = true;
				}

			if (esSi)
			{
				std::cout << "Describame sus sintomas uno por uno cuando se lo indique señor/a " << name << " para poder tener su diagnostico, solo que el que nos hizo el sistema era un incompetente y solo puedo anotarle 3 sintomas.\n";
				std::cout << "De la misma forma solo ponga una palabra si es por ejemplo dolor de cabeza solo escriba cabeza, repito quien nos programo el sistema era un inutil  ";
				std::cout << "  Deme su primer sintoma\n";
				std::cin >> sintoma1;

				std::cout << "Deme su segundo sintoma\n";
				std::cin >> sintoma2;

				std::cout << "Deme su tercer y ultimo sintoma\n";
				std::cin >> sintoma3;

				std::cout << "De acuerdo señor/a " << name << " entonses usted tiene " << sintoma1 << ", " << sintoma2 << " y " << sintoma3 << ". Entre al siguiente enlase para ver su diagnostico" << std::endl;

				std::string mensaje = "https://i.pinimg.com/originals/f1/a5/b0/f1a5b04b1b09cce364b51a672b527f2d.jpg";

				std::cout << ",cccccc:::cccc:::::::::::::::::::::::::::::ccccccc:ccccc:::::::::::::cccccccccccccccccccccccllcllllcllcccccccccccccc::;.";
				std::cout << ",ccccccccccccccccccc::cc::cccccccccccccccc:cc::::::::::::::::::ccccccccccccccccclllloooooddddddddooooollllccccccc:::::;.";
				std::cout << ",ccccccccccccccccccccccccccccccccccccccccccccc::c:::cccc::::::cccccccccccccclloooddddxxxxxxxxxddddooooollllcccccc::::c;.";
				std::cout << ";ccccccccccccccccccllllllllllllllllccccccccccccccccccccccccccccclcclllllloodddxxxxxxdddddddddddddddooooooollllllcccccc;.";
				std::cout << ";llccccccccccccclllllllllllllllllllllllllllllllllllccccccc:;,:cc:::::;;,'';lddddddddoooooooooodddddddddddoooooolllllll:.";
				std::cout << ";lllllllllllllllllllllllllllllllllllllloooooooolll;'',,'......,;,''...... .:ooooooooooooddddddddddddddddddooooooooooooc.";
				std::cout << ";ollllllllllllllllllllllllllllllllllllllolloll:;,......   ....''...       'lddddddddddxxxxxxddddddddddddddddddddooooooc.";
				std::cout << ";ooooooooooooooooooooooooooooooollllloooooolc,...   .. ..'''...........   .codddddoddddddddddddddddoooooooooooooolllll:.";
				std::cout << ":oooooooooooooooooooooooooooooooooooooooooool,. .......';:;;;;;,,,,,,:::;;codoooooooooooooooooooooolllllllllllllllllll:.";
				std::cout << ":ddddddddooddddooooooooooooooooooooooooooooooolccllc;,,,;oo:;;;;;;,,,,;cl:,:cclooooooooooooooooooooooollllllllllllllllc.";
				std::cout << "cdddddddddddddddddddddddddddddddddddddddddddddooddodc,,;lxkoc:;;;;;;,,,;,......':looooooooooooooooooooooooooooooooooooc.";
				std::cout << "cxxxxxxxxxxxxxxxxxxxxxxxxxxxxxkkkkkkxxxxxddxxxl;:ok0d::dd:,'.......,;;'.......  .'lddddddddddddddddooooooooodoooooddddl.";
				std::cout << "lkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxxxxxxxxxd'..:xOOOd;........   ....''''......;ddddddddddddxdddddddddddddddxxxxxxko.";
				std::cout << "lOkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxxko'...,ll'..''.''.....   ..''.......:xxxkkkkOOOOOOOOOkkkkkkkkkkkkkkkkkxko.";
				std::cout << "lOkkOOkkOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOkkOkxxdooddol;... ..'......... ...'........'dOOOOOO000000000000000000OOOOOOOOkkOd.";
				std::cout << "oOOOOOOOOOOOOOOOOOOOO00000000OOkxddolccc:::;:cccdO00kd:.............;xOkd:,......,lxOO000000000000000000000OOOOOOOOOOOd.";
				std::cout << "o000000000000000000000000Okdlc;,'............',ck00KKKKkc'.........:kxdc;;,'''''',;lk000O0000000OOOOOOOOOOOOOOOOOOOkkOd.";
				std::cout << "dKKKKKKKKKKKKKKKKKKKKKK0d:'......... ........',l00000000Oxl,''''..';;,',''''''''',,;dOOO0000000000000000000000000000O0x'";
				std::cout << "lOkkOkkkkOOOkOOOOkkkkkko'...          ........'l0Okxxxxxxdollc:;,'''''.'''''''''''',cdddxxdxxxxxxdddddxddddddddddddddxl.";
				std::cout << ";oloooooloooooooooooolol'            ..........ckxdoooolllcccc;,''''''''''''''''''';clllooooooooooooooooooooooooooooool.";
				std::cout << ";ololooooooooooooooooodOl.          ...........'odolccc::::;;;,,,',,,,,,,,,'',,,'',:lllloooooooooollooooooooooooooooodl.";
				std::cout << ";lllloolooooooooooooooxkd:..',,,'..''...........'clc:;;;;;,,,,,,,,,,,,,,'''''''''';cooolloooooooooooooolooooooooooooodl.";
				std::cout << ";ollooolooooooooooooodkxc,,cooo:,,,,'.............,;,,'''',,,,,,,'''''''''....'',;cloollooooooooooooooooooooooooooooodc.";
				std::cout << ";oloooolooooooooooooodxl;,:looc:;,'.............   ......''''',,,'..........''',,;looollooolloolllloooooooooooooooooooc.";
				std::cout << ";ooooooooolooooooodddxxl:cllllc;'..........           ........''''''''''''....',,,:loolloollooooooooooooooooooooooooooc.";
				std::cout << ":ooooooloooooodxOkdollcclddllc;.......                     ..............    .,:;,;llolloollllloooooooooooloooooooooooc.";
				std::cout << ":oooooolooooxOkO0kl:;,,,ckkxxxdoc'..                       .;lo,              'cl:::;::cloolllllllooooooooloooooooooooc.";
				std::cout << ";ooooooloodkOxllxxl,...'cxxol0Kl,:odol:;clc,.  .;cc,.,ccl;.oKXk,':cc..;cc,,ccloxOOo:lxxdlcloloolloollloooollooooooolloc.";
				std::cout << ";lllloooodkOdl::ldc'.....,;,,kO..xO;lKo;OK0o...dXkkk:d0:o0clXXo;O0xOd:OO;'x0cdXOkXkx0dl0O:collllllllooolllooooooooooooc.";
				std::cout << ".''''''',lkdc:;;;'. ...  ..';xx..lxloOc.oO0d.  :kkxo'od.,k:;kk;.oOkkc,xc  ox.:0xdKxlkkxOd;:llllllllllllollooooooooolloc.";
				std::cout << ".........'cl:;,,'......   ...'.   ..... .'..    .''. ..  .. ..   .'.. ..  .. .coodl;;clcclloddxdollodddollllllooooolloc.";
				std::cout << "..........';,.    ....     ...                                               .:cccllc:,'''.,coxxooodxxdolooollllllllloc.";
				std::cout << ".............    ....     ......                                           ......''.....   ..:xOOOOkxxxdxxxxocllllllllc.";
				std::cout << ".................................                  'cclc. 'clcc:.         .........   ....'cloodxkkxxxdoddol;.'''',,,,,.";
				std::cout << "...............''''''.........                     oKl;Oxc0d''dK;       ..........    ... .',...cdo,;oc..''............ ";
				std::cout << " .................'''......                  .     oKdoxc'oxlldk,     .             ..         ..,'.....      ......... ";
				std::cout << "...........................                 ...... lk;..   .....      .'..   ..   ..                         .......... ";
				std::cout << "...........................                   .''. ...                  .   ..                                ........  ";
				std::cout << "............................ ...... ......... ............. .......... ........... .......... ........... ......... ....";

				int retraso = 100;

				imprimirLento(mensaje, retraso);

				std::cout << "¿Esta conforme con el servicio? (s/n) \n";
				std::cin >> respuesta;
				if (respuesta == 's' || respuesta == 'S')
				{
					esSi = true;
					respuestaValida = true;
				}
				else
					if (respuesta == 'n' || respuesta == 'N')
					{
						esSi = false;
						respuestaValida = true;
					}

				if (esSi)
				{
					std::cout << "Excelente son 300 pesitos y vuelva pronto";
				}
				else
				{
					std::cout << "No? Esta bien pero no te quiero ver por aquí otra vez. AH! y son 300 Euros";
				}
			}
			else
			{
				std::cout << "Oh oh, No logre hacer funcionar while, pero por suerte no es un requerimiento asi que reinicia el programa :)";
			}
		}
		else
		{
			std::cout << "Esta bien Señor/a, bonito día. Ojala no se muera" << std::endl;
		}
		break;
	case 2:
		std::cout << "Usted es un mal educado como no va a responder mi saludo, FUERA!!!\n";
		break;
	case 3:
		std::cout << "Lo lamento señor/a pero nos quitaron la licencia para vender medicamentos puesto que los vendiamos a drogadictos, una disculpa\n";
		break;
	default:
		std::cout << "https://www.youtube.com/watch?v=HlYab1frPic\n";
		break;
			
	}
	
}