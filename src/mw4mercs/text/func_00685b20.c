/*
 * FUN_00685b20 (239 B) — __thiscall, RET 0x4. HUD aim/position helper.
 * Computes a 3-float result (default -1,-1,-1), or from a linked node
 * (with FPU angle normalization), or copies from the list head.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040c5d0(void);
extern float g_00770168;
extern float g_0076c5b0;
extern float g_0077016c;

__declspec(naked) void FUN_00685b20(void)
{
    __asm {
        mov     al, byte ptr [ecx+0x3c]
        sub     esp, 0x1c
        test    al, al
        jnz     L_685b41
L_685b2a:
        mov     eax, dword ptr [esp+0x20]
        mov     ecx, 0xbf800000
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x8], ecx
        add     esp, 0x1c
        ret     0x4
L_685b41:
        cmp     dword ptr [ecx+0x68], 0x7
        jz      L_685b2a
        mov     edx, dword ptr [ecx+0x60]
        cmp     edx, dword ptr [ecx+0x54]
        jnz     L_685b56
        mov     eax, dword ptr [ecx+0x64]
        test    eax, eax
        jz      L_685b2a
L_685b56:
        mov     ecx, dword ptr [ecx+0x64]
        test    ecx, ecx
        jz      L_685bf5
        mov     ecx, dword ptr [ecx+0x4]
        fild    dword ptr [ecx]
        fmul    dword ptr [g_00770168]
        fild    dword ptr [ecx+0x4]
        fmul    dword ptr [g_00770168]
        __emit 0xD9                 /* fstp dword ptr [esp]: MSVC6 drops the 00 disp byte (D9 1C 24) */
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        fcom    dword ptr [g_0076c5b0]
        __emit 0xDF                 /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6                 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_685b8e
        fsub    dword ptr [g_0077016c]
        jmp     L_685b94
L_685b8e:
        fadd    dword ptr [g_0077016c]
L_685b94:
        __emit 0xD9                 /* fld dword ptr [esp]: MSVC6 drops the 00 disp byte */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xD9                 /* fld dword ptr [esp]: MSVC6 drops the 00 disp byte */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xDF                 /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6                 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_685bb1
        fsub    dword ptr [g_0077016c]
        jmp     L_685bb7
L_685bb1:
        fadd    dword ptr [g_0077016c]
L_685bb7:
        fxch
        lea     eax, [esp+0x4]
        fstp    dword ptr [esp+0x4]
        push    eax
        lea     ecx, [esp+0x14]
        fstp    dword ptr [esp+0x10]
        mov     dword ptr [esp+0xc], 0x0
        call    FUN_0040c5d0
        fld     dword ptr [esp+0x10]
        mov     eax, dword ptr [esp+0x20]
        mov     ecx, dword ptr [esp+0x14]
        fstp    dword ptr [eax]
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x8], edx
        add     esp, 0x1c
        ret     0x4
L_685bf5:
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [esp+0x20]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edx+0x4]
        mov     edx, dword ptr [edx+0x8]
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x8], edx
        add     esp, 0x1c
        ret     0x4
    }
}
