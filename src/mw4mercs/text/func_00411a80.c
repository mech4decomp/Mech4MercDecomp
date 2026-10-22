/*
 * FUN_00411a80 (119 B) — __thiscall: walks a linked list of entries
 * (this+0x18), compares each entry's name (entry+0x14) against the
 * given string via _strnicmp (IAT 0x0076b2b0), and calls FUN_004179b0
 * on matches. Allocates a small result node via FUN_004084c0(8, g_007b8810).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern int *g_0076b2b0;
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_00411a80(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007b8810]
        push    ebx
        mov     ebx, dword ptr [ecx + 0x18]
        push    ebp
        push    esi
        push    edi
        push    eax
        push    0x8
        call    FUN_004084c0
        xor     ecx, ecx
        add     esp, 0x8
        cmp     eax, ecx
        jz      L_411aa9
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [esp + 0x10], eax
        jmp     L_411aad
L_411aa9:
        mov     dword ptr [esp + 0x10], ecx
L_411aad:
        mov     ebp, dword ptr [esp + 0x18]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
L_411abf:
        test    ebx, ebx
        jz      L_411aeb
        mov     esi, dword ptr [ebx]
        test    esi, esi
        mov     ebx, dword ptr [ebx + 0x4]
        jz      L_411aeb
        mov     ecx, dword ptr [esi + 0x14]
        push    edi
        push    ebp
        push    ecx
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        test    eax, eax
        jnz     L_411abf
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        call    FUN_004179b0
        jmp     L_411abf
L_411aeb:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
