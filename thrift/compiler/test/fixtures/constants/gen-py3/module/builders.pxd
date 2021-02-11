#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as __iobuf

cimport thrift.py3.builder


cimport module.types as _module_types

cdef class Internship_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint weeks
    cdef public str title
    cdef public _module_types.Company employer
    cdef public pfloat compensation


cdef class Range_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint min
    cdef public pint max


cdef class struct1_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint a
    cdef public str b


cdef class struct2_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint a
    cdef public str b
    cdef public object c
    cdef public list d


cdef class struct3_Builder(thrift.py3.builder.StructBuilder):
    cdef public str a
    cdef public pint b
    cdef public object c


cdef class struct4_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint a
    cdef public pfloat b
    cdef public pint c


cdef class union1_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint i
    cdef public pfloat d


cdef class union2_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint i
    cdef public pfloat d
    cdef public object s
    cdef public object u


