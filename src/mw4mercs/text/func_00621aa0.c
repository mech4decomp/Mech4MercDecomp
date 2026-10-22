/*
 * FUN_00621aa0 (38 B) — Indexed array accessor.
 *
 * __thiscall (ECX = this). Returns element at index param from an
 * array [this+0]..[this+4] (element size 4). Returns 0 if index < 0
 * or index >= count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00621aa0(int param)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    edx, edx
        jge     l_valid
        xor     eax, eax
        ret     4
    l_valid:
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        sub     ecx, eax
        sar     ecx, 0x2
        cmp     edx, ecx
        jc      l_ok
        xor     eax, eax
        ret     4
    l_ok:
        mov     eax, dword ptr [eax + edx * 0x4]
        ret     4
    }
}
