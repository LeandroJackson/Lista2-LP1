#ifndef MEDICO_H_INCLUDED
#define MEDICO_H_INCLUDED

class Medicos{
    public:
        Medicos();
        virtual ~Medicos();
        virtual void Atendimento() = 0;
        virtual void imp() = 0;

    private:
};

#endif // MEDICO_H_INCLUDED
