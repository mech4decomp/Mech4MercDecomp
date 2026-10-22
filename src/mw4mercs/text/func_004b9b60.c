/*
 * FUN_004B9B60 (34 B) — Destructor body (__fastcall, ECX=this).
 * Sets vtable, checks field[0x144], calls virtual[0](1) if non-null,
 * then calls FUN_004c68f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004c68f0(void *this);

__declspec(naked) void __fastcall FUN_004b9b60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x144]
        test    ecx, ecx
        mov     dword ptr [esi], 0x00770efc
        jz      l_call_base
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_call_base:
        mov     ecx, esi
        call    FUN_004c68f0
        pop     esi
        ret
    }
}
