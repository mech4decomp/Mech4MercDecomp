/*
 * FUN_005b9dd0 (138 B) — Queries a sub-object state and compares against
 * a parameter, returning a boolean.
 *
 * __stdcall, RET 8 (two stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f07c0(void);
extern void FUN_0041fd80(void);

__declspec(naked) void __stdcall FUN_005b9dd0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        call    FUN_005f07c0
        mov     ebx, dword ptr [esp + 0x10]
        lea     esi, [ebx + 0x10]
        mov     ecx, esi
        mov     edi, eax
        call    FUN_0041fd80
        test    eax, eax
        jz      L52
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L52
        mov     esi, dword ptr [ebx + 0x1c]
        test    esi, esi
        jnz     L19
        mov     ecx, dword ptr [esp + 0x14]
        xor     eax, eax
        xor     edx, edx
        cmp     eax, ecx
        pop     edi
        setz    dl
        pop     esi
        mov     al, dl
        pop     ebx
        ret     0x8
L19:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x60]
        test    eax, eax
        jnz     L37
        mov     ecx, dword ptr [esp + 0x14]
        xor     edx, edx
        cmp     eax, ecx
        pop     edi
        setz    dl
        pop     esi
        mov     al, dl
        pop     ebx
        ret     0x8
L37:
        xor     ecx, ecx
        cmp     eax, esi
        setnz   cl
        xor     edx, edx
        pop     edi
        pop     esi
        pop     ebx
        inc     ecx
        mov     eax, ecx
        cmp     eax, dword ptr [esp + 0x8]
        setz    dl
        mov     al, dl
        ret     0x8
L52:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0x8
    }
}
