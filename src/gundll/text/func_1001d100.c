/*
 * FUN_1001d100 (41 B) — __thiscall, RET 0x4. Init.
 * Zeroes +0x4..+0x1c, stores magic 0x584d4c54 ("TMLX") at +0x0,
 * stores param_1 at +0x20.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1001d100(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], 0x584d4c54
        mov     dword ptr [eax + 0x20], ecx
        ret     0x4
    }
}
