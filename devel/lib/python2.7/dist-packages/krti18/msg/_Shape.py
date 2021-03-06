# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from krti18/Shape.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Shape(genpy.Message):
  _md5sum = "2fbca9de1f9ce5c990e50b663e28ecd0"
  _type = "krti18/Shape"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 x_obj	    # x coordinates of detected object
uint32 y_obj	    # y coordinates of detected object
uint32 r_obj	    # 		 radius of detected object
"""
  __slots__ = ['x_obj','y_obj','r_obj']
  _slot_types = ['uint32','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       x_obj,y_obj,r_obj

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Shape, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.x_obj is None:
        self.x_obj = 0
      if self.y_obj is None:
        self.y_obj = 0
      if self.r_obj is None:
        self.r_obj = 0
    else:
      self.x_obj = 0
      self.y_obj = 0
      self.r_obj = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.x_obj, _x.y_obj, _x.r_obj))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.x_obj, _x.y_obj, _x.r_obj,) = _get_struct_3I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.x_obj, _x.y_obj, _x.r_obj))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.x_obj, _x.y_obj, _x.r_obj,) = _get_struct_3I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
