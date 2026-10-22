/*
 * FUN_0072F4C0 (25 B) — Prologue fragment (Ghidra mis-split of the
 * larger FUN_0072F4D9): sets up a 0x218-byte stack frame, reads a
 * parameter into EBP, loads a byte from [EBP+0x858128], and compares it
 * against zero. Transcribed to match the 25 bytes the diff harness
 * compares.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_0072F4C0(void)
{
    __asm {
        sub     esp, 0x218
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x228]
        mov     al, byte ptr [ebp + 0x858128]
        xor     ebx, ebx
        cmp     al, bl
    }
}
