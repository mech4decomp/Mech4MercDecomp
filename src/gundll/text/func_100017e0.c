/*
 * FUN_100017E0 (42 B) - __stdcall, RET 0x4.  COM Release helper: calls
 * InterlockedDecrement (IAT 0x100491bc) on this->refcount at +0x24; if the
 * result is zero and the object is non-null, calls vtable[9] (vtable[0x24])
 * with ecx=this and arg 1 (final-release path).  Returns the decremented
 * count.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491bc;   /* IAT: KERNEL32.InterlockedDecrement */

__declspec(naked) void __stdcall FUN_100017E0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        lea     eax, [esi + 0x24]
        push    eax
        call    dword ptr [g_100491bc]
        mov     edi, eax
        test    edi, edi
        jne     L_1803
        test    esi, esi
        je      L_1803
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
    L_1803:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    }
}
