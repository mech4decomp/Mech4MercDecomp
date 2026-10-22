/*
 * FUN_0069cb90 (31 B) — __thiscall destructor: sets vtable ptr 0x7999e4,
 * releases the object at this+0x60 (virtual call), then calls FUN_00561730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7999e4[];   /* vtable ptr @ 0x7999e4 */

extern void __cdecl FUN_00561730(void);

__declspec(naked) void FUN_0069cb90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x60]
        test    ecx, ecx
        mov     dword ptr [esi], offset g_7999e4
        jz      LBA6
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
LBA6:
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        ret
    }
}
