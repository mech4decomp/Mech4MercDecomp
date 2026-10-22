/*
 * FUN_5e013670 (15 B) — DirectDraw caps setter (__thiscall, ECX=this).
 *
 * __thiscall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a844;

__declspec(naked) void __fastcall FUN_5e013670(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [g_5e77a844], eax
        ret     0x4
    }
}
