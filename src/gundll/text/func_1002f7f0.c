/*
 * FUN_1002F7F0 (24 B) - __stdcall, RET 0x8.  HeapSize(arg1->heap+0x4, 0,
 * arg2) and returns the size.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490ac;   /* IAT: HeapSize */

__declspec(naked) void __stdcall FUN_1002F7F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + 0x4]
        push    eax
        push    0
        push    edx
        call    dword ptr [g_100490ac]
        ret     0x8
    }
}
