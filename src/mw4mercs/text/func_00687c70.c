/*
 * FUN_00687c70 (47 B) — cdecl, two struct pointers, RET.
 *
 * If param_1 is non-null, copies a 0x18-byte struct from param_2 into it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00687c70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_done
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0xc], edx
        mov     dl, byte ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0x14]
        mov     byte ptr [eax + 0x10], dl
        mov     dword ptr [eax + 0x14], ecx
L_done:
        ret
    }
}
