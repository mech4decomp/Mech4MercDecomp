/*
 * FUN_007669B0 (91 B) — Compares two 4-float vectors component-wise against
 * an epsilon; returns 1 if all |a[i]-b[i]| <= eps, else 0.
 *
 * __cdecl, 3 params (2 float*, 1 float), RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_007669B0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        fld     dword ptr [ecx]
        mov     edx, dword ptr [esp + 0x8]
        fsub    dword ptr [edx]
        fabs
        fcomp   dword ptr [esp + 0xc]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      loc_766a08
        fld     dword ptr [ecx + 0x4]
        fsub    dword ptr [edx + 0x4]
        fabs
        fcomp   dword ptr [esp + 0xc]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      loc_766a08
        fld     dword ptr [ecx + 0x8]
        fsub    dword ptr [edx + 0x8]
        fabs
        fcomp   dword ptr [esp + 0xc]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      loc_766a08
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [edx + 0xc]
        fabs
        fcomp   dword ptr [esp + 0xc]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      loc_766a08
        mov     eax, 0x1
        ret
loc_766a08:
        xor     eax, eax
        ret
    }
}
