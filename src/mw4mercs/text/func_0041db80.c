/*
 * FUN_0041db80 (82 B) — __fastcall string refcount helper (directory variant).
 * Asserts directory support is enabled (FUN_006fab90 + INT3), then looks up a
 * child object via FUN_00416d00([ECX+0x30]) and increments the refcount of the
 * string at [obj+0x10]. Returns the string pointer (or 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0041db80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x30]
        test    eax, eax
        jnz     L_db9c
        push    0x76d680
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_db9c
        int     3
    L_db9c:
        mov     ecx, dword ptr [esi+0x30]
        call    FUN_00416d00
        test    eax, eax
        jz      L_dbce
        mov     esi, dword ptr [eax+0x10]
        test    esi, esi
        jz      L_dbca
        mov     dl, byte ptr [esi-1]
        lea     eax, [esi-1]
        inc     dl
        mov     cl, dl
        dec     cl
        mov     byte ptr [eax], dl
        mov     byte ptr [eax], cl
        jnz     L_dbca
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_dbca:
        mov     eax, esi
        pop     esi
        ret
    L_dbce:
        xor     eax, eax
        pop     esi
        ret
    }
}
