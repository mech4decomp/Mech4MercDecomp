/*
 * FUN_007573f0 (13 B) — __thiscall setter: stores arg to [this+0xdc].
 *
 *   MOV EAX,dword ptr [ESP+0x4]
 *   MOV dword ptr [ECX+0xdc],EAX
 *   RET 0x4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_007573f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0xdc], eax
        ret     4
    }
}
