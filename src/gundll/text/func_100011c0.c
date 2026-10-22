/*
 * FUN_100011C0 (38 B) - __stdcall, RET 0x4.  COM factory Release (vtable[2]
 * @0x1004926c): InterlockedDecrement(this->refcount at +4); when it hits 0,
 * shared_free(this) via FUN_10001d60; returns the refcount.
 * (Ghidra missed this entry - transcribed from reference bytes.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491bc;   /* IAT: KERNEL32.InterlockedDecrement */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_100011C0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     eax, [edi + 0x4]
        push    eax
        call    dword ptr [g_100491bc]
        mov     esi, eax
        test    esi, esi
        jnz     L_done
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_done:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
