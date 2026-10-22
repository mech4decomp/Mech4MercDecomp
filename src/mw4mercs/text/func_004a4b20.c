/*
 * FUN_004a4b20 (388 B) — MLR subsystem. Validates particle-count and
 * curve U/V offset ranges, emitting warnings (FUN_006fabf0) and clamping
 * on overflow.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004ad160(void);
extern void __cdecl FUN_004a9550(void);
extern float g_0076c5b0;
extern float g_00770164;
extern float g_00770160;

__declspec(naked) void FUN_004a4b20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x268]
        mov     eax, 0x100
        cmp     ecx, eax
        jle     L_4b60
        test    bl, bl
        jz      L_4c9a
        mov     dword ptr [esi + 0x268], eax
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        push    0x7b2ef0
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_4b60
        int     3
L_4b60:
        lea     ecx, [ebp - 0x4]
        push    ecx
        lea     edx, [ebp + 0x8]
        push    edx
        lea     ecx, [esi + 0x32c]
        call    FUN_004ad160
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [g_0076c5b0]
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x10], eax
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT form (MSVC6 adds 9B WAIT) */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4b90
        mov     dword ptr [ebp - 0x10], 0x0
L_4b90:
        mov     ecx, dword ptr [ebp - 0x4]
        lea     edx, [ebp - 0x8]
        push    edx
        lea     eax, [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], ecx
        push    eax
        lea     ecx, [esi + 0x324]
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x8]
        fadd    dword ptr [ebp - 0x14]
        fcomp   dword ptr [g_00770164]
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit 0xC4
        __emit 0x41
        jz      L_4bcf
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x10]
        fcomp   dword ptr [g_00770160]
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit 0xC4
        __emit 0x01
        jz      L_4bf7
L_4bcf:
        test    bl, bl
        jz      L_4c9a
        mov     dword ptr [esi + 0x328], 0x0
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        push    0x7b2f3c
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_4bf7
        int     3
L_4bf7:
        lea     edx, [ebp - 0x4]
        push    edx
        lea     eax, [ebp + 0x8]
        push    eax
        lea     ecx, [esi + 0x334]
        call    FUN_004ad160
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [g_0076c5b0]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x10], ecx
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4c27
        mov     dword ptr [ebp - 0x10], 0x0
L_4c27:
        mov     edx, dword ptr [ebp - 0x4]
        lea     eax, [ebp - 0x8]
        push    eax
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     ecx, [esi + 0x31c]
        mov     dword ptr [ebp - 0x14], edx
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x8]
        fadd    dword ptr [ebp - 0x14]
        fcomp   dword ptr [g_00770164]
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit 0xC4
        __emit 0x41
        jz      L_4c66
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x10]
        fcomp   dword ptr [g_00770160]
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit 0xC4
        __emit 0x01
        jz      L_4c8a
L_4c66:
        test    bl, bl
        jz      L_4c9a
        mov     dword ptr [esi + 0x320], 0x0
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        push    0x7b2f88
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_4c8a
        int     3
L_4c8a:
        push    ebx
        mov     ecx, esi
        call    FUN_004a9550
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_4c9a:
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
