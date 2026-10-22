/*
 * FUN_5e003400 (22 B) — DirectDraw wrapper: increment + return a counter
 * stored at object+0x41f0.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003400(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x41f0]
        inc     ecx
        mov     dword ptr [eax + 0x41f0], ecx
        mov     eax, ecx
        ret     0x4
    }
}
