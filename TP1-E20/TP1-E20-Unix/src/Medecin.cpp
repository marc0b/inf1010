// TODO: Faire l'entête de fichier

// TODO: Inclure la définition de la classe appropriée

#include <iostream>
#include "typesafe_enum.h"

constexpr std::size_t CAPACITE_PATIENTS_INITIALE = 2;

// TODO compléter le Constructeur par paramètre  de la classe Medecin avec une liste d'initialisation
// Utilisez CAPACIT_PATIENTS_INITIALE pour la taille initiale de patientsAssocies_ (tableau de taille dynamique)

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

// TODO getNumeroLicence() : retourner le numéro de licence

// TODO getEstActif() : retourne l'état du médecin (attribut estActif_)

// TODO getSpecialite() : retourner la spécialité

// TODO getCapacitePatientAssocies() : retourner la capacité du tableau patientsAssocies_

// TODO getNombrePatientsAssocies() : retourner le nombre de patients dans le tableau patientsAssocies_

// TODO getPatientsAssocies() : retourner le tableau des patients associés au médecin (attribut patientsAssocies_)

// TODO setNom(const std::string& nom) : set le nom

// TODO setNumeroLicence(const std::string& numeroLicence) : set  le numéro de licence

// TODO setEstActif(bool estActif) : set le estActif

// TODO setSpecialite(Specialite specialite) : set la spécialité
