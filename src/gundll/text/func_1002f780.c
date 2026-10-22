/*
 * FUN_1002F780 (24 B) - __stdcall, RET 0x8.  HeapAlloc(arg1->heap+0x4,
 * HEAP_ZERO_MEMORY=0, arg2) and returns the pointer.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049074;   /* IAT: HeapAlloc */

__declspec(naked) void __stdcall FUN_1002F780(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + 0x4]
        push    eax
        push    0
        push    edx
        call    dword ptr [g_10049074]
        ret     0x8
    }
}
