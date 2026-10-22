/*
 * FUN_0061FC30 (34 B) — __thiscall setter.
 *
 * Stores param1 at this+0x18, param2 at this+0x00, and if param2 is
 * non-null copies two dwords from param2+0x30/+0x34 into this+0x04/+0x08.
 * Returns 0. RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_0061fc30(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x18], eax
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        mov     dword ptr [ecx], eax
        jz      l_done
        mov     edx, dword ptr [eax + 0x30]
        mov     eax, dword ptr [eax + 0x34]
        mov     dword ptr [ecx + 0x4], edx
        mov     dword ptr [ecx + 0x8], eax
    l_done:
        xor     eax, eax
        ret     8
    }
}
