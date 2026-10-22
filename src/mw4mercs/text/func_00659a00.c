/*
 * FUN_00659a00 (71 B) — Copy a 0x28-byte struct from param_2 to param_1.
 *
 * If param_1 != 0, copies fields at offsets 0x00..0x24 (with byte copies
 * at 0x04 and 0x20) from param_2 to param_1.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00659a00(void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_a46
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     dl, byte ptr [ecx + 0x4]
        mov     byte ptr [eax + 0x4], dl
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [ecx + 0x10]
        mov     dword ptr [eax + 0x10], edx
        mov     edx, dword ptr [ecx + 0x14]
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [ecx + 0x18]
        mov     dword ptr [eax + 0x18], edx
        mov     edx, dword ptr [ecx + 0x1c]
        mov     dword ptr [eax + 0x1c], edx
        mov     dl, byte ptr [ecx + 0x20]
        mov     ecx, dword ptr [ecx + 0x24]
        mov     byte ptr [eax + 0x20], dl
        mov     dword ptr [eax + 0x24], ecx
    L_a46:
        ret
    }
}
