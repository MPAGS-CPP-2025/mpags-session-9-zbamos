#ifndef MPAGSCIPHER_CIPHERMODE_HPP
#define MPAGSCIPHER_CIPHERMODE_HPP
/**
 * \file contains the enum CipherMode
 * \brief The cipher mode encrypt or decrypt
 */
/**
 * \enum CipherMode
 * \brief defines mode for cipher operation
 */
enum class CipherMode {
    Encrypt, ///< encrypt the text
    Decrypt ///< decrypt the textß
};
#endif    // MPAGSCIPHER_CIPHERMODE_HPP
