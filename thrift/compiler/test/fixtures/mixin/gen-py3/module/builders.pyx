#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cdef class Mixin1_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.Mixin1

    def __iter__(self):
        yield "field1", self.field1

cdef class Mixin2_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.Mixin2

    def __iter__(self):
        yield "m1", self.m1
        yield "field2", self.field2

cdef class Mixin3Base_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.Mixin3Base

    def __iter__(self):
        yield "field3", self.field3

cdef class Foo_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.Foo

    def __iter__(self):
        yield "field4", self.field4
        yield "m2", self.m2
        yield "m3", self.m3

