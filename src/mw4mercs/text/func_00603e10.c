/*
 * FUN_00603e10 (32 B) — __thiscall ctor (RET 0x4). Calls base ctor
 * FUN_00603dd0, then installs vtable 0x78b908 and sets +0x48 to -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00603dd0(void);

__declspec(naked) void FUN_00603e10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00603dd0
        mov     dword ptr [esi], 0x78b908
        mov     dword ptr [esi + 0x48], 0xffffffff
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
