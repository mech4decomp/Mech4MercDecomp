/*
 * FUN_004AE3E0 (170 B) — resizes a 12-byte-element array, reallocating and
 * copying elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_004AE3E0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        lea     edi, [ebp+4]
        add     eax, 4
        cmp     edi, eax
        mov     dword ptr [ebp], 3
        mov     dword ptr [edi], 0
        mov     dword ptr [edi+4], 0
        je      L_e483
        mov     ebx, dword ptr [eax+4]
        test    ebx, ebx
        jbe     L_e46d
        mov     esi, dword ptr [eax]
        cmp     ebx, dword ptr [edi+4]
        je      L_e450
        test    ebx, ebx
        jbe     L_e43f
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      L_e429
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_e429:
        lea     ecx, [ebx+ebx*2]
        shl     ecx, 2
        push    ecx
        mov     dword ptr [edi+4], ebx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [edi], eax
        jmp     L_e450
    L_e43f:
        mov     edx, dword ptr [edi]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
    L_e450:
        mov     eax, dword ptr [edi+4]
        test    eax, eax
        jbe     L_e483
        mov     edi, dword ptr [edi]
        lea     ecx, [eax+eax*2]
        shl     ecx, 2
        shr     ecx, 2
        rep movsd
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    L_e46d:
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      L_e483
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi+4], 0
    L_e483:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
