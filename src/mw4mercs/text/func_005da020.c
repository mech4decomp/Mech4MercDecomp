/*
 * FUN_005da020 (18 B) — __stdcall, RET 8. If param1 != 0, frees it via
 * FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005da020(void *p1, void *p2)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        pop     ecx
    L1:
        ret     8
    }
}
