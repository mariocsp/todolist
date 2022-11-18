#include "todolist.h"

void todolist::terima()
{
    for(int i = 0;i<7;i++)
    {
        std::cout<<"Masukan Agenda Anda Pada Hari "<<hari[i]<<" :";
        std::getline(std::cin,kegiatan);
        dict.insert({hari[i],kegiatan});
    }

}

void todolist::tulis()
{
    std::fstream fw("src/textcpp.txt", std::ofstream::out);
    std::map<std::string, std::string>::iterator it = dict.begin();

    if (fw.is_open())
    {
        while (it != dict.end())
        {
            fw << "agenda anda pada hari "<<it->first<<" adalah: "<<it->second<< "\n";
            it ++;
        }
        fw<<"\n";
        fw.close();
    }
    else std::cout << "\nProblem with opening file";
}