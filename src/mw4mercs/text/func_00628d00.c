/*
 * FUN_00628d00 (36 B) — Stores param to this+0x16f. If param non-zero,
 * calls virtual method at offset 0x10 of the object at this+0x158;
 * otherwise calls the one at offset 0x14.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00628d00(void *param)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        mov     byte ptr [ecx + 0x16f], al
        mov     ecx, dword ptr [ecx + 0x158]
        jz      l_else
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
    l_else:
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
    }
}
