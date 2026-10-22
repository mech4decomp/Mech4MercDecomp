/*
 * FUN_1002F720 (12 B) - __stdcall, RET 0x4.  Tail-call thunk: adds 8 to
 * arg1 and jumps to InterlockedIncrement (IAT 0x10049120).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049120;   /* IAT: KERNEL32.InterlockedIncrement */

__declspec(naked) void __stdcall FUN_1002F720(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        add     eax, 0x8
        mov     dword ptr [esp + 0x4], eax
        jmp     dword ptr [g_10049120]
    }
}
