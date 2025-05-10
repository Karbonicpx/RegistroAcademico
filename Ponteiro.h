#ifndef _ELEMENTO_H_
#define _ELEMENTO_H_

// Um gabarito/template se define inteiramente no .h
template<class TIPO>
class Ponteiro
{
private:

    TIPO* pInfo;
    Ponteiro<TIPO>* pProximo;
  
public:
    Ponteiro();
    ~Ponteiro();

    void SetProximo(Ponteiro<TIPO>* pp);
    Ponteiro<TIPO>* GetProx();

    void SetInfo(TIPO* pi);
    TIPO* GetInfo();
};

template<class TIPO>
Ponteiro<TIPO>::Ponteiro() {
    pProximo = nullptr;
    pInfo = nullptr;
}

template<class TIPO>
Ponteiro<TIPO>::~Ponteiro() {
    pProximo = nullptr;
    pInfo = nullptr;
}

template<class TIPO>
void Ponteiro<TIPO>::SetProximo(Ponteiro<TIPO>* pp) {
    pProximo = pp;
}

template<class TIPO>
Ponteiro<TIPO>* Ponteiro<TIPO>::GetProx() {
    return pProximo;
}

template<class TIPO>
void Ponteiro<TIPO>::SetInfo(TIPO* pi) {
    pInfo = pi;
}

template<class TIPO>
TIPO* Ponteiro<TIPO>::GetInfo() {
    return pInfo;
}


#endif
