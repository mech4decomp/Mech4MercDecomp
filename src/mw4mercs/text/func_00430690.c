/*
 * FUN_00430690 (83 B) — __thiscall. MLR: iterates over a triangle strip,
 * calling FUN_00765f80 for each triangle's 3 vertices.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00765f80(void);

__declspec(naked) void FUN_00430690(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax+0x8]
        test    eax, eax
        jle     L_e1
        push    ebx
        mov     ebx, dword ptr [esi+0x5c]
        push    ebp
        push    edi
        mov     edi, dword ptr [esi+0x14]
        mov     esi, dword ptr [esi+0x48]
        inc     esi
        mov     ebp, eax
        xor     eax, eax
L_ab:
        mov     al, byte ptr [esi+0x1]
        lea     ecx, [eax+eax*2]
        xor     eax, eax
        mov     al, byte ptr [esi]
        lea     edx, [edi+ecx*4]
        push    edx
        lea     eax, [eax+eax*2]
        lea     ecx, [edi+eax*4]
        xor     eax, eax
        mov     al, byte ptr [esi-1]
        push    ecx
        mov     ecx, ebx
        lea     edx, [eax+eax*2]
        lea     eax, [edi+edx*4]
        push    eax
        call    FUN_00765f80
        add     ebx, 0x10
        add     esi, 3
        dec     ebp
        /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-2) due to call-reloc between branch and target; ref is 75 CD */
        __emit  0x75
        __emit  0xCD
        pop     edi
        pop     ebp
        pop     ebx
L_e1:
        pop     esi
        ret
    }
}
