/*
 * FUN_0060e640 (36 B) — Writes 0 to **(param+4); if this+4 is non-null,
 * writes *(this+4+0x98c) there instead. Returns 1.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_0060e640(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [ecx + 0x4]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [eax], 0x0
        jz      l_done
        mov     ecx, dword ptr [ecx + 0x98c]
        mov     dword ptr [eax], ecx
    l_done:
        mov     eax, 0x1
        ret     0x8
    }
}
