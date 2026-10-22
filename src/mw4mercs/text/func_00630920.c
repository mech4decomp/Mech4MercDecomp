/*
 * FUN_00630920 (15 B) — __thiscall setter: stores arg into [this+0x2c],
 * then tail-calls FUN_00630930. RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00630930(void);

__declspec(naked) void FUN_00630920(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x2c], eax
        call    FUN_00630930
        ret     0x4
    }
}
