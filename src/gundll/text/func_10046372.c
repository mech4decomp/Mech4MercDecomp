/*
 * FUN_10046372 (103 B) — __cdecl, 1 param.
 * Deep-copy a null-terminated pointer array (malloc + per-elem copy).
 */

extern void *__cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_100374e6(void);
extern void *__cdecl FUN_1004679f(void);

__declspec(naked) void __cdecl FUN_10046372(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        xor     ecx, ecx
        test    edi, edi
        jnz     L1
        xor     eax, eax
        pop     edi
        ret
    L1:
        cmp     dword ptr [edi], 0x0
        lea     eax, [edi + 0x4]
        jz      L2
    lp1:
        mov     edx, dword ptr [eax]
        inc     ecx
        add     eax, 0x4
        test    edx, edx
        jnz     lp1
    L2:
        push    ebx
        push    ebp
        lea     eax, [ecx*4 + 0x4]
        push    esi
        push    eax
        call    FUN_1003c3c5
        mov     esi, eax
        pop     ecx
        test    esi, esi
        mov     ebp, esi
        jnz     L3
        push    0x9
        call    FUN_100374e6
        pop     ecx
    L3:
        mov     eax, dword ptr [edi]
        mov     ebx, edi
    lp2:
        test    eax, eax
        jz      L4
        push    eax
        add     ebx, 0x4
        call    FUN_1004679f
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [ebx]
        pop     ecx
        add     esi, 0x4
        jmp     lp2
    L4:
        and     dword ptr [esi], 0x0
        mov     eax, ebp
        pop     esi
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}
