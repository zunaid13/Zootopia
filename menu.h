// remove this part later
#include <bits/stdc++.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

// preprocessor macros
#define SETTINGS "setting.txt"
#define README "readme.txt"

// global variables
enum _color_codes
{
    black_on_black,
    indigo_on_black,
    green_on_black,
    blue_on_black,
    red_on_black,
    purple_on_black,
    yellow_on_black,
    white_on_black,
    grey_on_black,
    indigo_on_white = 113,
    green_on_white,
    blue_on_white,
    red_on_white,
    purple_on_white,
    yellow_on_white,
    grey_on_white,
    black_on_white,
    white_theme = 188,
    white_selected,
    white_not_selected = 176
};

enum _control_characters
{
    backspace = 8,
    enter = 13,
    escape = 27,
    tilde = 96,
    stilde = 126,
    up_arrow = 72,
    down_arrow = 80,
    solid_bar = 219,
    empty_bar = 177
};

enum _color_codes selected, not_selected, theme;

// function prototypes
void color(int color);
void gotoxy(int x, int y);

// function definitions
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// classes and their definitions
class
{
public:
    void print_theme()
    {
        color(theme);
        // cout << "This is a theme" << endl;
            cout << "\n"
"    .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n"
"   | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n"
"   | |   ________   | || |     ____     | || |     ____     | || |  _________   | || |      ____    | || |   _______    | || |     _____    | || |      __      | |\n"
"   | |  |  __   _|  | || |   .'    `.   | || |   .'    `.   | || | |  _   _  |  | || |    .'    `.  | || |  |_   __ \\   | || |    |_   _|   | || |     /  \\     | |\n"
"   | |  |_/  / /    | || |  /  .--.  \\  | || |  /  .--.  \\  | || | |_/ | | \\_|  | || |   /  .--.  \\ | || |    | |__) |  | || |      | |     | || |    / /\\ \\    | |\n"
"   | |     .'.' _   | || |  |  |  |  |  | || |  |  |  |  |  | || |     | |      | || |   |  |  |  | | || |    |  ___/   | || |      | |     | || |   / ____ \\   | |\n"
"   | |   _/ /__/ |  | || |  \\  `--'  /  | || |  \\  `--'  /  | || |    _| |_     | || |   \\  `--'  / | || |   _| |_      | || |     _| |_    | || | _/ /    \\ \\_ | |\n"
"   | |  |________|  | || |   `.____.'   | || |   `.____.'   | || |   |_____|    | || |    `.____.'  | || |  |_____|     | || |    |_____|   | || ||____|  |____|| |\n"
"   | |              | || |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n"
"   | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n"
"    '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n";


        color(not_selected);
    }
    void start_up()
    {
        color(theme);
        cout << "\t\t  _____                         ______         _               \n"
           "\t\t |  __ \\                       |  ____|       | |              \n"
           "\t\t | |__) |_ __   ___  ___  ___  | |__    _ __  | |_   ___  _ __  \n"
           "\t\t |  ___/| '__| / _ \\/ __|/ __| |  __|  | '_ \\ | __| / _ \\| '__| \n"
           "\t\t | |    | |   |  __/\\__ \\\\__ \\ | |____ | | | || |_ |  __/| |    \n"
           "\t\t |_|    |_|    \\___||___/|___/ |______||_| |_| \\__| \\___||_|    \n"
           "\t\t                                                              \n"
           "\t\t                                                              \n"
           "\t\t  _            _____                 _    _                     \n"
           "\t\t | |          / ____|               | |  (_)                    \n"
           "\t\t | |_   ___   | |       ___   _ __  | |_  _  _ __   _   _   ___ \n"
           "\t\t | __| / _ \\  | |      / _ \\ | '_ \\ | __|| || '_ \\ | | | | / _ \\\n"
           "\t\t | |_ | (_) | | |____ | (_) || | | || |_ | || | | || |_| ||  __/\n"
           "\t\t  \\__| \\___/   \\_____| \\___/ |_| |_| \\__||_||_| |_| \\__,_| \\___|" << endl;
        char ch;
        while (1)
        {
            ch = getch();
            if (ch == enter)
                break;
        }
        system("cls");
        color(not_selected);
    }
} ascii_art;

class
{
private:
    string text = "This is a project ZOOTOPIA\n"
                  "-You can use this app to properly manage a zoo.\n"
                  "-Usable for both admins in charge of the zoo and also visitors.\n"
                  "-Please follow the onscreen instructions or else the program might crash.\n"
                  "-Only use the app in fullscreen mode to avoid printing issues.\n";

public:
    void CreateReadMeFile()
    {
        ofstream fo;
        fo.open(README);
        fo << text << endl;
        fo.close();
    }

    void OpenReadMeFile()
    {
        system("cls");
        cout << text << endl;
        system("pause");
    }
} read_me_file;

class SET
{
private:
    bool dark_mode;
    string dark_bg = "COLOR 2";
    string white_bg = "COLOR B7";
    string master_password;
    double children_price, adult_price;

public:
    void load_settings()
    {
        ifstream fi;
        fi.open(SETTINGS, ios::binary);

        if (fi)
        {
            string temp;
            char ch;
            // fi >> temp >> ch >> dark_mode;
            // fi >> temp >> ch >> master_password;
            // fi >> adult_price >> children_price;
            fi.read((char *) &(*this), sizeof(SET));
        }
        else
        {
            dark_mode = 1;
            master_password = "admin";
            adult_price = 100;
            children_price = 50;
        }
        if (dark_mode)
        {
            system(dark_bg.c_str());
            selected = yellow_on_black;
            not_selected = red_on_black;
            theme = green_on_black;
        }
        else
        {
            system(white_bg.c_str());
            selected = white_selected;
            not_selected = white_not_selected;
            theme = white_theme;
        }

        fi.close();
    }

    void save_settings()
    {
        ofstream fo;
        fo.open(SETTINGS, ios::binary);
        // fo << "DarkMode = " << dark_mode << endl;
        // fo << "MasterPassword = " << master_password << endl;
        // fo << adult_price << " " << children_price << endl;
        fo.write((char *) &(*this), sizeof(SET));
        fo.close();
    }

    void toggle_darkmode()
    {
        dark_mode = !dark_mode;
        if (dark_mode)
        {
            system(dark_bg.c_str());
            selected = yellow_on_black;
            not_selected = red_on_black;
            theme = green_on_black;
        }
        else
        {
            system(white_bg.c_str());
            selected = white_selected;
            not_selected = white_not_selected;
            theme = white_theme;
        }
        save_settings();
    }

    bool check_password(string inp)
    {
        return inp == master_password;
    }

    void change_password(string inp)
    {
        master_password = inp;
        save_settings();
    }

    double get_childrenPrice()
    {
        return children_price;
    }

    double get_adultPrice()
    {
        return adult_price;
    }

    void set_childrenPrice(double price)
    {
        children_price = price;
        save_settings();
    }
    
    void set_adultPrice(double price)
    { 
        adult_price = price;
        save_settings();
    }

} settings;

class Menu
{
private:
    vector<string> options;
    vector<bool> opt_selected;
    int counter, x_offset, y_offset, previous;

public:
    Menu(int _x_offset, int _y_offset, vector<string> v)
    {
        x_offset = _x_offset;
        y_offset = _y_offset;
        counter = 0;
        for (auto x : v)
        {
            options.push_back(x);
            if (opt_selected.empty())
                opt_selected.push_back(true);
            else
                opt_selected.push_back(false);
        }
    }

    void print()
    {
        for (int i = 0; i < options.size(); i++)
        {
            gotoxy(x_offset, y_offset + i);
            if (opt_selected[i])
                color(selected);
            else
                color(not_selected);
            if (opt_selected[i] == true)
                cout << "-->>>";
            else
                cout << "     ";
            cout << options[i];
        }
        gotoxy(0, 0);
    }

    int call()
    {
        // system("cls");
        // ascii_art.print_theme();
        while (1)
        {
            print();
            char key;
            key = getch();
            if (key == -32 || key == 0)
                key = _getch();
            if (key == up_arrow)
                counter = (counter + options.size() - 1) % options.size();
            if (key == down_arrow)
                counter = (counter + 1) % options.size();
            if (key == enter)
            {
                system("cls");
                return counter + 1;
            }
            opt_selected[counter] = true;
            opt_selected[(counter + 1) % options.size()] = false;
            opt_selected[(counter + options.size() - 1) % options.size()] = false;
        }
    }
};
