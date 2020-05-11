// TODO: Faire l'entête de fichier

// TODO: Inclure la définition de la classe appropriée
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>

constexpr size_t CAPACITE_MEDECINS_INITIALE = 2;
constexpr int MEDECIN_INEXSISTANT = -1;

// TODO : Constructeur par défaut en utilisant la liste d'initialisation
// Utilisez CAPACITE_MEDECINS_INITIALE pour la taille initiale de medecins_ (tableau de taille dynamique)

//! Méthode qui ajoute un médecin à la liste des patients
//! \param medecin Le medecin à ajouter
void GestionnaireMedecins::ajouterMedecin(std::unique_ptr<Medecin> medecin)
{
	constexpr unsigned int AUGMENTATION_NOMBRE_MEDECINS = 2;
	// TODO
	// Verifier si assez de mémoire est allouée
	// Si pas assez de mémoire, doubler la taille du tableau (AUGMENTATION_NOMBRE_MEDECINS)
	// Ajouter le medecin au tableau
	// Utiliser std::unique_ptr<std::shared_ptr<Medecin>[]> ainsi que std::move pour transférer le ownership
	// du tableau temporaire vers le tableau membre medecins_;
}

// TODO : compléter chercherMedecin(const std::string& numeroLicence)
// Chercher un medecin dans la liste medecins par son numéro de licence
// Retourner le pointeur vers le medecin si trouvé, sinon retourner nullptr

//! Méthode  qui permet de charger les informations des medecins depuis un fichier
//! \param nomFichier   Le nom du fichier à charger
//! \return             Un bool qui indique si le fichier a été chargé avec succes
bool GestionnaireMedecins::chargerDepuisFichier(const std::string& nomFichier)
{
	std::ifstream fichier(nomFichier);
	if (fichier)
	{
		// TODO : Envoyer chaque ligne à lireLigneMedecin()
	}
	std::cerr << "Le fichier " << nomFichier
		<< " n'existe pas. Assurez vous de le mettre au bon endroit.\n";

	return false;
}

// TODO : compléter supprimerMedecin(const std::string& numeroLicence)
// Chercher l'index du medecin dans le tableau medecins_ en faisant appel à la fonction trouverIndexMedecin
// Rendez le medecin inactif. Attention : il ne fait pas retirer le medecin du tableau medecins_
// Retourner true si le medein est trouvé et rendu inactif, sinon retourné false

// TODO : afficher(std::ostream& stream)
// Afficher tous les medecins contenus dans le tableau medecins_ en utilisant le stream

// TODO : getNbMedecins() : retourner nbMedecins_

// TODO : getCapaciteMedecins() : retourner capaciteMedecins_

//! Méthode qui lit les attributs d'un medecin
//! \param ligne  Le string qui contient les attributs
bool GestionnaireMedecins::lireLigneMedecin(const std::string& ligne)
{
	std::istringstream stream(ligne);
	std::string nomMedecin;
	std::string numeroLicence;
	int indexSpecialite;

	// TODO
	// Utiliser l'opérateur d'extraction (>>) depuis le stream
	// Pour extraire tout ce qui se trouve entre "" dans un stream,
	// il faut faire stream >> std::quoted(variable)

	// Hint : utiliser la fonction to_enum<Medecin::Specialite, int>(variable) pour convertir 
	// l'indice de la spécialité en enum Specilité
	// retourner true si l'opération a réussi, sinon false
	return false;
}

// TODO : trouverIndexMedecin(const std::string& numeroLicence)
// Retourner l'indexe du medecin comportant le numéro de licence envoyé en paramètre
// Si le medecin n'existe pas, retourner -1 (MEDECIN_INEXSISTANT)