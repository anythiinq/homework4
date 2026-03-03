void listAll(const Domain* d, string path) // two-parameter overload
{
    if (d == nullptr)
        return;

    if (d->subdomains().empty()) {
        cout << path << endl;
        return;
    }

    const vector<Domain*>& subs = d->subdomains();
    for (size_t i = 0; i < subs.size(); i++)
    {
        const Domain* child = subs[i];

        string newPath;
        if (path.empty())
            newPath = child->label();                 // root case: no leading dot
        else
            newPath = child->label() + "." + path;    // normal case

        listAll(child, newPath);
    }
}
