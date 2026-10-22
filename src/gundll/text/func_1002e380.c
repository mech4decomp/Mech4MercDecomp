/*
 * FUN_1002e380 (31 B) - __thiscall, RET 0x8. Getter: writes this->0x1c to
 * *param_1 and this->0x20 to *param_2 (if non-null), returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_1002e380(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      L_38d
        mov     edx, dword ptr [ecx + 0x1c]
        mov     dword ptr [eax], edx
L_38d:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      L_39a
        mov     ecx, dword ptr [ecx + 0x20]
        mov     dword ptr [eax], ecx
L_39a:
        xor     eax, eax
        ret     8
    }
}
