/*
 * FUN_00670c70 (35 B) — Linear search over stride-0xC records in range
 * [this+0x68, this+0x6C) for one whose first dword equals param.
 * Returns 1 if found, 0 otherwise.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00670c70(int param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x68]
        mov     ecx, dword ptr [ecx + 0x6C]
        cmp     eax, ecx
        jz      notfound
        mov     edx, dword ptr [esp + 0x4]
    L_loop:
        cmp     dword ptr [eax], edx
        jz      found
        add     eax, 0xC
        cmp     eax, ecx
        jnz     L_loop
    notfound:
        xor     al, al
        ret     4
    found:
        mov     al, 1
        ret     4
    }
}
