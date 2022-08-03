#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main()
{   
    int count = 0;
    std::string path;
    std::string buffer;
    std::ifstream fin;
    std::vector<std::string> words;
    std::cout << "input the path";
    std::cin >> path;   
    fin.open(path);

    if (fin.is_open())
    {

        while (getline(fin, buffer))
        {             
            words.push_back(buffer);
            std::cout << words[count] << std::endl;
            count++;
        }
        fin.close();
    }
    else
    {
        std::cout << "some problem, the file address seems to be wrong";
    }   
}



























