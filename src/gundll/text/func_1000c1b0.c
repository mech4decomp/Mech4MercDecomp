/*
 * FUN_1000c1b0 (58 B) - __stdcall, RET 0x4. Allocates param_1+0xc
 * bytes on the process heap, stamps a "ZmMe"/"dEnZ" magic header,
 * and returns a pointer past the header (or 0 on alloc failure).
 *
 * CFLAGS: /O1
 */

extern void *g_10049078;   /* IAT: GetProcessHeap */
extern void *g_10049074;   /* IAT: HeapAlloc */

__declspec(naked) void __stdcall FUN_1000c1b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        lea     eax, [esi + 0xc]
        push    eax
        push    0x0
        call    dword ptr [g_10049078]
        push    eax
        call    dword ptr [g_10049074]
        test    eax, eax
        jz      L_fail
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax], 0x6d654d5a
        mov     dword ptr [eax + esi + 0x8], 0x646e455a
        add     eax, 0x8
        pop     esi
        ret     0x4
    L_fail:
        xor     eax, eax
        pop     esi
        ret     0x4
    }
}
