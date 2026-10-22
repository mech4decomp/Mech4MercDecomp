/*
 * FUN_00757400 (13 B) — __thiscall setter: stores arg to [this+0xe0].
 *
 *   MOV EAX,dword ptr [ESP+0x4]
 *   MOV dword ptr [ECX+0xe0],EAX
 *   RET 0x4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00757400(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0xe0], eax
        ret     4
    }
}
