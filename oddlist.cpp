void removeOdd(list<int>& li)
{
    if (li.begin() == li.end()) {        // list is empty
        return;
    }
    
    list<int>::iterator q = li.begin();
    while (q != li.end()) {
        if (*q % 2 == 1) {
            q = li.erase(q);
        } else {
            ++q;
        }
    }
}
