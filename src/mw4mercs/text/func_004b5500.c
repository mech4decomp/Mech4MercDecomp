/*
 * FUN_004B5500 (37 B) — Destructor body (__fastcall, ECX=this).
 * Sets vtable, frees field[0x150] if non-null, then calls FUN_004bf250.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __fastcall FUN_004bf250(void *this);

__declspec(naked) void __fastcall FUN_004b5500(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x0077071c
        mov     eax, dword ptr [esi + 0x150]
        test    eax, eax
        jz      l_call_base
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_call_base:
        mov     ecx, esi
        call    FUN_004bf250
        pop     esi
        ret
    }
}
