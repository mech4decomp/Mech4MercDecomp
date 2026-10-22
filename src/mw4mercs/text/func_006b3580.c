/*
 * FUN_006b3580 (360 B) — Float range classifier.
 *
 * Compares the single-precision argument against a table of double
 * thresholds (0x0079a010..0x0079a088) and returns a bucket index 0..15.
 * Each comparison is FLD/FCOMP/FNSTSW/TEST AH,1/Jcc.
 *
 * __cdecl, one float arg, returns int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_dbl_0079a088;
extern double g_dbl_0079a080;
extern double g_dbl_0079a078;
extern double g_dbl_0079a070;
extern double g_dbl_0079a068;
extern double g_dbl_0079a060;
extern double g_dbl_0079a058;
extern double g_dbl_0079a050;
extern double g_dbl_0079a048;
extern double g_dbl_0079a040;
extern double g_dbl_0079a038;
extern double g_dbl_0079a030;
extern double g_dbl_0079a028;
extern double g_dbl_0079a020;
extern double g_dbl_0079a018;
extern double g_dbl_0079a010;

__declspec(naked) int __cdecl FUN_006b3580(float param)
{
    __asm {
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a088]
        fld     dword ptr [esp + 4]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L3636
        fcomp   qword ptr [g_dbl_0079a080]
        fld     dword ptr [esp + 4]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L35EF
        fcomp   qword ptr [g_dbl_0079a078]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jnz     L36E2
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a070]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L35D2
        mov     eax, 7
        ret
L35D2:
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a068]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L35E9
        mov     eax, 8
        ret
L35E9:
        mov     eax, 9
        ret
L35EF:
        fcomp   qword ptr [g_dbl_0079a060]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L3602
        mov     eax, 0xA
        ret
L3602:
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a058]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L3619
        mov     eax, 0xB
        ret
L3619:
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a050]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L3630
        mov     eax, 0xC
        ret
L3630:
        mov     eax, 0xD
        ret
L3636:
        fcomp   qword ptr [g_dbl_0079a048]
        fld     dword ptr [esp + 4]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L36A2
        fcomp   qword ptr [g_dbl_0079a040]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L365A
        mov     eax, 0xE
        ret
L365A:
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a038]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L3671
        mov     eax, 0xF
        ret
L3671:
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a030]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L3685
        xor     eax, eax
        ret
L3685:
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a028]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L369C
        mov     eax, 1
        ret
L369C:
        mov     eax, 2
        ret
L36A2:
        fcomp   qword ptr [g_dbl_0079a020]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L36B5
        mov     eax, 3
        ret
L36B5:
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a018]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jz      L36CC
        mov     eax, 4
        ret
L36CC:
        fld     dword ptr [esp + 4]
        fcomp   qword ptr [g_dbl_0079a010]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        mov     eax, 5
        jnz     L36E7
L36E2:
        mov     eax, 6
L36E7:
        ret
    }
}
