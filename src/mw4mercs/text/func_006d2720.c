/*
 * FUN_006D2720 (40 B) — Initialize 12 DWORDs of a struct to defaults:
 * +0x00 = -1, +0x04 = -1, +0x08 = 0, +0x0C = 0, +0x10 = -1,
 * +0x18..+0x2C = 0.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   8B C1             mov     eax, ecx
 *   33 C9             xor     ecx, ecx
 *   83 CA FF          or      edx, -1
 *   89 10             mov     [eax], edx
 *   89 50 04          mov     [eax + 4], edx
 *   89 48 08          mov     [eax + 8], ecx
 *   89 48 0C          mov     [eax + 0xc], ecx
 *   89 50 10          mov     [eax + 0x10], edx
 *   89 48 18          mov     [eax + 0x18], ecx
 *   89 48 1C          mov     [eax + 0x1c], ecx
 *   89 48 20          mov     [eax + 0x20], ecx
 *   89 48 24          mov     [eax + 0x24], ecx
 *   89 48 28          mov     [eax + 0x28], ecx
 *   89 48 2C          mov     [eax + 0x2c], ecx
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __fastcall FUN_006d2720(void *this)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        or      edx, -1
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 0x2c], ecx
        ret
    }
}
