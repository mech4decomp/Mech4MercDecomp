/*
 * FUN_004da880 (68 B) — __thiscall. Builds a temporary object via
 * FUN_00412570, then calls FUN_00416f60 on a member (this+4)+0x5c,
 * and frees a string buffer (FUN_004084e0) if its refcount hits 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004da880(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_00412570
        lea     ecx, [esp+0x8]
        push    ecx
        mov     ecx, dword ptr [esi+0x4]
        add     ecx, 0x5c
        call    FUN_00416f60
        mov     esi, eax
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      L_8be
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_8be
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_8be:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
