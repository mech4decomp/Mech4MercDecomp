/*
 * FUN_004F08C0 (16 B) — Conditional virtual dispatch: if byte at
 * [ECX+0x28] is nonzero, loads ECX from [ECX+0x24] and jumps to
 * [EAX+0x24] (vtable method).
 *
 * __fastcall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004f08c0(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x28]
        test    al, al
        jz      l_skip
        mov     ecx, dword ptr [ecx + 0x24]
        mov     eax, dword ptr [ecx]
        jmp     dword ptr [eax + 0x24]
    l_skip:
        ret
    }
}
