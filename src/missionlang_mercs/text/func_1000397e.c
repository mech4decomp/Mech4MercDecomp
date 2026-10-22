/*
 * FUN_1000397e (24 B) — __stdcall helper that records a context into the
 * global struct at 0x10005350: [EBP+8] -> +8, EAX -> +4, EBP -> +0xc.
 * Uses the caller's EBP frame (no prologue). CRT-adjacent SEH/context
 * helper family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_10005350;

__declspec(naked) void __stdcall FUN_1000397e(void)
{
    __asm {
        push    ebx
        push    ecx
        mov     ebx, offset g_10005350
        mov     ecx, dword ptr [ebp + 8]
        mov     dword ptr [ebx + 8], ecx
        mov     dword ptr [ebx + 4], eax
        mov     dword ptr [ebx + 0xc], ebp
        pop     ecx
        pop     ebx
        ret     4
    }
}
