#include "staff.h"

// preprocessor directives
#define PASSLEN 50

// definitions
string scan_password(string &password);

// functions
string scan_password(string &password)
{
    int len = 0;
    char ch;
    while((ch = getch()) != enter && len < PASSLEN)
    {
        if(ch == backspace)
        {
            printf("\b \b");
            if(len != 0)
            {
                len--;
                password.pop_back();
            }
        }
        else
        {
            printf("*");
            password += ch;
            len++;
            if(len == PASSLEN-1)
                break;
        }
    }
    printf("\n");
    return password;
}


void save_Animal_file()
{
    ofstream out(ANIMAL_SAVE);
    for(int i = 0 ; i < all_animals.size(); i++)
        all_animals[i]->save(out);
    out.close();
}

class {
    public:

    void get_Reviews()
    {
        cout << "Printing all the reviews" << endl;
        for(auto x : all_Visitors)
        {
            cout << "-------------------------" << endl;
            x.show_review();
        }
    }
    void filter_Reviews()
    {
        double lower_limit, upper_limit;
        cout << "Please enter minimum value for the review-stars (-1 for no minimum limit): ";
        cin >> lower_limit;
        cout << "Please enter maximum value for the review-stars (10 is maximum limit): ";
        cin >> upper_limit;
        cout << "Printing the filtered reviews" << endl;
        for(auto x : all_Visitors)
        {
            if(x.get_stars_given() >= lower_limit && x.get_stars_given() <= upper_limit)
            {
                cout << "-------------------------" << endl;
                x.show_review();
            }
        }
    }
    void addAnimal()
    {
        int x;
        x = getAnimal();
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
        string bname, aname;
        double weight, length;
        int age;
        cout << "Give Biome: ";
        cin >> bname;
        cout << "Give Name: ";
        cin >> aname;
        cout << "Give Weight: ";
        cin >> weight;
        cout << "Give Length: ";
        cin >> length;
        cout << "Give Age: ";
        cin >> age;
        newAnimal->setFoo(bname, aname, weight, length, age);
        all_animals.push_back(newAnimal);
        all_animals.back()->printAnimal();
        system("pause");
        //////////////////////////////////////////////////////////////////////// save the file
    }
    void removeAnimal()
    {
        bitset <NameCount> searchCriteria, NoMatch;
        cout << "Enter the number of animals to be searched: ";
        int x;
        cin >> x;
        for(int i = 0 ; i < x ; i++)
        {
            int temp;
            temp = getAnimal();
            system("cls");
            searchCriteria[temp] = 1;
        }
        for(int i = 0 ; i < all_animals.size() ; i++)
        {
            if((all_animals[i]->getName() & searchCriteria) != NoMatch)
            {
                cout << "--------------------------" << i+1 << "--------------------------" << endl;
                all_animals[i]->printAnimal();
            }
        }
        system("pause");
        system("cls");
        cout << "Now input serial of animal to be removed: ";
        int rmv;
        cin >> rmv;
        rmv--;
        delete all_animals[rmv];
        all_animals.erase(all_animals.begin() + rmv);
        ///////////////////////////////////////////////////////////////////////////// save the file
    }
    void add_staff()
    {
        Menu Editor(70, 15, {"Animal Security", "Animal Doctor", "Animal feeders", "Go back"});
        while(1)
        {
            ascii_art.print_theme();
            staff* newStaff;
            switch(Editor.call())
            {
                case 1:
                    newStaff = new AnimalSecurity;
                    newStaff->get_from_admin();
                    all_staffs.push_back(newStaff);
                    system("cls");
                    break;
                case 2:
                    newStaff = new Doctors;
                    newStaff->get_from_admin();
                    all_staffs.push_back(newStaff);
                    system("cls");
                    break;
                case 3:
                    newStaff = new feeders;
                    newStaff->get_from_admin();
                    all_staffs.push_back(newStaff);
                    system("cls");
                    break;
                default:
                    system("cls");
                    return;
            }
        }
    }
    void edit_employees()
    {
        system("cls");
        Menu Editor(70, 15, {"View all Employees", "Search by Name", "Filter by Salary", "Add a New Employee", "Fire an Employee", "Change Employee Info", "Go Back"});
        while(1)
        {
            ascii_art.print_theme();
            string temp;
            double upper_limit, lower_limit;
            int serial;
            switch(Editor.call())
            {
                case 1:
                    cout << "Printing all Employees" << endl;
                    for(int i = 0 ; i < all_staffs.size() ; i++)
                    {
                        cout << "----------------" << i+1 << "----------------" << endl;
                        all_staffs[i]->show();
                    }
                    system("pause");
                    system("cls");
                    break;
                case 2:
                    cout << "Enter the name to be searched: ";
                    cin >> temp;
                    cout << "Printing results: " << endl;
                    for(int i = 0 ; i < all_staffs.size() ; i++)
                    {
                        if(all_staffs[i]->get_name().find(temp) != string::npos)
                        {
                            cout << "----------------" << i+1 << "----------------" << endl;
                            all_staffs[i]->show();
                        }
                    }
                    system("pause");
                    system("cls");
                    break;
                case 3:
                    cout << "Enter the lower limit (-1 for no lower limit): ";
                    cin >> lower_limit;
                    cout << "Enter the upper limit: ";
                    cin >> upper_limit;
                    cout << "Printing results: " << endl;
                    for(int i = 0 ; i < all_staffs.size() ; i++)
                    {
                        if(all_staffs[i]->get_salary() >= lower_limit && all_staffs[i]->get_salary() <= upper_limit)
                        {
                            cout << "----------------" << i+1 << "----------------" << endl;
                            all_staffs[i]->show();
                        }
                    }
                    system("pause");
                    system("cls");
                    break;
                case 4:
                    add_staff();
                    system("cls");
                    break;
                case 5:
                    cout << "WARNING: This will cause serial numbers to change" << endl;
                    cout << "Enter employee serial number: ";
                    cin >> serial;
                    if(serial > all_staffs.size())
                    {
                        cerr << "ERROR: Serial number wrong...Aborting" << endl;
                        break;
                    }
                    serial--;
                    delete all_staffs[serial];
                    all_staffs.erase(all_staffs.begin() + serial);
                    system("cls");
                    break;
                case 6: // change employee info
                    cout << "Enter employee serial number: ";
                    cin >> serial;
                    if(serial > all_staffs.size())
                    {
                        cerr << "ERROR: Serial number wrong...Aborting" << endl;
                        break;
                    }
                    serial--;
                    all_staffs[serial]->get_from_admin();
                    system("cls");
                    break;
                default:
                system("cls");
                    return;
            }
        }
    }
    void modifyTicketPrices()
    {
        double temp;
        cout << "Enter new ticket price for Adults: ";
        cin >> temp;
        settings.set_adultPrice(temp);
        cout << "Enter new ticket price for children: ";
        cin >> temp;
        cout << "Prices has been updated..." << endl;
        settings.set_childrenPrice(temp);
        system("pause");
        system("cls");
    }
    void exit_edit()
    {
        cout << "Enter 'Y' to Add a new exit postion, 'N' to remove position: ";
        char inp;
        cin >> inp;
        if(inp == 'Y')
        {
            int x, y;
            cout << "Give the position co-ordinates x: ";
            cin >> x;
            cout << "Give the position co-ordinates y: ";
            cin >> y;
            exit_locations.push_back({x, y});
        }
        else
        {
            for(int i = 0 ; i < exit_locations.size() ; i++)
                cout << "Position number " << i+1 << ": " << exit_locations[i].first << ", " << exit_locations[i].second << endl;
            cout << "Which one do you want to delete? : ";
            int rmv;
            cin >> rmv;
            rmv--;
            exit_locations.erase(exit_locations.begin() + rmv);
        }
        save_Location();
    }
} Admin;

void admin_Choice()
{
    system("cls");
    cout << "Please enter the password: " << endl;
    string temp;
    scan_password(temp);
    if(!settings.check_password(temp))
    {
        cerr << "Wrong password given." << endl;
        system("pause");
        system("cls");
        return;
    }

    Menu admin_menu(70, 15, {"Get Reviews", "Filter Reviews", "Edit Employees", "Add Animals", "Remove Animals", "Modify Ticket Prices", "Calculate Total Profit", "Edit Exit Positions", "Change Password", "Logout"});
    while(1)
    {
        system("cls");
        ascii_art.print_theme();
        string temp1, temp2;
        double adultProfit, childProfit;
        int adultCount, childCount;
        adultProfit = childProfit = 0;
        adultCount = childCount = 0;
        switch(admin_menu.call())
        {
            case 1:
                Admin.get_Reviews();
                system("pause");
                system("cls");
                break;
            case 2:
                Admin.filter_Reviews();
                system("pause");
                system("cls");
                break;
            case 3:
                Admin.edit_employees();
                save_staffList();
                system("cls");
                break;
            case 4:
                Admin.addAnimal();
                save_Animal_file();
                system("cls");
                break;
            case 5:
                Admin.removeAnimal();
                save_Animal_file();
                system("cls");
                break;
            case 6:
                Admin.modifyTicketPrices();
                system("cls");
                break;
            case 7:
                for(auto x : all_Visitors)
                {
                    if(x.isChild())
                    {
                        childProfit += x.get_price_of_ticket();
                        childCount++;
                    }
                    else
                    {
                        adultProfit += x.get_price_of_ticket();
                        adultCount++;
                    }
                }
                cout << "Total Profit (child + adult): " << childProfit << " + " << adultProfit << " = " << childProfit + adultProfit << endl;
                cout << "Total Adult visitors: " << adultCount << endl;
                cout << "Total Child visitors: " << childCount << endl;
                system("pause");
                system("cls");
                break;
            case 8:
                Admin.exit_edit();
                system("cls");
                break;
            case 9:
                cout << "Please enter your new password (cannot be more than 50 characters): " << endl;
                scan_password(temp1);
                cout << "Now confirm your password: " << endl;
                scan_password(temp2);
                if(temp1 == temp2)
                    settings.change_password(temp1);
                else
                {
                    cout << "Confirmation didn't match...Aborting..." << endl;
                    system("pause");
                    system("cls");
                }
                system("cls");
                break;
            default:
            system("cls");
                return;
        }
    }
    return;
}