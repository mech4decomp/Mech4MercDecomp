/*
 * FUN_006AE260 (896 B) — __thiscall (ECX = this), RET 0xc (3 stack params).
 *
 * Updates a HUD element list: computes interpolated positions, builds
 * string labels via FUN_00587830, and appends elements to a growable
 * array at this+0x50/0x54/0x58.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0068d4c0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0068d280(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00687c70(void);
extern void __cdecl FUN_00687ae0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_006ae5e0(void);
extern void __cdecl FUN_006b0310(void);
extern void __cdecl FUN_006f49a0(void);

extern void *g_7f2464;          /* global pointer @ 0x7f2464 */
extern float g_76d070;          /* float constant @ 0x76d070 */
extern float g_770168;          /* float constant @ 0x770168 */

__declspec(naked) void __cdecl FUN_006ae260(void)
{
    __asm {
        mov     eax, dword ptr [g_7f2464]
        sub     esp, 0x3c
        push    ebp
        push    esi
        push    eax
        mov     ebp, ecx
        call    FUN_006f4950
        mov     ecx, dword ptr [ebp + 0x34]
        mov     ecx, dword ptr [ecx + 0x48]
        push    ebp
        call    FUN_0068d4c0
        mov     esi, eax
        test    esi, esi
        jz      L_ae5b9
        mov     edx, dword ptr [esp + 0x4c]
        push    ebx
        push    edi
        mov     edi, dword ptr [ebp + 0x44]
        mov     eax, dword ptr [edi + 0x10]
        add     eax, 0x8
        push    eax
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [edx], 0x1
        call    FUN_0040c5d0
        mov     ecx, dword ptr [edi + 0x4]
        add     ecx, 0x8
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0040c5d0
        mov     ecx, dword ptr [ebp + 0x34]
        mov     ecx, dword ptr [ecx + 0x48]
        lea     edx, [esp + 0x28]
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        call    FUN_0068d280
        push    ebp
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x58], eax
        call    FUN_0040c410
        mov     ebx, dword ptr [ebp + 0x54]
        mov     eax, dword ptr [ebp + 0x58]
        cmp     ebx, eax
        lea     edi, [ebp + 0x50]
        mov     dword ptr [esp + 0x40], 0x80
        mov     byte ptr [esp + 0x44], 0x1
        mov     dword ptr [esp + 0x48], 0xffffffff
        jz      L_ae30f
        lea     edx, [esp + 0x34]
        push    edx
        push    ebx
        call    FUN_00687c70
        add     esp, 0x8
        add     ebx, 0x18
        mov     dword ptr [edi + 0x4], ebx
        jmp     L_ae31e
    L_ae30f:
        push    0x1
        lea     eax, [esp + 0x38]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_00687ae0
    L_ae31e:
        cmp     esi, dword ptr [esp + 0x54]
        jnz     L_ae332
        mov     eax, dword ptr [esp + 0x58]
        add     dword ptr [eax], 0xc
        mov     ebx, 0x1
        jmp     L_ae334
    L_ae332:
        xor     ebx, ebx
    L_ae334:
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        jz      L_ae481
        fld     dword ptr [esi + 0x4]
        push    ecx
        fsub    dword ptr [esi]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [esi]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esp + 0x58]
        fadd    dword ptr [g_770168]
        fstp    dword ptr [esp]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x34]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [g_770168]
        mov     eax, dword ptr [esp + 0x54]
        push    ecx
        lea     ecx, [esp + 0x2c]
        fstp    dword ptr [esp]
        push    0x0
        push    eax
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        mov     eax, dword ptr [ebp + 0x44]
        lea     edx, [ebx + ebx*0x2]
        mov     ecx, dword ptr [eax + edx*0x4 + 0x4]
        add     ecx, 0x8
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0040c5d0
        fld     dword ptr [esp + 0x3c]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x1
        jz      L_ae41f
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x40], 0x80
        mov     byte ptr [esp + 0x44], 0x1
        mov     dword ptr [esp + 0x48], 0xffffffff
        jz      L_ae414
        lea     eax, [esp + 0x34]
        jmp     L_ae552
    L_ae414:
        push    0x1
        lea     ecx, [esp + 0x38]
        jmp     L_ae56f
    L_ae41f:
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040ccd0
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x40], 0x80
        mov     byte ptr [esp + 0x44], 0x1
        mov     dword ptr [esp + 0x48], 0xffffffff
        jz      L_ae468
        lea     ecx, [esp + 0x34]
        push    ecx
        push    esi
        call    FUN_00687c70
        add     esp, 0x8
        add     esi, 0x18
        lea     eax, [esp + 0x1c]
        mov     dword ptr [edi + 0x4], esi
        push    eax
        jmp     L_ae5a3
    L_ae468:
        push    0x1
        lea     edx, [esp + 0x38]
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_00687ae0
        lea     eax, [esp + 0x1c]
        push    eax
        jmp     L_ae5a3
    L_ae481:
        fld     dword ptr [esi + 0xc]
        fsub    dword ptr [esi + 0x8]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [esi + 0x8]
        fstp    dword ptr [esp + 0x54]
        mov     ecx, dword ptr [esp + 0x54]
        fld     dword ptr [esi + 0x4]
        fadd    dword ptr [g_770168]
        push    ecx
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x34]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x34]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        fld     dword ptr [esi]
        mov     eax, dword ptr [esp + 0x54]
        fsub    dword ptr [g_770168]
        push    eax
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x34]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        mov     eax, dword ptr [ebp + 0x44]
        lea     edx, [ebx + ebx*0x2]
        mov     ecx, dword ptr [eax + edx*0x4 + 0x4]
        add     ecx, 0x8
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0040c5d0
        fld     dword ptr [esp + 0x34]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_ae57f
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0040ccd0
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x40], 0x80
        mov     byte ptr [esp + 0x44], 0x1
        mov     dword ptr [esp + 0x48], 0xffffffff
        jz      L_ae569
        lea     eax, [esp + 0x34]
    L_ae552:
        push    eax
        push    esi
        call    FUN_00687c70
        add     esp, 0x8
        add     esi, 0x18
        lea     edx, [esp + 0x10]
        mov     dword ptr [edi + 0x4], esi
        push    edx
        jmp     L_ae5a3
    L_ae569:
        push    0x1
        lea     ecx, [esp + 0x38]
    L_ae56f:
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_00687ae0
        lea     edx, [esp + 0x10]
        push    edx
        jmp     L_ae5a3
    L_ae57f:
        push    -0x1
        push    0x1
        push    0x80
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_006ae5e0
        push    eax
        mov     ecx, edi
        call    FUN_006b0310
        lea     ecx, [esp + 0x1c]
        push    ecx
    L_ae5a3:
        mov     esi, dword ptr [esp + 0x54]
        mov     ecx, esi
        call    FUN_0040c410
        pop     edi
        mov     dword ptr [esi + 0x4], 0x0
        pop     ebx
        jmp     L_ae5cc
    L_ae5b9:
        mov     esi, dword ptr [esp + 0x48]
        push    ebp
        mov     ecx, esi
        call    FUN_0040ccd0
        mov     dword ptr [esi + 0x4], 0x0
    L_ae5cc:
        mov     eax, dword ptr [esp + 0x50]
        add     dword ptr [eax], 0xc
        call    FUN_006f49a0
        pop     esi
        pop     ebp
        add     esp, 0x3c
        ret     0xc
    }
}
