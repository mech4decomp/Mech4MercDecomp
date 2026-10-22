/*
 * FUN_100347a0 (58 B) - __stdcall, RET 0x8.  Makes a virtual call
 * through [edi+0x48] (6 args) on the object graph rooted at arg1,
 * then InterlockedDecrement(arg1+0x2c) and returns the virtual call's
 * result.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491bc;   /* IAT: KERNEL32.InterlockedDecrement */

__declspec(naked) void __stdcall FUN_100347a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [eax + 0x18]
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     edx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi + 0x14]
        mov     eax, dword ptr [eax + 0xc]
        push    edi
        mov     edi, dword ptr [eax]
        push    0x80000000
        push    0
        push    0
        push    ecx
        push    edx
        push    eax
        call    dword ptr [edi + 0x48]
        add     esi, 0x2c
        push    esi
        mov     edi, eax
        call    dword ptr [g_100491bc]
        mov     eax, edi
        pop     edi
        pop     esi
        ret     8
    }
}
