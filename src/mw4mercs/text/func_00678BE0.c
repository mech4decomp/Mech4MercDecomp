/*
 * FUN_00678BE0 (200 B) — dispatches on a value via a jump table, pushing a
 * format string and calling string helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0066ab00(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00678BE0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        mov     esi, ecx
        push    edi
        call    FUN_0066ab00
        mov     eax, dword ptr [esi+0xe0]
        mov     eax, dword ptr [eax+0x14]
        add     eax, -0x10
        cmp     eax, 6
        mov     dword ptr [esp+0xc], 0
        ja      L_8c5b
        /* __emit: jump-table dispatch FF 24 85 [eax*4+0x678c8c] (MSVC6 re-bases via EBX) */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x8C
        __emit 0x8C
        __emit 0x67
        __emit 0x00
        push    0x7863f4
        jmp     L_8c3d
        push    0x7863e0
        jmp     L_8c3d
        push    0x7863cc
        jmp     L_8c3d
        push    0x7863c0
        jmp     L_8c3d
        push    0x7863b4
        jmp     L_8c3d
        push    0x7863a4
        jmp     L_8c3d
        push    0x786398
    L_8c3d:
        lea     ecx, [esp+0x10]
        call    FUN_00412780
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        je      L_8c5b
        push    eax
        push    0x773250
        mov     ecx, edi
        call    FUN_00411c40
    L_8c5b:
        mov     ecx, dword ptr [esi+0x540]
        push    ecx
        push    0x786530
        mov     ecx, edi
        call    FUN_00411dc0
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        pop     edi
        pop     esi
        je      L_8c89
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_8c89
        push    eax
        call    FUN_004084e0
        pop     ecx
    L_8c89:
        ret     4
        /* ---- in-.text jump table (relocated dword entries) ---- */
        __emit 0x0E
        __emit 0x8C
        __emit 0x67
        __emit 0x00
        __emit 0x15
        __emit 0x8C
        __emit 0x67
        __emit 0x00
        __emit 0x1C
        __emit 0x8C
        __emit 0x67
        __emit 0x00
        __emit 0x23
        __emit 0x8C
        __emit 0x67
        __emit 0x00
        __emit 0x2A
        __emit 0x8C
        __emit 0x67
        __emit 0x00
        __emit 0x31
        __emit 0x8C
        __emit 0x67
        __emit 0x00
        __emit 0x38
        __emit 0x8C
        __emit 0x67
        __emit 0x00
    }
}
