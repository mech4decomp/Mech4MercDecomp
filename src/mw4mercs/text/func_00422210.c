/*
 * FUN_00422210 (90 B) — MLR object dtor (__thiscall). Sets vtable
 * 0x76dd8c, releases each handle in the array (FUN_004906f0 + virtual
 * delete), frees the array (FUN_004084e0), then calls sub-dtor
 * FUN_00422660.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004906f0(void);
extern void FUN_004084e0(void *p);
extern void FUN_00422660(void);

__declspec(naked) void FUN_00422210(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x48]
        test    eax, eax
        mov     dword ptr [edi], 0x76dd8c
        jle     L55
        push    ebx
        push    ebp
        mov     ebp, dword ptr [edi + 0x30]
        push    esi
        mov     esi, dword ptr [edi + 0x4c]
        mov     ebx, eax
L2B:
        mov     eax, dword ptr [esi]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [ebp + 0x10034]
        push    eax
        call    FUN_004906f0
        test    eax, eax
        jnz     L4C
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L4C
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L4C:
        add     esi, 0x4
        dec     ebx
        jnz     L2B
        pop     esi
        pop     ebp
        pop     ebx
L55:
        mov     eax, dword ptr [edi + 0x4c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     ecx, edi
        call    FUN_00422660
        pop     edi
        ret
    }
}
