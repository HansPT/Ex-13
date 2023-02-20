#ifndef __CERTIFICATE__
#define __CERTIFICATE__

#include "include.h"

class Certificate
{
private:
    unsigned int mCertificateID;
    std::string mCertificateName;
    unsigned int mCertificateRank;
    std::string mCertificateDate;

public:
    void setCertificateID(const unsigned int& certificateID);
    unsigned int getCertificateID();

    void setCertificateName(const std::string& certificateName);
    std::string getCertificateName();

    void setCertificateRank(const unsigned int& certificateRank);
    unsigned int getCertificateRank();

    void setCertificateDate(const std::string& certificateDate);
    std::string getCertificateDate();
    
    void addCertificate();

    void ShowInfo();

    Certificate();
    Certificate(unsigned int certificateID, std::string certificateName, unsigned int certificateRank, std::string certificateDate);
    ~Certificate();
};




#endif