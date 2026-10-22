/*
 * FUN_005d6440 (52 B) — __thiscall (ECX = this).
 *
 * If this->[0x454]->[0x514] == this, clear it. Then call virtual
 * method at vtable+0x11C, call FUN_00707E70(0), store float result
 * to this->[0x4D4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00707E70(int param);

__declspec(naked) void FUN_005d6440(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x454]
        cmp     dword ptr [eax + 0x514], esi
        jnz     skip
        mov     dword ptr [eax + 0x514], 0
skip:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x11C]
        push    0
        call    FUN_00707E70
        fstp    dword ptr [esi + 0x4D4]
        pop     esi
        ret
    }
}
