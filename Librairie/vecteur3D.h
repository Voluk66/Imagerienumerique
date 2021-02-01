#ifndef VECTEUR3D_H_
#define VECTEUR3D_H_

#include <vector>
#include <string>

class FonctionMath{
  //Methode
public:
  float ProduitScalaire(std::vector<float> p_1, std::vector<float> p_2);

  std::vector<float> ProduitVectoriel(std::vector<float> p_1, std::vector<float> p_2);

  std::vector<float> NormalisationVecteur3D(std::vector<float> p_vector);
};
#endif
