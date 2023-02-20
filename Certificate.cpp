#include "Certificate.h"
#include "Manage.h"
#include "Employee.h"


void Certificate::setCertificateID(const unsigned int& certificateID)
{
    mCertificateID = certificateID;
}
unsigned int Certificate::getCertificateID()
{
    return mCertificateID;
}

void Certificate::setCertificateName(const std::string& certificateName)
{
    mCertificateName = certificateName;
}
std::string Certificate::getCertificateName()
{
    return mCertificateName;
}

void Certificate::setCertificateDate(const std::string& certificateDate)
{
    mCertificateDate = certificateDate;
}
std::string Certificate::getCertificateDate()
{
    return mCertificateDate;
}


void Certificate::setCertificateRank(const unsigned int& certificateRank)
{
    mCertificateRank = certificateRank;
}
unsigned int Certificate::getCertificateRank()
{
    return mCertificateRank;
}

void Certificate::ShowInfo()
{
    std::cout << "Certificate Name: " << mCertificateName << '\n';
    std::cout << "Certificate ID: " << mCertificateID << '\n';
    std::cout << "Certificate Rank: " << mCertificateRank << '\n';
    std::cout << "Certificate Date: " << mCertificateDate << '\n';
}

void Certificate::addCertificate()
{

}

Certificate::Certificate() = default;
Certificate::Certificate(unsigned int certificateID, std::string certificateName, unsigned int certificateRank, std::string certificateDate)
:mCertificateID{certificateID}, mCertificateName{certificateName}, mCertificateRank{certificateRank}, mCertificateDate{certificateDate}
{

}
Certificate::~Certificate() = default;