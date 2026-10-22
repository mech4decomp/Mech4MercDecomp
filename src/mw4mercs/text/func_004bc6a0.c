/*
 * FUN_004BC6A0 (37 B) — Destructor body (__fastcall, ECX=this).
 * Sets vtable, frees field[0x154] if non-null, then calls FUN_004bced0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __fastcall FUN_004bced0(void *this);

__declspec(naked) void __fastcall FUN_004bc6a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x00771340
        mov     eax, dword ptr [esi + 0x154]
        test    eax, eax
        jz      l_call_base
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_call_base:
        mov     ecx, esi
        call    FUN_004bced0
        pop     esi
        ret
    }
}
