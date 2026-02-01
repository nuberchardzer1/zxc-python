from typing import TypeAlias, IO, AnyStr
from os import PathLike 

StrOrBytesPath: TypeAlias = str | bytes | PathLike[str] | PathLike[bytes]  # stable
FileDescriptorOrPath: TypeAlias = int | StrOrBytesPath

def compress(data, level: int = 5, checksum: bool = False) -> bytes: ...
def decompress(data, original_size: int, checksum: bool = False) -> bytes: ...

def stream_compress(src: FileDescriptorOrPath, dst: FileDescriptorOrPath, 
                    n_threads: int = 0, level: int = 5, checksum: bool = False) -> None: ...

def stream_decompress(src: FileDescriptorOrPath, dst: FileDescriptorOrPath, 
                      n_threads: int = 0, checksum: bool = False) -> None: ...