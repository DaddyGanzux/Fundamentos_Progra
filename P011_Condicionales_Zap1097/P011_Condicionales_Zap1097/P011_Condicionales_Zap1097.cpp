

#include <iostream>
#include <time.h>
#include <Locale>
#include <codecvt>
#include <string>
#include <thread>

void imprimirLento(const std::string& texto, int retrasoMilisegundos)
{
	for (char c : texto)
	{
		std::cout << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(retrasoMilisegundos));
	}
}


int main()
{
	setlocale(LC_ALL, "es_MX.UFT-8");
	bool zi = true;

	std::string mensaje = "Bienvenido, estas apunto de vivir la experiencia más cubicamene mágica que viviras en tu vida\n";
	imprimirLento(mensaje, 40);

	std::string mensaj = "Adivinare cualquier mob  de minecraft que quieras de antes del 2021\n";
	imprimirLento(mensaj, 50);

	std::string mensa = "Recuerde que el 1 es equivalente a si y 0 es equivalente a no\n";
	imprimirLento(mensa, 40);

	std::string s00 = "¿Tu mob spawnea naturalmente en el overworld?\n";
	imprimirLento(s00, 30);
	std::cin >> zi;

	if (zi == true)
	{
		std::string s01 = "¿Tu mob es pasivo?\n";
		imprimirLento(s01, 30);


		std::cin >> zi;

		if (zi == true)
		{

			std::string s02 = "¿Tu mob camina sobre 4 patas? \n";
			imprimirLento(s02, 30);


			std::cin >> zi; 

			if (zi == true)
			{
				std::string s03 = "¿Tu mob dropea comida?\n";
				imprimirLento(s03, 30);


				std::cin >> zi;

				if (zi == true)
				{
					std::string s04 = "¿Tu mob puede generar recursos ilimitados?\n";
					imprimirLento(s04, 30);


					std::cin >> zi;

					if (zi == true)
					{
						std::string n27 = "¿Tu mob es raro?\n";
						imprimirLento(n27, 30);


						std::cin >> zi;

						if (zi == true)
						{
							std::string n31 = "¿Tu mob aparece si le cae un rayo a otro?\n";
							imprimirLento(n31, 30);


							std::cin >> zi;

							if (zi == true)
							{
								std::string n33 = "Tu mob es la champiñaca marrón\n";
								imprimirLento(n33, 30);
							}
							else
							{
								std::string n32 = "Tu mob es la champiñaca\n";
								imprimirLento(n32, 70);
							}
						}
						else
						{
							std::string n28 = "¿Tu mob dropea Lana?\n";
							imprimirLento(n28, 30);


							std::cin >> zi;

							if (zi == true)
							{
								std::string n29 = "Tu mob es la oveja\n";
								imprimirLento(n29, 70);
							}
							else
							{
								std::string n30 = "Tu mob es la vaca\n";
								imprimirLento(n30, 70);
							}
						}
					}
					else
					{
						std::string n25 = "¿Tu mob mide menos de un bloque?\n";
						imprimirLento(n25, 30);

						std::cin >> zi;

						if (zi == true)
						{
							std::string n23 = "Tu mob es el conejo\n";
							imprimirLento(n23, 70);
						}

						else
						{
							std::string n24 = "Tu mob es el cerdo\n";
							imprimirLento(n24, 70);
						}
					}
				}
				else
				{
					std::string n15 = "¿Tu mob puede ser montado?\n";
					imprimirLento(n15, 30);


					std::cin >> zi;

					if (zi == true)
					{
						std::string n34 = "¿Tu mob es resultado del apareamiento de dos mobs distintos?\n";
						imprimirLento(n34, 30);


						std::cin >> zi;

						if (zi == true)
						{
							std::string n35 = "Tu mob es la Mula\n";
							imprimirLento(n35, 70);
						}
						else
						{
							std::string n36 = "¿Tu mob puede cargar cofres?\n";
							imprimirLento(n36, 30);


							std::cin >> zi;

							if (zi == true)
							{
								std::string n37 = "Tu mob es el burro\n";
								imprimirLento(n37, 70);
							}
							else
							{
								std::string n38 = "¿Tu mob aparece cuando otro mob es impactado por un rayo?\n";
								imprimirLento(n38, 30);


								std::cin >> zi;

								if (zi == true)
								{
									std::string n39 = "Tu mob es el caballo esqueleto\n";
									imprimirLento(n39, 70);
								}
								else
								{
									std::string n40 = "Tu mob es el caballo\n";
									imprimirLento(n40, 70);
								}

							}

						}

					}
					else
					{
						std::string n16 = "¿Tu mob vive en el agua?\n";
						imprimirLento(n16, 30);


						std::cin >> zi;

						if (zi == true)
						{

						}
						else
						{
							std::string n17 = "¿Tu mob spawnea en aldeas?\n";
							imprimirLento(n17, 30);


							std::cin >> zi;

							if (zi == true)
							{
								std::string n21 = "Tu mob es el Gato\n";
								imprimirLento(n21, 70);
							}
							else
							{
								std::string n18 = "¿Tu mob spawnea en la Jungla?\n";
								imprimirLento(n18, 30);


								std::cin >> zi;

								if (zi == true)
								{
									std::string n20 = "Tu mob es el ocelote\n";
									imprimirLento(n20, 70);
								}
								else
								{
									std::string n19 = "Tu mob es el zorro\n";
									imprimirLento(n19, 70);

								}
							}
						}
					}
				}

			}
			else
			{
				std::string n10 = "¿Tu mob vive en el agua? \n";
				imprimirLento(n10, 30);


				std::cin >> zi;

				if (zi == true)
				{
					std::string n43 = "¿Tu mob tiene aletas?\n";
					imprimirLento(n43, 30);

					std::cin >> zi;

					if (zi == true)
					{
						std::string n44 = "¿Tu mob sobrevive fuera del agua?\n";
						imprimirLento(n44, 30);


						std::cin >> zi;

						if (zi == true)
						{
							std::string n45 = "Tu mob es la Tortuga\n";
							imprimirLento(n45, 70);
						}
						else
						{
							std::string n46 = "¿Tu mob se infla?\n";
							imprimirLento(n46, 30);

							std::cin >> zi;

							if (zi == true)
							{
								std::string n47 = "Tu mob es el pez globo\n";
								imprimirLento(n47, 70);
							}
							else
							{
								std::string n48 = "¿Tu mob tiene muchas skins?\n";
								imprimirLento(n48, 30);

								std::cin >> zi;

								if (zi == true)
								{
									std::string n49 = "Tu mob es el pez tropical\n";
									imprimirLento(n49, 70);
								}
								else
								{
									std::string n50 = "¿Tu mob spawnea exclusivamente en ríos?\n";
									imprimirLento(n50, 30);

									std::cin >> zi;

									if (zi == true)
									{
										std::string n51 = "Tu mob es el Salmon\n";
										imprimirLento(n51, 70);
									}
									else
									{
										std::string n52 = "Tu mob es el Bacalao\n";
										imprimirLento(n52, 70);
									}

								}

							}

						}

					}
					else
					{
						std::string n53 = "¿Tu mob spawnea en la obscuridad?\n";
						imprimirLento(n53, 30);

						std::cin >> zi;

						if (zi == true)
						{
							std::string n55 = "¿Tu mob brilla?\n";
							imprimirLento(n55, 30);

							std::cin >> zi;

							if (zi == true)
							{
								std::string n56 = "Tu mob es el Calamar brillante\n";
								imprimirLento(n56, 70);
							}
							else
							{
								std::string n57 = "Tu mob es el Ajolote god\n";
								imprimirLento(n57, 70);
							}
						}
						else
						{
							std::string n54 = "Tu mob es el Calamar\n";
							imprimirLento(n54, 70);
						}
					}

				}
				else
				{
					std::string n11 = "¿Tu mob tiene alas?\n";
					imprimirLento(n11, 30);


					std::cin >> zi;

					if (zi == true)
					{

					}
					else
					{
						std::string n12 = "¿Tu mob es parecido a un humano?\n";
						imprimirLento(n12, 30);


						std::cin >> zi;

						if (zi == true)
						{

						}
						else
						{
							std::string n13 = "Tu mob es el Golem de Nieve\n";
							imprimirLento(n13, 70);


							std::cin >> zi;

							if (zi == true)
							{

							}
							else
							{

							}
						}
					}

				}

			}
		}
		else
		{

			std::string n05 = "¿Tu mob tiene forma humanoide? \n";
			imprimirLento(n05, 30);

			std::cin >> zi;

			if (zi == true)
			{


			}
			else
			{

				std::string n06 = "¿Existe en la vida real? \n";
				imprimirLento(n06, 30);

				std::cin >> zi;

				if (zi == true)
				{


				}
				else
				{
					std::string n07 = "¿Tu mob mide menos de un bloque? (NOTA: el slime cuenta como menos de un bloque) \n";
					imprimirLento(n07, 30);


					std::cin >> zi;

					if (zi == true)
					{


					}
					else
					{

						std::string n08 = "¿Tu mob vive en el agua? \n";
						imprimirLento(n08, 30);


						std::cin >> zi;

						if (zi == true)
						{


						}
						else
						{

							std::string n09 = "Tu mob es el Vex\n";
							imprimirLento(n09, 70);

						}
					}

				}
			}
		}

	}
	else
	{
			std::string n01 = "Tu mob spawnea de forma natural en el nether?\n";
			imprimirLento(n01, 30);

			std::cin >> zi;

			if (zi == true)
			{

			}
			else
			{
				std::string n02 = "Tu mob mide más de un bloque?\n";
				imprimirLento(n02, 30);

				std::cin >> zi;

				if (zi == true)
				{

				}
				else
				{
					std::string n03 = "Tu mob tiene morado como color principal?\n";
					imprimirLento(n03, 30);

					std::cin >> zi;

					if (zi == true)
					{

					}
					else
					{
						std::string n04 = "Tu mob es el Vex\n";
						imprimirLento(n04, 70);
					}
				}
			}
	}
		return 0;
}

