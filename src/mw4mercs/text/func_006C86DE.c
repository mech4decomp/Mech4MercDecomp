/*
 * FUN_006C86DE (171 B) — dispatches a texture copy operation across one of
 * four loop variants based on argument relationships.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006C9430(void);
extern void __cdecl FUN_006C92d0(void);

__declspec(naked) void FUN_006C86DE(void)
{
    __asm {
        nop
        nop
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x18]
        push    edi
        mov     edi, dword ptr [esp+0x24]
        cmp     esi, edi
        jne     L_8730
        mov     edi, dword ptr [esp+0x20]
        cmp     edi, ebx
        mov     ebp, dword ptr [esp+0x28]
        jae     L_8718
    L_8700:
        mov     ecx, dword ptr [esp+0x14]
        push    ebp
        push    esi
        push    edi
        call    FUN_006C9430
        inc     edi
        cmp     edi, ebx
        jbe     L_8700
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    L_8718:
        mov     ecx, dword ptr [esp+0x14]
        push    ebp
        push    esi
        push    ebx
        call    FUN_006C9430
        inc     ebx
        cmp     ebx, edi
        jbe     L_8718
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    L_8730:
        mov     eax, dword ptr [esp+0x20]
        cmp     ebx, eax
        jne     L_8770
        cmp     edi, esi
        mov     ebp, dword ptr [esp+0x28]
        jae     L_8758
    L_8740:
        mov     ecx, dword ptr [esp+0x14]
        push    ebp
        push    edi
        push    ebx
        call    FUN_006C9430
        inc     edi
        cmp     edi, esi
        jbe     L_8740
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    L_8758:
        mov     ecx, dword ptr [esp+0x14]
        push    ebp
        push    esi
        push    ebx
        call    FUN_006C9430
        inc     esi
        cmp     esi, edi
        jbe     L_8758
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    L_8770:
        mov     ecx, dword ptr [esp+0x28]
        push    ecx
        mov     ecx, dword ptr [esp+0x18]
        push    edi
        push    eax
        push    esi
        push    ebx
        call    FUN_006C92d0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    }
}
