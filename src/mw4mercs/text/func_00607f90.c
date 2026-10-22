/*
 * FUN_00607f90 (64 B) — __thiscall constructor.
 *
 * Sets vtable 0x78bee0, decrements a refcount at this+0x14 (freeing when it
 * hits 0), calls FUN_00415380(), and if (arg & 1) calls FUN_004084e0(this).
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00607f90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x78bee0
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jz      L_skip1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_skip1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_skip1:
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip2
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_skip2:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
