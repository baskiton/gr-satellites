/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(crc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(50f159acddf06e987b76f4a7c57e04e9)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/crc.h>
// pydoc.h is automatically generated in the build directory
#include <crc_pydoc.h>

void bind_crc(py::module& m)
{

    using crc = ::gr::satellites::crc;


    py::class_<crc, std::shared_ptr<crc>>(m, "crc", D(crc))

        .def(py::init<unsigned int, uint64_t, uint64_t, uint64_t, bool, bool>(),
             py::arg("num_bits"),
             py::arg("poly"),
             py::arg("initial_value"),
             py::arg("final_xor"),
             py::arg("input_reflected"),
             py::arg("result_reflected"),
             D(crc, crc, 0))
        .def(py::init<gr::satellites::crc const&>(), py::arg("arg0"), D(crc, crc, 1))


        .def("compute",
             (uint64_t(crc::*)(uint8_t const*, std::size_t)) & crc::compute,
             py::arg("data"),
             py::arg("len"),
             D(crc, compute, 0))


        .def("compute",
             (uint64_t(crc::*)(
                 std::vector<unsigned char, std::allocator<unsigned char>> const)) &
                 crc::compute,
             py::arg("data"),
             D(crc, compute, 1))

        ;
}
