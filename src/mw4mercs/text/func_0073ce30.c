/*
 * FUN_0073ce30 (397 B) — rendering/matrix setup helper.
 *
 * Calls FUN_00713cc0 to set up render states, builds a float matrix on the
 * stack from DAT_0087b638/3c, then calls FUN_0074c120.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_0074c120(void);
extern int g_858a50;
extern int g_87bbe8;
extern int g_8b2520;
extern char g_858954;
extern int g_8b28d4;
extern int g_859d70;
extern int g_87b63c;
extern int g_87b638;

__declspec(naked) void __stdcall FUN_0073ce30(void)
{
    __asm {
        mov     eax, dword ptr [g_858a50]
        sub     esp, 0x88
        test    eax, eax
        jnz     L_ce4c
        mov     eax, dword ptr [g_87bbe8]
        test    eax, eax
        jz      L_cfb6
L_ce4c:
        mov     eax, dword ptr [g_8b2520]
        test    ah, 0x4
        jnz     L_ce63
        mov     al, byte ptr [g_858954]
        test    al, al
        jz      L_cfb6
L_ce63:
        push    0x0
        push    0xb
        call    FUN_00713cc0
        mov     eax, dword ptr [g_8b28d4]
        push    eax
        push    0x1
        call    FUN_00713cc0
        mov     eax, dword ptr [g_859d70]
        test    eax, eax
        jz      L_ce9a
        push    0x1
        push    0xd
        call    FUN_00713cc0
        push    0x1
        push    0x10
        call    FUN_00713cc0
        push    0x1
        push    0x7
        jmp     L_ceb0
L_ce9a:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x3
        push    0xd
        call    FUN_00713cc0
        push    0x3
        push    0x10
L_ceb0:
        call    FUN_00713cc0
        fild    dword ptr [g_87b63c]
        mov     ecx, dword ptr [g_87b638]
        mov     edx, dword ptr [g_87b63c]
        fst     dword ptr [esp + 0x8]
        add     ecx, 0x14
        fild    dword ptr [g_87b638]
        __emit  0x89            /* mov dword ptr [esp],ecx — MSVC6 drops 00 disp (89 0C 24 vs ref 89 4C 24 00) */
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        add     edx, 0xc
        or      eax, 0xffffffff
        fst     dword ptr [esp + 0x4]
        mov     dword ptr [esp + 0x18], eax
        fstp    dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [esp + 0x58], eax
        fstp    dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x78], eax
        __emit  0xDB            /* fild dword ptr [esp] — MSVC6 drops 00 disp (DB 04 24 vs ref DB 44 24 00) */
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x89            /* mov dword ptr [esp],edx — MSVC6 drops 00 disp (89 14 24 vs ref 89 54 24 00) */
        __emit  0x54
        __emit  0x24
        __emit  0x00
        mov     edx, dword ptr [esp + 0x4]
        lea     eax, [esp + 0x8]
        fst     dword ptr [esp + 0x2c]
        push    eax
        fild    dword ptr [esp + 0x4]
        mov     dword ptr [esp + 0x24], 0x3f400000
        mov     dword ptr [esp + 0x28], 0x3ec00000
        mov     dword ptr [esp + 0x14], 0x0
        fst     dword ptr [esp + 0x4]
        mov     dword ptr [esp + 0x18], 0x3f800000
        mov     ecx, dword ptr [esp + 0x4]
        fstp    dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x44], 0x3f400000
        fstp    dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x48], 0x3f080000
        mov     dword ptr [esp + 0x34], 0x0
        mov     dword ptr [esp + 0x38], 0x3f800000
        mov     dword ptr [esp + 0x64], 0x3f580000
        mov     dword ptr [esp + 0x68], 0x3f080000
        mov     dword ptr [esp + 0x54], 0x0
        mov     dword ptr [esp + 0x58], 0x3f800000
        mov     dword ptr [esp + 0x6c], ecx
        mov     dword ptr [esp + 0x70], edx
        mov     dword ptr [esp + 0x84], 0x3f580000
        mov     dword ptr [esp + 0x88], 0x3ec00000
        mov     dword ptr [esp + 0x74], 0x0
        mov     dword ptr [esp + 0x78], 0x3f800000
        call    FUN_0074c120
L_cfb6:
        add     esp, 0x88
        ret
    }
}
