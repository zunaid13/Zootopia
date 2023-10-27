#include "animal.h"

#define LOCATION_FILE "location.txt"

// global variables
map <int, bool> assigned_id;
vector <class::Animal *> all_animals;
vector <pair<int, int>> animal_locations(NameCount), exit_locations;

void save_Location()
{
    ofstream out(LOCATION_FILE);
    for(auto x : exit_locations)
        out << -1 << " " << x.first << " " << x.second << endl;
    for(int i = 0 ; i < animal_locations.size() ; i++)
        out << i << " " << animal_locations[i].first << " " << animal_locations[i].second << endl;
}

class tickets
{
private:
    int ID;
    bool child;
    double price;

public:
    tickets()
    {
        ID = -1;
        child = false;
        price = 0;
    }
    tickets(int _id, bool _child, double _price) : ID(_id), child(_child), price(_price) {}
    void read_from_file(ifstream &in)
    {
        in >> ID >> child >> price;
        assigned_id[ID] = true;
    }
    void save_to_file(ofstream &out)
    {
        out << ID << " " << child << " " << price << endl;
    }
    double getPrice()
    {
        return price;
    }
    bool isChild()
    {
        return child;
    }
    bool getID()
    {
        return ID;
    }
};

class reviews{
    private:
    double stars;
    string comment, mostPopularAnimal;
    public:
    reviews(double _star, string _comment, string _mostPopularAnimal) : stars(_star), comment(_comment), mostPopularAnimal(_mostPopularAnimal) {}
    reviews(){}
    void read_from_file(ifstream &in)
    {
        in >> stars >> comment >> mostPopularAnimal;
    }
    void save_to_file(ofstream &out)
    {
        out << stars << " " << comment << " " << mostPopularAnimal << endl;
    }
    void show()
    {
        cout << fixed << setprecision(2) << "Stars: " << stars << endl;
        cout << "Comment: " << comment << endl;
        cout << "Most Popular Animal: " << mostPopularAnimal << endl;
    }
    double get_stars() { return stars; }
    void get()
    {
        cout << "Enter the stars you want to rate (out of 10): ";
        cin >> stars;
        if(stars < 0) stars = 0;
        if(stars > 10) stars = 10;
        cout << "Now enter your comment: ";
        cin >> comment;
        cout << "Which was your favourite animal?\nANS: ";
        cin >> mostPopularAnimal;
        cout << "Thank you for your input" << endl;
        system("pause");
        system("cls");
    }
};