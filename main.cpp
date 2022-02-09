#include <iostream>

#include "skiplist.hpp"

#define FILE_PATH "./store/dumpFile"

int main()
{
    SkipList<int, std::string> skiplist(5);

    skiplist.insert_element(1, "zou");
    skiplist.insert_element(2, "wei");
    skiplist.insert_element(80, "algorithm");
    skiplist.insert_element(3, "K/V database");

    std::cout << "skiplist size: " << skiplist.size() << std::endl;

    skiplist.dump_file();

    skiplist.search_element(3);
    skiplist.search_element(2);

    skiplist.display_list();

    skiplist.delete_element(1);

    std::cout << "skiplist size: " << skiplist.size() << std::endl;

    skiplist.display_list();
}