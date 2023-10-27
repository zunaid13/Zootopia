#include "visitor.h"

#define STAFF_SAVE "staff.txt"

// global variables
class staff;
vector <staff*> all_staffs;

class staff{
    protected:
    string emergencyContact;
    set<days_of_week> workingDays;
    int experience_yrs;
    string name;
    double salary;

    public:
    virtual void show() = 0;
    virtual string type() = 0;
    virtual void read_from_file(ifstream &in) = 0;
    virtual void write_to_file(ofstream &out) = 0;
    virtual void get_from_admin() = 0;
    string get_contact() { return emergencyContact; }
    set<days_of_week> get_workingDays() { return workingDays; }
    int get_experience_yrs() { return experience_yrs; }
    string get_name() { return name; }
    double get_salary() { return salary; }
    void set_emergencyContact(string _emergencyContact) { emergencyContact = _emergencyContact; }
    void set_workingDays(set<days_of_week> _workingDays)
    {
        for(auto x : _workingDays)
            workingDays.insert(x);
    }
    void set_experience_yrs(int _experience_yrs) { experience_yrs = _experience_yrs; }
    void set_name(string _name) { name = _name; }
    void set_salary(double _salary) { salary = _salary; }
};

class AnimalSecurity : public staff{
    int totalRescues;
    public:
    int get_totalRescues() { return totalRescues; }
    void set_totalRescues(int _totalRescues) { totalRescues = _totalRescues; }
    void show()
    {
        cout << "---ANIMAL SECURITY---" << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Contact: " << emergencyContact << endl;
        cout << "Total Rescues: " << totalRescues << endl;
        cout << "Experience in years: " << experience_yrs << endl;
        cout << "Working days : ";
        for(auto x : workingDays)
            cout << e2s_days_of_week(x) << " ";
        cout << endl;
    }
    void get_from_admin()
    {
        cout << "---ANIMAL SECURITY---" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Salary: ";
        cin >> salary;
        cout << "Contact: ";
        cin >> emergencyContact;
        cout << "Total Rescues: ";
        cin >> totalRescues;
        cout << "Experience in years: ";
        cin >> experience_yrs;
        int tot_workingDays;
        cout << "Enter number of working days: ";
        cin >> tot_workingDays;
        tot_workingDays = min(tot_workingDays, 7);
        cout << "Saturday - Friday (1 to 7) Enter the serial numbers: ";
        workingDays.clear();
        for(int i = 0; i < tot_workingDays; i++)
        {
            int inp;
            cin >> inp;
            inp = (inp%7) + 1;
            workingDays.insert((days_of_week) (inp-1));
        }
    }
    string type() { return "AnimalSecurity"; }
    void read_from_file(ifstream &in)
    {
        in >> name >> salary >> emergencyContact >> totalRescues >> experience_yrs;
        int tot_workingDays;
        in >> tot_workingDays;
        workingDays.clear();
        for(int i = 0 ; i < tot_workingDays ; i++)
        {
            int temp;
            in >> temp;
            workingDays.insert((days_of_week) temp);
        }
    }
    void write_to_file(ofstream &out)
    {
        out << "Security" << endl;
        out << name << " " << salary << " " << emergencyContact << " " << totalRescues << " " << experience_yrs << endl;
        out << workingDays.size() << endl;
        for(auto x : workingDays)
            out << x << " ";
        out << endl;
    }
};

class Doctors : public staff {
    string specialization;
    public:
    string get_specialization() { return specialization; }
    void set_specialization(string _specialization) { specialization = _specialization; }
    void show()
    {
        cout << "---ANIMAL DOCTOR---" << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Contact: " << emergencyContact << endl;
        cout << "Specialization: " << specialization << endl;
        cout << "Experience in years: " << experience_yrs << endl;
        cout << "Working days : ";
        for(auto x : workingDays)
            cout << e2s_days_of_week(x) << " ";
        cout << endl;
    }
    void get_from_admin()
    {
        cout << "---ANIMAL SECURITY---" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Salary: ";
        cin >> salary;
        cout << "Contact: ";
        cin >> emergencyContact;
        cout << "Specialization: ";
        cin >> specialization;
        cout << "Experience in years: ";
        cin >> experience_yrs;
        int tot_workingDays;
        cout << "Enter number of working days: ";
        cin >> tot_workingDays;
        tot_workingDays = min(tot_workingDays, 7);
        cout << "Saturday - Friday (1 to 7) Enter the serial numbers: ";
        workingDays.clear();
        for(int i = 0; i < tot_workingDays; i++)
        {
            int inp;
            cin >> inp;
            inp = (inp%7) + 1;
            workingDays.insert((days_of_week) (inp-1));
        }
    }
    string type() { return "AnimalDoctor"; }

    void read_from_file(ifstream &in)
    {
        in >> name >> salary >> emergencyContact >> specialization >> experience_yrs;
        int tot_workingDays;
        in >> tot_workingDays;
        workingDays.clear();
        for(int i = 0 ; i < tot_workingDays ; i++)
        {
            int temp;
            in >> temp;
            workingDays.insert((days_of_week) temp);
        }
    }
    void write_to_file(ofstream &out)
    {
        out << "Doctors" << endl;
        out << name << " " << salary << " " << emergencyContact << " " << specialization << " " << experience_yrs << endl;
        out << workingDays.size() << endl;
        for(auto x : workingDays)
            out << x << " ";
        out << endl;
    }
};

class feeders : public staff {
    set <int> underCare;
    public:
    void show()
    {
        cout << "---ANIMAL FEEDER---" << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Contact: " << emergencyContact << endl;
        
        cout << "Animals being feed: " << underCare.size() << endl;
        for(auto x : underCare)
            cout << e2s_className((class_name) x) << endl;
        cout << "Experience in years: " << experience_yrs << endl;
        cout << "Working days : ";
        for(auto x : workingDays)
            cout << e2s_days_of_week(x) << " ";
        cout << endl;
    }
    void get_from_admin()
    {
        cout << "---ANIMAL SECURITY---" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Salary: ";
        cin >> salary;
        cout << "Contact: ";
        cin >> emergencyContact;
        
        cout << "Enter Animals being fed: ";
        int x, y;
        cin >> x;
        x = min(x, NameCount);
        for(int i = 0 ; i < x ; i++)
        {
            y = getAnimal();
            underCare.insert(y);
        }

        cout << "Experience in years: ";
        cin >> experience_yrs;
        int tot_workingDays;
        cout << "Enter number of working days: ";
        cin >> tot_workingDays;
        tot_workingDays = min(tot_workingDays, 7);
        cout << "Saturday - Friday (1 to 7) Enter the serial numbers: ";
        workingDays.clear();
        for(int i = 0; i < tot_workingDays; i++)
        {
            int inp;
            cin >> inp;
            inp = (inp%7) + 1;
            workingDays.insert((days_of_week) (inp-1));
        }
    }
    string type() { return "AnimalFeeder"; }


    // virtual functions fix
    void read_from_file(ifstream &in)
    {
        in >> name >> salary >> emergencyContact >> experience_yrs;
        int tot_animalsFeed;
        in >> tot_animalsFeed;
        underCare.clear();
        for(int i = 0 ; i < tot_animalsFeed ; i++)
        {
            int temp;
            in >> temp;
            underCare.insert(temp);
        }
        int tot_workingDays;
        in >> tot_workingDays;
        workingDays.clear();
        for(int i = 0 ; i < tot_workingDays ; i++)
        {
            int temp;
            in >> temp;
            workingDays.insert((days_of_week) temp);
        }
    }
    void write_to_file(ofstream &out)
    {
        out << "Feeder" << endl;
        out << name << " " << salary << " " << emergencyContact << " " << " " << experience_yrs << endl;
        out << underCare.size() << endl;
        for(auto x : underCare)
            out << x << " ";
        out << endl;
        out << workingDays.size() << endl;
        for(auto x : workingDays)
            out << x << " ";
        out << endl;
    }
};

void save_staffList()
{
    ofstream out(STAFF_SAVE);
    for(auto x : all_staffs)
        x->write_to_file(out);
}