#include "Identify.hpp"
class Serializer;

Serializer::Serializer(){
//Initialize struct Data
}

Serializer::~Serializer(){

}

Serializer::Serializer(const Serializer &other){

}

Serializer &Serializer::operator=(const Serializer &other){

}

uintptr_t Serializer::serialize(Data *ptr){

}

Data *Serializer::deserialize(uintptr_t raw){

}
