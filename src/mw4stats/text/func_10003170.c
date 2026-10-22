/*
 * MW4Stats.dll - FUN_10003170 (0x10003170, 22 B, __thiscall)
 * Array getter: if (idx < count) return arr[idx]; else return 0.
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void FUN_10003170(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     eax, dword ptr [ecx + 4]
        jnc     L_ret0
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + eax*4]
        ret     4
L_ret0:
        xor     eax, eax
        ret     4
    }
}
