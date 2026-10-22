/*
 * FUN_100030f0 (20 B) - __fastcall. Installs vtable 0x100211ec at
 * [this], then calls the virtual method at vtable+8 on the object at
 * [this+4] if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Aliased via former cpp/ translation thunk: FUN_100030f0 (deleted 2026-08; byte-identical jmp thunk, no .c scaffold).
 */

__declspec(naked) void __cdecl FUN_100030f0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x100211ec
        mov     ecx, dword ptr [ecx + 0x4]
        test    ecx, ecx
        jz      L3103
        mov     eax, dword ptr [ecx]
        push    ecx
        call    dword ptr [eax + 0x8]
L3103:
        ret
    }
}
