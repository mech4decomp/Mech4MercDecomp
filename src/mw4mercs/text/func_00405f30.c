/*
 * FUN_00405f30 (99 B) -- frees *arg0 if non-null, then allocates a copy of
 * the string arg1 (strlen via repne scasb, memcpy via rep movsd/movsb).
 * Returns 1 on success, 0 on alloc failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void FUN_00405f30(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0xc]
        mov     eax, dword ptr [esi]
        test    eax, eax
        push    edi
        jz      L1
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
L1:
        mov     ebx, dword ptr [esp+0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        push    0
        not     ecx
        push    ecx
        call    FUN_006f3c80
        mov     edx, eax
        test    edx, edx
        mov     dword ptr [esi], edx
        jz      L2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
L2:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
    }
}
