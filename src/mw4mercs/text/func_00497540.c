/*
 * FUN_00497540 (542 B) - MLR particle/flare profile-count / curve-offset
 * validation method. __thiscall (ECX = this), 1 stack arg (byte flag),
 * RET 0x4.
 *
 * Clamps the profile count, then evaluates curve offsets (via
 * FUN_004ad160) and warns (FUN_006fabf0) / resets channels when offsets
 * fall out of range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004ad160(void);
extern void __cdecl FUN_004aed40(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004938b0(void);

extern float g_7b220c;
extern float g_77016c;
extern float g_770168;
extern float g_76c5b0;
extern float g_770164;
extern float g_770160;

__declspec(naked) void FUN_00497540(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, 0x2
        cmp     ecx, eax
        push    edi
        jge     L_7581
        test    bl, bl
        jz      L_7753
        mov     dword ptr [esi + 0x170], eax
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        push    0x7b2b20
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_7581
        int     3
L_7581:
        xor     edx, edx
        mov     eax, 0x400
        div     dword ptr [esi + 0x180]
        cmp     dword ptr [esi + 0x170], eax
        jle     L_75ba
        test    bl, bl
        jz      L_7753
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        push    0x7b2b74
        mov     dword ptr [esi + 0x170], eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_75ba
        int     3
L_75ba:
        lea     edx, [ebp - 0x18]
        push    edx
        lea     eax, [ebp - 0x14]
        lea     edi, [esi + 0xa0]
        push    eax
        mov     ecx, edi
        call    FUN_004ad160
        fld     dword ptr [g_7b220c]
        fmul    dword ptr [g_77016c]
        fcomp   dword ptr [ebp - 0x14]
        /* __emit: fnstsw ax - MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_7616
        test    bl, bl
        jz      L_7753
        fld     dword ptr [g_7b220c]
        lea     ecx, [edi + 0x4]
        fmul    dword ptr [g_770168]
        fsqrt
        fstp    dword ptr [ebp - 0x1c]
        mov     ebx, dword ptr [ebp - 0x1c]
        push    ebx
        call    FUN_004aed40
        push    ebx
        lea     ecx, [edi + 0x10]
        call    FUN_004aed40
        mov     ebx, dword ptr [ebp + 0x8]
L_7616:
        lea     ecx, [ebp - 0x8]
        push    ecx
        lea     edx, [ebp - 0x4]
        push    edx
        lea     ecx, [esi + 0x158]
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_76c5b0]
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp + 0x8], eax
        /* __emit: fnstsw ax - MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_7646
        mov     dword ptr [ebp + 0x8], 0x0
L_7646:
        mov     ecx, dword ptr [ebp - 0x8]
        lea     edx, [ebp - 0xc]
        push    edx
        lea     eax, [ebp - 0x10]
        mov     dword ptr [ebp - 0x1c], ecx
        lea     edi, [esi + 0x14c]
        push    eax
        mov     ecx, edi
        call    FUN_004ad160
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x1c]
        fcomp   dword ptr [g_770164]
        /* __emit: fnstsw ax - MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_7687
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp + 0x8]
        fcomp   dword ptr [g_770160]
        /* __emit: fnstsw ax - MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_76ae
L_7687:
        test    bl, bl
        jz      L_7753
        push    0x0
        mov     ecx, edi
        call    FUN_004aeb30
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        push    0x7b2bbc
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_76ae
        int     3
L_76ae:
        lea     edx, [ebp - 0x8]
        push    edx
        lea     eax, [ebp - 0x4]
        push    eax
        lea     ecx, [esi + 0x164]
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_76c5b0]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp + 0x8], ecx
        /* __emit: fnstsw ax - MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_76de
        mov     dword ptr [ebp + 0x8], 0x0
L_76de:
        mov     edx, dword ptr [ebp - 0x8]
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp - 0x10]
        lea     edi, [esi + 0x140]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [ebp - 0x1c], edx
        call    FUN_004ad160
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x1c]
        fcomp   dword ptr [g_770164]
        /* __emit: fnstsw ax - MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_771f
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp + 0x8]
        fcomp   dword ptr [g_770160]
        /* __emit: fnstsw ax - MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_7742
L_771f:
        test    bl, bl
        jz      L_7753
        push    0x0
        mov     ecx, edi
        call    FUN_004aeb30
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        push    0x7b2c08
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_7742
        int     3
L_7742:
        push    ebx
        mov     ecx, esi
        call    FUN_004938b0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_7753:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
