#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder

import module.types as _module_types
import module.builders as _module_builders

import matching_struct_names.types as _matching_struct_names_types


class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    field: _typing.Optional[str]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


class Combo_Builder(thrift.py3.builder.StructBuilder):
    listOfOurMyStructLists: _typing.Optional[list]
    theirMyStructList: _typing.Optional[list]
    ourMyStructList: _typing.Optional[list]
    listOfTheirMyStructList: _typing.Optional[list]

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...


