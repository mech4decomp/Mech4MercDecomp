/*
 * FUN_004a6ea0 (78 B) — MLR: object destructor (__thiscall). Sets vtable
 * 0x7703d0, releases the 0x2b4 ref-counted object (virtual call), frees
 * the 0x2bc ref-counted buffer via FUN_004084e0, and calls base
 * destructor FUN_004a93f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(int p);
extern void __cdecl FUN_004a93f0(void);

__declspec(naked) void FUN_004a6ea0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x2b4]
        test    ecx, ecx
        mov     dword ptr [esi], 0x7703d0
        jz      L6ec8
        dec     word ptr [ecx + 0x10]
        cmp     word ptr [ecx + 0x10], 0x0
        jnz     L6ec8
        test    ecx, ecx
        jz      L6ec8
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L6ec8:
        mov     eax, dword ptr [esi + 0x2bc]
        test    eax, eax
        jz      L6ee5
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L6ee5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6ee5:
        mov     ecx, esi
        call    FUN_004a93f0
        pop     esi
        ret
    }
}
