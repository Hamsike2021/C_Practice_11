class Farm_Animal: public Animal
{
public:
    string resource;
    Farm_Animal(string name,string feature,string sound,string resource): Animal(name,feature,sound)
    {
        this->resource= resource;
    }
    Farm_Animal& get_source(string res)
    {
        int find = false;
        for (int i = 0; i < resource.size(); i++)
        {
            if(res == resource[i]) find++;
        }
        if(find) cout << "Got "<< res << " from "<< name << endl;
        else cout<< name << " don't have" << res<< endl;
    }
};
