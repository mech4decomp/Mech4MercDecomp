/*
 * FUN_10008900 (20 B) - __fastcall.
 * Sets vtable 0x10049608 at [ECX] and zeroes [+4],[+8],[+0xc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_10008900(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], 0x10049608
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        ret
    }
}
