/*
 * FUN_100017C0 (21 B) - __stdcall, RET 0x4.  COM factory AddRef (vtable[1]
 * @0x1004926c): InterlockedIncrement(this->refcount at +0x24), returns it.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049120;   /* IAT: KERNEL32.InterlockedIncrement */

__declspec(naked) void __stdcall FUN_100017C0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        lea     esi, [eax + 0x24]
        push    esi
        call    dword ptr [g_10049120]
        mov     eax, dword ptr [esi]
        pop     esi
        ret     0x4
    }
}
