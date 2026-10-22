/*
 * FUN_004E4160 (21 B) — Copies 8 bytes from param_1 to this:
 * dword[4] and dword[8].
 *
 * __fastcall (ECX = this/dest), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004e4160(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, [esp + 4]
        mov     edx, [ecx + 4]
        mov     ecx, [ecx + 8]
        mov     [eax + 4], edx
        mov     [eax + 8], ecx
        ret     4
    }
}
