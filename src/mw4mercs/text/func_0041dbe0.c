/*
 * FUN_0041dbe0 (38 B) — __fastcall directory virtual dispatch. Asserts
 * directory support is enabled (FUN_006fab90 + INT3), then calls the virtual
 * method at vtable+0x10 of the child object at [ECX+0x30].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0041dbe0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x30]
        test    eax, eax
        jnz     L_dbfc
        push    0x76d680
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_dbfc
        int     3
    L_dbfc:
        mov     ecx, dword ptr [esi+0x30]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x10]
        pop     esi
        ret
    }
}
