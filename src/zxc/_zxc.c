#define PY_SSIZE_T_CLEAN

#include <Python.h>
#include "zxc.h"

// =============================================================================
// Wrapper functions
// =============================================================================

static PyObject* pyzxc_compress(PyObject* self, PyObject* args, PyObject* kwargs);
static PyObject* pyzxc_decompress(PyObject* self, PyObject* args, PyObject* kwargs);
static PyObject* pyzxc_stream_compress(PyObject* self, PyObject* args, PyObject* kwargs);
static PyObject* pyzxc_stream_decompress(PyObject* self, PyObject* args, PyObject* kwargs);

// =============================================================================
// Initialize python module
// =============================================================================

PyDoc_STRVAR(
    zxc_doc,
    "ZXC bindings.\n"
    "\n"
    "API:\n"
    "  compress(data, level=5, checksum=False) -> bytes\n"
    "  decompress(data, checksum=False) -> bytes\n"
    "  stream_compress(src, dst, level=5, checksum=False) -> None\n"
    "  stream_decompress(src, dst, checksum=False) -> None\n"
);

PyDoc_STRVAR(
    compress_doc,
    "compress(data, level=5, checksum=False) -> bytes\n"
    "Compress a bytes-like object (buffer protocol).\n"
);

PyDoc_STRVAR(
    decompress_doc,
    "decompress(data, checksum=False) -> bytes\n"
    "Decompress ZXC-compressed data.\n"
    "Raises RuntimeError on invalid input.\n"
);

PyDoc_STRVAR(
    stream_compress_doc,
    "stream_compress(src, dst, level=5, checksum=False) -> None\n"
    "Compress from src to dst (file-like or path).\n"
);

PyDoc_STRVAR(
    stream_decompress_doc,
    "stream_decompress(src, dst, checksum=False) -> None\n"
    "Decompress from src to dst (file-like or path).\n"
);

static PyMethodDef zxc_methods[] = {
    {
        "compress",
        (PyCFunction)pyzxc_compress,
        METH_VARARGS | METH_KEYWORDS,
        compress_doc
    },
    {
        "decompress",
        (PyCFunction)pyzxc_decompress,
        METH_VARARGS | METH_KEYWORDS,
        decompress_doc
    },
    {
        "stream_compress",
        (PyCFunction)pyzxc_stream_compress,
        METH_VARARGS | METH_KEYWORDS,
        stream_compress_doc
    },
    {
        "stream_decompress",
        (PyCFunction)pyzxc_stream_decompress,
        METH_VARARGS | METH_KEYWORDS,
        stream_decompress_doc
    },
    {NULL, NULL, 0, NULL}  // sentinel
};

static struct PyModuleDef zxc_module = {
    PyModuleDef_HEAD_INIT,
    "_zxc",   
    zxc_doc,     
    0,       
    zxc_methods
};

PyMODINIT_FUNC
PyInit__zxc(void){
    return PyModuleDef_Init(&zxc_module);
}

// =============================================================================
// Functions definitions
// =============================================================================

static PyObject* pyzxc_compress(PyObject* self, PyObject* args, PyObject* kwargs) {
    PyErr_SetString(PyExc_NotImplementedError, "compress not implemented yet");
    return NULL;
}

static PyObject* pyzxc_decompress(PyObject* self, PyObject* args, PyObject* kwargs) {
    PyErr_SetString(PyExc_NotImplementedError, "decompress not implemented yet");
    return NULL;
}

static PyObject* pyzxc_stream_compress(PyObject* self, PyObject* args, PyObject* kwargs) {
    PyErr_SetString(PyExc_NotImplementedError, "stream compress not implemented yet");
    return NULL;
}

static PyObject* pyzxc_stream_decompress(PyObject* self, PyObject* args, PyObject* kwargs) {
    PyErr_SetString(PyExc_NotImplementedError, "stream decompress not implemented yet");
    return NULL;
}
