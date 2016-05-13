#include <QCoreApplication>
#include <linkedlist.h>

using namespace std;

int main()
{
    linkedList m_list = linkedList(3);
    m_list.addNode(4);
    m_list.addNode(8);
    m_list.addNode(15);

    cout<< (m_list.getHead())->getData() <<endl;

}
