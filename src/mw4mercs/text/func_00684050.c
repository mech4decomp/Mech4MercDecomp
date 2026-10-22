/*
 * FUN_00684050 (252 B) — HUD element list scan: iterates a list of
 * elements (via FUN_00416cc0 iterator), filters by type, and appends
 * matching elements to a growable array (param_2). __thiscall-style
 * helpers FUN_00416bc0/FUN_00416cc0/FUN_00416c60 (iterator ctor/next/dtor),
 * FUN_004e7a90 (element type query), FUN_00684410 (array append).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2460;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004e7a90(void);
extern void __cdecl FUN_00684410(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00684050(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [g_007f2460]
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x8]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esp + 0x4], 0x783ec4
        __emit 0xC7  /* __emit: MSVC6 drops 00 disp byte for [esp+0] (C7 04 24), ref needs C7 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        __emit 0x89  /* __emit: MSVC6 encodes mov [esp],eax as 89 04 24, ref needs 89 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      L_68413a
        push    esi
        mov     esi, dword ptr [esp + 0x24]
    L_684096:
        mov     ecx, dword ptr [eax + 0x24]
        test    ecx, ecx
        jz      L_684124
        cmp     dword ptr [eax + 0x34], 0x8
        jz      L_684124
        mov     ecx, eax
        call    FUN_004e7a90
        cmp     eax, 0x2
        jnz     L_6840fb
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx + 0x34]
        cmp     eax, 0x2
        jz      L_6840e5
        jle     L_684124
        cmp     eax, 0x7
        jg      L_684124
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0x8]
        jz      L_6840dc
        test    eax, eax
        jz      L_6840d4
        mov     dword ptr [eax], ecx
    L_6840d4:
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     L_684124
    L_6840dc:
        push    0x1
        lea     edx, [esp + 0x8]
        push    edx
        jmp     L_68411c
    L_6840e5:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0x8]
        jz      L_684115
        test    eax, eax
        jz      L_68410d
        mov     dword ptr [eax], ecx
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     L_684124
    L_6840fb:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0x8]
        jz      L_684115
        test    eax, eax
        jz      L_68410d
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], edx
    L_68410d:
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     L_684124
    L_684115:
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
    L_68411c:
        push    eax
        mov     ecx, esi
        call    FUN_00684410
    L_684124:
        lea     ecx, [esp + 0x8]
        call    FUN_00416cc0
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jnz     L_684096
        pop     esi
    L_68413a:
        lea     ecx, [esp + 0x4]
        call    FUN_00416c60
        call    FUN_006f49a0
        add     esp, 0x18
        ret
    }
}
