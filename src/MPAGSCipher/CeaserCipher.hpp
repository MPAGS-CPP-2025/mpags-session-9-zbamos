#ifndef MPAGSCIPHER_CEASERCIPHER_HPP
#define MPAGSCIPHER_CEASERCIPHER_HPP

#include <string>

/**
 * \file CeaserCipher.hpp
 * \brief Contains the declaration of the class for implementing the Ceaser 
 */

/**
 * \brief CeaserCipher Class
 *
 *
 * \param key ceaser cipher key
 */
class CeaserCipher {
    public:
    CeaserCipher (std::string key);

    std::string key; ///< The cipher key
};

#endif    // MPAGSCIPHERCEASERCIPHER_HPP
