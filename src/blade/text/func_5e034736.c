/*
 * FUN_5e034736 (103 B) — deep-copies a string table (array of char* ending in
 * NULL) into a freshly allocated table, duplicating each string via
 * FUN_5e03496c. Returns the new table pointer (or NULL if the source is NULL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02b6e4(void);
extern void __cdecl FUN_5e02b669(void);
extern void __cdecl FUN_5e03496c(void);

__declspec(naked) void FUN_5e034736(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 8]
        xor     ecx, ecx
        test    edi, edi
        jnz     L_745
        xor     eax, eax
        pop     edi
        ret
    L_745:
        cmp     dword ptr [edi], 0
        lea     eax, [edi + 4]
        jz      L_757
    L_74d:
        mov     edx, dword ptr [eax]
        inc     ecx
        add     eax, 4
        test    edx, edx
        jnz     L_74d
    L_757:
        push    ebx
        push    ebp
        lea     eax, [ecx*4 + 4]
        push    esi
        push    eax
        call    FUN_5e02b6e4
        mov     esi, eax
        pop     ecx
        test    esi, esi
        mov     ebp, esi
        jnz     L_778
        push    9
        call    FUN_5e02b669
        pop     ecx
    L_778:
        mov     eax, dword ptr [edi]
        mov     ebx, edi
    L_77c:
        test    eax, eax
        jz      L_793
        push    eax
        add     ebx, 4
        call    FUN_5e03496c
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [ebx]
        pop     ecx
        add     esi, 4
        jmp     L_77c
    L_793:
        and     dword ptr [esi], 0
        mov     eax, ebp
        pop     esi
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}
