/*
 * FUN_00647550 (324 B) — __thiscall update / cleanup helper.
 *
 * Two guarded blocks: (1) if the obfuscated global (0x007dab44 ^
 * 0x007dab40) has a non-null 0x40 field, build and dispatch an object
 * via FUN_00629290 / FUN_00647dd0 / FUN_00697a90; (2) if EBP+0x44 is
 * non-zero, do easing/flag updates and possibly zero EBP+0x40/0x44.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  *g_7dab44;   /* 0x007dab44 (obfuscated pointer) */
extern int   g_7dab40;   /* 0x007dab40 (obfuscation key) */
extern float g_76c5b0;   /* 0x0076c5b0 (0.0) */
extern int   g_7dc868;   /* 0x007dc868 */

extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_00417a10(void);
extern void __cdecl FUN_00647dd0(void);
extern void __cdecl FUN_00697a90(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_004ebee0(void);
extern void __cdecl FUN_004ebe90(void);
extern void __cdecl FUN_00647750(void);
extern void __cdecl FUN_004f23e0(void);

__declspec(naked) void FUN_00647550(void)
{
    __asm {
        sub     esp, 0x8
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        lea     edi, [ebp + 0x24]
        mov     ecx, edi
        call    FUN_00417a40
        test    eax, eax
        jz      L_6475CA
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0x40]
        xor     ecx, 0x85739531
        jz      L_6475CA
        push    ebx
        push    0xe
        call    FUN_00629290
        push    0x0
        mov     ecx, edi
        mov     ebx, eax
        call    FUN_00417a10
        lea     edx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], eax
        push    edx
        lea     eax, [esp + 0x18]
        lea     esi, [ebp + 0xc]
        push    eax
        mov     ecx, esi
        call    FUN_00647dd0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        jnz     L_6475B4
        or      esi, 0xffffffff
        jmp     L_6475B7
L_6475B4:
        mov     esi, dword ptr [eax + 0x14]
L_6475B7:
        push    0x0
        mov     ecx, edi
        call    FUN_00417a10
        push    eax
        push    esi
        mov     ecx, ebx
        call    FUN_00697a90
        pop     ebx
L_6475CA:
        lea     esi, [ebp + 0x2c]
        mov     ecx, esi
        call    FUN_00417a40
        test    eax, eax
        jz      L_64768D
        fld     dword ptr [ebp + 0x44]
        fcomp   dword ptr [g_76c5b0]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x40
        jnz     L_64768D
        mov     ecx, esi
        call    FUN_00417a40
        cmp     eax, 0x1
        jbe     L_647638
        push    0x0
        call    FUN_00707e70
        fld     dword ptr [ebp + 0x40]
        fadd    dword ptr [ebp + 0x38]
        fcompp
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L_647638
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_64761C
        mov     ecx, dword ptr [eax]
        jmp     L_64761E
L_64761C:
        xor     ecx, ecx
L_64761E:
        call    FUN_004ebee0
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_64762D
        mov     eax, dword ptr [eax]
        jmp     L_64762F
L_64762D:
        xor     eax, eax
L_64762F:
        push    0x0
        mov     ecx, eax
        call    FUN_004ebe90
L_647638:
        mov     esi, dword ptr [esi]
        xor     edi, edi
        cmp     esi, edi
        jz      L_647644
        mov     ecx, dword ptr [esi]
        jmp     L_647646
L_647644:
        xor     ecx, ecx
L_647646:
        cmp     dword ptr [ecx + 0x30], 0x4
        jnz     L_647652
        push    edi
        call    FUN_004ebe90
L_647652:
        mov     eax, dword ptr [g_7dc868]
        cmp     eax, edi
        jz      L_647675
        cmp     dword ptr [eax + 0x4c], edi
        jbe     L_647675
        mov     esi, dword ptr [eax + 0x48]
        mov     ecx, ebp
        call    FUN_00647750
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        call    FUN_004f23e0
L_647675:
        push    edi
        call    FUN_00707e70
        fld     dword ptr [ebp + 0x44]
        fcompp
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L_64768D
        mov     dword ptr [ebp + 0x40], edi
        mov     dword ptr [ebp + 0x44], edi
L_64768D:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x8
        ret
    }
}
