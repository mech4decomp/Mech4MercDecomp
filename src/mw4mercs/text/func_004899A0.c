/*
 * FUN_004899A0 (96 B) — __thiscall (ECX = this). Clamps an array of
 * [ecx+0xC] (count = [ecx+0x10]) elements: each 0x20-byte element's
 * [0] is clamped to [st(2)] and [4] to [st(1)] using FPU compares, then
 * calls FUN_00713A70 with the array and count.
 *
 * NOTE: the 2676-byte data block also contains two adjacent functions
 * (FUN_00489A00, FUN_00489E70) not in this assignment; this file covers
 * only FUN_004899A0 (96 B).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_00858940;
extern unsigned long g_00858944;

extern void __cdecl FUN_00713a70(void);

__declspec(naked) void FUN_004899A0(void)
{
    __asm {
        push    ecx
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        test    edi, edi
        jle     l_99f3
        mov     eax, dword ptr [g_00858940]
        mov     edx, dword ptr [g_00858944]
        dec     eax
        mov     dword ptr [esp + 4], eax
        fild    dword ptr [esp + 4]
        dec     edx
        mov     dword ptr [esp + 4], edx
        fild    dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 0xc]
        push    esi
        mov     esi, edi
    l_99cc:
        fld     dword ptr [edx]
        fcomp   st(2)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_99db
        fld     st(1)
        fstp    dword ptr [edx]
    l_99db:
        fcom    dword ptr [edx + 4]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_99e8
        fst     dword ptr [edx + 4]
    l_99e8:
        add     edx, 0x20
        dec     esi
        jne     l_99cc
        fstp    st(0)
        pop     esi
        fstp    st(0)
    l_99f3:
        mov     eax, dword ptr [ecx + 0xc]
        push    edi
        push    eax
        call    FUN_00713a70
        pop     edi
        pop     ecx
        ret
    }
}
