/*
 * FUN_0066bde0 (57 B) — Constructor: sets vtable pointer and zeroes fields.
 *
 * __fastcall (ECX = this). No stack params, RET (no cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_vtable_796ecc; /* PTR_LAB_00796ecc */

__declspec(naked) void __fastcall FUN_0066bde0(void *this)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x20], 0xbf800000
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     byte ptr [eax + 0x1c], cl
        mov     dword ptr [eax], offset g_vtable_796ecc
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], ecx
        mov     dword ptr [eax + 0x40], ecx
        mov     dword ptr [eax + 0x44], ecx
        mov     dword ptr [eax + 0x48], ecx
        mov     dword ptr [eax + 0x4c], ecx
        mov     dword ptr [eax + 0x50], ecx
        mov     dword ptr [eax + 0x54], ecx
        mov     dword ptr [eax + 0x58], ecx
        mov     dword ptr [eax + 0x5c], ecx
        ret
    }
}
