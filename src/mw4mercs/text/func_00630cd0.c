/*
 * FUN_00630cd0 (444 B) — __thiscall ABL/game-logic object initializer.
 * Caches a global "version" pair (0x858940/0x858944); if stale, rebuilds
 * the object: resets a sub-object, computes a scaled value + float ratio,
 * allocates a 0x164-byte buffer, sets up a render-state object, and
 * re-initializes a child list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_00858940;   /* DAT_00858940 */
extern int   g_00858944;   /* DAT_00858944 */
extern float g_0076dd64;   /* float const @ 0x76dd64 */
extern int   g_007daa48;   /* DAT_007daa48 */
extern int   g_007daa38;   /* DAT_007daa38 */
extern int   g_007da848;   /* DAT_007da848 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b9f50(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00630930(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void __cdecl FUN_004c8a50(void);

__declspec(naked) void FUN_00630cd0(void)
{
    __asm {
        mov     eax, dword ptr [g_00858940]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        cmp     dword ptr [edi + 0x30], eax
        mov     ecx, dword ptr [g_00858944]
        jnz     L_cee
        cmp     dword ptr [edi + 0x34], ecx
        jz      L_e88
L_cee:
        mov     dword ptr [edi + 0x34], ecx
        lea     ebx, [edi + 0x10]
        mov     ecx, ebx
        mov     dword ptr [edi + 0x30], eax
        call    FUN_0041fd80
        test    eax, eax
        jz      L_d1c
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_d15
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L_d15:
        mov     ecx, ebx
        call    FUN_0041fcb0
L_d1c:
        fild    dword ptr [g_00858944]
        mov     esi, dword ptr [g_00858944]
        mov     eax, esi
        cdq
        fdivr   dword ptr [g_0076dd64]
        and     edx, 0xff
        add     eax, edx
        sar     eax, 0x8
        lea     ecx, [eax + 0x1]
        mov     eax, esi
        and     eax, 0x800000ff
        mov     dword ptr [edi + 0x24], ecx
        fstp    dword ptr [edi + 0x38]
        jns     L_d55
        dec     eax
        or      eax, 0xffffff00
        inc     eax
L_d55:
        cmp     eax, 0x100
        mov     dword ptr [edi + 0x3c], eax
        jl      L_d6b
        add     eax, 0xffffff00
        inc     ecx
        mov     dword ptr [edi + 0x3c], eax
        mov     dword ptr [edi + 0x24], ecx
L_d6b:
        mov     eax, dword ptr [g_007daa48]
        push    ebp
        push    eax
        call    FUN_006f4950
        push    0x164
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_d97
        mov     ecx, dword ptr [edi + 0x24]
        push    ecx
        mov     ecx, eax
        call    FUN_004b9f50
        mov     ebp, eax
        jmp     L_d99
L_d97:
        xor     ebp, ebp
L_d99:
        push    ebp
        mov     ecx, ebx
        call    FUN_0041fcd0
        call    FUN_006f49a0
        mov     ecx, edi
        call    FUN_00630930
        mov     ecx, dword ptr [g_007daa38]
        call    FUN_00416110
        mov     esi, eax
        test    esi, esi
        jz      L_dce
        mov     ecx, esi
        call    FUN_00491280
        mov     dword ptr [esi + 0x18], 0x0
        jmp     L_dd0
L_dce:
        xor     esi, esi
L_dd0:
        mov     ecx, dword ptr [g_007da848]
        push    0x0
        push    0x78d7a8
        call    FUN_0048fac0
        test    eax, eax
        jnz     L_df7
        mov     ecx, dword ptr [g_007da848]
        push    eax
        push    0x78d7a8
        call    FUN_0048f380
L_df7:
        mov     edx, dword ptr [esi + 0x4]
        or      dword ptr [esi + 0x10], 0x1f
        mov     ecx, dword ptr [esi + 0xc]
        and     edx, 0xffffffec
        or      edx, 0xc
        and     ecx, 0xf3c1ffff
        mov     dword ptr [esi + 0x4], edx
        mov     edx, dword ptr [esi + 0x14]
        mov     dword ptr [esi + 0xc], ecx
        mov     ecx, dword ptr [esi]
        and     edx, 0xffffffef
        and     ecx, 0xffffc000
        mov     dword ptr [esi + 0x14], edx
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [esi + 0x8]
        or      ecx, edx
        and     ecx, 0xf3e17fff
        or      ecx, 0x214000
        mov     dword ptr [esi], ecx
        or      eax, 0xc3fffff
        push    esi
        mov     ecx, ebp
        mov     dword ptr [esi + 0x8], eax
        call    FUN_004c8a50
        lea     esi, [edi + 0x18]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        pop     ebp
        jz      L_e88
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_e88
        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, eax
        mov     edi, dword ptr [esi]
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    dword ptr [edi + 0x8]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, eax
        call    dword ptr [eax + 0x1c]
L_e88:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
