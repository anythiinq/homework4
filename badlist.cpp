void removeBad(list<Movie*>& li)
{
    list<Movie*>::iterator q = li.begin();
    while (q != li.end()) {
        if ((*q)->rating() < 50) {
            Movie* toBeErased = *q;
            q = li.erase(q);
            delete toBeErased;
        } else {
            ++q;
        }
    }
}
