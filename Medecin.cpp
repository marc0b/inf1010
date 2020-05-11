// TODO: Faire l'entête de fichier
#include "Medecin.h"
// TODO: Inclure la définition de la classe appropriée

#include <iostream>
#include "typesafe_enum.h"

constexpr std::size_t CAPACITE_PATIENTS_INITIALE = 2;

// TODO compléter le Constructeur par paramètre  de la classe Medecin avec une liste d'initialisation
// Utilisez CAPACIT_PATIENTS_INITIALE pour la taille initiale de patientsAssocies_ (tableau de taille dynamique)

// probleme ajouter tableau patientsAssocies

Medecin::Medecin(const std::string& nom, const std::string& numeroLicence, Specialite specialite)
 : nom_(nom), numeroLicence_(numeroLicence), specialite_(specialite), capacitePatientsAssocies_(CAPACITE_PATIENTS_INITIALE), patientsAssocies_(std::make_shared<Patient[]>(CAPACITE_PATIENTS_INITIALE)) {} 

//! Méthode qui ajoute un patien à liste des patients associes au medecin.
//! \param Patient patient à ajouter
void Medecin::ajouterPatient(Patient patient)
{
	static constexpr unsigned int AUGMENTATION_NOMBRE_PATIENTS = 2;
	// TODO
	// Verifier si assez de mémoire est allouée
	// Si pas assez de mémoire, doubler la taille du tableau (AUGMENTATION_NOMBRE_PATIENTS)
	// Ajouter le patient au tableau
	// Utiliser std::unique_ptr<std::shared_ptr<Patient>[]> ainsi que std::move pour transférer le ownership
	// du tableau temporaire vers le tableau membre patientsAssocies_;
}

// TODO supprimerPatient(const std::string& numeroAssuranceMaladie)
bool Medecin::supprimerPatient(const std::string& numeroAssuranceMaladie)
{
	return false;
}

//! Méthode pour afficher les informations du medecin
//! \param stream dans lequel on ecrit les informations du medecin
void Medecin::afficher(std::ostream& stream)
{
	static const std::string SPECIALITES[] = {  "Generaliste",
												"Cardiologue",
												"Dermatologue",
												"Gynecologue",
												"Pediatre",
												"Ophtalmologue",
												"Autre"};
	auto index = enum_value(specialite_);
	assert(valid_as_enum<Specialite>(index));
	std::string specialite = SPECIALITES[index];

	std::string statut = estActif_ ? "Actif" : "Inactif";

    stream << "\nMedecin: " << nom_
           << "\n\tNumero de licence: " << numeroLicence_ 
		   << "\n\tSpecialite: " << specialite
		   << "\n\tStatut: " << statut
           << (nbPatientsAssocies_ == 0 ? "\n\tAucun patient n'est suivi par ce medecin." : "\n\tPatients associes:");

	// TODO : afficher les patients associés au medecin
    stream << '\n';
}


// TODO getNom() : retourner le nom
const std::string& Medecin::getNom()
{
	// TODO: insert return statement here
}



// TODO getNumeroLicence() : retourner le numéro de licence
const std::string& Medecin::getNumeroLicence()
{
	// TODO: insert return statement here
}


// TODO getEstActif() : retourne l'état du médecin (attribut estActif_)
bool Medecin::getEstActif()
{
	return false;
}

// TODO getSpecialite() : retourner la spécialité
const Medecin::Specialite Medecin::getSpecialite()
{
	return Specialite();
}

// TODO getCapacitePatientAssocies() : retourner la capacité du tableau patientsAssocies_
const size_t Medecin::getCapacitePatientAssocies()
{
	return size_t();
}


// TODO getNombrePatientsAssocies() : retourner le nombre de patients dans le tableau patientsAssocies_
const size_t Medecin::getNombrePatientsAssocies()
{
	return size_t();
}

// TODO getPatientsAssocies() : retourner le tableau des patients associés au médecin (attribut patientsAssocies_)
std::shared_ptr<std::shared_ptr<Patient>[]> Medecin::getPatientsAssocies()
{
	return std::shared_ptr<std::shared_ptr<Patient>[]>();
}

// TODO setNom(const std::string& nom) : set le nom
void Medecin::setNom(const std::string& nom)
{
}


// TODO setNumeroLicence(const std::string& numeroLicence) : set  le numéro de licence
void Medecin::setNumeroLicence(const std::string& numeroLicence)
{
}


// TODO setEstActif(bool estActif) : set le estActif
void Medecin::setEstActif(bool estActif)
{
}

// TODO setSpecialite(Specialite specialite) : set la spécialité
void Medecin::setSpecialite(Specialite specialite)
{
}