/*===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/

#ifndef _hpp_ngs_alignment_iterator_
#define _hpp_ngs_alignment_iterator_

#ifndef _hpp_ngs_alignment_
#include <ngs/Alignment.hpp>
#endif

namespace ngs
{
    /*----------------------------------------------------------------------
     * AlignmentIterator
     *  iterates across a list of Alignments
     */
    class AlignmentIterator : public Alignment
    {
    public:

        /* nextAlignment
         *  advance to first alignment on initial invocation
         *  advance to next Alignment subsequently
         *  returns false if no more Alignments are available.
         *  throws exception if more Alignments should be available,
         *  but could not be accessed.
         */
        bool nextAlignment ()
            NGS_THROWS ( ErrorMsg );

    public:

        // C++ support

        AlignmentIterator ( AlignmentRef ref )
            NGS_NOTHROW ();

        AlignmentIterator & operator = ( const AlignmentIterator & obj )
            NGS_THROWS ( ErrorMsg );
        AlignmentIterator ( const AlignmentIterator & obj )
            NGS_THROWS ( ErrorMsg );

        ~ AlignmentIterator ()
            NGS_NOTHROW ();

    private:

        Alignment & operator = ( const Alignment & obj )
            NGS_THROWS ( ErrorMsg );
        AlignmentIterator & operator = ( AlignmentRef ref )
            NGS_NOTHROW ();
    };

} // namespace ngs


// inlines
#ifndef _inl_ngs_alignment_iterator_
#include <ngs/inl/AlignmentIterator.hpp>
#endif

#endif // _hpp_ngs_alignment_iterator_
