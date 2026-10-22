/*
 * FUN_005e89a0 (23 B) - Returns a float depending on a byte flag at this+0x4A4.
 *
 * __thiscall (ECX = this), no stack params, RET 0. Returns float in ST(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005e89a0(void)
{
    

extern int DAT_007895c0;
extern int DAT_007895bc;
__asm {
cmp     byte ptr [ecx + 0x4A4], 1
        jnz     L_005e89b0
        fld dword ptr [DAT_007895c0]
        ret
    L_005e89b0:
        fld dword ptr [DAT_007895bc]
        ret
    }


}
