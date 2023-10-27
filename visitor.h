#include "ticket_reviews.h"

#define ANIMAL_SIZE NameCount
#define VISITOR_SAVE "visitor.txt"

// global variables
class visitor;
vector<visitor> all_Visitors;

int getAnimal()
{
    cout << "(3) JellyFish  "
            "(4) Coral  "
            "(6) SeaUrchin  "
            "(7) StarFish  "
            "(10) Tuna  "
            "(11) Shark  "
            "(12) Hammerhead  \n"
            "(13) Australian_Lung  "
            "(14) Sea_Horse  "
            "(15) Puffer_Fish  "
            "(18) Leopard_Frog  "
            "(19) Wood_Frog  \n"
            "(21) American_Toad  "
            "(22) Southern_Spadefoot  "
            "(23) Axoloty  "
            "(24) Newt  "
            "(26) Spotted_Salamander \n "
            "(27) Tiger_Salamander  "
            "(29) Crocodile  "
            "(30) Alligator  "
            "(31) Chameleon  "
            "(32) Bis_Cobra \n "
            "(33) Cobra  "
            "(34) Python  "
            "(35) RattleSnake  "
            "(36) Anaconda  "
            "(37) Tortoise  "
            "(39) Kiwi  \n"
            "(40) Swan  "
            "(41) Peacock  "
            "(42) Crane  "
            "(43) Pigeon  "
            "(44) Raven  "
            "(45) Eagle  "
            "(46) Flamingo  \n"
            "(47) Ostritch  "
            "(48) Penguin  "
            "(50) Hippo  "
            "(51) Rhino  "
            "(52) Elephant  "
            "(53) Leopard  "
            "(54) Tiger  \n"
            "(55) Giraffe  "
            "(56) Zebra  "
            "(57) Gorilla  "
            "(58) Deer  "
            "(59) Dolphin  "
            "(60) Rabbit  "
            "(61) Camel  "
         << endl;
    cout << "\nWhich Animal do you want to Pick: ";
    int ret;
    cin >> ret;
    system("cls");
    return ret - 1;
}

int getCharacter()
{
    cout << "(1) hasNematocyst   "
            "(2) totipotency   "
            "(3) symmetry_Radial   "
            "(4) symmetry_pentaRadial   "
            "(5) waterType_salty   "
            "(6) waterType_sweet   \n"
            "(7) hasTeeth   "
            "(8) hasClaws   "
            "(9) scaleType_Placoid   "
            "(10) scaleType_Cosmoid   "
            "(11) scaleType_Ganoid   "
            "(12) scaleType_Cycloid   "
            "(13) scaleType_Scutes   \n"
            "(14) scaleType_Keratinized   "
            "(15) isPoisonous   "
            "(16) isSchool   "
            "(17) isToxic   "
            "(18) skinColor_DarkGreen   "
            "(19) skinColor_Black   \n"
            "(20) skinColor_Brown   "
            "(21) isColdBlooded   "
            "(22) hasLimbs   "
            "(23) hasShells   "
            "(24) hasFlight   \n"
            "(25) isMigratory   "
            "(26) consumerType_Omnivore   "
            "(27) consumerType_Carnivore   "
            "(28) consumerType_Herbivore   \n"
            "(29) hasFangs   "
            "(30) hasFur   ";
    int ret;
    cin >> ret;
    return ret - 1;
}

class visitor
{
    bool animals_visited[ANIMAL_SIZE];
    mydate *DateOfEntry;
    int age;
    reviews *visit_rev;
    tickets *visit_tick;

public:
    void search_animal()
    {
        bitset<NameCount> searchCriteria, NoMatch;
        cout << "Enter the number of animals to be searched: ";
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            int temp;
            temp = getAnimal();
            system("cls");
            searchCriteria[temp] = 1;
        }
        for (int i = 0; i < all_animals.size(); i++)
        {
            for (int j = 0; j < NameCount; j++)
            {
                if (searchCriteria[j] == 1 && all_animals[i]->getName()[j] == 1)
                {
                    all_animals[i]->printAnimal();
                    break;
                }
            }
        }
        system("pause");
    }
    void filter_animal()
    {
        bitset<characteristicsCount> searchCriteria, NoMatch;
        cout << "Enter the number of characteristics to be filtered: ";
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            int temp;
            temp = getCharacter();
            system("cls");
            searchCriteria[temp] = 1;
        }
        for (int i = 0; i < all_animals.size(); i++)
        {
            if ((all_animals[i]->getCharacter() & searchCriteria) != NoMatch)
                all_animals[i]->printAnimal();
        }
        system("pause");
    }
    void get_nearest_animal()
    {
        vector<pair<int, int>> temp;
        system("cls");
        int currentPos = getAnimal();
        for (int i = 0; i < animal_locations.size(); i++)
        {
            if (((animal_locations[currentPos].first - animal_locations[i].first) != 0) && ((animal_locations[currentPos].second - animal_locations[i].second) != 0))
                temp.push_back({abs(animal_locations[currentPos].first - animal_locations[i].first) + abs(animal_locations[currentPos].second - animal_locations[i].second), i});
        }
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());
        cout << "The 5 Nearest Animals are: " << endl;
        int ctemp = 5;
        for (int i = 0; i < temp.size() && ctemp; i++)
        {
            if (temp[i].second != currentPos)
            {
                ctemp--;
                cout << e2s_className((class_name)temp[i].second) << ": ";
                if (animal_locations[currentPos].second - animal_locations[temp[i].second].second > 0)
                    cout << "South-";
                else
                    cout << "North-";
                if (animal_locations[currentPos].first - animal_locations[temp[i].second].first > 0)
                    cout << "West";
                else
                    cout << "East";
                cout << endl;
            }
        }
        system("pause");
    }
    void get_nearest_exit()
    {
        vector<pair<int, int>> temp;
        system("cls");
        int currentPos = getAnimal();
        for (int i = 0; i < exit_locations.size(); i++)
            temp.push_back({abs(animal_locations[currentPos].first - exit_locations[i].first) + abs(animal_locations[currentPos].second - exit_locations[i].second), i});
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());
        cout << "Nearest exit is exit number: " << temp[0].second + 1 << endl;

        if (animal_locations[currentPos].second - exit_locations[temp[0].second].second > 0)
            cout << "South-";
        else
            cout << "North-";
        if (animal_locations[currentPos].first - exit_locations[temp[0].second].first > 0)
            cout << "West";
        else
            cout << "East";
        cout << endl;
        system("pause");
    }
    void get_nearest_unvisited()
    {
        vector<pair<int, int>> temp;
        system("cls");
        int currentPos = getAnimal();
        for (int i = 0; i < animal_locations.size(); i++)
            temp.push_back({abs(animal_locations[currentPos].first - animal_locations[i].first) + abs(animal_locations[currentPos].second - animal_locations[i].second), i});
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());
        cout << "Nearest animals are: " << endl;
        int ctemp = 5;
        for (int i = 0; i < temp.size() && ctemp; i++)
        {
            if (animals_visited[temp[i].second] == false)
            {
                ctemp--;
                cout << e2s_className((class_name)temp[i].second) << ": ";
                if (animal_locations[currentPos].second - animal_locations[temp[i].second].second > 0)
                    cout << "South-";
                else
                    cout << "North-";
                if (animal_locations[currentPos].first - animal_locations[temp[i].second].first > 0)
                    cout << "West";
                else
                    cout << "East";
                cout << endl;
            }
        }
        system("pause");
    }
    void mark_visited()
    {
        system("cls");
        int currentPos = getAnimal();
        animals_visited[currentPos] = true;
    }
    void show_review()
    {
        visit_rev->show();
    }
    void get_review()
    {
        visit_rev->get();
    }
    double get_stars_given()
    {
        return visit_rev->get_stars();
    }
    double get_price_of_ticket()
    {
        return visit_tick->getPrice();
    }
    bool isChild()
    {
        return age <= 18;
    }
    void progression()
    {
        int visitedCount = 0;
        for (auto x : animals_visited)
            if (x)
                visitedCount++;
        double temp = (visitedCount * 1.0 / ANIMAL_SIZE) * 80;
        gotoxy(75, 27);
        cout << "Progression...(" << visitedCount << "/" << ANIMAL_SIZE << ")" << endl;
        gotoxy(48, 29);
        for (int i = 0; i < 80; i++)
        {
            if (i < visitedCount)
                cout << (char)solid_bar;
            else
                cout << (char)empty_bar;
        }
        gotoxy(0, 0);
        // system("pause");
    }
    void biome_desc()
    {
        Menu Editor(70, 15, {"Aquatic", "Coniferous Forest", "Deciduous Forest", "Desert", "Grassland", "Rain forest", "Savannah", "Tundra", "Go back"});
        while (1)
        {
            system("cls");
            ascii_art.print_theme();
            Aquatic aq;
            ConiferousForest con;
            DeciduousForest dec;
            Desert des;
            Grassland gra;
            Rainforest rai;
            Savannah sav;
            Tundra tum;
            switch (Editor.call())
            {
            case 1:
                aq.show();
                break;
            case 2:
                con.show();
                break;
            case 3:
                dec.show();
                break;
            case 4:
                des.show();
                break;
            case 5:
                gra.show();
                break;
            case 6:
                rai.show();
                break;
            case 7:
                sav.show();
                break;
            case 8:
                tum.show();
                break;
            default:
                return;
            }
            system("pause");
        }
    }
    void read_visitor_from_file(ifstream &in)
    {
        string comment, animal_fav;
        for (int i = 0; i < ANIMAL_SIZE; i++)
            in >> animals_visited[i];
        DateOfEntry = new mydate;
        DateOfEntry->read_from_file(in);
        in >> age;
        visit_tick = new tickets;
        visit_tick->read_from_file(in);
        visit_rev->read_from_file(in);
    }
    void save_visitor_to_file(ofstream &out)
    {
        for (int i = 0; i < ANIMAL_SIZE; i++)
            out << animals_visited[i] << " ";
        out << endl;
        DateOfEntry->save_to_file(out);
        out << age << endl;
        visit_tick->save_to_file(out);
        visit_rev->save_to_file(out);
    }
    visitor()
    {
        visit_rev = new reviews(0, "N/A", "N/A");
        for (int i = 0; i < ANIMAL_SIZE; i++)
            animals_visited[i] = false;
    }
    visitor(int _age, int _id)
    {
        visit_rev = new reviews(0, "N/A", "N/A");
        for (int i = 0; i < ANIMAL_SIZE; i++)
            animals_visited[i] = false;
        DateOfEntry = new mydate;
        DateOfEntry->set_current();
        age = _age;
        if (age < 0)
        {
            cerr << "Age must be positive" << endl;
            cerr << "Exiting" << endl;
            exit(EXIT_FAILURE);
        }
        double _price;
        if (age < 18) // child
            _price = settings.get_childrenPrice();
        else
            _price = settings.get_adultPrice();
        visit_tick = new tickets(_id, age < 18, _price);
        assigned_id[_id] = true;
    }
};

void save_VisitorList()
{
    ofstream out(VISITOR_SAVE);
    for (auto x : all_Visitors)
        x.save_visitor_to_file(out);
}

void visitor_chosen()
{
    system("cls");
    cout << "Please enter your age : ";
    int age, new_id;
    cin >> age;
    srand(time(NULL));
    while (1)
    {
        new_id = abs(rand()) % 10000000;
        if (assigned_id[new_id] == true)
            continue;
        assigned_id[new_id] = true;
        break;
    }
    visitor Customer(age, new_id);
    system("cls");
    Menu visitor_menu(70, 15, {"Find Nearest Animals", "Find Nearest Unvisited Animal", "Mark Animal as Visited", "Find Nearest Exit", "View Biome Description", "Search Animals by Name", "Filter Characters", "Give Review", "Logout"});
    while (1)
    {
        system("cls");
        ascii_art.print_theme();
        Customer.progression();
        switch (visitor_menu.call())
        {
        case 1:
            system("cls");
            cout << "Please Pick the Animal closest to you in order to confirm your Location." << endl;
            system("pause");
            Customer.get_nearest_animal();
            break;
        case 2:
            system("cls");
            cout << "Please Pick the Animal closest to you in order to confirm your Location." << endl;
            system("pause");
            Customer.get_nearest_unvisited();
            break;
        case 3:
            system("cls");
            cout << "Please Pick the Animal you've already visited." << endl;
            system("pause");
            Customer.mark_visited();
            break;
        case 4:
            system("cls");
            cout << "Please Pick the Animal closest to you in order to confirm your Location." << endl;
            system("pause");
            Customer.get_nearest_exit();
            break;
        case 5:
            Customer.biome_desc();
            break;
        case 6:
            Customer.search_animal();
            break;
        case 7:
            Customer.filter_animal();
            break;
        case 8:
            Customer.get_review();
            break;
        default:
            all_Visitors.push_back(Customer);
            save_VisitorList();
            return;
        }
    }
    return;
}