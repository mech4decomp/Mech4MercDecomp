/*
 * FUN_004F08F0 (33 B) — Conditional virtual dispatch.
 *
 * __thiscall (ECX = this), RET 12, 3 stack params.
 * If byte at [this+0x28] != 0, calls vcall+0x2c on [this+0x24]
 * with all three params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004f08f0(void)
{
    __asm {
        mov     al, [ecx + 0x28]
        test    al, al
        jz      l_done
        mov     edx, [esp + 0x0c]
        mov     ecx, [ecx + 0x24]
        mov     eax, [ecx]
        push    edx
        mov     edx, [esp + 0x0c]
        push    edx
        mov     edx, [esp + 0x0c]
        push    edx
        call    dword ptr [eax + 0x2c]
    l_done:
        ret     0x0c
    }
}
