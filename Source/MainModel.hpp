#pragma once

#include <QString>

class MainModel
{
    private:
        QString path;

    public:
        MainModel();

    public:
        QString getPath() const;
        void setPath(const QString& pPath);
};

