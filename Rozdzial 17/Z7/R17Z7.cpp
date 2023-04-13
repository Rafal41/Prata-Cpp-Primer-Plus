#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>

class Store
{
    private:
        std::ostream & os;
    public:
        Store(std::ostream & of) : os(of) {}
        bool operator()(const std::string & str);
};
bool Store::operator()(const std::string & str)
        {
            std::size_t len = str.size();
            os.write((char*) &len, sizeof(std::size_t));
            os.write(str.data(), len);
            if (os)
                return true;
            else
                return false;
        }

inline void ShowStr(const std::string & str) { std::cout << str << std::endl;}
void GetStrs(std::ifstream & fin, std::vector<std::string> & vistr);
int main()
{
    using namespace std; 
    vector<string> vostr;
    string temp;

    // acquire strings
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin,temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    // store in a file
    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    // recover file contents
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}

void GetStrs(std::ifstream & fin, std::vector<std::string> & vistr)
{
    using namespace std;
    size_t len;
   
    while ( fin.read((char *) &len, sizeof(std::size_t)))
    {
        char temp[len+1];
        for (int i = 0; i < len; i++)
            fin.get(temp[i]);
        temp[len] = '\0';
        vistr.push_back(temp);
    }

}