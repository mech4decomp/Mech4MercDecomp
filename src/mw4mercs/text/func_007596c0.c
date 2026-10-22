/*
 * FUN_007596c0 (71 B) — __fastcall constructor (ECX = this).
 *
 * Zeroes fields 0x00/0x08..0x1C, sets vtable pointer at +0x04 to
 * 0x7a5d90, and initializes the small integer array at +0x20..+0x34.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_vtable_7a5d90[];

__declspec(naked) void __fastcall FUN_007596c0(void *this)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     ecx, 3
        mov     dword ptr [eax + 4], offset g_vtable_7a5d90
        mov     dword ptr [eax + 0x20], 4
        mov     dword ptr [eax + 0x24], 1
        mov     dword ptr [eax + 0x28], 5
        mov     dword ptr [eax + 0x2c], 2
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x34], ecx
        ret
    }
}
