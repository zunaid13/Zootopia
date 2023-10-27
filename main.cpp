#include "Admin.h"

int main()
{
    settings.load_settings();
    ascii_art.start_up();
    ascii_art.print_theme();
    read_me_file.CreateReadMeFile();

    // reading all the visitors from file
    ifstream visitor_file(VISITOR_SAVE);
    if(visitor_file.is_open())
    {
        while( !visitor_file.eof())
        {
            visitor newVisitor;
            newVisitor.read_visitor_from_file(visitor_file);
            all_Visitors.push_back(newVisitor);
        }
        visitor_file.close();
    }
    if(all_Visitors.size() > 0)
        all_Visitors.pop_back();

    // reading all staffs from file
    ifstream staff_file(STAFF_SAVE);
    if(staff_file.is_open())
    {
        while(!staff_file.eof())
        {
            string type;
            staff_file >> type;
            staff* newStaff;
            if(type == "Security")
                newStaff = new AnimalSecurity;
            else if(type == "Doctors")
                newStaff = new Doctors;
            else newStaff = new feeders;
            newStaff->read_from_file(staff_file);
            all_staffs.push_back(newStaff);
        }
        staff_file.close();
    }
    if(all_staffs.size() > 0)
        all_staffs.pop_back();

    // reading all the locations from file
    ifstream loc_file(LOCATION_FILE);
    if(loc_file.is_open())
    {
        int x, y, z;
        while(!loc_file.eof())
        {
            loc_file >> x >> y >> z;
            if(x == -1) exit_locations.push_back({y, z});
            else animal_locations[x] = {y, z};
        }
        loc_file.close();
    }
    else exit_locations.push_back({0, 0});


    // reading all the animal names from file
    ifstream an_file(ANIMAL_SAVE);
    if(an_file.is_open())
    {
        int x;
        while(!an_file.eof())
        {
            an_file >> x;
            // cout << "DEBUG" << endl;
            // cout << x << endl;
            class::Animal* newAnimal;
            switch (x)
            {
            case Animal:
                newAnimal = new class::Animal;
                break;
            case Cnidaria:
                newAnimal = new class::Cnidaria;
                break;
            case JellyFish:
                newAnimal = new class::JellyFish;
                break;
            case Coral:
                newAnimal = new class::Coral;
                break;
            case Echinodermata:
                newAnimal = new class::Echinodermata;
                break;
            case SeaUrchin:
                newAnimal = new class::SeaUrchin;
                break;
            case StarFish:
                newAnimal = new class::StarFish;
                break;
            case Chordata:
                newAnimal = new class::Chordata;
                break;
            case Pisces:
                newAnimal = new class::Pisces;
                break;
            case Tuna:
                newAnimal = new class::Tuna;
                break;
            case Shark:
                newAnimal = new class::Shark;
                break;
            case Hammerhead:
                newAnimal = new class::Hammerhead;
                break;
            case Australian_Lung:
                newAnimal = new class::Australian_Lung;
                break;
            case Sea_Horse:
                newAnimal = new class::Sea_Horse;
                break;
            case Puffer_Fish:
                newAnimal = new class::Puffer_Fish;
                break;
            case Amphibians:
                newAnimal = new class::Amphibians;
                break;
            case Frogs:
                newAnimal = new class::Frogs;
                break;
            case Leopard_Frog:
                newAnimal = new class::Leopard_Frog;
                break;
            case Wood_Frog:
                newAnimal = new class::Wood_Frog;
                break;
            case Toads:
                newAnimal = new class::Toads;
                break;
            case American_Toad:
                newAnimal = new class::American_Toad;
                break;
            case Southern_Spadefoot:
                newAnimal = new class::Southern_Spadefoot;
                break;
            case Axoloty:
                newAnimal = new class::Axoloty;
                break;
            case Newt:
                newAnimal = new class::Newt;
                break;
            case Salamanders:
                newAnimal = new class::Salamanders;
                break;
            case Spotted_Salamander:
                newAnimal = new class::Spotted_Salamander;
                break;
            case Tiger_Salamander:
                newAnimal = new class::Tiger_Salamander;
                break;
            case Reptiles:
                newAnimal = new class::Reptiles;
                break;
            case Crocodile:
                newAnimal = new class::Crocodile;
                break;
            case Alligator:
                newAnimal = new class::Alligator;
                break;
            case Chameleon:
                newAnimal = new class::Chameleon;
                break;
            case Bis_Cobra:
                newAnimal = new class::Bis_Cobra;
                break;
            case Cobra:
                newAnimal = new class::Cobra;
                break;
            case Python:
                newAnimal = new class::Python;
                break;
            case RattleSnake:
                newAnimal = new class::RattleSnake;
                break;
            case Anaconda:
                newAnimal = new class::Anaconda;
                break;
            case Tortoise:
                newAnimal = new class::Tortoise;
                break;
            case Aves:
                newAnimal = new class::Aves;
                break;
            case Kiwi:
                newAnimal = new class::Kiwi;
                break;
            case Swan:
                newAnimal = new class::Swan;
                break;
            case Peacock:
                newAnimal = new class::Peacock;
                break;
            case Crane:
                newAnimal = new class::Crane;
                break;
            case Pigeon:
                newAnimal = new class::Pigeon;
                break;
            case Raven:
                newAnimal = new class::Raven;
                break;
            case Eagle:
                newAnimal = new class::Eagle;
                break;
            case Flamingo:
                newAnimal = new class::Flamingo;
                break;
            case Ostritch:
                newAnimal = new class::Ostritch;
                break;
            case Penguin:
                newAnimal = new class::Penguin;
                break;
            case Mammals:
                newAnimal = new class::Mammals;
                break;
            case Hippo:
                newAnimal = new class::Hippo;
                break;
            case Rhino:
                newAnimal = new class::Rhino;
                break;
            case Elephant:
                newAnimal = new class::Elephant;
                break;
            case Leopard:
                newAnimal = new class::Leopard;
                break;
            case Tiger:
                newAnimal = new class::Tiger;
                break;
            case Giraffe:
                newAnimal = new class::Giraffe;
                break;
            case Zebra:
                newAnimal = new class::Zebra;
                break;
            case Gorilla:
                newAnimal = new class::Gorilla;
                break;
            case Deer:
                newAnimal = new class::Deer;
                break;
            case Dolphin:
                newAnimal = new class::Dolphin;
                break;
            case Rabbit:
                newAnimal = new class::Rabbit;
                break;
            case Camel:
                newAnimal = new class::Camel;
                break;
            }
            newAnimal->load(an_file);
            all_animals.push_back(newAnimal);
        }
        an_file.close();
    }
    if(all_animals.size() > 0)
        all_animals.pop_back();

    // main menu
    

    Menu mainMenu(70, 15, {"Login as Admin", "Login as Visitor", "Alter Theme", "Exit"});


    while (1)
    {
        system("cls");
        ascii_art.print_theme();
        switch (mainMenu.call())
        {
        case 1:
            admin_Choice();
            system("cls");
            break;
        case 2:
            visitor_chosen();
            system("cls");
            break;
            
        case 3:
            settings.toggle_darkmode();
            system("cls");
            break;
        default:
            system("cls");
            return 0;
        }
    }
    return 0;
}