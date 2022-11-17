#include<iostream>
#include <bits/stdc++.h>
#include<fstream>

class todolist
{
private:
    /* data */
public:
    std::string kegiatan;
    std::string hari[7]  = {"Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu"};
    std::map <std::string,std::string> dict;
    void terima();
    void tulis();
};