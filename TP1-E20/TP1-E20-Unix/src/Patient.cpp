// TODO: Faire l'entête de fichier

// TODO: Inclure la définition de la classe appropriée
#include <iostream>
#include <string>

// TODO : compléter Constructeur par paramètre  de la classe Patient en utilisant la liste d'initialisation

//! Méthode qui affiche les informations d'un patient
//! \param stream Le stream dans lequel afficher.
void Patient::afficher(std::ostream& stream)
{
	// Ne modifiez pas cette fonction
	stream << "Patient: " << nom_ << " | Date de naissance: " << dateDeNaissance_
		<< " | Numero d\'assurance maladie: " << numeroAssuranceMaladie_;
}

// TODO getNom() : retourner le nom

// TODO getNumeroAssuranceMaladie() : retourner le numéro d'assurance maladie

// TODO getDateDeNaissance() : retourner la date de naissance

// TODO setNom(const std::string& nom) : set le nom

// TODO setNumeroAssuranceMaladie(const std::string& numeroAssuranceMaladie) : set le numéro d'assurance maladie

// TODO setDateDeNaissance(const std::string& dateDeNaissance) : set la date de naissance