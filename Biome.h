#include "date.h"

class Biome
{
protected:
	double humidity;
	double temp;
	string soil;
	double pressure;
	double avgPh;
	double avgRain;

public:
	Biome()
	{
		humidity = 0;
		temp = 0;
		soil = "";
		pressure = 0;
	}

	virtual void show() = 0;

	double getTemp() const
	{
		return temp;
	}

	double getHumidity() const
	{
		return humidity;
	}

	string getSoil() const
	{
		return soil;
	}

	double getPressure() const
	{
		return pressure;
	}

	double getAvgph() const
	{
		return avgPh;
	}
};

class Aquatic : public Biome
{
protected:
	double Dissolved_Oxygen;

public:
	Aquatic()
	{
		temp = 4;
		humidity = 0;
		avgPh = 8.0;   // 6 - 9
		avgRain = 100; // inches of rain per year
		pressure = 1;  // atm at sea leavel, On the deep sea floor pressure may reach more than 500 atmospheres
		soil = "Sandy, silty and clay ";
		Dissolved_Oxygen = 9.0; // ppm
	}

	void show()
	{
		cout << "The aquatic biome is a vast and diverse ecosystem that is home to a wide variety of plants and animals.\n"
				"It includes oceans, lakes, rivers, and streams, and is characterized by the presence of water.\n"
				"The aquatic biome is essential for the health of the planet, providing oxygen, food, and habitat for many species.\n";
		cout << "Average Temperature: " << temp << " Degrees C" << '\n';
		cout << "Average pH: " << avgPh << '\n';
		cout << "Average precipitation: " << avgRain << " inches per year" << '\n';
		cout << "Soil Type: " << soil << '\n';
		cout << "\n";
	}
};

class ConiferousForest : public Biome
{
protected:
public:
	ConiferousForest()
	{
		temp = 10;
		humidity = 70;
		avgRain = 700; // mm each year
		avgPh = 4.5;
		pressure = .7;
		soil = "low in key minerals and acidic, producing a type of soil called podzol ";
	}
	void show()
	{
		cout << "Coniferous forests are characterized by the presence of conifer trees, which\n"
				"are trees that have needles instead of leaves and produce seeds in cones.\n"
				"These forests are found in colder regions of the world and are known for\n"
				"their tall, evergreen trees that provide shelter and habitat for a variety of animals.\n";
		cout << "Average Temperature: " << temp << " Degrees C" << '\n';
		cout << "Average Humidity: " << humidity << " %\n";
		cout << "Average pH: " << avgPh << '\n';
		cout << "Average precipitation: " << avgRain << " mm per year" << '\n';
		cout << "Soil Type: " << soil << '\n';
		cout << "\n";
	}
};

class DeciduousForest : public Biome
{
protected:
	int no_of_season;

public:
	DeciduousForest()
	{
		no_of_season = 4;
		temp = 10;
		humidity = 70;
		avgRain = 1050;
		avgPh = 3.3;
		pressure = .9;
		soil = "gray-brown and brown podzols ";
	}

	void show()
	{
		cout << "Deciduous forests are found in regions with a temperate climate, characterized by four\n"
				"distinct seasons. These forests are home to trees that shed their leaves annually, such\n"
				"as oak, maple, and beech. The deciduous forest ecosystem is home to a diverse range of\n"
				"plants and animals, including deer, birds, and small mammals. The trees in these forests\n"
				"provide valuable resources such as timber and medicine, and the ecosystem plays a vital role\n"
				"in sequestering carbon dioxide from the atmosphere.\n";
		cout << "Average Temperature: " << temp << " Degrees C" << '\n';
		cout << "No of Season: " << no_of_season << '\n';
		cout << "Average Humidity: " << humidity << " %\n";
		cout << "Average pH: " << avgPh << '\n';
		cout << "Average precipitation: " << avgRain << " mm per year" << '\n';
		cout << "Soil Type: " << soil << '\n';
		cout << "\n";
	}
};

class Desert : public Biome
{
protected:
	int no_of_seaason;

public:
	Desert()
	{
		no_of_seaason = 2;
		temp = 54;
		humidity = 0.05;
		avgPh = 7;	  // 4.17-4.94
		avgRain = 40; // mm of rain per year
		pressure = 1;
		soil = "sandy ";
	}

	void show()
	{
		cout << "Deserts are dry, arid regions that receive very little precipitation each year.\n"
				"These ecosystems are characterized by sparse vegetation and a lack of surface water.\n"
				"Despite their harsh conditions, deserts are home to a variety of unique and adapted\n"
				"plants and animals that have evolved to survive in the extreme heat and lack of water.\n"
				"The desert ecosystem plays a vital role in the global climate and water cycle, and is\n"
				"also a source of valuable resources such as minerals and fossil fuels.\n";
		cout << "Average Temperature: " << temp << " Degrees C" << '\n';
		cout << "No of Season: " << no_of_seaason << '\n';
		cout << "Average Humidity: " << humidity << " % (Almost zero)\n";
		cout << "Average pH: " << avgPh << '\n';
		cout << "Average precipitation: " << avgRain << " mm per year" << '\n';
		cout << "Soil Type: " << soil << '\n';
		cout << "\n";
	}
};

class Grassland : public Biome
{
protected:
public:
	Grassland()
	{
		temp = 10;
		avgRain = 700;
		avgPh = 5.5;
		humidity = 55;
		pressure = 1;
		soil = "deep and dark, with fertile upper layers ";
	}

	void show()
	{
		cout << "Grasslands are vast ecosystems characterized by grasses, herbs, and other\n"
				"low-lying vegetation. These ecosystems are found in regions with a temperate\n"
				"climate, and often receive moderate to high levels of precipitation. Grasslands\n"
				"are home to a wide variety of plants and animals, including bison, prairie dogs\n"
				"and birds. The grassland ecosystem plays a vital role in the global carbon cycle, \\n"
				"as the grasses in these ecosystems absorb and sequester large amounts of carbon\n"
				"dioxide from the atmosphere.\n";
		cout << "Average Temperature: " << temp << " Degrees C" << '\n';
		// cout	<< 	"No of Season: " << no_of_seaason << '\n';
		cout << "Average Humidity: " << humidity << " % (Almost zero)\n";
		cout << "Average pH: " << avgPh << '\n';
		cout << "Average precipitation: " << avgRain << " mm per year" << '\n';
		cout << "Soil Type: " << soil << '\n';
		cout << "\n";
	}
};

class Rainforest : public Biome
{
protected:
	int No_of_season;

public:
	Rainforest()
	{
		No_of_season = 2;
		temp = 22;
		humidity = 83;
		avgPh = 4.5;	// 4.17-4.94
		avgRain = 8000; // mm of rain per year
		pressure = .84;
		soil = "Nutrient-poor ";
	}

	void show()
	{
		cout << "Rainforests are dense, tropical ecosystems characterized by high levels of\n"
				"rainfall and a wide variety of plants and animals. These ecosystems are found\n"
				"in regions near the equator, and are known for their tall, lush trees that\n"
				"provide habitat for a diverse range of species. Rainforests play a critical\n"
				"role in the global climate and water cycle, as they act as a sponge to absorb\n"
				"and store large amounts of water.\n";
		cout << "Average Temperature: " << temp << " Degrees C" << '\n';
		cout << "No of Season: " << No_of_season << '\n';
		cout << "Average Humidity: " << humidity << " % (Almost zero)\n";
		cout << "Average pH: " << avgPh << '\n';
		cout << "Average precipitation: " << avgRain << " mm per year" << '\n';
		cout << "Soil Type: " << soil << '\n';
		cout << "\n";
	}
};

class Savannah : public Biome
{
protected:
public:
	Savannah()
	{
		temp = 15;
		humidity = 70;
		avgPh = 6;
		avgRain = 850;
		pressure = .86;
		soil = "porous, with rapid drainage of water ";
	}

	void show()
	{
		cout << "Savannas are grassland ecosystems found in tropical regions, characterized\n"
				"by a mix of grasses and scattered trees. These ecosystems receive moderate\n"
				"levels of rainfall and have a long dry season.\n";
		cout << "Average Temperature: " << temp << " Degrees C" << '\n';
		cout << "Average Humidity: " << humidity << " % (Almost zero)\n";
		cout << "Average pH: " << avgPh << '\n';
		cout << "Average precipitation: " << avgRain << " mm per year" << '\n';
		cout << "Soil Type: " << soil << '\n';
		cout << "\n";
	}
};

class Tundra : public Biome
{
protected:
	double speed_of_wind;

public:
	Tundra()
	{
		speed_of_wind = 12; // km/hr
		temp = 18;
		humidity = 23;
		avgPh = 3.5;   // 4.17-4.94
		avgRain = 200; // mm of rain per year
		pressure = .8;
		soil = "rich in nitrogen and phosphorus ";
	}

	void show()
	{
		cout << "The tundra is a cold, treeless ecosystem found in regions near the poles.\n"
				"These ecosystems are characterized by long, cold winters and short, cool\n"
				"summers, with very little precipitation. The tundra is home to a variety\n"
				"of adapted plants and animals, including caribou, polar bears, and arctic foxes.\n";
		cout << "Average Temperature: " << temp << " Degrees C" << '\n';
		cout << "Average Humidity: " << humidity << " % (Almost zero)\n";
		cout << "Average pH: " << avgPh << '\n';
		cout << "Average precipitation: " << avgRain << " mm per year" << '\n';
		cout << "Soil Type: " << soil << '\n';
		cout << "\n";
	}
};