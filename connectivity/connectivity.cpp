#include "connectivity.hpp"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <iostream>
#include <vector>

auto print_scc(std::vector<std::vector<size_t>> neighbour_list)
{
    auto tarjan_scc = Seldon::TarjanConnectivityAlgo( neighbour_list );
    return tarjan_scc.scc_list;
}

PYBIND11_MODULE( connectivity, handle )
{
    handle.doc() = "Connectivity module for printing strongly connected components (SCC) for a given neighbors list.";
    handle.def( "print_scc", &print_scc , "A function which takes a list of neighbors and returns the strongly connected components.");
}
