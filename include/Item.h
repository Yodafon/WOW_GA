#ifndef ITEM_H
#define ITEM_H


class Item
{
    public:
        Item();
        virtual ~Item();

        unsigned int Getid() { return id; }
        void Setid(unsigned int val) { id = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string GetitemClassId() { return itemClassId; }
        void SetitemClassId(string val) { itemClassId = val; }
        string GetitemSubClassId() { return itemSubClassId; }
        void SetitemSubClassId(string val) { itemSubClassId = val; }

    protected:

    private:
        unsigned int id;
        string name;
        string itemClassId;
        string itemSubClassId;
};

#endif // ITEM_H
