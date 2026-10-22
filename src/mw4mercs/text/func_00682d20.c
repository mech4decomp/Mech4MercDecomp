/*
 * FUN_00682d20 (82 B) — returns a float (in ST(0)).
 *
 * Checks two global flags via FUN_00415230(); if either is set, calls a
 * virtual method (vtable+4) on the object at param+0x78 and returns the
 * float at result+0x58; otherwise returns the constant at 0x0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415230(void);
extern int g_7f259c;   /* 0x007f259c */
extern int g_7f2560;   /* 0x007f2560 */
extern float g_76c5b0; /* 0x0076c5b0 */

__declspec(naked) float FUN_00682d20(void)
{
    __asm {
        mov     eax, dword ptr [g_7f259c]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, dword ptr [edi + 0x4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_49
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x58]
        pop     edi
        pop     esi
        ret
    L_49:
        mov     eax, dword ptr [g_7f2560]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_69
        mov     edx, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x58]
        pop     edi
        pop     esi
        ret
    L_69:
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        ret
    }
}
