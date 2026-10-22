/*
 * FUN_0067fa30 (40 B) — __thiscall, RET 4.
 *
 * If this->byte_0x24 == 0: return (this->dword_0x20 & param) != 0;
 * else: return (this->dword_0x1c & param) != 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_0067fa30(unsigned int param)
{
    __asm {
        mov     al, byte ptr [ecx + 0x24]
        test    al, al
        jz      L_else
        mov     eax, dword ptr [esp + 0x4]
        test    dword ptr [ecx + 0x1C], eax
        jz      L_ret0
        mov     al, 0x1
        ret     0x4
L_else:
        mov     edx, dword ptr [esp + 0x4]
        test    dword ptr [ecx + 0x20], edx
        jz      L_ret0
        mov     al, 0x1
        ret     0x4
L_ret0:
        xor     al, al
        ret     0x4
    }
}
