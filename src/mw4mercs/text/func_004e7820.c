/*
 * FUN_004e7820 (319 B) — MLR/Adept __thiscall: iterates a list of
 * weapon/part names (via the +0x6c sub-object), lowercases each
 * (strlwr @ 0x76b304) and rejects entries whose name contains any of
 * four forbidden substrings (strstr @ 0x76b298). Returns the last
 * accepted entry pointer, or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_004084e0(void);

extern int (*g_0076b298)(void);   /* strstr @ 0x0076b298 */
extern int (*g_0076b304)(void);   /* strlwr @ 0x0076b304 */

__declspec(naked) void FUN_004e7820(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x6c]
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00416d00
        test    eax, eax
        jz      L784D
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x10]
        mov     ecx, edi
        call    FUN_00416d00
        test    eax, eax
        jnz     L7854
L784D:
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x8]
L7854:
        mov     ecx, edi
        call    FUN_00416d00
        mov     edx, dword ptr [esi + 0x58]
        lea     ecx, [esi + 0x58]
        mov     ebx, eax
        mov     byte ptr [esp + 0x13], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x10]
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], eax
        jz      L7955
        mov     ebp, dword ptr [g_0076b298]
L7885:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L794B
        mov     eax, dword ptr [esp + 0x18]
        cmp     dword ptr [esp + 0x14], eax
        jge     L7955
        mov     esi, dword ptr [ebx + 0x44]
        test    esi, esi
        jz      L78A9
        inc     byte ptr [esi - 0x1]
L78A9:
        push    esi
        call    dword ptr [g_0076b304]
        add     esp, 0x4
        test    esi, esi
        mov     edi, eax
        jz      L78CE
        mov     cl, byte ptr [esi - 0x1]
        lea     eax, [esi - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L78CE
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L78CE:
        push    0x77433c
        push    edi
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jnz     L7936
        push    0x774334
        push    edi
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jnz     L7936
        push    0x77432c
        push    edi
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jnz     L7936
        push    0x774320
        push    edi
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jnz     L7936
        mov     esi, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        mov     ecx, esi
        call    FUN_00416d00
        test    eax, eax
        jnz     L7927
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
L7927:
        mov     ecx, esi
        call    FUN_00416d00
        mov     ebx, eax
        inc     dword ptr [esp + 0x14]
        jmp     L793B
L7936:
        mov     byte ptr [esp + 0x13], 0x1
L793B:
        test    ebx, ebx
        jnz     L7885
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L7955
L794B:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x10
        ret
L7955:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x10
        ret
    }
}
