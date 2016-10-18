/*****************************************************************************

  The following code is derived, directly or indirectly, from the SystemC
  source code Copyright (c) 1996-2014 by all Contributors.
  All Rights reserved.

  The contents of this file are subject to the restrictions and limitations
  set forth in the SystemC Open Source License (the "License");
  You may not use this file except in compliance with such restrictions and
  limitations. You may obtain instructions on how to receive a copy of the
  License at http://www.accellera.org/. Software distributed by Contributors
  under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
  ANY KIND, either express or implied. See the License for the specific
  language governing rights and limitations under the License.

 *****************************************************************************/

/*****************************************************************************

  sc_ufix.h -

  Original Author: Martin Janssen, Synopsys, Inc.

 *****************************************************************************/

/*****************************************************************************

  MODIFICATION LOG - modifiers, enter your name, affiliation, date and
  changes you are making here.

      Name, Affiliation, Date:
  Description of Modification:

 *****************************************************************************/

// $Log: sc_ufix.h,v $
// Revision 1.2  2011/01/20 22:52:30  acg
//  Andy Goodrich: Add float constructors.
//
// Revision 1.1.1.1  2006/12/15 20:20:04  acg
// SystemC 2.3
//
// Revision 1.3  2006/01/13 18:53:58  acg
// Andy Goodrich: added $Log command so that CVS comments are reproduced in
// the source.
//

#ifndef SC_UFIX_H
#define SC_UFIX_H


#include "sc_fxnum.h"


namespace sc_dt
{

// classes defined in this module
class sc_ufix;
class sc_ufix_fast;


// ----------------------------------------------------------------------------
//  CLASS : sc_ufix
//
//  "Unconstrained" unsigned fixed-point class; arbitrary precision.
// ----------------------------------------------------------------------------

class sc_ufix : public sc_fxnum
{

public:

    // constructors

    explicit sc_ufix( sc_fxnum_observer* = 0 );
             sc_ufix( int, int,
		      sc_fxnum_observer* = 0 );
             sc_ufix( sc_q_mode, sc_o_mode,
		      sc_fxnum_observer* = 0 );
             sc_ufix( sc_q_mode, sc_o_mode, int,
		      sc_fxnum_observer* = 0 );
             sc_ufix( int, int, sc_q_mode, sc_o_mode,
		      sc_fxnum_observer* = 0 );
             sc_ufix( int, int, sc_q_mode, sc_o_mode, int,
		      sc_fxnum_observer* = 0 );
    explicit sc_ufix( const sc_fxcast_switch&,
		      sc_fxnum_observer* = 0 );
             sc_ufix( int, int,
		      const sc_fxcast_switch&,
		      sc_fxnum_observer* = 0 );
             sc_ufix( sc_q_mode, sc_o_mode,
		      const sc_fxcast_switch&,
		      sc_fxnum_observer* = 0 );
             sc_ufix( sc_q_mode, sc_o_mode, int,
		      const sc_fxcast_switch&,
		      sc_fxnum_observer* = 0 );
             sc_ufix( int, int, sc_q_mode, sc_o_mode,
		      const sc_fxcast_switch&,
		      sc_fxnum_observer* = 0 );
             sc_ufix( int, int, sc_q_mode, sc_o_mode, int,
		      const sc_fxcast_switch&,
		      sc_fxnum_observer* = 0 );
    explicit sc_ufix( const sc_fxtype_params&,
		      sc_fxnum_observer* = 0 );
             sc_ufix( const sc_fxtype_params&,
		      const sc_fxcast_switch&,
		      sc_fxnum_observer* = 0 );

#define DECL_CTORS_T(tp)                                                      \
             sc_ufix( tp,                                                     \
		      int, int,                                               \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      sc_q_mode, sc_o_mode,                                   \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      sc_q_mode, sc_o_mode, int,                              \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      int, int, sc_q_mode, sc_o_mode,                         \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      int, int, sc_q_mode, sc_o_mode, int,                    \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      const sc_fxcast_switch&,                                \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      int, int,                                               \
		      const sc_fxcast_switch&,                                \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      sc_q_mode, sc_o_mode,                                   \
		      const sc_fxcast_switch&,                                \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      sc_q_mode, sc_o_mode, int,                              \
		      const sc_fxcast_switch&,                                \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      int, int, sc_q_mode, sc_o_mode,                         \
		      const sc_fxcast_switch&,                                \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      int, int, sc_q_mode, sc_o_mode, int,                    \
		      const sc_fxcast_switch&,                                \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      const sc_fxtype_params&,                                \
		      sc_fxnum_observer* = 0 );                               \
             sc_ufix( tp,                                                     \
		      const sc_fxtype_params&,                                \
		      const sc_fxcast_switch&,                                \
		      sc_fxnum_observer* = 0 );

#define DECL_CTORS_T_A(tp)                                                    \
             sc_ufix( tp,                                                     \
	              sc_fxnum_observer* = 0 );                               \
    DECL_CTORS_T(tp)

#define DECL_CTORS_T_B(tp)                                                    \
    explicit sc_ufix( tp,                                                     \
	              sc_fxnum_observer* = 0 );                               \
    DECL_CTORS_T(tp)

    DECL_CTORS_T_A(int)
    DECL_CTORS_T_A(unsigned int)
    DECL_CTORS_T_A(long)
    DECL_CTORS_T_A(unsigned long)
    DECL_CTORS_T_A(float)
    DECL_CTORS_T_A(double)
    DECL_CTORS_T_A(const char*)
    DECL_CTORS_T_A(const sc_fxval&)
    DECL_CTORS_T_A(const sc_fxval_fast&)
    DECL_CTORS_T_A(const sc_fxnum&)
    DECL_CTORS_T_A(const sc_fxnum_fast&)
#ifndef SC_FX_EXCLUDE_OTHER
    DECL_CTORS_T_B(int64)
    DECL_CTORS_T_B(uint64)
    DECL_CTORS_T_B(const sc_int_base&)
    DECL_CTORS_T_B(const sc_uint_base&)
    DECL_CTORS_T_B(const sc_signed&)
    DECL_CTORS_T_B(const sc_unsigned&)
#endif

#undef DECL_CTORS_T
#undef DECL_CTORS_T_A
#undef DECL_CTORS_T_B

    // copy constructor

    sc_ufix( const sc_ufix& );


    // unary bitwise operators

    const sc_ufix operator ~ () const;


    // unary bitwise functions

    friend void b_not( sc_ufix&, const sc_ufix& );


    // binary bitwise operators

    friend const sc_ufix operator & ( const sc_ufix&, const sc_ufix& );
    friend const sc_ufix operator & ( const sc_ufix&, const sc_ufix_fast& );
    friend const sc_ufix operator & ( const sc_ufix_fast&, const sc_ufix& );
    friend const sc_ufix operator | ( const sc_ufix&, const sc_ufix& );
    friend const sc_ufix operator | ( const sc_ufix&, const sc_ufix_fast& );
    friend const sc_ufix operator | ( const sc_ufix_fast&, const sc_ufix& );
    friend const sc_ufix operator ^ ( const sc_ufix&, const sc_ufix& );
    friend const sc_ufix operator ^ ( const sc_ufix&, const sc_ufix_fast& );
    friend const sc_ufix operator ^ ( const sc_ufix_fast&, const sc_ufix& );


    // binary bitwise functions

    friend void b_and( sc_ufix&, const sc_ufix&, const sc_ufix& );
    friend void b_and( sc_ufix&, const sc_ufix&, const sc_ufix_fast& );
    friend void b_and( sc_ufix&, const sc_ufix_fast&, const sc_ufix& );
    friend void b_or ( sc_ufix&, const sc_ufix&, const sc_ufix& );
    friend void b_or ( sc_ufix&, const sc_ufix&, const sc_ufix_fast& );
    friend void b_or ( sc_ufix&, const sc_ufix_fast&, const sc_ufix& );
    friend void b_xor( sc_ufix&, const sc_ufix&, const sc_ufix& );
    friend void b_xor( sc_ufix&, const sc_ufix&, const sc_ufix_fast& );
    friend void b_xor( sc_ufix&, const sc_ufix_fast&, const sc_ufix& );


    // assignment operators

    sc_ufix& operator = ( const sc_ufix& );

#define DECL_ASN_OP_T(op,tp)                                                  \
    sc_ufix& operator op ( tp );

#ifndef SC_FX_EXCLUDE_OTHER
#define DECL_ASN_OP_OTHER(op)                                                 \
    DECL_ASN_OP_T(op,int64)                                                   \
    DECL_ASN_OP_T(op,uint64)                                                  \
    DECL_ASN_OP_T(op,const sc_int_base&)                                      \
    DECL_ASN_OP_T(op,const sc_uint_base&)                                     \
    DECL_ASN_OP_T(op,const sc_signed&)                                        \
    DECL_ASN_OP_T(op,const sc_unsigned&)
#else
#define DECL_ASN_OP_OTHER(op)
#endif

#define DECL_ASN_OP(op)                                                       \
    DECL_ASN_OP_T(op,int)                                                     \
    DECL_ASN_OP_T(op,unsigned int)                                            \
    DECL_ASN_OP_T(op,long)                                                    \
    DECL_ASN_OP_T(op,unsigned long)                                           \
    DECL_ASN_OP_T(op,float)                                                  \
    DECL_ASN_OP_T(op,double)                                                  \
    DECL_ASN_OP_T(op,const char*)                                             \
    DECL_ASN_OP_T(op,const sc_fxval&)                                         \
    DECL_ASN_OP_T(op,const sc_fxval_fast&)                                    \
    DECL_ASN_OP_T(op,const sc_fxnum&)                                         \
    DECL_ASN_OP_T(op,const sc_fxnum_fast&)                                    \
    DECL_ASN_OP_OTHER(op)

    DECL_ASN_OP(=)

    DECL_ASN_OP(*=)
    DECL_ASN_OP(/=)
    DECL_ASN_OP(+=)
    DECL_ASN_OP(-=)

    DECL_ASN_OP_T(<<=,int)
    DECL_ASN_OP_T(>>=,int)

    DECL_ASN_OP_T(&=,const sc_ufix&)
    DECL_ASN_OP_T(&=,const sc_ufix_fast&)
    DECL_ASN_OP_T(|=,const sc_ufix&)
    DECL_ASN_OP_T(|=,const sc_ufix_fast&)
    DECL_ASN_OP_T(^=,const sc_ufix&)
    DECL_ASN_OP_T(^=,const sc_ufix_fast&)

#undef DECL_ASN_OP_T
#undef DECL_ASN_OP_OTHER
#undef DECL_ASN_OP


    // auto-increment and auto-decrement

    const sc_fxval operator ++ ( int );
    const sc_fxval operator -- ( int );

    sc_ufix& operator ++ ();
    sc_ufix& operator -- ();

};


// ----------------------------------------------------------------------------
//  CLASS : sc_ufix_fast
//
//  "Unconstrained" unsigned fixed-point class; limited precision.
// ----------------------------------------------------------------------------

class sc_ufix_fast : public sc_fxnum_fast
{

public:

    // constructors

    explicit sc_ufix_fast( sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( int, int,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( sc_q_mode, sc_o_mode,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( sc_q_mode, sc_o_mode, int,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( int, int, sc_q_mode, sc_o_mode,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( int, int, sc_q_mode, sc_o_mode, int,
			   sc_fxnum_fast_observer* = 0 );
    explicit sc_ufix_fast( const sc_fxcast_switch&,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( int, int,
			   const sc_fxcast_switch&,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( sc_q_mode, sc_o_mode,
			   const sc_fxcast_switch&,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( sc_q_mode, sc_o_mode, int,
			   const sc_fxcast_switch&,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( int, int, sc_q_mode, sc_o_mode,
			   const sc_fxcast_switch&,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( int, int, sc_q_mode, sc_o_mode, int,
			   const sc_fxcast_switch&,
			   sc_fxnum_fast_observer* = 0 );
    explicit sc_ufix_fast( const sc_fxtype_params&,
			   sc_fxnum_fast_observer* = 0 );
             sc_ufix_fast( const sc_fxtype_params&,
			   const sc_fxcast_switch&,
			   sc_fxnum_fast_observer* = 0 );

#define DECL_CTORS_T(tp)                                                      \
             sc_ufix_fast( tp,                                                \
			   int, int,                                          \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   sc_q_mode, sc_o_mode,                              \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   sc_q_mode, sc_o_mode, int,                         \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   int, int, sc_q_mode, sc_o_mode,                    \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   int, int, sc_q_mode, sc_o_mode, int,               \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   const sc_fxcast_switch&,                           \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   int, int,                                          \
			   const sc_fxcast_switch&,                           \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   sc_q_mode, sc_o_mode,                              \
			   const sc_fxcast_switch&,                           \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   sc_q_mode, sc_o_mode, int,                         \
			   const sc_fxcast_switch&,                           \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   int, int, sc_q_mode, sc_o_mode,                    \
			   const sc_fxcast_switch&,                           \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   int, int, sc_q_mode, sc_o_mode, int,               \
			   const sc_fxcast_switch&,                           \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   const sc_fxtype_params&,                           \
			   sc_fxnum_fast_observer* = 0 );                     \
             sc_ufix_fast( tp,                                                \
			   const sc_fxtype_params&,                           \
			   const sc_fxcast_switch&,                           \
			   sc_fxnum_fast_observer* = 0 );

#define DECL_CTORS_T_A(tp)                                                    \
             sc_ufix_fast( tp,                                                \
		           sc_fxnum_fast_observer* = 0 );                     \
    DECL_CTORS_T(tp)

#define DECL_CTORS_T_B(tp)                                                    \
    explicit sc_ufix_fast( tp,                                                \
		           sc_fxnum_fast_observer* = 0 );                     \
    DECL_CTORS_T(tp)

    DECL_CTORS_T_A(int)
    DECL_CTORS_T_A(unsigned int)
    DECL_CTORS_T_A(long)
    DECL_CTORS_T_A(unsigned long)
    DECL_CTORS_T_A(float)
    DECL_CTORS_T_A(double)
    DECL_CTORS_T_A(const char*)
    DECL_CTORS_T_A(const sc_fxval&)
    DECL_CTORS_T_A(const sc_fxval_fast&)
    DECL_CTORS_T_A(const sc_fxnum&)
    DECL_CTORS_T_A(const sc_fxnum_fast&)
#ifndef SC_FX_EXCLUDE_OTHER
    DECL_CTORS_T_B(int64)
    DECL_CTORS_T_B(uint64)
    DECL_CTORS_T_B(const sc_int_base&)
    DECL_CTORS_T_B(const sc_uint_base&)
    DECL_CTORS_T_B(const sc_signed&)
    DECL_CTORS_T_B(const sc_unsigned&)
#endif

#undef DECL_CTORS_T
#undef DECL_CTORS_T_A
#undef DECL_CTORS_T_B

    // copy constructor

    sc_ufix_fast( const sc_ufix_fast& );


    // unary bitwise operators

    const sc_ufix_fast operator ~ () const;


    // unary bitwise functions

    friend void b_not( sc_ufix_fast&, const sc_ufix_fast& );


    // binary bitwise operators

    friend const sc_ufix_fast operator & ( const sc_ufix_fast&,
					   const sc_ufix_fast& );
    friend const sc_ufix_fast operator ^ ( const sc_ufix_fast&,
					   const sc_ufix_fast& );
    friend const sc_ufix_fast operator | ( const sc_ufix_fast&,
					   const sc_ufix_fast& );


    // binary bitwise functions

    friend void b_and( sc_ufix_fast&, const sc_ufix_fast&,
		                      const sc_ufix_fast& );
    friend void b_or ( sc_ufix_fast&, const sc_ufix_fast&,
		                      const sc_ufix_fast& );
    friend void b_xor( sc_ufix_fast&, const sc_ufix_fast&,
		                      const sc_ufix_fast& );


    // assignment operators

    sc_ufix_fast& operator = ( const sc_ufix_fast& );

#define DECL_ASN_OP_T(op,tp)                                                  \
    sc_ufix_fast& operator op ( tp );

#ifndef SC_FX_EXCLUDE_OTHER
#define DECL_ASN_OP_OTHER(op)                                                 \
    DECL_ASN_OP_T(op,int64)                                                   \
    DECL_ASN_OP_T(op,uint64)                                                  \
    DECL_ASN_OP_T(op,const sc_int_base&)                                      \
    DECL_ASN_OP_T(op,const sc_uint_base&)                                     \
    DECL_ASN_OP_T(op,const sc_signed&)                                        \
    DECL_ASN_OP_T(op,const sc_unsigned&)
#else
#define DECL_ASN_OP_OTHER(op)
#endif

#define DECL_ASN_OP(op)                                                       \
    DECL_ASN_OP_T(op,int)                                                     \
    DECL_ASN_OP_T(op,unsigned int)                                            \
    DECL_ASN_OP_T(op,long)                                                    \
    DECL_ASN_OP_T(op,unsigned long)                                           \
    DECL_ASN_OP_T(op,float)                                                  \
    DECL_ASN_OP_T(op,double)                                                  \
    DECL_ASN_OP_T(op,const char*)                                             \
    DECL_ASN_OP_T(op,const sc_fxval&)                                         \
    DECL_ASN_OP_T(op,const sc_fxval_fast&)                                    \
    DECL_ASN_OP_T(op,const sc_fxnum&)                                         \
    DECL_ASN_OP_T(op,const sc_fxnum_fast&)                                    \
    DECL_ASN_OP_OTHER(op)

    DECL_ASN_OP(=)

    DECL_ASN_OP(*=)
    DECL_ASN_OP(/=)
    DECL_ASN_OP(+=)
    DECL_ASN_OP(-=)

    DECL_ASN_OP_T(<<=,int)
    DECL_ASN_OP_T(>>=,int)

    DECL_ASN_OP_T(&=,const sc_ufix&)
    DECL_ASN_OP_T(&=,const sc_ufix_fast&)
    DECL_ASN_OP_T(|=,const sc_ufix&)
    DECL_ASN_OP_T(|=,const sc_ufix_fast&)
    DECL_ASN_OP_T(^=,const sc_ufix&)
    DECL_ASN_OP_T(^=,const sc_ufix_fast&)

#undef DECL_ASN_OP_T
#undef DECL_ASN_OP_OTHER
#undef DECL_ASN_OP


    // auto-increment and auto-decrement

    const sc_fxval_fast operator ++ ( int );
    const sc_fxval_fast operator -- ( int );

    sc_ufix_fast& operator ++ ();
    sc_ufix_fast& operator -- ();

};


// IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII

// ----------------------------------------------------------------------------
//  CLASS : sc_ufix
//
//  "Unconstrained" unsigned fixed-point class; arbitrary precision.
// ----------------------------------------------------------------------------

// constructors

inline
sc_ufix::sc_ufix( sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params(),
	    SC_US_,
	    sc_fxcast_switch(),
	    observer_ )
{}

inline
sc_ufix::sc_ufix( int wl_, int iwl_,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( wl_, iwl_ ),
	    SC_US_,
	    sc_fxcast_switch(),
	    observer_ )
{}

inline
sc_ufix::sc_ufix( sc_q_mode qm, sc_o_mode om,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( qm, om ),
	    SC_US_,
	    sc_fxcast_switch(),
	    observer_ )
{}

inline
sc_ufix::sc_ufix( sc_q_mode qm, sc_o_mode om, int nb,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( qm, om, nb ),
	    SC_US_,
	    sc_fxcast_switch(),
	    observer_ )
{}

inline
sc_ufix::sc_ufix( int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( wl_, iwl_, qm, om ),
	    SC_US_,
	    sc_fxcast_switch(),
	    observer_ )
{}

inline
sc_ufix::sc_ufix( int wl_, int iwl_, sc_q_mode qm, sc_o_mode om, int nb,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( wl_, iwl_, qm, om, nb ),
	    SC_US_,
	    sc_fxcast_switch(),
	    observer_ )
{}

inline
sc_ufix::sc_ufix( const sc_fxcast_switch& cast_sw,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params(),
	    SC_US_,
	    cast_sw,
	    observer_ )
{}

inline
sc_ufix::sc_ufix( int wl_, int iwl_,
		  const sc_fxcast_switch& cast_sw,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( wl_, iwl_ ),
	    SC_US_,
	    cast_sw,
	    observer_ )
{}

inline
sc_ufix::sc_ufix( sc_q_mode qm, sc_o_mode om,
		  const sc_fxcast_switch& cast_sw,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( qm, om ),
	    SC_US_,
	    cast_sw,
	    observer_ )
{}

inline
sc_ufix::sc_ufix( sc_q_mode qm, sc_o_mode om, int nb,
		  const sc_fxcast_switch& cast_sw,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( qm, om, nb ),
	    SC_US_,
	    cast_sw,
	    observer_ )
{}

inline
sc_ufix::sc_ufix( int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,
		  const sc_fxcast_switch& cast_sw,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( wl_, iwl_, qm, om ),
	    SC_US_,
	    cast_sw,
	    observer_ )
{}

inline
sc_ufix::sc_ufix( int wl_, int iwl_, sc_q_mode qm, sc_o_mode om, int nb,
		  const sc_fxcast_switch& cast_sw,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( sc_fxtype_params( wl_, iwl_, qm, om, nb ),
	    SC_US_,
	    cast_sw,
	    observer_ )
{}

inline
sc_ufix::sc_ufix( const sc_fxtype_params& type_params,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( type_params,
	    SC_US_,
	    sc_fxcast_switch(),
	    observer_ )
{}

inline
sc_ufix::sc_ufix( const sc_fxtype_params& type_params,
		  const sc_fxcast_switch& cast_sw,
		  sc_fxnum_observer* observer_ )
: sc_fxnum( type_params,
	    SC_US_,
	    cast_sw,
	    observer_ )
{}

#define DEFN_CTORS_T_A(tp)                                                    \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params(),                                               \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_,                                          \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_ ),                                    \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_q_mode qm, sc_o_mode om,                                 \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( qm, om ),                                       \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_q_mode qm, sc_o_mode om, int nb,                         \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( qm, om, nb ),                                   \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,              \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_, qm, om ),                            \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_, sc_q_mode qm, sc_o_mode om, int nb,      \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_, qm, om, nb ),                        \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params(),                                               \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_,                                          \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_ ),                                    \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_q_mode qm, sc_o_mode om,                                 \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( qm, om ),                                       \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_q_mode qm, sc_o_mode om, int nb,                         \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( qm, om, nb ),                                   \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,              \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_, qm, om ),                            \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_, sc_q_mode qm, sc_o_mode om, int nb,      \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_, qm, om, nb ),                        \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  const sc_fxtype_params& type_params,                        \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    type_params,                                                      \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  const sc_fxtype_params& type_params,                        \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    type_params,                                                      \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}

#define DEFN_CTORS_T_B(tp)                                                    \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    a.type_params(),                                                  \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_,                                          \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( a.type_params(), wl_, iwl_ ),                   \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_q_mode qm, sc_o_mode om,                                 \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( a.type_params(), qm, om ),                      \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_q_mode qm, sc_o_mode om, int nb,                         \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( a.type_params(), qm, om, nb ),                  \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,              \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_, qm, om ),                            \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_, sc_q_mode qm, sc_o_mode om, int nb,      \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_, qm, om, nb ),                        \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    a.type_params(),                                                  \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_,                                          \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( a.type_params(), wl_, iwl_ ),                   \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_q_mode qm, sc_o_mode om,                                 \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( a.type_params(), qm, om ),                      \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  sc_q_mode qm, sc_o_mode om, int nb,                         \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( a.type_params(), qm, om, nb ),                  \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,              \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_, qm, om ),                            \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  int wl_, int iwl_, sc_q_mode qm, sc_o_mode om, int nb,      \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    sc_fxtype_params( wl_, iwl_, qm, om, nb ),                        \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  const sc_fxtype_params& type_params,                        \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    type_params,                                                      \
	    SC_US_,                                                           \
	    sc_fxcast_switch(),                                               \
	    observer_ )                                                       \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix::sc_ufix( tp a,                                                       \
		  const sc_fxtype_params& type_params,                        \
		  const sc_fxcast_switch& cast_sw,                            \
		  sc_fxnum_observer* observer_ )                              \
: sc_fxnum( a,                                                                \
	    type_params,                                                      \
	    SC_US_,                                                           \
	    cast_sw,                                                          \
	    observer_ )                                                       \
{}

DEFN_CTORS_T_A(int)
DEFN_CTORS_T_A(unsigned int)
DEFN_CTORS_T_A(long)
DEFN_CTORS_T_A(unsigned long)
DEFN_CTORS_T_A(float)
DEFN_CTORS_T_A(double)
DEFN_CTORS_T_A(const char*)
DEFN_CTORS_T_A(const sc_fxval&)
DEFN_CTORS_T_A(const sc_fxval_fast&)
DEFN_CTORS_T_B(const sc_fxnum&)
DEFN_CTORS_T_B(const sc_fxnum_fast&)
#ifndef SC_FX_EXCLUDE_OTHER
DEFN_CTORS_T_A(int64)
DEFN_CTORS_T_A(uint64)
DEFN_CTORS_T_A(const sc_int_base&)
DEFN_CTORS_T_A(const sc_uint_base&)
DEFN_CTORS_T_A(const sc_signed&)
DEFN_CTORS_T_A(const sc_unsigned&)
#endif

#undef DEFN_CTORS_T_A
#undef DEFN_CTORS_T_B

// copy constructor

inline
sc_ufix::sc_ufix( const sc_ufix& a )
: sc_fxnum( a,
	    a.type_params(),
	    SC_US_,
	    sc_fxcast_switch(),
	    0 )
{}


// unary bitwise operators

inline
const sc_ufix
sc_ufix::operator ~ () const
{
    SC_FXNUM_OBSERVER_READ_( *this )
    int iwl_c = iwl();
    int wl_c = wl();
    sc_ufix c( wl_c, iwl_c );
    for( int i = iwl_c - wl_c; i < iwl_c; ++ i )
	c.set_bit( i, ! get_bit( i ) );
    return sc_ufix( c, wl_c, iwl_c );
}


// unary bitwise functions

inline
void
b_not( sc_ufix& c, const sc_ufix& a )
{
    SC_FXNUM_OBSERVER_READ_( a )
    int iwl_c = c.iwl();
    for( int i = iwl_c - c.wl(); i < iwl_c; ++ i )
	c.set_bit( i, ! a.get_bit( i ) );
    c.cast();
    SC_FXNUM_OBSERVER_WRITE_( c )
}


// binary bitwise operators

#define DEFN_BIN_OP_T(op,op2,tp1,tp2)                                         \
inline                                                                        \
const sc_ufix                                                                 \
operator op ( const tp1& a, const tp2& b )                                    \
{                                                                             \
    a.observer_read();                                                        \
    b.observer_read();                                                        \
    int iwl_a = a.iwl();                                                      \
    int iwl_b = b.iwl();                                                      \
    int iwl_c = sc_max( iwl_a, iwl_b );                                       \
    int fwl_c = sc_max( a.wl() - iwl_a, b.wl() - iwl_b );                     \
    sc_ufix c( iwl_c + fwl_c, iwl_c );                                        \
    for( int i = -fwl_c; i < iwl_c; ++ i )                                    \
	c.set_bit( i, a.get_bit( i ) op2 b.get_bit( i ) );                    \
    return sc_ufix( c, iwl_c + fwl_c, iwl_c );                                \
}

DEFN_BIN_OP_T(&,&&,sc_ufix,sc_ufix)
DEFN_BIN_OP_T(&,&&,sc_ufix,sc_ufix_fast)
DEFN_BIN_OP_T(&,&&,sc_ufix_fast,sc_ufix)

DEFN_BIN_OP_T(|,||,sc_ufix,sc_ufix)
DEFN_BIN_OP_T(|,||,sc_ufix,sc_ufix_fast)
DEFN_BIN_OP_T(|,||,sc_ufix_fast,sc_ufix)

DEFN_BIN_OP_T(^,!=,sc_ufix,sc_ufix)
DEFN_BIN_OP_T(^,!=,sc_ufix,sc_ufix_fast)
DEFN_BIN_OP_T(^,!=,sc_ufix_fast,sc_ufix)

#undef DEFN_BIN_OP_T


// binary bitwise functions

#define DEFN_BIN_FNC_T(fnc,op2,tp1,tp2)                                       \
inline                                                                        \
void                                                                          \
fnc ( sc_ufix& c, const tp1& a, const tp2& b )                                \
{                                                                             \
    a.observer_read();                                                        \
    b.observer_read();                                                        \
    int iwl_c = c.iwl();                                                      \
    for( int i = iwl_c - c.wl(); i < iwl_c; ++ i )                            \
	c.set_bit( i, a.get_bit( i ) op2 b.get_bit( i ) );                    \
    c.cast();                                                                 \
    SC_FXNUM_OBSERVER_WRITE_( c )                                             \
}

DEFN_BIN_FNC_T(b_and,&&,sc_ufix,sc_ufix)
DEFN_BIN_FNC_T(b_and,&&,sc_ufix,sc_ufix_fast)
DEFN_BIN_FNC_T(b_and,&&,sc_ufix_fast,sc_ufix)

DEFN_BIN_FNC_T(b_or,||,sc_ufix,sc_ufix)
DEFN_BIN_FNC_T(b_or,||,sc_ufix,sc_ufix_fast)
DEFN_BIN_FNC_T(b_or,||,sc_ufix_fast,sc_ufix)

DEFN_BIN_FNC_T(b_xor,!=,sc_ufix,sc_ufix)
DEFN_BIN_FNC_T(b_xor,!=,sc_ufix,sc_ufix_fast)
DEFN_BIN_FNC_T(b_xor,!=,sc_ufix_fast,sc_ufix)

#undef DEFN_BIN_FNC_T


// assignment operators

inline
sc_ufix&
sc_ufix::operator = ( const sc_ufix& a )
{
    sc_fxnum::operator = ( a );
    return *this;
}

#define DEFN_ASN_OP_T(op,tp)                                                  \
inline                                                                        \
sc_ufix&                                                                      \
sc_ufix::operator op ( tp a )                                                 \
{                                                                             \
    sc_fxnum::operator op( a );                                               \
    return *this;                                                             \
}

#ifndef SC_FX_EXCLUDE_OTHER
#define DEFN_ASN_OP_OTHER(op)                                                 \
DEFN_ASN_OP_T(op,int64)                                                       \
DEFN_ASN_OP_T(op,uint64)                                                      \
DEFN_ASN_OP_T(op,const sc_int_base&)                                          \
DEFN_ASN_OP_T(op,const sc_uint_base&)                                         \
DEFN_ASN_OP_T(op,const sc_signed&)                                            \
DEFN_ASN_OP_T(op,const sc_unsigned&)
#else
#define DEFN_ASN_OP_OTHER(op)
#endif

#define DEFN_ASN_OP(op)                                                       \
DEFN_ASN_OP_T(op,int)                                                         \
DEFN_ASN_OP_T(op,unsigned int)                                                \
DEFN_ASN_OP_T(op,long)                                                        \
DEFN_ASN_OP_T(op,unsigned long)                                               \
DEFN_ASN_OP_T(op,float)                                                      \
DEFN_ASN_OP_T(op,double)                                                      \
DEFN_ASN_OP_T(op,const char*)                                                 \
DEFN_ASN_OP_T(op,const sc_fxval&)                                             \
DEFN_ASN_OP_T(op,const sc_fxval_fast&)                                        \
DEFN_ASN_OP_T(op,const sc_fxnum&)                                             \
DEFN_ASN_OP_T(op,const sc_fxnum_fast&)                                        \
DEFN_ASN_OP_OTHER(op)

DEFN_ASN_OP(=)

DEFN_ASN_OP(*=)
DEFN_ASN_OP(/=)
DEFN_ASN_OP(+=)
DEFN_ASN_OP(-=)

DEFN_ASN_OP_T(<<=,int)
DEFN_ASN_OP_T(>>=,int)

#undef DEFN_ASN_OP_T
#undef DEFN_ASN_OP_OTHER
#undef DEFN_ASN_OP


#define DEFN_ASN_OP_T(op,op2,tp)                                              \
inline                                                                        \
sc_ufix&                                                                      \
sc_ufix::operator op ( const tp& b )                                          \
{                                                                             \
    SC_FXNUM_OBSERVER_READ_( *this )                                          \
    b.observer_read();                                                        \
    int iwl_c = iwl();                                                        \
    for( int i = iwl_c - wl(); i < iwl_c; ++ i )                              \
	set_bit( i, get_bit( i ) op2 b.get_bit( i ) );                        \
    cast();                                                                   \
    SC_FXNUM_OBSERVER_WRITE_( *this )                                         \
    return *this;                                                             \
}

DEFN_ASN_OP_T(&=,&&,sc_ufix)
DEFN_ASN_OP_T(&=,&&,sc_ufix_fast)
DEFN_ASN_OP_T(|=,||,sc_ufix)
DEFN_ASN_OP_T(|=,||,sc_ufix_fast)
DEFN_ASN_OP_T(^=,!=,sc_ufix)
DEFN_ASN_OP_T(^=,!=,sc_ufix_fast)

#undef DEFN_ASN_OP_T


// auto-increment and auto-decrement

inline
const sc_fxval
sc_ufix::operator ++ ( int )
{
    return sc_fxval( sc_fxnum::operator ++ ( 0 ) );
}

inline
const sc_fxval
sc_ufix::operator -- ( int )
{
    return sc_fxval( sc_fxnum::operator -- ( 0 ) );
}

inline
sc_ufix&
sc_ufix::operator ++ ()
{
    sc_fxnum::operator ++ ();
    return *this;
}

inline
sc_ufix&
sc_ufix::operator -- ()
{
    sc_fxnum::operator -- ();
    return *this;
}


// ----------------------------------------------------------------------------
//  CLASS : sc_ufix_fast
//
//  "Unconstrained" unsigned fixed-point class; limited precision.
// ----------------------------------------------------------------------------

// constructors

inline
sc_ufix_fast::sc_ufix_fast( sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params(),
		 SC_US_,
		 sc_fxcast_switch(),
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( int wl_, int iwl_,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( wl_, iwl_ ),
		 SC_US_,
		 sc_fxcast_switch(),
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( sc_q_mode qm, sc_o_mode om,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( qm, om ),
		 SC_US_,
		 sc_fxcast_switch(),
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( sc_q_mode qm, sc_o_mode om, int nb,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( qm, om, nb ),
		 SC_US_,
		 sc_fxcast_switch(),
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( wl_, iwl_, qm, om ),
		 SC_US_,
		 sc_fxcast_switch(),
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( int wl_, int iwl_,
			    sc_q_mode qm, sc_o_mode om, int nb,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( wl_, iwl_, qm, om, nb ),
		 SC_US_,
		 sc_fxcast_switch(),
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( const sc_fxcast_switch& cast_sw,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params(),
		 SC_US_,
		 cast_sw,
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( int wl_, int iwl_,
			    const sc_fxcast_switch& cast_sw,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( wl_, iwl_ ),
		 SC_US_,
		 cast_sw,
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( sc_q_mode qm, sc_o_mode om,
			    const sc_fxcast_switch& cast_sw,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( qm, om ),
		 SC_US_,
		 cast_sw,
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( sc_q_mode qm, sc_o_mode om, int nb,
			    const sc_fxcast_switch& cast_sw,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( qm, om, nb ),
		 SC_US_,
		 cast_sw,
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,
			    const sc_fxcast_switch& cast_sw,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( wl_, iwl_, qm, om ),
		 SC_US_,
		 cast_sw,
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( int wl_, int iwl_,
			    sc_q_mode qm, sc_o_mode om, int nb,
			    const sc_fxcast_switch& cast_sw,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( sc_fxtype_params( wl_, iwl_, qm, om, nb ),
		 SC_US_,
		 cast_sw,
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( const sc_fxtype_params& type_params,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( type_params,
		 SC_US_,
		 sc_fxcast_switch(),
		 observer_ )
{}

inline
sc_ufix_fast::sc_ufix_fast( const sc_fxtype_params& type_params,
			    const sc_fxcast_switch& cast_sw,
			    sc_fxnum_fast_observer* observer_ )
: sc_fxnum_fast( type_params,
		 SC_US_,
		 cast_sw,
		 observer_ )
{}

#define DEFN_CTORS_T_A(tp)                                                    \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params(),                                          \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_,                                \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_ ),                               \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_q_mode qm, sc_o_mode om,                       \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( qm, om ),                                  \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_q_mode qm, sc_o_mode om, int nb,               \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( qm, om, nb ),                              \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,    \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_, qm, om ),                       \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_,                                \
			    sc_q_mode qm, sc_o_mode om, int nb,               \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_, qm, om, nb ),                   \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params(),                                          \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_,                                \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_ ),                               \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_q_mode qm, sc_o_mode om,                       \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( qm, om ),                                  \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_q_mode qm, sc_o_mode om, int nb,               \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( qm, om, nb ),                              \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,    \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_, qm, om ),                       \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_,                                \
			    sc_q_mode qm, sc_o_mode om, int nb,               \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_, qm, om, nb ),                   \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    const sc_fxtype_params& type_params,              \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 type_params,                                                 \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    const sc_fxtype_params& type_params,              \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 type_params,                                                 \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}

#define DEFN_CTORS_T_B(tp)                                                    \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 a.type_params(),                                             \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_,                                \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( a.type_params(), wl_, iwl_ ),              \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_q_mode qm, sc_o_mode om,                       \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( a.type_params(), qm, om ),                 \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_q_mode qm, sc_o_mode om, int nb,               \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( a.type_params(), qm, om, nb ),             \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,    \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_, qm, om ),                       \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_,                                \
			    sc_q_mode qm, sc_o_mode om, int nb,               \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_, qm, om, nb ),                   \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 a.type_params(),                                             \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_,                                \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( a.type_params(), wl_, iwl_ ),              \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_q_mode qm, sc_o_mode om,                       \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( a.type_params(), qm, om ),                 \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    sc_q_mode qm, sc_o_mode om, int nb,               \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( a.type_params(), qm, om, nb ),             \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_, sc_q_mode qm, sc_o_mode om,    \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_, qm, om ),                       \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    int wl_, int iwl_,                                \
			    sc_q_mode qm, sc_o_mode om, int nb,               \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 sc_fxtype_params( wl_, iwl_, qm, om, nb ),                   \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    const sc_fxtype_params& type_params,              \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 type_params,                                                 \
		 SC_US_,                                                      \
		 sc_fxcast_switch(),                                          \
		 observer_ )                                                  \
{}                                                                            \
                                                                              \
inline                                                                        \
sc_ufix_fast::sc_ufix_fast( tp a,                                             \
			    const sc_fxtype_params& type_params,              \
			    const sc_fxcast_switch& cast_sw,                  \
			    sc_fxnum_fast_observer* observer_ )               \
: sc_fxnum_fast( a,                                                           \
		 type_params,                                                 \
		 SC_US_,                                                      \
		 cast_sw,                                                     \
		 observer_ )                                                  \
{}

DEFN_CTORS_T_A(int)
DEFN_CTORS_T_A(unsigned int)
DEFN_CTORS_T_A(long)
DEFN_CTORS_T_A(unsigned long)
DEFN_CTORS_T_A(float)
DEFN_CTORS_T_A(double)
DEFN_CTORS_T_A(const char*)
DEFN_CTORS_T_A(const sc_fxval&)
DEFN_CTORS_T_A(const sc_fxval_fast&)
DEFN_CTORS_T_B(const sc_fxnum&)
DEFN_CTORS_T_B(const sc_fxnum_fast&)
#ifndef SC_FX_EXCLUDE_OTHER
DEFN_CTORS_T_A(int64)
DEFN_CTORS_T_A(uint64)
DEFN_CTORS_T_A(const sc_int_base&)
DEFN_CTORS_T_A(const sc_uint_base&)
DEFN_CTORS_T_A(const sc_signed&)
DEFN_CTORS_T_A(const sc_unsigned&)
#endif

#undef DEFN_CTORS_T_A
#undef DEFN_CTORS_T_B

// copy constructor

inline
sc_ufix_fast::sc_ufix_fast( const sc_ufix_fast& a )
: sc_fxnum_fast( a,
		 a.type_params(),
		 SC_US_,
		 sc_fxcast_switch(),
		 0 )
{}


// unary bitwise operators

inline
const sc_ufix_fast
sc_ufix_fast::operator ~ () const
{
    SC_FXNUM_FAST_OBSERVER_READ_( *this )
    int iwl_c = iwl();
    int wl_c = wl();
    sc_ufix_fast c( wl_c, iwl_c );
    for( int i = iwl_c - wl_c; i < iwl_c; ++ i )
	c.set_bit( i, ! get_bit( i ) );
    return sc_ufix_fast( c, wl_c, iwl_c );
}


// unary bitwise functions

inline
void
b_not( sc_ufix_fast& c, const sc_ufix_fast& a )
{
    SC_FXNUM_FAST_OBSERVER_READ_( a )
    int iwl_c = c.iwl();
    for( int i = iwl_c - c.wl(); i < iwl_c; ++ i )
	c.set_bit( i, ! a.get_bit( i ) );
    c.cast();
    SC_FXNUM_FAST_OBSERVER_WRITE_( c )
}


// binary bitwise operators

#define DEFN_BIN_OP_T(op,op2,tp1,tp2)                                         \
inline                                                                        \
const sc_ufix_fast                                                            \
operator op ( const tp1& a, const tp2& b )                                    \
{                                                                             \
    a.observer_read();                                                        \
    b.observer_read();                                                        \
    int iwl_a = a.iwl();                                                      \
    int iwl_b = b.iwl();                                                      \
    int iwl_c = sc_max( iwl_a, iwl_b );                                       \
    int fwl_c = sc_max( a.wl() - iwl_a, b.wl() - iwl_b );                     \
    sc_ufix_fast c( iwl_c + fwl_c, iwl_c );                                   \
    for( int i = -fwl_c; i < iwl_c; ++ i )                                    \
	c.set_bit( i, a.get_bit( i ) op2 b.get_bit( i ) );                    \
    return sc_ufix_fast( c, iwl_c + fwl_c, iwl_c );                           \
}

DEFN_BIN_OP_T(&,&&,sc_ufix_fast,sc_ufix_fast)
DEFN_BIN_OP_T(|,||,sc_ufix_fast,sc_ufix_fast)
DEFN_BIN_OP_T(^,!=,sc_ufix_fast,sc_ufix_fast)

#undef DEFN_BIN_OP_T


// binary bitwise functions

#define DEFN_BIN_FNC_T(fnc,op2,tp1,tp2)                                       \
inline                                                                        \
void                                                                          \
fnc ( sc_ufix_fast& c, const tp1& a, const tp2& b )                           \
{                                                                             \
    a.observer_read();                                                        \
    b.observer_read();                                                        \
    int iwl_c = c.iwl();                                                      \
    for( int i = iwl_c - c.wl(); i < iwl_c; ++ i )                            \
	c.set_bit( i, a.get_bit( i ) op2 b.get_bit( i ) );                    \
    c.cast();                                                                 \
    SC_FXNUM_FAST_OBSERVER_WRITE_( c )                                        \
}

DEFN_BIN_FNC_T(b_and,&&,sc_ufix_fast,sc_ufix_fast)
DEFN_BIN_FNC_T(b_or,||,sc_ufix_fast,sc_ufix_fast)
DEFN_BIN_FNC_T(b_xor,!=,sc_ufix_fast,sc_ufix_fast)

#undef DEFN_BIN_FNC_T


// assignment operators

inline
sc_ufix_fast&
sc_ufix_fast::operator = ( const sc_ufix_fast& a )
{
    sc_fxnum_fast::operator = ( a );
    return *this;
}

#define DEFN_ASN_OP_T(op,tp)                                                  \
inline                                                                        \
sc_ufix_fast&                                                                 \
sc_ufix_fast::operator op ( tp a )                                            \
{                                                                             \
    sc_fxnum_fast::operator op( a );                                          \
    return *this;                                                             \
}

#ifndef SC_FX_EXCLUDE_OTHER
#define DEFN_ASN_OP_OTHER(op)                                                 \
DEFN_ASN_OP_T(op,int64)                                                       \
DEFN_ASN_OP_T(op,uint64)                                                      \
DEFN_ASN_OP_T(op,const sc_int_base&)                                          \
DEFN_ASN_OP_T(op,const sc_uint_base&)                                         \
DEFN_ASN_OP_T(op,const sc_signed&)                                            \
DEFN_ASN_OP_T(op,const sc_unsigned&)
#else
#define DEFN_ASN_OP_OTHER(op)
#endif

#define DEFN_ASN_OP(op)                                                       \
DEFN_ASN_OP_T(op,int)                                                         \
DEFN_ASN_OP_T(op,unsigned int)                                                \
DEFN_ASN_OP_T(op,long)                                                        \
DEFN_ASN_OP_T(op,unsigned long)                                               \
DEFN_ASN_OP_T(op,float)                                                      \
DEFN_ASN_OP_T(op,double)                                                      \
DEFN_ASN_OP_T(op,const char*)                                                 \
DEFN_ASN_OP_T(op,const sc_fxval&)                                             \
DEFN_ASN_OP_T(op,const sc_fxval_fast&)                                        \
DEFN_ASN_OP_T(op,const sc_fxnum&)                                             \
DEFN_ASN_OP_T(op,const sc_fxnum_fast&)                                        \
DEFN_ASN_OP_OTHER(op)

DEFN_ASN_OP(=)

DEFN_ASN_OP(*=)
DEFN_ASN_OP(/=)
DEFN_ASN_OP(+=)
DEFN_ASN_OP(-=)

DEFN_ASN_OP_T(<<=,int)
DEFN_ASN_OP_T(>>=,int)

#undef DEFN_ASN_OP_T
#undef DEFN_ASN_OP_OTHER
#undef DEFN_ASN_OP


#define DEFN_ASN_OP_T(op,op2,tp)                                              \
inline                                                                        \
sc_ufix_fast&                                                                 \
sc_ufix_fast::operator op ( const tp& b )                                     \
{                                                                             \
    SC_FXNUM_FAST_OBSERVER_READ_( *this )                                     \
    b.observer_read();                                                        \
    int iwl_c = iwl();                                                        \
    for( int i = iwl_c - wl(); i < iwl_c; ++ i )                              \
	set_bit( i, get_bit( i ) op2 b.get_bit( i ) );                        \
    cast();                                                                   \
    SC_FXNUM_FAST_OBSERVER_WRITE_( *this )                                    \
    return *this;                                                             \
}

DEFN_ASN_OP_T(&=,&&,sc_ufix)
DEFN_ASN_OP_T(&=,&&,sc_ufix_fast)
DEFN_ASN_OP_T(|=,||,sc_ufix)
DEFN_ASN_OP_T(|=,||,sc_ufix_fast)
DEFN_ASN_OP_T(^=,!=,sc_ufix)
DEFN_ASN_OP_T(^=,!=,sc_ufix_fast)

#undef DEFN_ASN_OP_T


// auto-increment and auto-decrement

inline
const sc_fxval_fast
sc_ufix_fast::operator ++ ( int )
{
    return sc_fxval_fast( sc_fxnum_fast::operator ++ ( 0 ) );
}

inline
const sc_fxval_fast
sc_ufix_fast::operator -- ( int )
{
    return sc_fxval_fast( sc_fxnum_fast::operator -- ( 0 ) );
}

inline
sc_ufix_fast&
sc_ufix_fast::operator ++ ()
{
    sc_fxnum_fast::operator ++ ();
    return *this;
}

inline
sc_ufix_fast&
sc_ufix_fast::operator -- ()
{
    sc_fxnum_fast::operator -- ();
    return *this;
}

} // namespace sc_dt


#endif

// Taf!
