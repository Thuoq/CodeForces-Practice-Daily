#include "LinkList.h"
using namespace std;

int main()
{
    LinkList link_list;
    link_list.push_back(4);
    link_list.push_back(3);
    link_list.insert_node(10,0);
    link_list.insert_node(100, 1);
    link_list.display_element();
    link_list.delete_node(3);
    cout << endl;
    link_list.display_element();

}   