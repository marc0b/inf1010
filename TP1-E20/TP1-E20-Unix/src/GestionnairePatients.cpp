// TODO: Faire l'entête de fichier

// TODO: Inclure la définition de la classe appropriée

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

// TODO : compléter le Constructeur par defaut de la classe GestionnairePatients en utilisant une liste d'initialisation

// TODO ajouterPatient(const Patient& patient)
// Ajouter un patient au tableau patients_
// Si le tableau est plein, retourner false sinon faites l'ajout et retouner true

// TODO chercherPatient(const std::string& numeroAssuranceMaladie)
// Chercher un patient dans la liste patients_ par son numéro d'assurance maladie
// Retourner le pointeur vers le patient si trouvé, sinon retourner nullptr

//! Méthode  qui permet de charger les informations des patients depuis un fichier
//! \param nomFichier   Le nom du fichier à charger
//! \return             Un bool qui indique si le fichier a été chargé avec succès
bool GestionnairePatients::chargerDepuisFichier(const std::string& nomFichier)
{
	std::ifstream fichier(nomFichier);
	if (fichier)
	{
		// TODO : Envoyer chaque ligne à lireLignePatient()
	}
	std::cerr << "Le fichier " << nomFichier
		<< " n'existe pas. Assurez vous de le mettre au bon endroit.\n";

	return false;
}

// TODO afficher(std::ostream& stream)
// Afficher tous les patients contenus dans le tableau patients_ en utilisant le stream

// TODO getNbPatients() : retourner nbPatients_

//! Méthode qui lit les attributs d'un patient
//! \param ligne  Le string qui contient les attributs
bool GestionnairePatients::lireLignePatient(const std::string& ligne)
{
	std::istringstream stream(ligne);
	std::string nomPatient;
	std::string numeroAssuranceMaladie;
	std::string anneeDeNaissance;

	// TODO
	// Utiliser l'opérateur d'extraction (>>) depuis le stream
	// Pour extraire tout ce qui se trouve entre "" dans un stream,
	// il faut faire stream >> std::quoted(variable)
	// retourner true si l'opération a réussi, sinon false

	return false;
}