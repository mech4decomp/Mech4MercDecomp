/*
 * FUN_0041db30 (54 B) — __thiscall string refcount helper. Looks up a child
 * object via FUN_00416d00([ECX+0x34]), increments the refcount of the string
 * at [obj+0x10], and returns the string pointer (or 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0041db30(void)
{
    __asm {
        mov     ecx, dword ptr [ecx+0x34]
        call    FUN_00416d00
        test    eax, eax
        jz      L_db63
        push    esi
        mov     esi, dword ptr [eax+0x10]
        test    esi, esi
        jz      L_db5f
        mov     dl, byte ptr [esi-1]
        lea     eax, [esi-1]
        inc     dl
        mov     cl, dl
        dec     cl
        mov     byte ptr [eax], dl
        mov     byte ptr [eax], cl
        jnz     L_db5f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_db5f:
        mov     eax, esi
        pop     esi
        ret
    L_db63:
        xor     eax, eax
        ret
    }
}
