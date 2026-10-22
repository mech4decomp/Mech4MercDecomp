/*
 * FUN_00442180 (45 B) — MLR mesh constructor (__thiscall, RET 0x4).
 * Sets vtable 0x76e6f0 and initializes sub-objects at this+0x64/0x6c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00458560(void);
extern void FUN_004911e0(void);
extern void FUN_00491280(void);

__declspec(naked) void FUN_00442180(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00458560
        lea     ecx, [esi + 0x64]
        call    FUN_004911e0
        lea     ecx, [esi + 0x6c]
        call    FUN_00491280
        mov     dword ptr [esi], 0x76e6f0
        mov     byte ptr [esi + 0x11], 0x2
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
