/*
 * FUN_00738cc0 (61 B) — __fastcall constructor (ECX = this).
 *
 * Zeroes a block of fields, sets two sentinel fields (0x20 = -1,
 * 0x24 = 1), and installs the vtable pointer at offset 0x00.
 *
 * __fastcall, RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_vtbl_7a70fc;   /* 0x007A70FC */

__declspec(naked) void __fastcall FUN_00738cc0(void *this)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xC], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1C], ecx
        mov     dword ptr [eax + 0x20], 0xFFFFFFFF
        mov     dword ptr [eax + 0x24], 0x1
        mov     dword ptr [eax + 0x2C], ecx
        mov     dword ptr [eax + 0x48], ecx
        mov     dword ptr [eax + 0x4C], ecx
        mov     dword ptr [eax + 0x50], ecx
        mov     dword ptr [eax + 0x54], ecx
        mov     dword ptr [eax], offset g_vtbl_7a70fc
        ret
    }
}
