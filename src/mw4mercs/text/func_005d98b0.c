/*
 * FUN_005d98b0 (46 B) — __thiscall, RET 8. Returns 0 if this->[0x10] is
 * null or this->[0xc] is nonzero; otherwise calls FUN_006850b0(arg1,arg2)
 * and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006850b0(int, int);

__declspec(naked) void __cdecl FUN_005d98b0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jnz     L_98be
        xor     al, al
        ret     0x8
L_98be:
        mov     dl, byte ptr [eax + 0xc]
        test    dl, dl
        jz      L_98ca
        xor     al, al
        ret     0x8
L_98ca:
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    eax
        push    edx
        call    FUN_006850b0
        mov     al, 0x1
        ret     0x8
    }
}
