/*
 * FUN_00674df0 (1358 B) — GameData field setter/validator dispatcher.
 * Switch on param_2[4] (field id 0xb..0x1a); for each field, if the
 * incoming string is non-empty it calls a virtual setter (vtable+4) with
 * a default/parsed value, then validates the resulting field against a
 * threshold and emits an _snprintf error message if out of range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern void *g_0076b2d8;      /* IAT: atof */
extern float g_0076d070;
extern float g_0076c5b0;
extern void *g_0076b424;      /* IAT: _snprintf */
extern double g_0076d970;
extern void FUN_00674890(void);

__declspec(naked) void FUN_00674df0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xc
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [ebp+0x10]
        push    ebx
        mov     bl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [ebp+0xc]
        push    edi
        mov     edi, dword ptr [ebp+0x8]
        push    ecx
        push    edx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setnz   bl
        call    FUN_00674890
        mov     cl, al
        mov     eax, dword ptr [esi+0x10]
        add     eax, -0xb
        add     esp, 0x14
        cmp     eax, 0xf
        ja      L_epilogue
        /* __emit: jmp dword ptr [eax*4+0x675340] jump-table dispatch;
           MSVC6 re-bases the table via EBX instead of this FF 24 85 form */
        __emit  0xFF
        __emit  0x24
        __emit  0x85
        __emit  0x40
        __emit  0x53
        __emit  0x67
        __emit  0x00

L_case_b:
        test    bl, bl
        jnz     L_epilogue
        mov     ax, word ptr [g_007db0ac]
        mov     cx, word ptr [g_007db0ae]
        mov     edx, dword ptr [esi]
        mov     word ptr [esp+0x10], ax
        lea     eax, [esp+0x10]
        push    eax
        mov     word ptr [esp+0x16], cx
        push    edi
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_c:
        test    bl, bl
        jnz     L_epilogue
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     eax, dword ptr [esi]
        mov     word ptr [esp+0x10], cx
        lea     ecx, [esp+0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     word ptr [esp+0x1a], dx
        call    dword ptr [eax+0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_d:
        test    bl, bl
        jnz     L_case_d_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x1
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_d_cont:
        mov     edi, dword ptr [edi+0x48]
        test    edi, edi
        jg      L_epilogue
        push    edi
        push    0x797688
        jmp     L_snprintf_common

L_case_e:
        test    bl, bl
        jnz     L_case_e_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x0
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_case_e_cont:
        mov     ecx, dword ptr [ebp+0x10]
        push    ecx
        call    dword ptr [g_0076b2d8]
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        lea     eax, [esp+0x10]
        fmul    dword ptr [g_0076d070]
        push    eax
        push    edi
        mov     ecx, esi
        fstp    dword ptr [esp+0x18]
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_f:
        test    bl, bl
        jnz     L_case_f_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x40400000
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_f_cont:
        fld     dword ptr [edi+0x40]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_epilogue
        fld     dword ptr [edi+0x40]
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797654
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_10:
        test    bl, bl
        jnz     L_case_10_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x0
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_10_cont:
        mov     edi, dword ptr [edi+0x44]
        test    edi, edi
        jge     L_epilogue
        push    edi
        push    0x797628
        jmp     L_snprintf_common

L_case_11:
        test    bl, bl
        jnz     L_case_11_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x1
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_11_cont:
        mov     edi, dword ptr [edi+0x4c]
        mov     dword ptr [esp+0x10], edi
        fild    dword ptr [esp+0x10]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_epilogue
        push    edi
        push    0x7975f8

L_snprintf_common:
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [edx]
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x10
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_12:
        test    bl, bl
        jnz     L_case_12_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x0
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_12_cont:
        fld     dword ptr [edi+0x50]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_epilogue
        fld     dword ptr [edi+0x50]
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7975c8
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_13:
        test    bl, bl
        jnz     L_case_13_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x0
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_13_cont:
        fld     dword ptr [edi+0x5c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_epilogue
        fld     dword ptr [edi+0x5c]
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797594
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_14:
        test    bl, bl
        jnz     L_case_14_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x3ecccccd
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_14_cont:
        fld     dword ptr [edi+0x60]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_epilogue
        fld     dword ptr [edi+0x60]
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797550
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_15:
        test    bl, bl
        jnz     L_case_15_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x3d4ccccd
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_15_cont:
        fld     dword ptr [edi+0x64]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_epilogue
        fld     dword ptr [edi+0x64]
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797508
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_16:
        test    bl, bl
        jnz     L_case_16_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x3e19999a
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_16_cont:
        fld     dword ptr [edi+0x68]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_epilogue
        fld     dword ptr [edi+0x68]
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7974c0
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_17:
        test    bl, bl
        jnz     L_case_17_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x0
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_17_cont:
        fld     dword ptr [edi+0x54]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_epilogue
        fld     dword ptr [edi+0x54]
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x79748c
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_18:
        test    bl, bl
        jnz     L_case_18_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x43960000
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_18_cont:
        fld     dword ptr [edi+0x58]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_epilogue
        fld     dword ptr [edi+0x58]
        mov     ecx, dword ptr [ebp+0x18]
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x79745c
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_19:
        test    bl, bl
        jnz     L_case_19_cont
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x10]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x3f800000
        call    dword ptr [edx+0x4]
        mov     cl, 0x1
L_case_19_cont:
        fld     dword ptr [edi+0x6c]
        fst     qword ptr [esp+0x10]
        fcomp   qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 1
        jz      L_epilogue
        mov     ecx, dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0x10]
        mov     eax, dword ptr [ebp+0x18]
        push    ecx
        mov     ecx, dword ptr [ebp+0x14]
        push    edx
        mov     edx, dword ptr [ecx]
        push    0x79742c
        push    eax
        push    edx
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_case_1a:
        test    bl, bl
        jnz     L_case_1a_cont
        mov     eax, dword ptr [esi]
        lea     ecx, [esp+0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0x0
        call    dword ptr [eax+0x4]
        mov     cl, 0x1
L_case_1a_cont:
        fld     dword ptr [edi+0x70]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_epilogue
        fld     dword ptr [edi+0x70]
        mov     edx, dword ptr [ebp+0x18]
        mov     eax, dword ptr [ebp+0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7973f4
        push    edx
        push    ecx
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl

L_epilogue:
        pop     edi
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
