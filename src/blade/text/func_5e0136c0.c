/*
 * FUN_5e0136c0 (15 B) — DirectDraw caps setter.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *   this->[0x24] = param_1;
 *   DAT_5e77a6cc = param_1;
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a6cc;   /* DAT_5e77a6cc */

__declspec(naked) void __stdcall FUN_5e0136c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x24], eax
        mov     dword ptr [g_5e77a6cc], eax
        ret     0x4
    }
}
