#include "Biome.h"

#define NameCount 61
#define characteristicsCount 29
#define ANIMAL_SAVE "animal.txt"

enum class_name
{
    Animal,
    Cnidaria,
    JellyFish,
    Coral,
    Echinodermata,
    SeaUrchin,
    StarFish,
    Chordata,
    Pisces,
    Tuna,
    Shark,
    Hammerhead,
    Australian_Lung,
    Sea_Horse,
    Puffer_Fish,
    Amphibians,
    Frogs,
    Leopard_Frog,
    Wood_Frog,
    Toads,
    American_Toad,
    Southern_Spadefoot,
    Axoloty,
    Newt,
    Salamanders,
    Spotted_Salamander,
    Tiger_Salamander,
    Reptiles,
    Crocodile,
    Alligator,
    Chameleon,
    Bis_Cobra,
    Cobra,
    Python,
    RattleSnake,
    Anaconda,
    Tortoise,
    Aves,
    Kiwi,
    Swan,
    Peacock,
    Crane,
    Pigeon,
    Raven,
    Eagle,
    Flamingo,
    Ostritch,
    Penguin,
    Mammals,
    Hippo,
    Rhino,
    Elephant,
    Leopard,
    Tiger,
    Giraffe,
    Zebra,
    Gorilla,
    Deer,
    Dolphin,
    Rabbit,
    Camel
};

enum Characters
{
    hasNematocyst,
    totipotency,
    symmetry_Radial,
    symmetry_pentaRadial,
    waterType_salty,
    waterType_sweet,
    hasTeeth,
    hasClaws,
    scaleType_Placoid,
    scaleType_Cosmoid,
    scaleType_Ganoid,
    scaleType_Cycloid,
    scaleType_Scutes,
    scaleType_Keratinized,
    isPoisonous,
    isSchool,
    isToxic,
    skinColor_DarkGreen,
    skinColor_Black,
    skinColor_Brown,
    isColdBlooded,
    hasLimbs,
    hasShells,
    hasFlight,
    isMigratory,
    consumerType_Omnivore,
    consumerType_Carnivore,
    consumerType_Herbivore,
    hasFangs,
    hasFur
};

string e2s_className(class_name inp) /////////////////////////////
{
    switch (inp)
    {
    case Animal:
        return "Animal";
    case Cnidaria:
        return "Cnidaria";
    case JellyFish:
        return "JellyFish";
    case Coral:
        return "Coral";
    case Echinodermata:
        return "Echinodermata";
    case SeaUrchin:
        return "SeaUrchin";
    case StarFish:
        return "StarFish";
    case Chordata:
        return "Chordata";
    case Pisces:
        return "Pisces";
    case Tuna:
        return "Tuna";
    case Shark:
        return "Shark";
    case Hammerhead:
        return "Hammerhead";
    case Australian_Lung:
        return "Australian Lung";
    case Sea_Horse:
        return "Sea Horse";
    case Puffer_Fish:
        return "Puffer Fish";
    case Amphibians:
        return "Amphibians";
    case Frogs:
        return "Frogs";
    case Leopard_Frog:
        return "Leopard Frog";
    case Wood_Frog:
        return "Wood Frog";
    case Toads:
        return "Toads";
    case American_Toad:
        return "American Toad";
    case Southern_Spadefoot:
        return "Southern-Spadefoot";
    case Axoloty:
        return "Axoloty";
    case Newt:
        return "Newt";
    case Salamanders:
        return "Salamanders";
    case Spotted_Salamander:
        return "Spotted Salamander";
    case Tiger_Salamander:
        return "Tiger Salamander";
    case Reptiles:
        return "Reptiles";
    case Crocodile:
        return "Crocodile";
    case Alligator:
        return "Alligator";
    case Chameleon:
        return "Chameleon";
    case Bis_Cobra:
        return "Bis-Cobra";
    case Cobra:
        return "Cobra";
    case Python:
        return "Python";
    case RattleSnake:
        return "RattleSnake";
    case Anaconda:
        return "Anaconda";
    case Tortoise:
        return "Tortoise";
    case Aves:
        return "Aves";
    case Kiwi:
        return "Kiwi";
    case Swan:
        return "Swan";
    case Peacock:
        return "Peacock";
    case Crane:
        return "Crane";
    case Pigeon:
        return "Pigeon";
    case Raven:
        return "Raven";
    case Eagle:
        return "Eagle";
    case Flamingo:
        return "Flamingo";
    case Ostritch:
        return "Ostritch";
    case Penguin:
        return "Penguin";
    case Mammals:
        return "Mammals";
    case Hippo:
        return "Hippo";
    case Rhino:
        return "Rhino";
    case Elephant:
        return "Elephant";
    case Leopard:
        return "Leopard";
    case Tiger:
        return "Tiger";
    case Giraffe:
        return "Giraffe";
    case Zebra:
        return "Zebra";
    case Gorilla:
        return "Gorilla";
    case Deer:
        return "Deer";
    case Dolphin:
        return "Dolphin";
    case Rabbit:
        return "Rabbit";
    case Camel:
        return "Camel";
    default:
        return "Unknown";
    }
    return "Unknown";
}



class Animal
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;
    Biome* b;
    string biomeName;
    string desc;
    pair<int, int> coord;
    string scientificName;
    string animalName;
    double weight;
    double length;
    int age;
    class_name animalType;

public:
    Animal()
    {
        name[class_name::Animal] = true;
    }

    virtual void printAnimal()
    {
        cout << "Name: " << animalName << endl;
        cout << "Animal Type: " << e2s_className(animalType) << endl;
        cout << "Biome: " << biomeName << endl;
        cout << "Age: " << age << endl;
        cout << "Length: " << length << " metres" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }

    void setFoo(string _biomeName, string _animalName, double _weight, double _length, int _age)
    {
        biomeName = _biomeName;
        animalName = _animalName;
        weight = _weight;
        length = _length;
        age = _age;
    }


    virtual bitset <NameCount> getName() /////////////////////////
    {
        return name;
    }

    virtual bitset <characteristicsCount> getCharacter()/////////////////////////////
    {
        return characteristics;
    }


    void save(ofstream &out)
    {
        out << animalType << endl;
        out << animalName << " " << weight << " " << biomeName << " " << age << " " << length << endl;
    }

    void load(ifstream &in)
    {
        in >> animalName >> weight >> biomeName >> age >> length;
    }
};
class Cnidaria : public Animal
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;
    bool nematocyst;
    bool totipotency;
    string symmetry;

public:
    Cnidaria()
    {
        name[class_name::Cnidaria] = true;
    }

    void printAnimal()
    {
        Animal::printAnimal();
        cout << "Nematocyst: ";
        cout << ((nematocyst) ? "Yes" : "No") << endl;
        cout << "Totipotency: ";
        cout << ((totipotency) ? "Yes" : "No") << endl;
        cout << "Symmetry: Radial" << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class JellyFish : public Cnidaria
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    JellyFish()
    {
        animalType = class_name::JellyFish;
        name[class_name::JellyFish] = true;
        characteristics[Characters::hasNematocyst] = true;
        characteristics[Characters::symmetry_Radial] = true;
        characteristics[Characters::totipotency] = true;
        nematocyst = true;
        symmetry = "Radial";
        scientificName = "Aurelia aurita";
        totipotency = true;
        desc = "Jellyfish are aquatic animals with a bell-shaped body and long tentacles.\n"
               "They are found in oceans around the world and use their tentacles to capture and eat small prey.\n"
               "Jellyfish do not have a brain or central nervous system, but they are able to sense their environment and respond to stimuli\n";
    }

    void printAnimal()
    {
        Cnidaria::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Coral : public Cnidaria
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Coral()
    {
        animalType = class_name::Coral;
        name[class_name::Coral] = true;
        characteristics[Characters::symmetry_Radial] = true;
        characteristics[Characters::hasNematocyst] = true;
        characteristics[Characters::totipotency] = true;
        nematocyst = true;
        scientificName = "Anthozoans";
        symmetry = "Radial";
        totipotency = true;
        desc = "Coral is a type of marine invertebrate that forms a hard, porous skeleton made of calcium carbonate.\n"
               "It is found in shallow, tropical waters and is an important part of the ocean ecosystem. \n"
               "Coral reefs provide a home and habitat for a diverse array of marine life, including fish, mollusks, and other invertebrates.\n"
               "Coral reefs also help to protect coastlines from erosion and storms, and they are a popular destination for snorkeling and diving.\n";
    }

    void printAnimal()
    {
        Cnidaria::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Echinodermata : public Animal
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;
    string waterType;
    string symmetry;
    bool hasTeeth;

public:
    Echinodermata()
    {
        name[class_name::Echinodermata] = true;
    }
    void printAnimal()
    {
        Animal::printAnimal();
        cout << "Water Type: Salty" << endl;
        cout << "Symmetry: Penta-Radial" << endl;
        cout << "Teeth: ";
        cout << ((hasTeeth) ? "Yes" : "No") << endl;
    }
};
class SeaUrchin : public Echinodermata
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    SeaUrchin()
    {
        animalType = class_name::SeaUrchin;
        name[class_name::SeaUrchin] = true;
        characteristics[Characters::waterType_salty] = true;
        characteristics[Characters::symmetry_pentaRadial] = true;
        characteristics[Characters::hasTeeth] = true;
        waterType = "Salty";
        symmetry = "Penta-Radial";
        scientificName = "Echinoidea";
        hasTeeth = true;
        desc = "Sea urchins are small, spiny marine invertebrates that are found in oceans around the world. \n"
               "They have a round, hard shell covered in sharp spines, and they have a small mouth at the center of their underside.\n"
               "Sea urchins move slowly using their spines and tube feet, and they feed on algae and other small organisms.\n"
               "They are often found in shallow, rocky areas, and they play a important role in the ocean ecosystem as both predators and prey.\n";
    }

    void printAnimal()
    {
        Echinodermata::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }
    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class StarFish : public Echinodermata
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    StarFish()
    {
        animalType = class_name::StarFish;
        name[class_name::StarFish] = true;
        characteristics[Characters::waterType_salty] = true;
        characteristics[Characters::symmetry_pentaRadial] = true;
        waterType = "Salty";
        symmetry = "Penta-Radial";
        scientificName = "Asteroidea";
        hasTeeth = false;
        desc = "Starfish, also known as sea stars, are marine invertebrates that are found in oceans around the world.\n"
               "They have a unique, star-shaped body with five arms that are lined with small, tube-like feet. \n"
               "Starfish use their feet to move and to grip onto surfaces, and they have a mouth located on the underside of their body.\n"
               "They feed on small invertebrates, including mussels and clams, which they extract from their shells using powerful suction. Starfish play an important role in the ocean ecosystem as both predators and prey.\n";
    }

    void printAnimal()
    {
        Echinodermata::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Chordata : public Animal
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;
    bool hasClaws;

public:
    Chordata()
    {
        name[class_name::Chordata] = true;
    }

    void printAnimal()
    {
        Animal::printAnimal();
        cout << "Claws: ";
        cout << ((hasClaws) ? "Yes" : "No") << endl;
    }
};
class Pisces : public Chordata
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;
    string waterType;
    string scaleType;
    bool isPoisonous;
    bool isSchool;

public:
    Pisces()
    {
        name[class_name::Pisces] = true;
    }

    void printAnimal()
    {
        Chordata::printAnimal();
        cout << "Water Type: " << waterType << endl;
        cout << "Scale Type: " << scaleType << endl;
        cout << "Poisonous: ";
        cout << ((isPoisonous) ? "Yes" : "No") << endl;
        cout << "Forms School: ";
        cout << ((isSchool) ? "Yes" : "No") << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Tuna : public Pisces
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Tuna()
    {
        animalType = class_name::Tuna;
        name[class_name::Tuna] = true;
        characteristics[Characters::waterType_salty] = true;
        characteristics[Characters::isSchool] = true;
        characteristics[Characters::scaleType_Scutes] = true;
        scientificName = "Thunnini";
        waterType = "Salty";
        scaleType = "Scutes";
        isPoisonous = false;
        isSchool = true;
        hasClaws = false;
        desc = "Tuna are large, predatory fish that are found in oceans around the world.\n"
               "They have a streamlined body, powerful muscles, and a forked tail that helps them swim at high speeds.\n"
               "Tuna are known for their ability to migrate long distances and can be found in both warm and cold waters.\n";
    }

    void printAnimal()
    {
        Pisces::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Shark : public Pisces
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Shark()
    {
        animalType = class_name::Shark;
        name[class_name::Shark] = true;
        characteristics[Characters::scaleType_Placoid] = true;
        characteristics[Characters::waterType_salty] = true;
        waterType = "Salty";
        scaleType = "Placoid";
        scientificName = "Selachimorpha";
        isPoisonous = false;
        isSchool = false;
        hasClaws = false;
        desc = "Sharks are large, predatory fish that are found in oceans around the world.\n"
               "They have a streamlined body, sharp teeth, and powerful jaws that allow them to hunt and eat a variety of prey.\n";
    }

    void printAnimal()
    {
        Pisces::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Hammerhead : public Pisces
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Hammerhead()
    {
        animalType = class_name::Hammerhead;
        name[class_name::Hammerhead] = true;
        characteristics[Characters::scaleType_Placoid] = true;
        characteristics[Characters::waterType_salty] = true;
        waterType = "Salty";
        scaleType = "Placoid";
        scientificName = "Sphyrnidae";
        isPoisonous = false;
        isSchool = false;
        hasClaws = false;
        desc = "Hammerhead sharks are a group of sharks that are characterized by their distinctive, hammer-shaped head.\n"
               "They are found in tropical and warm temperate waters around the world, and are known for their ability to\n"
               "swim long distances and migrate across vast ocean areas.\n";
    }

    void printAnimal()
    {
        Pisces::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};

class Australian_Lung : public Pisces
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Australian_Lung()
    {
        animalType = class_name::Australian_Lung;
        name[class_name::Australian_Lung] = true;
        characteristics[Characters::scaleType_Cosmoid] = true;
        characteristics[Characters::waterType_salty] = true;
        waterType = "Salty";
        scaleType = "Cosmoid";
        scientificName = "Neoceratodus forsteri";
        isPoisonous = false;
        isSchool = false;
        hasClaws = false;
        desc = "Australian lungfish are a group of ancient, freshwater fish that are native to Australia and New Guinea.\n"
               "They are one of the few surviving species of a group of fish known as lobe-finned fish, which\n"
               "were the ancestors of all land-dwelling vertebrates, including humans.\n";
    }

    void printAnimal()
    {
        Pisces::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Sea_Horse : public Pisces
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Sea_Horse()
    {
        animalType = class_name::Sea_Horse;
        name[class_name::Sea_Horse] = true;
        characteristics[Characters::isPoisonous] = true;
        characteristics[Characters::waterType_salty] = true;
        waterType = "Salty";
        scaleType = "None";
        scientificName = "Hippocampus kuda";
        isPoisonous = true;
        isSchool = false;
        hasClaws = false;
        desc = "Sea horses are small, fish-like creatures that are found in shallow, tropical waters around the world.\n"
               "They are known for their distinctive, horse-like head and their elongated, curved body, which is covered in bony plates.\n";
    }

    void printAnimal()
    {
        Pisces::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Puffer_Fish : public Pisces
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Puffer_Fish()
    {
        animalType = class_name::Puffer_Fish;
        name[class_name::Puffer_Fish] = true;
        characteristics[Characters::isPoisonous] = true;
        characteristics[Characters::waterType_salty] = true;
        characteristics[Characters::isSchool] = true;
        waterType = "Salty";
        scaleType = "None";
        isPoisonous = true;
        scientificName = "Tetraodontidae";
        isSchool = true;
        hasClaws = false;
        desc = "Pufferfish, also known as blowfish or puffers, are small, spiny fish that are found in warm waters around the world.\n"
               "They are known for their ability to inflate their body by swallowing air or water when threatened,\n"
               "which makes them more difficult for predators to swallow.\n";
    }

    void printAnimal()
    {
        Pisces::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Amphibians : public Chordata
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;
    bool isToxic;
    string skinColor;
    bool isColdBlooded;

public:
    Amphibians()
    {
        name[class_name::Amphibians] = true;
    }

    void printAnimal()
    {
        Chordata::printAnimal();
        cout << "Cold Blooded: Yes" << endl;
        cout << "Skin Color: " << skinColor << endl;
        cout << "Cold Blooded: ";
        cout << ((isColdBlooded) ? "Yes" : "No") << endl;
    }
};
class Frogs : public Amphibians
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Frogs()
    {
        name[class_name::Frogs] = true;
        desc = "Frogs are amphibians that are found in a variety of habitats around the world.\n"
               "They have long legs, a slim body, and moist, smooth skin.\n"
               "Frogs are known for their ability to hop and swim, and they use their sticky tongues to catch insects and other small prey.\n";
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Leopard_Frog : public Frogs
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Leopard_Frog()
    {
        animalType = class_name::Leopard_Frog;
        name[class_name::Leopard_Frog] = true;
        characteristics[Characters::isColdBlooded] = true;
        characteristics[Characters::isToxic] = true;
        isToxic = true;
        skinColor = "Dark Green";
        scientificName = "Lithobates pipiens";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Leopard frogs are a type of frog that is found in a variety of habitats in North America,\n"
               "including wetlands, forests, and grasslands. They are named for the distinctive, leopard-like \n"
               "spots on their skin and have a slim, agile body that is well-suited for jumping and swimming.\n";
    }

    void printAnimal()
    {
        Amphibians::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Wood_Frog : public Frogs
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Wood_Frog()
    {
        animalType = class_name::Wood_Frog;
        name[class_name::Wood_Frog] = true;
        characteristics[Characters::isToxic] = true;
        characteristics[Characters::isColdBlooded] = true;
        isToxic = true;
        skinColor = "Black";
        scientificName = "Lithobates sylvaticus";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Wood frogs are small, frog-like amphibians that are found in a variety of habitats\n"
               "in North America, including forests, wetlands, and grasslands.\n";
    }

    void printAnimal()
    {
        Amphibians::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Toads : public Amphibians
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Toads()
    {
        name[class_name::Toads] = true;
        desc = "Toads are a type of amphibian that is found in a variety of habitats around the world.\n"
               "They have a squat, warty body and short, powerful legs that are well-suited for hopping and climbing.\n";
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class American_Toad : public Toads
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    American_Toad()
    {
        animalType = class_name::American_Toad;
        name[class_name::American_Toad] = true;
        characteristics[Characters::isToxic] = true;
        characteristics[Characters::isColdBlooded] = true;
        isToxic = true;
        skinColor = "Dark Green";
        scientificName = "Anaxyrus americanus";
        isColdBlooded = true;
        hasClaws = false;
        desc = "The American toad is a type of toad that is native to the eastern United States and parts of Canada.\n"
               "It has a squat, warty body and short, powerful legs that are well-suited for hopping and climbing.\n";
    }

    void printAnimal()
    {
        Amphibians::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Southern_Spadefoot : public Toads
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Southern_Spadefoot()
    {
        animalType = class_name::Southern_Spadefoot;
        name[class_name::Southern_Spadefoot] = true;
        characteristics[Characters::isToxic] = true;
        characteristics[Characters::isColdBlooded] = true;
        isToxic = true;
        scientificName = "Scaphiopus";
        skinColor = "Black";
        isColdBlooded = true;
        hasClaws = false;
        desc = "The Southern spadefoot is a type of toad that is native to the southeastern United States.\n"
               "It has a squat, warty body and short, powerful legs that are well-suited for hopping and climbing.\n";
    }

    void printAnimal()
    {
        Amphibians::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Axoloty : public Amphibians
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Axoloty()
    {
        animalType = class_name::Axoloty;
        name[class_name::Axoloty] = true;
        characteristics[Characters::isColdBlooded] = true;
        isToxic = false;
        skinColor = "White";
        isColdBlooded = true;
        scientificName = "Ambystoma mexicanum";
        hasClaws = false;
        desc = "Axolotls are a type of salamander that is native to the lake system of Xochimilco in central Mexico.\n"
               "They are known for their distinctive, axolotl-like appearance and their ability to regenerate lost body parts,\n"
               "including limbs and spinal cord.\n";
    }

    void printAnimal()
    {
        Amphibians::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Newt : public Amphibians
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Newt()
    {
        animalType = class_name::Newt;
        name[class_name::Newt] = true;
        characteristics[Characters::isColdBlooded] = true;
        isToxic = false;
        skinColor = "White";
        isColdBlooded = true;
        scientificName = "Pleurodelinae";
        hasClaws = false;
        desc = "Newts are a type of salamander that is found in a variety of habitats around the world.\n"
               "They have a slim, agile body\n";
    }

    void printAnimal()
    {
        Amphibians::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Salamanders : public Amphibians
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Salamanders()
    {
        name[class_name::Salamanders] = true;
        desc = "Salamanders are a group of amphibians that are found in a variety of habitats around the world.\n";
    }
};
class Spotted_Salamander : public Salamanders
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Spotted_Salamander()
    {
        animalType = class_name::Spotted_Salamander;
        name[class_name::Spotted_Salamander] = true;
        characteristics[Characters::isColdBlooded] = true;
        characteristics[Characters::isToxic] = true;
        isToxic = true;
        skinColor = "Black";
        scientificName = "Ambystoma maculatum";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Spotted salamanders are a type of salamander that is native to the eastern United States and parts of Canada.\n"
               "They are named for the distinctive, yellow or orange spots that are found on their dark, smooth skin.\n";
    }

    void printAnimal()
    {
        Amphibians::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Tiger_Salamander : public Salamanders
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Tiger_Salamander()
    {
        animalType = class_name::Tiger_Salamander;
        name[class_name::Tiger_Salamander] = true;
        characteristics[Characters::isColdBlooded] = true;
        characteristics[Characters::isToxic] = true;
        isToxic = true;
        skinColor = "Brown";
        scientificName = "Ambystoma tigrinum";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Tiger salamanders are a type of salamander that is native to the United States and parts of Canada.\n"
               "They are named for the distinctive, tiger-like stripes or spots on their skin.\n";
    }

    void printAnimal()
    {
        Amphibians::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Reptiles : public Chordata
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;
    string scaleType;
    bool hasLimbs;
    bool hasShell;
    bool isColdBlooded;

public:
    Reptiles()
    {
        name[class_name::Reptiles] = true;
    }

    void printAnimal()
    {
        Chordata::printAnimal();
        cout << "Scale Type: " << scaleType << endl;
        cout << "Limbs: ";
        cout << ((hasLimbs) ? "Yes" : "No") << endl;
        cout << "Shell:";
        cout << ((hasShell) ? "Yes" : "No") << endl;
        cout << "Cold blooded: ";
        cout << ((isColdBlooded) ? "Yes" : "No") << endl;
    }
};
class Crocodile : public Reptiles
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Crocodile()
    {
        animalType = class_name::Crocodile;
        name[class_name::Crocodile] = true;
        characteristics[Characters::scaleType_Scutes] = true;
        characteristics[Characters::hasLimbs] = true;
        characteristics[Characters::isColdBlooded] = true;
        scaleType = "Scutes";
        hasLimbs = true;
        scientificName = "Crocodylidae";
        hasShell = false;
        isColdBlooded = true;
        hasClaws = false;
        desc = "Crocodiles are large, semiaquatic reptiles that are found in tropical and subtropical regions around the world.\n"
               "They have a long, slender body, a powerful tail, and a wide, triangular head that is equipped with sharp teeth and powerful jaws.\n";
    }

    void printAnimal()
    {
        Reptiles::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Alligator : public Reptiles
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Alligator()
    {
        animalType = class_name::Alligator;
        name[class_name::Alligator] = true;
        characteristics[Characters::scaleType_Scutes] = true;
        characteristics[Characters::hasLimbs] = true;
        characteristics[Characters::isColdBlooded] = true;
        scaleType = "Scutes";
        hasLimbs = true;
        hasShell = false;
        scientificName = "Alligator";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Alligators are large, semiaquatic reptiles found in the southeastern United States.\n"
               "They have a long, broad body, powerful tail, and sharp teeth.\n";
    }

    void printAnimal()
    {
        Reptiles::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Chameleon : public Reptiles
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Chameleon()
    {
        animalType = class_name::Chameleon;
        name[class_name::Chameleon] = true;
        characteristics[Characters::scaleType_Scutes] = true;
        characteristics[Characters::hasLimbs] = true;
        characteristics[Characters::isColdBlooded] = true;
        scaleType = "Scutes";
        hasLimbs = true;
        hasShell = false;
        scientificName = "Chamaeleonidae";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Chameleons are a group of lizards that are known for their ability to change the color of their skin.\n";
    }

    void printAnimal()
    {
        Reptiles::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Bis_Cobra : public Reptiles
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Bis_Cobra()
    {
        animalType = class_name::Bis_Cobra;
        name[class_name::Bis_Cobra] = true;
        characteristics[Characters::scaleType_Scutes] = true;
        characteristics[Characters::isColdBlooded] = true;
        scaleType = "Scutes";
        hasLimbs = false;
        hasShell = false;
        scientificName = "Varanus dracaena";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Bis-cobras are a group of venomous snakes that are native to India and Southeast Asia.\n";
    }

    void printAnimal()
    {
        Reptiles::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Cobra : public Reptiles
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Cobra()
    {
        animalType = class_name::Cobra;
        name[class_name::Cobra] = true;
        characteristics[Characters::scaleType_Scutes] = true;
        characteristics[Characters::isColdBlooded] = true;
        scaleType = "Scutes";
        hasLimbs = false;
        hasShell = false;
        scientificName = "Naja naja";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Cobras are a group of venomous snakes that are found in tropical regions of\n"
               "Africa, Asia, and the Middle East.\n";
    }

    void printAnimal()
    {
        Reptiles::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Python : public Reptiles
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Python()
    {
        animalType = class_name::Python;
        name[class_name::Python] = true;
        characteristics[Characters::scaleType_Scutes] = true;
        characteristics[Characters::isColdBlooded] = true;
        scaleType = "Scutes";
        hasLimbs = false;
        hasShell = false;
        scientificName = "Pythonidae";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Pythons are a group of non-venomous snakes that are found in tropical regions of\n"
               "Africa, Asia, and Australia.\n";
    }

    void printAnimal()
    {
        Reptiles::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class RattleSnake : public Reptiles
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    RattleSnake()
    {
        animalType = class_name::RattleSnake;
        name[class_name::RattleSnake] = true;
        characteristics[Characters::scaleType_Scutes] = true;
        characteristics[Characters::isColdBlooded] = true;
        scaleType = "Scutes";
        hasLimbs = false;
        hasShell = false;
        scientificName = "Crotalus";
        isColdBlooded = true;
        hasClaws = false;
        desc = "Rattlesnakes are a group of venomous snakes that are found in the United States, Canada, and parts of South America.\n"
               "They are named for the distinctive rattle on the end of their tail.\n";
    }

    void printAnimal()
    {
        Reptiles::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Anaconda : public Reptiles
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Anaconda()
    {
        animalType = class_name::Anaconda;
        name[class_name::Anaconda] = true;
        characteristics[Characters::scaleType_Scutes] = true;
        characteristics[Characters::isColdBlooded] = true;
        scaleType = "Scutes";
        hasLimbs = false;
        hasShell = false;
        isColdBlooded = true;
        scientificName = "Eunectes murinus";
        hasClaws = false;
        desc = "Anacondas are a group of large, non-venomous snakes that are found in the tropical rainforests of South America.\n";
    }

    void printAnimal()
    {
        Reptiles::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Tortoise : public Reptiles
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Tortoise()
    {
        animalType = class_name::Tortoise;
        name[class_name::Tortoise] = true;
        characteristics[Characters::hasShells] = true;
        scaleType = "None";
        scientificName = "Testudinidae";
        hasLimbs = false;
        hasShell = true;
        isColdBlooded = true;
        hasClaws = false;

        desc = "Tortoises are a group of land-dwelling reptiles that are found in a variety of habitats around the world.\n";
    }

    void printAnimal()
    {
        Reptiles::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Aves : public Chordata
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;
    bool hasFlight;
    bool isMigratory;

public:
    Aves()
    {
        name[class_name::Aves] = true;
    }

    void printAnimal()
    {
        Chordata::printAnimal();
        cout << "Flight: ";
        cout << ((hasFlight) ? "Yes" : "No") << endl;
        cout << "Migratory: ";
        cout << ((isMigratory) ? "Yes" : "No") << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Kiwi : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Kiwi()
    {
        animalType = class_name::Kiwi;
        name[class_name::Kiwi] = true;
        hasFlight = false;
        isMigratory = false;
        scientificName = "Actinidia";
        hasClaws = false;
        desc = "Kiwis are small, flightless birds that are native to New Zealand.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Swan : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Swan()
    {
        animalType = class_name::Swan;
        name[class_name::Swan] = true;
        characteristics[Characters::hasFlight] = true;
        hasFlight = true;
        scientificName = "Cygnus";
        isMigratory = false;
        hasClaws = false;
        desc = "Swans are large, graceful birds that are found on every continent except Antarctica.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Peacock : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Peacock()
    {
        animalType = class_name::Peacock;
        name[class_name::Peacock] = true;
        hasFlight = false;
        isMigratory = false;
        scientificName = "Pavo cristatus";
        hasClaws = false;
        desc = "Peacocks are large, brightly colored birds that are native to South Asia.\n"
               "They are known for their beautiful, ornate tail feathers, which are displayed by the males during courtship.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Crane : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Crane()
    {
        animalType = class_name::Crane;
        name[class_name::Crane] = true;
        characteristics[Characters::hasFlight] = true;
        characteristics[Characters::isMigratory] = true;
        hasFlight = true;
        isMigratory = true;
        scientificName = "Gruidae";
        hasClaws = false;
        desc = "Cranes are a group of large, tall birds that are found on every continent except Antarctica.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Pigeon : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Pigeon()
    {
        animalType = class_name::Pigeon;
        name[class_name::Pigeon] = true;
        characteristics[Characters::hasFlight] = true;
        hasFlight = true;
        isMigratory = false;
        scientificName = "Columbidae";
        hasClaws = true;
        desc = "Pigeons are a group of birds that are found in a variety of habitats around the world.\n"
               "They are known for their distinctive appearance, with a small, compact body, short legs, and a short, triangular beak.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Raven : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Raven()
    {
        animalType = class_name::Raven;
        name[class_name::Raven] = true;
        characteristics[Characters::hasFlight] = true;
        hasFlight = true;
        isMigratory = false;
        scientificName = "Corvus corax";
        hasClaws = true;
        desc = "Ravens are large, intelligent birds that are found in a variety of habitats around the world.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Eagle : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Eagle()
    {
        animalType = class_name::Eagle;
        name[class_name::Eagle] = true;
        characteristics[Characters::hasFlight] = true;
        hasFlight = true;
        scientificName = "Aquila chrysaetos";
        isMigratory = false;
        hasClaws = true;
        desc = "Eagles are a group of large, powerful birds of prey that are found on every continent except Antarctica.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Flamingo : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Flamingo()
    {
        animalType = class_name::Flamingo;
        name[class_name::Flamingo] = true;
        characteristics[Characters::hasFlight] = true;
        characteristics[Characters::isMigratory] = true;
        hasFlight = true;
        isMigratory = true;
        scientificName = "Phoenicopterus";
        hasClaws = false;
        desc = "Flamingos are a group of large, wading birds that are found in tropical and subtropical regions around the world.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Ostritch : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Ostritch()
    {
        animalType = class_name::Ostritch;
        name[class_name::Ostritch] = true;
        hasFlight = false;
        isMigratory = false;
        scientificName = "Struthio camelus";
        hasClaws = false;
        desc = "Ostriches are large, flightless birds that are native to Africa.\n"
               "They are the largest living birds in the world.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Penguin : public Aves
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Penguin()
    {
        animalType = class_name::Penguin;
        name[class_name::Penguin] = true;
        hasFlight = false;
        isMigratory = false;
        scientificName = "Spheniscidae";
        hasClaws = false;
        desc = "Penguins are a group of flightless birds that are native to the Southern Hemisphere,\n"
               "including Antarctica, South America, and Africa.\n";
    }

    void printAnimal()
    {
        Aves::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};

class Mammals : public Chordata
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;
    string consumerType;
    bool hasFangs;
    bool hasFur;

public:
    Mammals()
    {
        name[class_name::Mammals] = true;
    }

    void printAnimal()
    {
        Chordata::printAnimal();
        cout << "Consumer Type: " << consumerType << endl;
        cout << "Fangs: ";
        cout << ((hasFangs) ? "Yes" : "No") << endl;
        cout << "Fur: ";
        cout << ((hasFur) ? "Yes" : "No") << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Hippo : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Hippo()
    {
        animalType = class_name::Hippo;
        name[class_name::Hippo] = true;
        characteristics[Characters::consumerType_Herbivore] = true;
        characteristics[Characters::hasFangs] = true;
        consumerType = "Herbivore";
        hasFangs = true;
        scientificName = "Hippopotamus amphibius";
        hasFur = false;
        hasClaws = false;
        desc = "Hippopotamuses, or hippos, are large, semi-aquatic mammals that are native to Africa.\n"
               "They are known for their massive size, with some individuals weighing over 3,000 pounds.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Rhino : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Rhino()
    {
        animalType = class_name::Rhino;
        name[class_name::Rhino] = true;
        characteristics[Characters::consumerType_Herbivore] = true;
        consumerType = "Herbivore";
        hasFangs = false;
        hasFur = false;
        hasClaws = false;
        scientificName = "Rhinocerotidae";
        desc = "Rhinos are a group of large, herbivorous mammals that are found in Africa and Asia.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Elephant : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Elephant()
    {
        animalType = class_name::Elephant;
        name[class_name::Elephant] = true;
        characteristics[Characters::consumerType_Herbivore] = true;
        characteristics[Characters::hasFur] = true;
        consumerType = "Herbivore";
        hasFangs = false;
        scientificName = "Loxodonta";
        hasFur = true;
        hasClaws = false;
        desc = "Elephants are the largest living land animals on earth and are found in a variety of habitats in Africa and Asia.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Leopard : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Leopard()
    {
        animalType = class_name::Leopard;
        name[class_name::Leopard] = true;
        characteristics[Characters::hasFur] = true;
        characteristics[Characters::consumerType_Carnivore] = true;
        characteristics[Characters::hasClaws] = true;
        consumerType = "Carnivore";
        hasFangs = true;
        scientificName = "Panthera pardus";
        hasFur = true;
        hasClaws = true;
        desc = "Leopards are large, agile cats that are found in a variety of habitats in Africa and Asia.\n"
               "They are known for their distinctive coat, which is marked with dark spots on a pale background.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Tiger : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Tiger()
    {
        animalType = class_name::Tiger;
        name[class_name::Tiger] = true;
        characteristics[Characters::consumerType_Carnivore] = true;
        characteristics[Characters::hasFur] = true;
        characteristics[Characters::hasClaws] = true;
        consumerType = "Carnivore";
        hasFangs = true;
        hasFur = true;
        scientificName = "Panthera tigris";
        hasClaws = true;
        desc = "Tigers are large, carnivorous cats that are native to Asia.\n"
               "They are known for their distinctive orange and black stripes.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }
    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Giraffe : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Giraffe()
    {
        animalType = class_name::Giraffe;
        name[class_name::Giraffe] = true;
        characteristics[Characters::consumerType_Herbivore] = true;
        characteristics[Characters::hasFur] = true;
        consumerType = "Herbivore";
        hasFangs = false;
        hasFur = true;
        scientificName = "Giraffa";
        hasClaws = false;
        desc = "Giraffes are large, long-necked mammals that are native to Africa.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Zebra : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Zebra()
    {
        animalType = class_name::Zebra;
        name[class_name::Zebra] = true;
        characteristics[Characters::consumerType_Herbivore] = true;
        characteristics[Characters::hasFur] = true;
        consumerType = "Herbivore";
        hasFangs = false;
        hasFur = true;
        scientificName = "Equus quagga";
        hasClaws = false;
        desc = "Zebras are large, hoofed mammals that are native to Africa.\n"
               "They are known for their distinctive black and white stripes\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Gorilla : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Gorilla()
    {
        animalType = class_name::Gorilla;
        name[class_name::Gorilla] = true;
        characteristics[Characters::consumerType_Herbivore] = true;
        characteristics[Characters::hasFur] = true;
        consumerType = "Herbivore";
        hasFangs = false;
        scientificName = "Gorilla";
        hasFur = true;
        hasClaws = false;
        desc = "Gorillas are large, intelligent primates that are native to Africa.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Deer : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Deer()
    {
        animalType = class_name::Deer;
        name[class_name::Deer] = true;
        characteristics[Characters::consumerType_Herbivore] = true;
        characteristics[Characters::hasFur] = true;
        consumerType = "Herbivore";
        hasFangs = false;
        scientificName = "Cervidae";
        hasFur = true;
        hasClaws = false;
        desc = "Deer are a group of hoofed mammals that are found in a variety of habitats around the world.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Dolphin : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Dolphin()
    {
        animalType = class_name::Dolphin;
        name[class_name::Dolphin] = true;
        characteristics[Characters::consumerType_Carnivore] = true;
        consumerType = "Carnivore";
        hasFangs = false;
        scientificName = "Delphinus";
        hasFur = false;
        hasClaws = false;
        desc = "Dolphins are a group of intelligent, aquatic mammals that are found in a variety of habitats around the world.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Rabbit : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Rabbit()
    {
        animalType = class_name::Rabbit;
        name[class_name::Rabbit] = true;
        characteristics[Characters::consumerType_Herbivore] = true;
        characteristics[Characters::hasFur] = true;
        consumerType = "Herbivore";
        hasFangs = false;
        scientificName = "Oryctolagus cuniculus";
        hasFur = true;
        hasClaws = false;
        desc = "Rabbits are a group of small, hopping mammals that are found in a variety of habitats around the world.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
class Camel : public Mammals
{
protected:
    bitset<NameCount> name;
    bitset<characteristicsCount> characteristics;

public:
    Camel()
    {
        animalType = class_name::Camel;
        name[class_name::Camel] = true;
        characteristics[Characters::consumerType_Herbivore] = true;
        characteristics[Characters::hasFur] = true;
        consumerType = "Herbivore";
        hasFangs = false;
        hasFur = true;
        scientificName = "Camelus Dromedary";
        hasClaws = false;
        desc = "Camels are large, hoofed mammals that are native to Africa and Asia.\n"
               "They are known for their distinctive appearance, with a long, slender neck,\n"
               "a humped back, and long, slender legs.\n";
    }

    void printAnimal()
    {
        Mammals::printAnimal();
        cout << "Scientific Name: " << scientificName << endl;
        cout << "Description: " << desc << endl;
    }

    bitset <NameCount> getName()
    {
        return name;
    }

    bitset <characteristicsCount> getCharacter()
    {
        return characteristics;
    }
};
