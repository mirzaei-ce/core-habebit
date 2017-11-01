// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HABEBIT_QT_HABEBITADDRESSVALIDATOR_H
#define HABEBIT_QT_HABEBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class HabebitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HabebitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Habebit address widget validator, checks for a valid habebit address.
 */
class HabebitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HabebitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // HABEBIT_QT_HABEBITADDRESSVALIDATOR_H
