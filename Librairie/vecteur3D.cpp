#include <math.h>
#include "vecteur3D.h"
#include <iostream>

float FonctionMath::ProduitScalaire(std::vector<float> p_1, std::vector<float> p_2){
float x = p_1.at(0);
float y = p_1.at(1);
float z = p_1.at(2);
float a = p_2.at(0);
float b = p_2.at(1);
float c = p_2.at(2);
float res = (x * a) + (y * b) + (z * c);
return res;
}

std::vector<float> FonctionMath::ProduitVectoriel(std::vector<float> p_1, std::vector<float> p_2){
    std::vector<float> res;
    float x = p_1.at(0);
    float y = p_1.at(1);
    float z = p_1.at(2);
    float a = p_2.at(0);
    float b = p_2.at(1);
    float c = p_2.at(2);
    float resx = (y * c) - (z * b) ;
    float resy = (z * a) - (x * c) ;
    float resz = (x * b) - (y * a) ;
    res.push_back(resx);
    res.push_back(resy);
    res.push_back(resz);
    return res;
  }

std::vector<float> FonctionMath::NormalisationVecteur3D(std::vector<float> p_vector){
  std::vector<float>VecteurNormalise ;
  float x = p_vector.at(0);;
  float y = p_vector.at(1);;
  float z = p_vector.at(2);
  float norme = ProduitScalaire(p_vector,p_vector);
  norme = sqrt(norme);
  x = x / norme;
  y = y / norme;
  z = z / norme;
  VecteurNormalise.push_back(x);
  VecteurNormalise.push_back(y);
  VecteurNormalise.push_back(z);
  return(VecteurNormalise);
}
