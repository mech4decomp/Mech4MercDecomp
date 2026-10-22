/*
 * FUN_006992f0 (483 B) — __thiscall HUD element update: given a float
 * param, walks the element's sub-object array and writes per-slot byte
 * indices into the +0x1c output buffer based on binary-search over
 * float thresholds. Uses FUN_00699140 (indexer) and early-out helpers
 * FUN_00699160 / FUN_00699190.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_00699190(void);
extern void __cdecl FUN_00699140(void);

__declspec(naked) void FUN_006992f0(void)
{
    __asm {
        fld     dword ptr [esp + 0x4]
        sub     esp, 0x10
        fcomp   dword ptr [g_0076c5b0]
        push    esi
        push    edi
        mov     esi, ecx
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      L_699315
        call    FUN_00699160
        pop     edi
        pop     esi
        add     esp, 0x10
        ret     0x4
L_699315:
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ecx + 0x4]
        fld     dword ptr [edx + 0xc]
        fsub    dword ptr [edx + 0x8]
        fcomp   dword ptr [esp + 0x1c]
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      L_69933b
        mov     ecx, esi
        call    FUN_00699190
        pop     edi
        pop     esi
        add     esp, 0x10
        ret     0x4
L_69933b:
        fld     dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ecx + 0x30]
        fadd    dword ptr [edx + 0x8]
        shr     eax, 0x4
        xor     edi, edi
        test    eax, eax
        fst     dword ptr [esp + 0x1c]
        fstp    dword ptr [esi + 0x10]
        jle     L_6994cb
        push    ebx
        push    ebp
        xor     ebp, ebp
        mov     dword ptr [esp + 0x10], ebp
L_699361:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jz      L_69937b
        mov     edx, dword ptr [ecx + 0x2c]
        mov     al, byte ptr [edx + ebp + 0xd]
        test    al, al
        jnz     L_69937b
        cmp     al, 0x4
        jz      L_6994b0
L_69937b:
        mov     eax, dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [ecx + 0x2c]
        add     ecx, ebp
        mov     byte ptr [eax + edi], 0xff
        mov     al, byte ptr [ecx + 0xc]
        test    al, al
        jbe     L_6994b0
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0xf]
        mov     ecx, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [ecx + 0x14]
        cmp     dword ptr [ecx + edx*4], 0xff
        jz      L_6994b0
        and     eax, 0xff
        dec     eax
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x18], eax
        jl      L_699459
        jmp     L_6993cb
L_6993c7:
        mov     eax, dword ptr [esp + 0x18]
L_6993cb:
        mov     edx, dword ptr [esp + 0x14]
        add     eax, edx
        cdq
        sub     eax, edx
        mov     ebx, eax
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, dword ptr [eax + 0x2c]
        xor     edx, edx
        mov     dl, byte ptr [ecx + ebp + 0xc]
        sar     ebx, 0x1
        cmp     ebx, edx
        jz      L_699459
        push    ebx
        push    edi
        mov     ecx, esi
        call    FUN_00699140
        lea     ebp, [ebx - 0x1]
        push    ebp
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], eax
        call    FUN_00699140
        fld     dword ptr [eax]
        fcomp   dword ptr [esp + 0x24]
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      L_69941f
        mov     eax, dword ptr [esp + 0x1c]
        fld     dword ptr [eax]
        fcomp   dword ptr [esp + 0x24]
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      L_69944f
L_69941f:
        fld     dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        fcomp   dword ptr [ecx]
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      L_699436
        mov     dword ptr [esp + 0x18], ebp
        jmp     L_69943b
L_699436:
        inc     ebx
        mov     dword ptr [esp + 0x14], ebx
L_69943b:
        mov     edx, dword ptr [esp + 0x14]
        cmp     dword ptr [esp + 0x18], edx
        mov     ebp, dword ptr [esp + 0x10]
        jge     L_6993c7
        jmp     L_699459
L_69944f:
        mov     eax, dword ptr [esi + 0x1c]
        mov     ebp, dword ptr [esp + 0x10]
        mov     byte ptr [eax + edi], bl
L_699459:
        mov     ecx, dword ptr [esi + 0x1c]
        cmp     byte ptr [ecx + edi], 0xff
        jnz     L_6994b0
        push    0x0
        push    edi
        mov     ecx, esi
        call    FUN_00699140
        mov     edx, dword ptr [esi + 0x18]
        xor     ecx, ecx
        mov     ebx, eax
        mov     eax, dword ptr [edx + 0x2c]
        mov     cl, byte ptr [eax + ebp + 0xc]
        dec     ecx
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00699140
        fld     dword ptr [ebx]
        fcomp   dword ptr [esp + 0x24]
        mov     ecx, eax
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jnz     L_69949c
        mov     edx, dword ptr [esi + 0x1c]
        mov     byte ptr [edx + edi], 0x0
        jmp     L_6994b0
L_69949c:
        fld     dword ptr [ecx]
        fcomp   dword ptr [esp + 0x24]
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      L_6994b0
        mov     eax, dword ptr [esi + 0x1c]
        mov     byte ptr [eax + edi], 0xff
L_6994b0:
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ecx + 0x30]
        inc     edi
        add     ebp, 0x10
        shr     edx, 0x4
        cmp     edi, edx
        mov     dword ptr [esp + 0x10], ebp
        jl      L_699361
        pop     ebp
        pop     ebx
L_6994cb:
        pop     edi
        pop     esi
        add     esp, 0x10
        ret     0x4
    }
}
