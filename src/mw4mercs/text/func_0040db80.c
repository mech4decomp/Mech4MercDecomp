/*
 * FUN_0040db80 (285 B) — string/parameter expansion helper in the loader
 * region. Recursive; expands '$(' ... ')' tokens via strchr (IAT 0x0076b308)
 * and helper FUN_004126e0 / FUN_004128e0 / FUN_0040f7f0 / FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b308;                 /* IAT: strchr */
extern void __cdecl FUN_004126e0(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_0040f7f0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040db80(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x14]
        push    edi
L_db8c:
        mov     al, byte ptr [esi]
        test    al, al
        jz      L_dbb0
L_db92:
        cmp     al, 0x24
        jnz     L_db9c
        cmp     byte ptr [esi+1], 0x28
        jz      L_dbb0
L_db9c:
        mov     edx, dword ptr [esp+0x20]
        mov     byte ptr [ebx], al
        mov     al, byte ptr [esi+1]
        inc     ebx
        inc     esi
        dec     edx
        test    al, al
        mov     dword ptr [esp+0x20], edx
        jnz     L_db92
L_dbb0:
        cmp     byte ptr [esi], 0
        jz      L_dc95
        push    0x29
        push    esi
        call    dword ptr [g_0076b308]
        add     esp, 8
        test    eax, eax
        jz      L_dc95
        sub     eax, esi
        sub     eax, 2
        mov     edi, eax
        lea     eax, [edi+1]
        push    eax
        lea     ecx, [esp+0x20]
        mov     dword ptr [esp+0x20], 0
        call    FUN_004126e0
        mov     al, byte ptr [esi+2]
        add     esi, 2
        xor     ecx, ecx
        cmp     al, 0x29
        jz      L_dc04
L_dbf5:
        mov     edx, dword ptr [esp+0x1c]
        inc     esi
        mov     byte ptr [ecx+edx], al
        mov     al, byte ptr [esi]
        inc     ecx
        cmp     al, 0x29
        jnz     L_dbf5
L_dc04:
        mov     eax, dword ptr [esp+0x1c]
        lea     ecx, [esp+0x1c]
        mov     byte ptr [eax+edi], 0
        call    FUN_004128e0
        mov     edi, dword ptr [esp+0x14]
        lea     ecx, [esp+0x1c]
        push    ecx
        lea     edx, [esp+0x1c]
        push    edx
        mov     ecx, edi
        inc     esi
        call    FUN_0040f7f0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        jz      L_dc6d
        mov     ebp, dword ptr [eax+0x14]
        mov     al, byte ptr [ebp+4]
        test    al, al
        jnz     L_dc6d
        mov     eax, dword ptr [esp+0x20]
        mov     ecx, dword ptr [ebp]
        push    eax
        push    ebx
        push    ecx
        push    edi
        mov     byte ptr [ebp+4], 1
        call    FUN_0040db80
        mov     edx, dword ptr [esp+0x30]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x10
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        sub     edx, ecx
        mov     dword ptr [esp+0x20], edx
        add     ebx, ecx
        mov     byte ptr [ebp+4], al
L_dc6d:
        mov     eax, dword ptr [esp+0x1c]
        test    eax, eax
        jz      L_db8c
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_db8c
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_db8c
L_dc95:
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [ebx], 0
        pop     ebx
        ret
    }
}
