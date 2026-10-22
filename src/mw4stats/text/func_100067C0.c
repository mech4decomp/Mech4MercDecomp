/*
 * FUN_100067c0 (16 B) - __thiscall: OR param_1 into
 * (*(int*)(this+4))[0x1024]. RET 0x4.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_100067c0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [esp + 0x4]
        or      dword ptr [eax + 0x1024], ecx
        ret     0x4
    }
}
