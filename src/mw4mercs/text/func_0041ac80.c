/*
 * FUN_0041ac80 (39 B) — __thiscall wrapper: converts quaternion param_1
 * (at [ESP+0x4]) to a rotation matrix via FUN_0041a160 into a local, then
 * calls FUN_0041acb0 on `this` with that matrix.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041acb0(void);

__declspec(naked) void FUN_0041ac80(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        sub     esp, 0x30
        push    esi
        mov     esi, ecx
        push    eax
        lea     ecx, [esp+0x8]
        call    FUN_0041a160
        lea     ecx, [esp+0x4]
        push    ecx
        mov     ecx, esi
        call    FUN_0041acb0
        pop     esi
        add     esp, 0x30
        ret     0x4
    }
}
