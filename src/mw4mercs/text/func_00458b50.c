/*
 * FUN_00458b50 (83 B) — MLR helper (__thiscall). Iterates over a byte
 * triplet array and calls a triangle-setup routine for each element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00765f80(void);

__declspec(naked) void FUN_00458b50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax+0x8]
        test    eax, eax
        jle     L_458BA1
        push    ebx
        mov     ebx, dword ptr [esi+0x5c]
        push    ebp
        push    edi
        mov     edi, dword ptr [esi+0x14]
        mov     esi, dword ptr [esi+0x48]
        inc     esi
        mov     ebp, eax
L_458B6B:
        xor     eax, eax
        mov     al, byte ptr [esi+1]
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
        jnz     L_458B6B
        pop     edi
        pop     ebp
        pop     ebx
L_458BA1:
        pop     esi
        ret
    }
}
