/*
 * FUN_0041ef60 (37 B) — __thiscall bit-buffer destructor.
 * Sets vtable, frees the owned block if the owning flag is set, then
 * calls FUN_0041e710 to tear down the base.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void FUN_0041ef60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+0x24]
        test    al, al
        mov     dword ptr [esi], 0x76d7f4
        jz      skip_free
        mov     eax, dword ptr [esi+0x10]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
skip_free:
        mov     ecx, esi
        call    FUN_0041e710
        pop     esi
        ret
    }
}
