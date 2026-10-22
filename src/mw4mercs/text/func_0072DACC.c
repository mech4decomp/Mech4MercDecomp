/*
 * FUN_0072DACC (135 B) — __stdcall RET 0x10 (4 params). Looks up a
 * resource via IAT 0x76b098; on success allocates a copy via
 * FUN_006F3C80 (rep movsd/movsb) with lock/unlock around IAT
 * 0x76b0a0/0x76b0b0/0x76b0a8. Returns the copy or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b098;   /* IAT */
extern void *g_0076b0a0;   /* IAT */
extern void *g_0076b0b0;   /* IAT */
extern void *g_0076b0a8;   /* IAT */

extern void __cdecl FUN_006F3C80(void);

__declspec(naked) void FUN_0072DACC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax + 4]
        push    ecx
        and     edx, 0xffff
        push    edx
        push    esi
        call    dword ptr [g_0076b098]
        mov     ebx, eax
        test    ebx, ebx
        jne     L72db07
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        je      L72db00
        mov     dword ptr [eax], ebx
    L72db00:
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x10
    L72db07:
        push    ebp
        push    edi
        push    ebx
        push    esi
        call    dword ptr [g_0076b0a0]
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        je      L72db1d
        mov     dword ptr [eax], edi
    L72db1d:
        push    ebx
        push    esi
        call    dword ptr [g_0076b0b0]
        push    0
        push    edi
        mov     esi, eax
        call    FUN_006F3C80
        mov     ecx, edi
        mov     ebp, eax
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        push    ebx
        rep movsb
        call    dword ptr [g_0076b0a8]
        pop     edi
        mov     eax, ebp
        pop     ebp
        pop     esi
        pop     ebx
        ret     0x10
    }
}
