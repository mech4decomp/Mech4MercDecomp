/*
 * FUN_004B5DD0 (25 B) — Destructor-like (__fastcall, ECX=this).
 * If this+0x10 is non-null, calls its vtable[0](1).
 * Then calls FUN_00415380(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00415380(void *this);

__declspec(naked) void __fastcall FUN_004b5dd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x10]
        test    ecx, ecx
        jz      l_call_base
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_call_base:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
