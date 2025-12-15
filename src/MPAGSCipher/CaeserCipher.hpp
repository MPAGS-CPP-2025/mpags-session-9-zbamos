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
    explicit CaeserCipher (const std::size_t& key);
    explicit CaeserCipher (const std::string& key);

    std::size_t key() const { return key_; };
    bool valid() const { return valid_; };

private:
    std::size_t key_{0}; ///< The cipher key
    bool valid_{false};
};

#endif    // MPAGSCIPHERCEASERCIPHER_HPP
