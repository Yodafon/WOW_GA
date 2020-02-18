#ifndef POPULATION_H
#define POPULATION_H


class Population
{
    public:
        Population();
        virtual ~Population();

        Item[] Getpopulation() { return population; }
        void Setpopulation(Item[] val) { population = val; }

    protected:

    private:
        Item[] population;
};

#endif // POPULATION_H
