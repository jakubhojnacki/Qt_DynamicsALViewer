#include "MainController.hpp"

MainController::MainController(std::shared_ptr<MainModel> pModel) : model { pModel != nullptr ? pModel : std::shared_ptr<MainModel>(new MainModel()) } {
}
