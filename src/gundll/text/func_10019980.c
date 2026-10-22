/*
 * FUN_10019980 (103 B) - __stdcall (RET 0x18, 6 args). Validates the object
 * state, calls FUN_1001c760, resolves a string via FUN_10001dd0, and fills
 * in object fields; returns HRESULT-style codes on failure.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);   /* rel32 call */
extern void __cdecl FUN_10001dd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10019980(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        jz      L_97
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x18
L_97:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_e2
        mov     edi, dword ptr [esp + 0x20]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jnz     L_c2
        test    edi, edi
        jz      L_c2
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x18
L_c2:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x24], edx
        mov     edx, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x2c], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x28], edx
        mov     eax, ecx
L_e2:
        pop     edi
        pop     esi
        ret     0x18
    }
}
