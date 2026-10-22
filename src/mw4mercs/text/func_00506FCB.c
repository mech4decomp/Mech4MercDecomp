/*
 * FUN_00506FCB (119 B) — __thiscall (this in ECX), RET 0x4 (1 param).
 * Iterates a 0x2c-stride array of 5 elements (0xdc/0x2c) in a global
 * object (g_007dc868), comparing a float field against g_0076c5b0 and
 * calling FUN_004F23E0 with a 0.5f/1.0f weight, then calls FUN_004EC350.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc868;
extern float g_0076c5b0;

extern void __cdecl FUN_004F23E0(void);
extern void __cdecl FUN_004EC350(void);

__declspec(naked) void FUN_00506FCB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [g_007dc868]
        lea     eax, [ebx + ebx*4]
        lea     edx, [ebx + eax*2]
        mov     eax, dword ptr [ecx + 0x48]
        fld     dword ptr [eax + edx*4 + 0x28]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        je      L507031
        push    esi
        push    edi
        xor     edi, edi
        xor     esi, esi
        jmp     L507005
    L506FFF:
        mov     ecx, dword ptr [g_007dc868]
    L507005:
        test    esi, esi
        je      L507023
        cmp     edi, ebx
        je      L507014
        push    0x3f000000
        jmp     L507019
    L507014:
        push    0x3f800000
    L507019:
        mov     ecx, dword ptr [ecx + 0x48]
        add     ecx, esi
        call    FUN_004F23E0
    L507023:
        add     esi, 0x2c
        inc     edi
        cmp     esi, 0xdc
        jl      L506FFF
        pop     edi
        pop     esi
    L507031:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, ebp
        call    FUN_004EC350
        pop     ebp
        pop     ebx
        ret     4
    }
}
