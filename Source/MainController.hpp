#pragma once

#include <memory>
#include "MainModel.hpp"

class MainController
{
    private:
        std::shared_ptr<MainModel> model;

    public:
        MainController(std::shared_ptr<MainModel> pModel = nullptr);
};

