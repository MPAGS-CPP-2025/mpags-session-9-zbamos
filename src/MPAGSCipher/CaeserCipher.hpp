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
class CaeserCipher {
public:
    /**
     * \brief Create a new CaeserCipher with the given key
     * 
     * \param key the key to use in the cipher
     */
    explicit CaeserCipher (const std::size_t& key);

    /**
     * \brief Create a new CaeserCipher, converting string to key
     * 
     * \param key the stirng to convery into the ciphers key
     */
    explicit CaeserCipher (const std::string& key);

    std::size_t key_{0};

};

#endif    // MPAGSCIPHERCEASERCIPHER_HPP
