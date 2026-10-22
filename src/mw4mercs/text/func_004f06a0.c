/*
 * FUN_004f06a0 (152 B) - Adept/MLR state-engine teardown/update. Iterates
 * a list of objects (vtable 0x773c18) via FUN_00416670, decrementing a
 * refcount and deleting objects that hit 0; then releases g_7dc830 and
 * destroys g_7dc82c via FUN_004d5d20 + FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416530(void);
extern void __cdecl FUN_00416670(void);
extern void __cdecl FUN_004165b0(void);
extern void __cdecl FUN_004d5d20(void);
extern void __cdecl FUN_004084e0(void);
extern int g_7dc830;   /* 0x007dc830 */
extern int g_7dc82c;   /* 0x007dc82c */
extern void *g_773c18; /* 0x00773c18 vtable */

__declspec(naked) void func_004f06a0(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [g_7dc830]
        push    eax
        lea     ecx, [esp + 0x4]
        call    FUN_00416530
        __emit 0x8D  /* __emit: MSVC6 drops 00 disp for lea ecx,[esp] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        __emit 0xC7  /* __emit: MSVC6 drops 00 disp for mov [esp],imm32 (C7 04 24); ref needs C7 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x18  /* vtable addr 0x773c18 */
        __emit 0x3C
        __emit 0x77
        __emit 0x00
        call    FUN_00416670
        test    eax, eax
        jz      L_4f06eb
    L_4f06c7:
        dec     word ptr [eax + 0x10]
        cmp     word ptr [eax + 0x10], 0x0
        jnz     L_4f06de
        test    eax, eax
        jz      L_4f06de
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
    L_4f06de:
        __emit 0x8D  /* __emit: MSVC6 drops 00 disp for lea ecx,[esp] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00416670
        test    eax, eax
        jnz     L_4f06c7
    L_4f06eb:
        __emit 0x8D  /* __emit: MSVC6 drops 00 disp for lea ecx,[esp] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_004165b0
        mov     ecx, dword ptr [g_7dc830]
        test    ecx, ecx
        jz      L_4f0704
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_4f0704:
        push    esi
        mov     esi, dword ptr [g_7dc82c]
        test    esi, esi
        mov     dword ptr [g_7dc830], 0x0
        jz      L_4f0729
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_4f0729:
        mov     dword ptr [g_7dc82c], 0x0
        pop     esi
        add     esp, 0x18
        ret
    }
}
