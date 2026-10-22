/*
 * FUN_00509550 (3441 B) — GameData fog/lighting parameter setter/validator.
 * A 49-entry switch (cases 6..0x36) on param_2[4]. Each case optionally
 * writes a default value via the object's virtual method [vtable+4], then
 * validates the corresponding float field of the target object (ESI) and
 * either returns success (uVar1) or formats an error string via _snprintf
 * (IAT 0x76b424) and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00502370(void);

extern float g_0076c5b0;   /* DAT_0076c5b0 (0.0f) */
extern float g_0076d5f0;   /* DAT_0076d5f0 (2.0f) */
extern float g_0076d064;   /* DAT_0076d064 (1.0f) */
extern float g_007704c0;   /* DAT_007704c0 (0.1f) */
extern unsigned short g_007db0ac;  /* DAT_007db0ac */
extern unsigned short g_007db0ae;  /* DAT_007db0ae */
extern int (*g_0076b424)(void);    /* _snprintf IAT @ 0x76b424 */
extern int g_jt_50a2c4[];          /* jump table @ 0x50a2c4 */

__declspec(naked) void FUN_00509550(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x1c
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        mov     bl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    edi
        test    bl, bl
        push    esi
        setnz   bl
        call    FUN_00502370
        mov     cl, al
        mov     eax, dword ptr [edi + 0x10]
        add     eax, -0x6
        add     esp, 0x14
        cmp     eax, 0x30
        ja      L_A2B8
        jmp     dword ptr [eax*4 + g_jt_50a2c4]

L_C6:
        test    bl, bl
        jnz     L_C6_skip
        mov     eax, dword ptr [edi]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x42c80000
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
L_C6_skip:
        fld     dword ptr [esi + 0x7c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0x7c]
        mov     edx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7778e8
        push    edx
        push    ecx
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

L_C7:
        test    bl, bl
        jnz     L_C7_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C7_skip:
        fld     dword ptr [esi + 0x80]
        fcomp   dword ptr [esi + 0x7c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0x80]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7778a8
        jmp     L_A1D7

L_C8:
        test    bl, bl
        jnz     L_C8_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C8_skip:
        fld     dword ptr [esi + 0x84]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C8_err
        fld     dword ptr [esi + 0x84]
        fcomp   dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C8_err:
        fld     dword ptr [esi + 0x84]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777868
        jmp     L_A1D7

L_C9:
        test    bl, bl
        jnz     L_C9_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x42c80000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C9_skip:
        fld     dword ptr [esi + 0x88]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0x88]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7778e8
        jmp     L_A1D7

L_C10:
        test    bl, bl
        jnz     L_C10_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C10_skip:
        fld     dword ptr [esi + 0x8c]
        fcomp   dword ptr [esi + 0x88]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0x8c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77782c
        jmp     L_A1D7

L_C11:
        test    bl, bl
        jnz     L_C11_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C11_skip:
        fld     dword ptr [esi + 0x90]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C11_err
        fld     dword ptr [esi + 0x90]
        fcomp   dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C11_err:
        fld     dword ptr [esi + 0x90]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777868
        jmp     L_A1D7

L_C12:
        test    bl, bl
        jnz     L_C12_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x42c80000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C12_skip:
        fld     dword ptr [esi + 0x94]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0x94]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7777f8
        jmp     L_A1D7

L_C13:
        test    bl, bl
        jnz     L_C13_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C13_skip:
        fld     dword ptr [esi + 0x98]
        fcomp   dword ptr [esi + 0x94]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0x98]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7777b8
        jmp     L_A1D7

L_C14:
        test    bl, bl
        jnz     L_C14_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C14_skip:
        fld     dword ptr [esi + 0x9c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C14_err
        fld     dword ptr [esi + 0x9c]
        fcomp   dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C14_err:
        fld     dword ptr [esi + 0x9c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777778
        jmp     L_A1D7

L_C15:
        test    bl, bl
        jnz     L_C15_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x42c80000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C15_skip:
        fld     dword ptr [esi + 0xa0]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0xa0]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777738
        jmp     L_A1D7

L_C16:
        test    bl, bl
        jnz     L_C16_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C16_skip:
        fld     dword ptr [esi + 0xa4]
        fcomp   dword ptr [esi + 0xa0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0xa4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7776e4
        jmp     L_A1D7

L_C17:
        test    bl, bl
        jnz     L_C17_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C17_skip:
        fld     dword ptr [esi + 0xa8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C17_err
        fld     dword ptr [esi + 0xa8]
        fcomp   dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C17_err:
        fld     dword ptr [esi + 0xa8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777698
        jmp     L_A1D7

L_C18:
        test    bl, bl
        jnz     L_C18_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x42c80000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C18_skip:
        fld     dword ptr [esi + 0xac]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0xac]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777738
        jmp     L_A1D7

L_C19:
        test    bl, bl
        jnz     L_C19_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C19_skip:
        fld     dword ptr [esi + 0xb0]
        fcomp   dword ptr [esi + 0xac]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0xb0]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777648
        jmp     L_A1D7

L_C20:
        test    bl, bl
        jnz     L_C20_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C20_skip:
        fld     dword ptr [esi + 0xb4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C20_err
        fld     dword ptr [esi + 0xb4]
        fcomp   dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C20_err:
        fld     dword ptr [esi + 0xb4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777698
        jmp     L_A1D7

L_C21:
        test    bl, bl
        jnz     L_C21_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x42c80000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C21_skip:
        fld     dword ptr [esi + 0xb8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0xb8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777608
        jmp     L_A1D7

L_C22:
        test    bl, bl
        jnz     L_C22_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C22_skip:
        fld     dword ptr [esi + 0xbc]
        fcomp   dword ptr [esi + 0xb8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0xbc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7775b4
        jmp     L_A1D7

L_C23:
        test    bl, bl
        jnz     L_C23_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C23_skip:
        fld     dword ptr [esi + 0xc0]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C23_err
        fld     dword ptr [esi + 0xc0]
        fcomp   dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C23_err:
        fld     dword ptr [esi + 0xc0]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777568
        jmp     L_A1D7

L_C24:
        test    bl, bl
        jnz     L_C24_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x42c80000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C24_skip:
        fld     dword ptr [esi + 0xc4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0xc4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77752c
        jmp     L_A1D7

L_C25:
        test    bl, bl
        jnz     L_C25_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C25_skip:
        fld     dword ptr [esi + 0xc8]
        fcomp   dword ptr [esi + 0xc4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0xc8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7774e0
        jmp     L_A1D7

L_C26:
        test    bl, bl
        jnz     L_C26_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C26_skip:
        fld     dword ptr [esi + 0xcc]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C26_err
        fld     dword ptr [esi + 0xcc]
        fcomp   dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C26_err:
        fld     dword ptr [esi + 0xcc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77749c
        jmp     L_A1D7

L_C27:
        test    bl, bl
        jnz     L_C27_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x42c80000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C27_skip:
        fld     dword ptr [esi + 0xd0]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0xd0]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77752c
        jmp     L_A1D7

L_C28:
        test    bl, bl
        jnz     L_C28_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C28_skip:
        fld     dword ptr [esi + 0xd4]
        fcomp   dword ptr [esi + 0xd0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0xd4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777454
        jmp     L_A1D7

L_C29:
        test    bl, bl
        jnz     L_C29_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C29_skip:
        fld     dword ptr [esi + 0xd8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C29_err
        fld     dword ptr [esi + 0xd8]
        fcomp   dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C29_err:
        fld     dword ptr [esi + 0xd8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77749c
        jmp     L_A1D7

L_C30:
        test    bl, bl
        jnz     L_C30_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x42c80000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C30_skip:
        fld     dword ptr [esi + 0xdc]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0xdc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77741c
        jmp     L_A1D7

L_C31:
        test    bl, bl
        jnz     L_C31_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C31_skip:
        fld     dword ptr [esi + 0xe0]
        fcomp   dword ptr [esi + 0xdc]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0xe0]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7773d4
        jmp     L_A1D7

L_C32:
        test    bl, bl
        jnz     L_C32_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C32_skip:
        fld     dword ptr [esi + 0xe4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C32_err
        fld     dword ptr [esi + 0xe4]
        fcomp   dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C32_err:
        fld     dword ptr [esi + 0xe4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77738c
        jmp     L_A1D7

L_C33:
        test    bl, bl
        jnz     L_C33_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C33_skip:
        fld     dword ptr [esi + 0xe8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0xe8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777358
        jmp     L_A1D7

L_C34:
        test    bl, bl
        jnz     L_C34_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C34_skip:
        fld     dword ptr [esi + 0xec]
        fcomp   dword ptr [esi + 0xe8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0xec]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777318
        jmp     L_A1D7

L_C35:
        test    bl, bl
        jnz     L_C35_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C35_skip:
        fld     dword ptr [esi + 0xf0]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_C35_err
        fld     dword ptr [esi + 0xf0]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A2B8
L_C35_err:
        fld     dword ptr [esi + 0xf0]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7772d8
        jmp     L_A1D7

L_C36:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x2c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C37:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x2c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C38:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x2c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C39:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x13]
        push    eax
        push    esi
        mov     ecx, edi
        mov     byte ptr [esp + 0x1b], bl
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C40:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x13]
        push    eax
        push    esi
        mov     ecx, edi
        mov     byte ptr [esp + 0x1b], 0x1
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C41:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x13]
        push    eax
        push    esi
        mov     ecx, edi
        mov     byte ptr [esp + 0x1b], 0x1
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C42:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x13]
        push    eax
        push    esi
        mov     ecx, edi
        mov     byte ptr [esp + 0x1b], bl
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C43:
        test    bl, bl
        jnz     L_A2B8
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     eax, dword ptr [edi]
        mov     word ptr [esp + 0x14], cx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     word ptr [esp + 0x1e], dx
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C44:
        test    bl, bl
        jnz     L_C44_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C44_skip:
        fld     dword ptr [esi + 0xf4]
        fcomp   dword ptr [g_007704c0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0xf4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77729c
        jmp     L_A1D7

L_C45:
        test    bl, bl
        jnz     L_C45_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C45_skip:
        fld     dword ptr [esi + 0xf8]
        fcomp   dword ptr [esi + 0xf4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_A2B8
        fld     dword ptr [esi + 0xf8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77725c
        jmp     L_A1D7

L_C46:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x13]
        push    eax
        push    esi
        mov     ecx, edi
        mov     byte ptr [esp + 0x1b], 0x1
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C47:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], 0x3e4ccccd
        mov     dword ptr [esp + 0x24], 0x3e4ccccd
        mov     dword ptr [esp + 0x28], 0x3e4ccccd
        mov     dword ptr [esp + 0x2c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C48:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x2c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C49:
        test    bl, bl
        jnz     L_C49_skip
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_C49_skip:
        fld     dword ptr [esi + 0x114]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_A2B8
        fld     dword ptr [esi + 0x114]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x777224
L_A1D7:
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
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

L_C50:
        test    bl, bl
        jnz     L_A2B8
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     eax, dword ptr [edi]
        mov     word ptr [esp + 0x14], cx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     word ptr [esp + 0x1e], dx
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C51:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x43ac8000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C52:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x43ac8000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C53:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x20
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_C54:
        test    bl, bl
        jnz     L_A2B8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x20
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
L_A2B8:
        pop     edi
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
