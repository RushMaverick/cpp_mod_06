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
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}
