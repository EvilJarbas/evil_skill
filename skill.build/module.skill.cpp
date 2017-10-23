/* Generated code for Python source for module 'skill'
 * created by Nuitka version 0.5.28
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_skill is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_skill;
PyDictObject *moduledict_skill;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain_Message_tuple;
static PyObject *const_str_plain___package__;
static PyObject *const_str_plain_key;
static PyObject *const_tuple_963668c11b4fc9ec226efad4e339e327_tuple;
static PyObject *const_tuple_str_plain_dirname_str_plain_join_tuple;
static PyObject *const_str_plain_load;
static PyObject *const_str_digest_e5bfff82af3abcf0c6b65ff29c57dceb;
static PyObject *const_str_plain_emit;
static PyObject *const_str_plain_Message;
static PyObject *const_str_plain_ransomware;
static PyObject *const_tuple_str_plain_lang_str_digest_671cbc0ab5c1ba1a33c8696d7c7a553c_tuple;
static PyObject *const_str_plain_dialog;
static PyObject *const_str_plain_jarbas;
static PyObject *const_str_plain_join;
static PyObject *const_str_plain_emitter;
static PyObject *const_str_plain_render;
static PyObject *const_str_digest_1cf347f063192ecb5835c85f1d3fd192;
static PyObject *const_str_plain_get;
static PyObject *const_int_pos_666;
static PyObject *const_str_plain_txt;
extern PyObject *const_tuple_empty;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_Configuration;
static PyObject *const_str_digest_7b80fac0da9ebc1e02dd3d47b4dcdc84;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
static PyObject *const_str_plain_speak;
static PyObject *const_str_digest_cb882287bf7665aa33110dbbcc24c3af;
static PyObject *const_str_plain_data;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_backdoor;
static PyObject *const_str_digest_3910ed57994d0b4b910ab4a017424f04;
static PyObject *const_str_plain_utterance;
static PyObject *const_str_plain_lang;
static PyObject *const_tuple_str_plain_Configuration_tuple;
static PyObject *const_tuple_str_plain_DialogLoader_tuple;
static PyObject *const_str_plain_d;
static PyObject *const_str_plain_dirname;
static PyObject *const_str_digest_1ced07767f432ee86a2ef0ad4cdc019e;
static PyObject *const_tuple_str_plain_emitter_tuple;
static PyObject *const_str_plain_skill;
static PyObject *const_str_plain_speak_dialog;
static PyObject *const_str_plain___author__;
static PyObject *const_str_plain_r;
static PyObject *const_str_plain_DialogLoader;
static PyObject *const_str_digest_8124512631f4c7ee82175f5ac74ae443;
static PyObject *const_dict_3c61e0b7ed408d58bea34dd1923a44e3;
static PyObject *const_str_plain_yes;
static PyObject *const_str_digest_671cbc0ab5c1ba1a33c8696d7c7a553c;
static PyObject *const_str_plain_handler;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_Message_tuple = PyTuple_New( 1 );
    const_str_plain_Message = UNSTREAM_STRING( &constant_bin[ 0 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Message_tuple, 0, const_str_plain_Message ); Py_INCREF( const_str_plain_Message );
    const_str_plain___package__ = UNSTREAM_STRING( &constant_bin[ 7 ], 11, 1 );
    const_str_plain_key = UNSTREAM_STRING( &constant_bin[ 18 ], 3, 1 );
    const_tuple_963668c11b4fc9ec226efad4e339e327_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_963668c11b4fc9ec226efad4e339e327_tuple, 0, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_plain_data = UNSTREAM_STRING( &constant_bin[ 21 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_963668c11b4fc9ec226efad4e339e327_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_plain_emitter = UNSTREAM_STRING( &constant_bin[ 25 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_963668c11b4fc9ec226efad4e339e327_tuple, 2, const_str_plain_emitter ); Py_INCREF( const_str_plain_emitter );
    const_str_plain_d = UNSTREAM_CHAR( 100, 1 );
    PyTuple_SET_ITEM( const_tuple_963668c11b4fc9ec226efad4e339e327_tuple, 3, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_plain_r = UNSTREAM_CHAR( 114, 1 );
    PyTuple_SET_ITEM( const_tuple_963668c11b4fc9ec226efad4e339e327_tuple, 4, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_txt = UNSTREAM_STRING( &constant_bin[ 32 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_963668c11b4fc9ec226efad4e339e327_tuple, 5, const_str_plain_txt ); Py_INCREF( const_str_plain_txt );
    const_tuple_str_plain_dirname_str_plain_join_tuple = PyTuple_New( 2 );
    const_str_plain_dirname = UNSTREAM_STRING( &constant_bin[ 35 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dirname_str_plain_join_tuple, 0, const_str_plain_dirname ); Py_INCREF( const_str_plain_dirname );
    const_str_plain_join = UNSTREAM_STRING( &constant_bin[ 42 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dirname_str_plain_join_tuple, 1, const_str_plain_join ); Py_INCREF( const_str_plain_join );
    const_str_plain_load = UNSTREAM_STRING( &constant_bin[ 46 ], 4, 1 );
    const_str_digest_e5bfff82af3abcf0c6b65ff29c57dceb = UNSTREAM_STRING( &constant_bin[ 50 ], 17, 0 );
    const_str_plain_emit = UNSTREAM_STRING( &constant_bin[ 25 ], 4, 1 );
    const_str_plain_ransomware = UNSTREAM_STRING( &constant_bin[ 67 ], 10, 1 );
    const_tuple_str_plain_lang_str_digest_671cbc0ab5c1ba1a33c8696d7c7a553c_tuple = PyTuple_New( 2 );
    const_str_plain_lang = UNSTREAM_STRING( &constant_bin[ 77 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_lang_str_digest_671cbc0ab5c1ba1a33c8696d7c7a553c_tuple, 0, const_str_plain_lang ); Py_INCREF( const_str_plain_lang );
    const_str_digest_671cbc0ab5c1ba1a33c8696d7c7a553c = UNSTREAM_STRING( &constant_bin[ 81 ], 5, 0 );
    PyTuple_SET_ITEM( const_tuple_str_plain_lang_str_digest_671cbc0ab5c1ba1a33c8696d7c7a553c_tuple, 1, const_str_digest_671cbc0ab5c1ba1a33c8696d7c7a553c ); Py_INCREF( const_str_digest_671cbc0ab5c1ba1a33c8696d7c7a553c );
    const_str_plain_dialog = UNSTREAM_STRING( &constant_bin[ 86 ], 6, 1 );
    const_str_plain_jarbas = UNSTREAM_STRING( &constant_bin[ 92 ], 6, 1 );
    const_str_plain_render = UNSTREAM_STRING( &constant_bin[ 98 ], 6, 1 );
    const_str_digest_1cf347f063192ecb5835c85f1d3fd192 = UNSTREAM_STRING( &constant_bin[ 104 ], 21, 0 );
    const_str_plain_get = UNSTREAM_STRING( &constant_bin[ 125 ], 3, 1 );
    const_int_pos_666 = PyInt_FromLong( 666l );
    const_str_plain_Configuration = UNSTREAM_STRING( &constant_bin[ 128 ], 13, 1 );
    const_str_digest_7b80fac0da9ebc1e02dd3d47b4dcdc84 = UNSTREAM_STRING( &constant_bin[ 141 ], 14, 0 );
    const_str_digest_e399ba4554180f37de594a6743234f17 = UNSTREAM_STRING( &constant_bin[ 155 ], 7, 0 );
    const_str_plain_speak = UNSTREAM_STRING( &constant_bin[ 162 ], 5, 1 );
    const_str_digest_cb882287bf7665aa33110dbbcc24c3af = UNSTREAM_STRING( &constant_bin[ 167 ], 26, 0 );
    const_str_plain_backdoor = UNSTREAM_STRING( &constant_bin[ 193 ], 8, 1 );
    const_str_digest_3910ed57994d0b4b910ab4a017424f04 = UNSTREAM_STRING( &constant_bin[ 201 ], 14, 0 );
    const_str_plain_utterance = UNSTREAM_STRING( &constant_bin[ 215 ], 9, 1 );
    const_tuple_str_plain_Configuration_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Configuration_tuple, 0, const_str_plain_Configuration ); Py_INCREF( const_str_plain_Configuration );
    const_tuple_str_plain_DialogLoader_tuple = PyTuple_New( 1 );
    const_str_plain_DialogLoader = UNSTREAM_STRING( &constant_bin[ 224 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DialogLoader_tuple, 0, const_str_plain_DialogLoader ); Py_INCREF( const_str_plain_DialogLoader );
    const_str_digest_1ced07767f432ee86a2ef0ad4cdc019e = UNSTREAM_STRING( &constant_bin[ 236 ], 8, 0 );
    const_tuple_str_plain_emitter_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_emitter_tuple, 0, const_str_plain_emitter ); Py_INCREF( const_str_plain_emitter );
    const_str_plain_skill = UNSTREAM_STRING( &constant_bin[ 149 ], 5, 1 );
    const_str_plain_speak_dialog = UNSTREAM_STRING( &constant_bin[ 244 ], 12, 1 );
    const_str_plain___author__ = UNSTREAM_STRING( &constant_bin[ 256 ], 10, 1 );
    const_str_digest_8124512631f4c7ee82175f5ac74ae443 = UNSTREAM_STRING( &constant_bin[ 266 ], 12, 0 );
    const_dict_3c61e0b7ed408d58bea34dd1923a44e3 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_3c61e0b7ed408d58bea34dd1923a44e3, const_str_digest_8124512631f4c7ee82175f5ac74ae443, const_int_pos_666 );
    PyDict_SetItem( const_dict_3c61e0b7ed408d58bea34dd1923a44e3, const_str_plain_backdoor, Py_True );
    PyDict_SetItem( const_dict_3c61e0b7ed408d58bea34dd1923a44e3, const_str_digest_e5bfff82af3abcf0c6b65ff29c57dceb, Py_True );
    PyDict_SetItem( const_dict_3c61e0b7ed408d58bea34dd1923a44e3, const_str_plain_ransomware, Py_False );
    assert( PyDict_Size( const_dict_3c61e0b7ed408d58bea34dd1923a44e3 ) == 4 );
    const_str_plain_yes = UNSTREAM_STRING( &constant_bin[ 278 ], 3, 1 );
    const_str_plain_handler = UNSTREAM_STRING( &constant_bin[ 281 ], 7, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_skill( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bc121b4116c3453357bb02c0ca2a361c;
static PyCodeObject *codeobj_0b6d6ef2c159c7a15e32b9e7f8ed44aa;
static PyCodeObject *codeobj_8aaeccf95823affc32da0ca316aadeef;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1ced07767f432ee86a2ef0ad4cdc019e );
    codeobj_bc121b4116c3453357bb02c0ca2a361c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7b80fac0da9ebc1e02dd3d47b4dcdc84, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_0b6d6ef2c159c7a15e32b9e7f8ed44aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_handler, 37, const_tuple_str_plain_emitter_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8aaeccf95823affc32da0ca316aadeef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_speak_dialog, 27, const_tuple_963668c11b4fc9ec226efad4e339e327_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_skill$$$function_1_speak_dialog( PyObject *defaults );


static PyObject *MAKE_FUNCTION_skill$$$function_2_handler(  );


// The module function definitions.
static PyObject *impl_skill$$$function_1_speak_dialog( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_emitter = python_pars[ 2 ];
    PyObject *var_d = NULL;
    PyObject *var_r = NULL;
    PyObject *var_txt = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8aaeccf95823affc32da0ca316aadeef = NULL;

    struct Nuitka_FrameObject *frame_8aaeccf95823affc32da0ca316aadeef;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8aaeccf95823affc32da0ca316aadeef, codeobj_8aaeccf95823affc32da0ca316aadeef, module_skill, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8aaeccf95823affc32da0ca316aadeef = cache_frame_8aaeccf95823affc32da0ca316aadeef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8aaeccf95823affc32da0ca316aadeef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8aaeccf95823affc32da0ca316aadeef ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_skill, (Nuitka_StringObject *)const_str_plain_DialogLoader );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DialogLoader );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DialogLoader" );
        exception_tb = NULL;

        exception_lineno = 28;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_8aaeccf95823affc32da0ca316aadeef->m_frame.f_lineno = 28;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_d == NULL );
    var_d = tmp_assign_source_1;

    tmp_source_name_1 = var_d;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_load );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_skill, (Nuitka_StringObject *)const_str_plain_join );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_join );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "join" );
        exception_tb = NULL;

        exception_lineno = 29;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_skill, (Nuitka_StringObject *)const_str_plain_dirname );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dirname );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "dirname" );
        exception_tb = NULL;

        exception_lineno = 29;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_skill, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__file__" );
        exception_tb = NULL;

        exception_lineno = 29;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_8aaeccf95823affc32da0ca316aadeef->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 29;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_plain_dialog;
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_skill, (Nuitka_StringObject *)const_str_plain_lang );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lang );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "lang" );
        exception_tb = NULL;

        exception_lineno = 29;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_8aaeccf95823affc32da0ca316aadeef->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 29;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_8aaeccf95823affc32da0ca316aadeef->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_2;

    tmp_called_instance_1 = var_r;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_6 = par_key;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_data;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_8aaeccf95823affc32da0ca316aadeef->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_render, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_txt == NULL );
    var_txt = tmp_assign_source_3;

    tmp_source_name_2 = par_emitter;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_emit );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_skill, (Nuitka_StringObject *)const_str_plain_Message );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Message );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Message" );
        exception_tb = NULL;

        exception_lineno = 31;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = const_str_plain_speak;
    tmp_args_element_name_10 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_txt;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_utterance;
    tmp_res = PyDict_SetItem( tmp_args_element_name_10, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_args_element_name_11 = PyDict_Copy( const_dict_3c61e0b7ed408d58bea34dd1923a44e3 );
    frame_8aaeccf95823affc32da0ca316aadeef->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 31;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_8aaeccf95823affc32da0ca316aadeef->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8aaeccf95823affc32da0ca316aadeef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8aaeccf95823affc32da0ca316aadeef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8aaeccf95823affc32da0ca316aadeef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8aaeccf95823affc32da0ca316aadeef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8aaeccf95823affc32da0ca316aadeef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8aaeccf95823affc32da0ca316aadeef,
        type_description_1,
        par_key,
        par_data,
        par_emitter,
        var_d,
        var_r,
        var_txt
    );


    // Release cached frame.
    if ( frame_8aaeccf95823affc32da0ca316aadeef == cache_frame_8aaeccf95823affc32da0ca316aadeef )
    {
        Py_DECREF( frame_8aaeccf95823affc32da0ca316aadeef );
    }
    cache_frame_8aaeccf95823affc32da0ca316aadeef = NULL;

    assertFrameObject( frame_8aaeccf95823affc32da0ca316aadeef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_txt;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( skill$$$function_1_speak_dialog );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_emitter );
    Py_DECREF( par_emitter );
    par_emitter = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_txt );
    Py_DECREF( var_txt );
    var_txt = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_emitter );
    Py_DECREF( par_emitter );
    par_emitter = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_txt );
    var_txt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( skill$$$function_1_speak_dialog );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_skill$$$function_2_handler( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_emitter = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa = NULL;

    struct Nuitka_FrameObject *frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa, codeobj_0b6d6ef2c159c7a15e32b9e7f8ed44aa, module_skill, sizeof(void *) );
    frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa = cache_frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_skill, (Nuitka_StringObject *)const_str_plain_speak_dialog );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_speak_dialog );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "speak_dialog" );
        exception_tb = NULL;

        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_yes;
    tmp_args_element_name_2 = PyDict_New();
    tmp_args_element_name_3 = par_emitter;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa,
        type_description_1,
        par_emitter
    );


    // Release cached frame.
    if ( frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa == cache_frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa )
    {
        Py_DECREF( frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa );
    }
    cache_frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa = NULL;

    assertFrameObject( frame_0b6d6ef2c159c7a15e32b9e7f8ed44aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( skill$$$function_2_handler );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_emitter );
    Py_DECREF( par_emitter );
    par_emitter = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_emitter );
    Py_DECREF( par_emitter );
    par_emitter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( skill$$$function_2_handler );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_skill$$$function_1_speak_dialog( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_skill$$$function_1_speak_dialog,
        const_str_plain_speak_dialog,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8aaeccf95823affc32da0ca316aadeef,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_skill,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_skill$$$function_2_handler(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_skill$$$function_2_handler,
        const_str_plain_handler,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0b6d6ef2c159c7a15e32b9e7f8ed44aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_skill,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_skill =
{
    PyModuleDef_HEAD_INIT,
    "skill",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( skill )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_skill );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("skill: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("skill: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initskill" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_skill = Py_InitModule4(
        "skill",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_skill = PyModule_Create( &mdef_skill );
#endif

    moduledict_skill = MODULE_DICT( module_skill );

    CHECK_OBJECT( module_skill );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_skill, module_skill );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_skill, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_skill, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_skill, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_bc121b4116c3453357bb02c0ca2a361c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_skill, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_skill, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_skill, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_bc121b4116c3453357bb02c0ca2a361c = MAKE_MODULE_FRAME( codeobj_bc121b4116c3453357bb02c0ca2a361c, module_skill );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_bc121b4116c3453357bb02c0ca2a361c );
    assert( Py_REFCNT( frame_bc121b4116c3453357bb02c0ca2a361c ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_3910ed57994d0b4b910ab4a017424f04;
    tmp_globals_name_1 = (PyObject *)moduledict_skill;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_DialogLoader_tuple;
    frame_bc121b4116c3453357bb02c0ca2a361c->m_frame.f_lineno = 18;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_DialogLoader );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_skill, (Nuitka_StringObject *)const_str_plain_DialogLoader, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_digest_1cf347f063192ecb5835c85f1d3fd192;
    tmp_globals_name_2 = (PyObject *)moduledict_skill;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_Configuration_tuple;
    frame_bc121b4116c3453357bb02c0ca2a361c->m_frame.f_lineno = 19;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Configuration );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_skill, (Nuitka_StringObject *)const_str_plain_Configuration, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_digest_cb882287bf7665aa33110dbbcc24c3af;
    tmp_globals_name_3 = (PyObject *)moduledict_skill;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_Message_tuple;
    frame_bc121b4116c3453357bb02c0ca2a361c->m_frame.f_lineno = 20;
    tmp_import_name_from_3 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Message );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_skill, (Nuitka_StringObject *)const_str_plain_Message, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_digest_e399ba4554180f37de594a6743234f17;
    tmp_globals_name_4 = (PyObject *)moduledict_skill;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_dirname_str_plain_join_tuple;
    frame_bc121b4116c3453357bb02c0ca2a361c->m_frame.f_lineno = 21;
    tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_dirname );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_skill, (Nuitka_StringObject *)const_str_plain_dirname, tmp_assign_source_8 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_join );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_skill, (Nuitka_StringObject *)const_str_plain_join, tmp_assign_source_9 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_skill, (Nuitka_StringObject *)const_str_plain_Configuration );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Configuration );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Configuration" );
        exception_tb = NULL;

        exception_lineno = 22;

        goto frame_exception_exit_1;
    }

    frame_bc121b4116c3453357bb02c0ca2a361c->m_frame.f_lineno = 22;
    tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    frame_bc121b4116c3453357bb02c0ca2a361c->m_frame.f_lineno = 22;
    tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_lang_str_digest_671cbc0ab5c1ba1a33c8696d7c7a553c_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_skill, (Nuitka_StringObject *)const_str_plain_lang, tmp_assign_source_10 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc121b4116c3453357bb02c0ca2a361c );
#endif
    popFrameStack();

    assertFrameObject( frame_bc121b4116c3453357bb02c0ca2a361c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc121b4116c3453357bb02c0ca2a361c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc121b4116c3453357bb02c0ca2a361c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc121b4116c3453357bb02c0ca2a361c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc121b4116c3453357bb02c0ca2a361c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_11 = const_str_plain_jarbas;
    UPDATE_STRING_DICT0( moduledict_skill, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_11 );
    tmp_defaults_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyDict_New();
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_12 = MAKE_FUNCTION_skill$$$function_1_speak_dialog( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_skill, (Nuitka_StringObject *)const_str_plain_speak_dialog, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_skill$$$function_2_handler(  );
    UPDATE_STRING_DICT1( moduledict_skill, (Nuitka_StringObject *)const_str_plain_handler, tmp_assign_source_13 );

    return MOD_RETURN_VALUE( module_skill );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
