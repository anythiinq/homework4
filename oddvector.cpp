void removeOdd(vector<int>& v)
{
    if (v.begin() == v.end()) {        // vector is empty
        return;
    }
    
    vector<int>::iterator q = v.begin();
    while (q != v.end()) {
        if (*q % 2 == 1) {
            q = v.erase(q);
        } else {
            ++q;
        }
    }
}
