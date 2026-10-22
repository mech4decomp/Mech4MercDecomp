/*
 * FUN_10006e60 (23 B) - __thiscall: this[0]=1, this[4]=1, this[8]=param_1.
 * RET 0x4.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10006e60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx], 1
        mov     dword ptr [ecx + 0x4], 1
        mov     dword ptr [ecx + 0x8], eax
        ret     0x4
    }
}
