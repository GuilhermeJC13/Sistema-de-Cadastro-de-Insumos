#ifndef LOCAL_H
#define LOCAL_H

#include "insumo.h"
#include <iostream>
#include <vector>

class Local {

    private:
        std::string sigla;
        std::vector <Insumo *> insumos;
    
    public:
        std::string getSigla();
        std::vector <Insumo *> getInsumos();

        void setSigla(std::string);
        void setInsumo(Insumo *);

        void apagarInsumo(int);
        void apagarTodosInsumos();
        
        void recadastraInsumo(int);

        void alterarEstoque(int, int);

};

#endif