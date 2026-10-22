/*
 * FUN_0061af20 (52 B) — __fastcall (ECX = this).
 *
 * Sets vtable 0x78c63c, calls FUN_0061af60(), decrements a refcount at
 * [this+0x5bdc]-1 and frees it if it hits 0, then calls FUN_00415380().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061af60(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_0061af20(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x78c63c
        call    FUN_0061af60
        mov     eax, dword ptr [esi + 0x5bdc]
        test    eax, eax
        jz      L_after
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_after
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_after:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
