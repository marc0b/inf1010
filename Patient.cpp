// TODO: Faire l'entête de fichier
#include "Patient.h"

// TODO: Inclure la définition de la classe appropriée
#include <iostream>
#include <string>

// TODO : compléter Constructeur par paramètre  de la classe Patient en utilisant la liste d'initialisation

Patient::Patient(const std::string& nom, const std::string& dateDeNaissance, const std::string& numeroAssuranceMaladie)
	: nom_(nom),  dateDeNaissance_(dateDeNaissance), numeroAssuranceMaladie_(numeroAssuranceMaladie) {}

//! Méthode qui affiche les informations d'un patient
//! \param stream Le stream dans lequel afficher.
void Patient::afficher(std::ostream& stream)
{
	// Ne modifiez pas cette fonction
	stream << "Patient: " << nom_ << " | Date de naissance: " << dateDeNaissance_
		<< " | Numero d\'assurance maladie: " << numeroAssuranceMaladie_;
}

// TODO getNom() : retourner le nom
const std::string& Patient::getNom()
{
	return nom_;
}

// TODO getNumeroAssuranceMaladie() : retourner le numéro d'assurance maladie
const std::string& Patient::getNumeroAssuranceMaladie()
{
	return numeroAssuranceMaladie_;
}

// TODO getDateDeNaissance() : retourner la date de naissance
const std::string& Patient::getDateDeNaissance()
{
	return dateDeNaissance_;
}


// TODO setNom(const std::string& nom) : set le nom
void Patient::setNom(const std::string& nom)
{
	nom_ = nom;
}


// TODO setNumeroAssuranceMaladie(const std::string& numeroAssuranceMaladie) : set le numéro d'assurance maladie
void Patient::setNumeroAssuranceMaladie(const std::string& numeroAssuranceMaladie)
{
	numeroAssuranceMaladie_ = numeroAssuranceMaladie;
}


// TODO setDateDeNaissance(const std::string& dateDeNaissance) : set la date de naissance
void Patient::setDateDeNaissance(const std::string& dateDeNaissance)
{
	dateDeNaissance_ = dateDeNaissance;
}



