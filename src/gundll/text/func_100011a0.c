/*
 * FUN_100011A0 (21 B) - __stdcall, RET 0x4.  COM factory AddRef (vtable[1]
 * @0x1004926c): InterlockedIncrement(this->refcount at +4), returns it.
 * (Ghidra missed this entry - transcribed from reference bytes; vtable
 * 0x1004926c slot 1.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049120;   /* IAT: KERNEL32.InterlockedIncrement */

__declspec(naked) void __stdcall FUN_100011A0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        lea     esi, [eax + 0x4]
        push    esi
        call    dword ptr [g_10049120]
        mov     eax, dword ptr [esi]
        pop     esi
        ret     0x4
    }
}
