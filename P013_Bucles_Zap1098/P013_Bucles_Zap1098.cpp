#include <iostream>
#include <string>
#include <cctype> 
#include <codecvt>
#include <Locale>

bool esSoloLetras(const std::string& str)  // Función para verificar si un string solo contiene letras
{
    for (char c : str)
    {
        if (!isalpha(c))  // Verifica que el caracter sea una letra 
        {
            return false;  // Si encuentra un carácter que no es letra, retorna falso
        }
    }
    return true;  // Si todos los caracteres son letras, retorna verdadero
}

bool esSoloNumeros(const std::string& str)  // Función para verificar si un string solo contiene números
{
    for (char c : str)
    {
        if (!isdigit(c))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    setlocale(LC_ALL, "es_MX.UFT - 8");
    std::string cont = "";
    std::string cont_us;
    std::string user = "";
    std::string user_us;
    char respuesta;
    bool respuestaValida = false;
    bool esSi = false;
    bool accesoConcedido = false;
    bool cuentaCreada = false;

    do
    {
        std::cout << "¿Ya cuenta con una cuenta? (s/n): ";
        std::cin >> respuesta;

        if (respuesta == 's' || respuesta == 'S')
        {
            esSi = true;
            respuestaValida = true;
        }
        else if (respuesta == 'n' || respuesta == 'N')
        {
            esSi = false;
            respuestaValida = true;
        }
        else
        {
            std::cout << "Por favor, introduce 's' para sí o 'n' para no." << std::endl;
        }
    } while (!respuestaValida);

    std::cin.ignore();

    if (esSi)
    {

        std::cout << "No hay cuenta existente";

    }
    else
    {
        bool usuarioValido = false;
        // Registrar nuevo usuario y contraseña

        bool contrasenaValida = false;


        while (!usuarioValido)
        {
            std::cout << "Ingrese un nuevo Usuario (solo letras): ";
            std::getline(std::cin, user);

            if (esSoloLetras(user))
            {
                usuarioValido = true;
            }
            else
            {
                std::cout << "El usuario solo debe contener letras. Inténtelo de nuevo.\n";
            }
        }


        while (!contrasenaValida)
        {
            std::cout << "Ingrese una nueva contraseña (solo números): ";
            std::getline(std::cin, cont);

            if (esSoloNumeros(cont))
            {
                contrasenaValida = true;
            }
            else
            {
                std::cout << "La contraseña solo debe contener números. Inténtelo de nuevo.\n";
            }
        }

        std::cout << "Cuenta creada exitosamente.\n";
        cuentaCreada = true;

        while (!accesoConcedido)
        {
            std::cout << "Ingrese su Usuario: \n";
            std::getline(std::cin, user_us);

            if (user == user_us)
            {
                std::cout << "Ingrese su contraseña: \n";
                std::getline(std::cin, cont_us);

                if (cont == cont_us)
                {
                    std::cout << "Acceso concedido, adelante " << user << ".\n";
                    accesoConcedido = true;
                }
                else
                {
                    std::cout << "Contraseña incorrecta. Favor de intentar de nuevo.\n";
                }
            }
            else
            {
                std::cout << "Usuario inválido. Favor de intentar de nuevo.\n";
            }
        }


    }

    std::cout << "Acceso concedido, adelante " << user << ".\n";

    return 0;
}
