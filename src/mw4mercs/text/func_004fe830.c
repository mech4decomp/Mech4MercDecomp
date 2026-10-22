/*
 * FUN_004FE830 (506 B) -- MLR/Adept pick/raycast helper (__thiscall, RET 0xC).
 * Transforms a matrix via FUN_004fe4a0, does FPU distance/angle checks,
 * normalizes a direction vector, and recurses through a linked list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004fe4a0(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_00766fd0(void);

extern float  g_76c5b0;    /* 0x0076c5b0 */
extern double g_776110;    /* 0x00776110 */
extern float  g_76d064;    /* 0x0076d064 */
extern float  g_7b220c;    /* 0x007b220c */

__declspec(naked) void __stdcall FUN_004fe830(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        test    byte ptr [esi + 0x9c], 0x80
        push    edi
        jz      L_4fe84e
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x30
        ret     0xc
L_4fe84e:
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        call    FUN_004fe4a0
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x10]
        lea     ebx, [esi + 0x50]
        push    ecx
        mov     ecx, ebx
        call    FUN_00417d80
        fld     dword ptr [esi + 0x8c]
        fcomp   dword ptr [g_76c5b0]
        mov     ebp, dword ptr [esp + 0x44]
        mov     edi, dword ptr [ebp]
        mov     dword ptr [esp + 0x48], 0x0
        mov     dword ptr [esp + 0x4c], 0xbf800000
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4fe8d9
        lea     edx, [esp + 0x48]
        push    edx
        push    ebx
        mov     ecx, edi
        call    FUN_00766fd0
        fst     dword ptr [esp + 0x4c]
        fcomp   qword ptr [g_776110]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     L_4fe8cd
        fld     dword ptr [esp + 0x4c]
        fcomp   dword ptr [edi + 0x18]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4fe8d9
L_4fe8cd:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x30
        ret     0xc
L_4fe8d9:
        mov     ebx, dword ptr [esi + 0x90]
        test    ebx, ebx
        jz      L_4fe8ec
        cmp     dword ptr [ebx], 0x0
        jnz     L_4fe9f5
L_4fe8ec:
        mov     al, byte ptr [esi + 0x9c]
        mov     cl, al
        and     cl, 0x1f
        test    al, 0x40
        mov     byte ptr [ebp + 0xc], cl
        jnz     L_4fe93c
        mov     eax, dword ptr [esi + 0x98]
        mov     edx, dword ptr [eax + 0x10]
        and     edx, 0x180
        cmp     edx, 0x100
        jnz     L_4fe93c
        mov     edi, dword ptr [eax + 0xd8]
        push    ebp
        mov     ecx, edi
        call    dword ptr [edi + 0x134]
        test    al, al
        jz      L_4fe935
        mov     eax, dword ptr [edi]
        push    ebp
        mov     ecx, edi
        call    dword ptr [eax + 0x18]
        jmp     L_4fe9de
L_4fe935:
        xor     al, al
        jmp     L_4fe9de
L_4fe93c:
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [edi + 0x18], ecx
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esi + edx*4 + 0x50]
        mov     dword ptr [ecx], eax
        mov     edx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esi + edx*4 + 0x60]
        mov     dword ptr [ecx + 0x4], eax
        mov     edx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esi + edx*4 + 0x70]
        mov     dword ptr [ecx + 0x8], eax
        fld     dword ptr [ecx + 0x8]
        fld     dword ptr [ecx + 0x4]
        fld     dword ptr [ecx]
        __emit 0xD9   /* __emit: FPU register-op block (fld st0..fstp st0) not encodable
                         natively -- MSVC6 FPU stack tracking rejects fld st(2),
                         fmul st(4), fstp st(3), and mixing __emit breaks tracking */
        __emit 0xC0
        __emit 0xD8
        __emit 0xC9
        __emit 0xD9
        __emit 0xC2
        __emit 0xD8
        __emit 0xCB
        __emit 0xDE
        __emit 0xC1
        __emit 0xD9
        __emit 0xC3
        __emit 0xD8
        __emit 0xCC
        __emit 0xDE
        __emit 0xC1
        __emit 0xD9
        __emit 0xFA
        __emit 0xDD
        __emit 0xDB
        __emit 0xDD
        __emit 0xD8
        __emit 0xDD
        __emit 0xD8
        fdivr   dword ptr [g_76d064]
        fld     st(0)
        fmul    dword ptr [ecx]
        fstp    dword ptr [ecx]
        fld     st(0)
        fmul    dword ptr [ecx + 0x4]
        fstp    dword ptr [ecx + 0x4]
        fmul    dword ptr [ecx + 0x8]
        fstp    dword ptr [ecx + 0x8]
        fld     dword ptr [edi + 0x14]
        fmul    dword ptr [ecx + 0x8]
        fld     dword ptr [edi + 0x10]
        fmul    dword ptr [ecx + 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ecx]
        fmul    dword ptr [edi + 0xc]
        faddp   st(1), st(0)
        fld     dword ptr [g_7b220c]
        fchs
        fcompp
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_4fe9dc
        fld     dword ptr [ecx]
        fchs
        fstp    dword ptr [ecx]
        fld     dword ptr [ecx + 0x4]
        fchs
        fstp    dword ptr [ecx + 0x4]
        fld     dword ptr [ecx + 0x8]
        fchs
        fstp    dword ptr [ecx + 0x8]
L_4fe9dc:
        mov     al, 0x1
L_4fe9de:
        test    al, al
        mov     dword ptr [ebp + 0x8], 0x0
        jz      L_4fe9f5
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0xc
L_4fe9f5:
        xor     edi, edi
L_4fe9f7:
        test    ebx, ebx
        jz      L_4fea1e
        mov     ecx, dword ptr [ebx]
        test    ecx, ecx
        mov     ebx, dword ptr [ebx + 0x4]
        jz      L_4fea1e
        mov     eax, dword ptr [esi + 0x98]
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        push    ebp
        call    FUN_004fe830
        test    eax, eax
        jz      L_4fe9f7
        mov     edi, eax
        jmp     L_4fe9f7
L_4fea1e:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0xc
    }
}
