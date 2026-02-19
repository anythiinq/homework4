void removeOdd(list<int>& li)
{
    list<int>::iterator q = li.begin();
    while (q != li.end()) {
        if (*q % 2 == 1) {
            q = li.erase(q);
        } else {
            ++q;
        }
    }
}
