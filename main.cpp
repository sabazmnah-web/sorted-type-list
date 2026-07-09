#include <iostream>
#include "sortedtype.h"
#include "timestamp.h"

using namespace std;

int main() {
    SortedType<int> intList;

    cout << intList.LengthIs() << endl;

    intList.InsertItem(5);
    intList.InsertItem(7);
    intList.InsertItem(4);
    intList.InsertItem(2);
    intList.InsertItem(1);

    intList.ResetList();
    for (int i = 0; i < intList.LengthIs(); i++) {
        int item;
        intList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    int target6 = 6;
    bool found6;
    intList.RetrieveItem(target6, found6);
    if (found6) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    int target5 = 5;
    bool found5;
    intList.RetrieveItem(target5, found5);
    if (found5) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    if (intList.IsFull()) cout << "List is full" << endl;
    else cout << "List is not full" << endl;

    intList.DeleteItem(1);

    intList.ResetList();
    for (int i = 0; i < intList.LengthIs(); i++) {
        int item;
        intList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    if (intList.IsFull()) cout << "List is full" << endl;
    else cout << "List is not full" << endl;


    SortedType<timeStamp> timeList;

    timeList.InsertItem(timeStamp(15, 34, 23));
    timeList.InsertItem(timeStamp(13, 13, 2));
    timeList.InsertItem(timeStamp(43, 45, 12));
    timeList.InsertItem(timeStamp(25, 36, 17));
    timeList.InsertItem(timeStamp(52, 2, 20));

    timeStamp deleteTime(25, 36, 17);
    timeList.DeleteItem(deleteTime);

    timeList.ResetList();
    for (int i = 0; i < timeList.LengthIs(); i++) {
        timeStamp item;
        timeList.GetNextItem(item);
        item.Print();
        cout << endl;
    }

    return 0;
}
