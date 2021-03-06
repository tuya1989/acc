#include "acc_main.hpp"
#include <rtt/Component.hpp>
#include <iostream>

namespace acc {

  acc_main::acc_main(std::string const& name) : TaskContext(name){
    std::cout << "acc_main constructed !" <<std::endl;
  }

  bool acc_main::configureHook(){
    std::cout << "acc_main configured !" <<std::endl;
    return true;
  }

  bool acc_main::startHook(){
    std::cout << "acc_main started !" <<std::endl;
    return true;
  }

  void acc_main::updateHook(){
    std::cout << "acc_main executes updateHook !" <<std::endl;
  }

  void acc_main::stopHook() {
    std::cout << "acc_main executes stopping !" <<std::endl;
  }

  void acc_main::cleanupHook() {
    std::cout << "acc_main cleaning up !" <<std::endl;
  }

}

/*
 * Using this macro, only one component may live
 * in one library *and* you may *not* link this library
 * with another component library. Use
 * ORO_CREATE_COMPONENT_TYPE()
 * ORO_LIST_COMPONENT_TYPE(acc_main)
 * In case you want to link with another library that
 * already contains components.
 *
 * If you have put your component class
 * in a namespace, don't forget to add it here too:
 */
ORO_CREATE_COMPONENT(acc::acc_main)
