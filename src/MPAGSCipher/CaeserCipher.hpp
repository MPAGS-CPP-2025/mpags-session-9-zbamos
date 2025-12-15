#ifndef MPAGSCIPHER_CEASERCIPHER_HPP
#define MPAGSCIPHER_CEASERCIPHER_HPP

#include <string>
#include <vector>

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

    /**
     * \brief apply the caeser cipher to encrypt or decrypt the string
     * 
     * \param inputText the string to be encrypted/decrypted
     * \param encrypt decrypt(false) or encrypt(true) the input text
     * 
     * \returns encrypted/decrypted string
     */
    std::string applyCipher (const std::string& inputText, const bool encrypt) const;

private:
    std::size_t key_{0};

    const std::vector<char> alphabet_ = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    const std::size_t alphabetSize_{alphabet_.size()};

};

#endif    // MPAGSCIPHERCEASERCIPHER_HPP
