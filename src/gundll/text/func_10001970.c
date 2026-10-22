/*
 * FUN_10001970 (97 B) - RET 0x8. Allocates via FUN_10008de0,
 * then FUN_10008940, frees local_8.
 *
 * Declared __cdecl (naked, explicit `ret 8` keeps the __stdcall ABI) so the
 * symbol matches the cdecl-named references in the handler scaffolds; the
 * emitted bytes are unchanged.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10008de0(void);   /* rel32 call */
extern void __cdecl FUN_10008940(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10001970(void)
{
    __asm {
        sub     esp, 8
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        lea     eax, [esp + 8]
        push    eax
        lea     ecx, [esp + 8]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        call    FUN_10008de0
        mov     esi, eax
        test    esi, esi
        jl      L_b7
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 0x10]
        push    eax
        mov     eax, dword ptr [edx + 0x3c]
        push    ecx
        push    eax
        call    FUN_10008940
        mov     esi, eax
L_b7:
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      L_c8
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_c8:
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     8
    }
}
