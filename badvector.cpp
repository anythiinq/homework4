void removeBad(vector<Movie*>& v)
{
    vector<Movie*>::iterator q = v.begin();
    while (q != v.end()) {
        if ((*q)->rating() < 50) {
            Movie* toBeErased = *q;
            q = v.erase(q);
            delete toBeErased;
        } else {
            ++q;
        }
    }
}
