/*
 * FUN_1000b1e0 (39 B) - __cdecl. Wide-string copy: wcsncpy(dst, src,
 * count-1) then null-terminates dst[count-1].
 *
 * __cdecl, 3 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021108;   /* wcsncpy IAT @ 0x10021108 */

__declspec(naked) void __cdecl FUN_1000b1e0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     eax, [esi + -0x1]
        push    eax
        push    ecx
        push    edi
        call    dword ptr [g_10021108]
        add     esp, 0xc
        mov     word ptr [edi + esi*2 - 2], 0
        pop     edi
        pop     esi
        ret
    }
}
