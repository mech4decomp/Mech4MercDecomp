/*
 * FUN_006af430 (2631 B) — Weapon/armature placement loader (__fastcall).
 *
 * Reads a config object (ECX = this), walks two sub-objects, and
 * populates a vector list at this+0x50 with interpolated positions.
 * Heavy FPU usage (interpolation between keyframe bounds).
 *
 * __fastcall (ECX = this), RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2464;   /* 0x007f2464 */
extern float g_76d070; /* 0x0076d070 */
extern float g_770168; /* 0x00770168 */
extern int g_7b220c;   /* 0x007b220c */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0068d4c0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00687c70(void);
extern void __cdecl FUN_00687ae0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0068d280(void);
extern void __cdecl FUN_006afee0(void);
extern void __cdecl FUN_006ae5e0(void);
extern void __cdecl FUN_006b0310(void);
extern void __cdecl FUN_006afeb0(void);
extern void __cdecl FUN_006afe80(void);
extern void __cdecl FUN_006aff10(void);
extern void __cdecl FUN_00686640(void);
extern void __cdecl FUN_0041c540(void);

__declspec(naked) void __fastcall FUN_006af430(void)
{
    __asm {
        mov     eax, dword ptr [g_7f2464]
        sub     esp, 0x4c
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     edi, ecx
        call    FUN_006f4950
        mov     ecx, dword ptr [edi + 0x34]
        mov     ecx, dword ptr [ecx + 0x48]
        push    edi
        call    FUN_0068d4c0
        mov     edx, dword ptr [edi + 0x34]
        mov     ecx, dword ptr [edx + 0x48]
        lea     esi, [edi + 0xc]
        push    esi
        mov     ebp, eax
        call    FUN_0068d4c0
        mov     ebx, eax
        cmp     ebp, ebx
        jnz     L_f515
        test    ebp, ebp
        jz      L_fca5
        push    edi
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebx, dword ptr [edi + 0x54]
        mov     eax, dword ptr [edi + 0x58]
        cmp     ebx, eax
        lea     esi, [edi + 0x50]
        mov     ebp, 0x80
        mov     dword ptr [esp + 0x50], ebp
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f4b6
        lea     eax, [esp + 0x44]
        push    eax
        push    ebx
        call    FUN_00687c70
        add     esp, 0x8
        add     ebx, 0x18
        mov     dword ptr [esi + 0x4], ebx
        jmp     L_f4c5
L_f4b6:
        push    0x1
        lea     ecx, [esp + 0x48]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_00687ae0
L_f4c5:
        lea     eax, [edi + 0xc]
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], ebp
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f4f4
        lea     edx, [esp + 0x44]
        jmp     L_fa24
L_f4f4:
        push    0x1
        lea     eax, [esp + 0x48]
        push    eax
        push    ebx
        mov     ecx, esi
        call    FUN_00687ae0
        mov     ecx, dword ptr [esi]
        mov     dword ptr [edi + 0x60], ecx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
L_f515:
        test    ebp, ebp
        jz      L_fca5
        test    ebx, ebx
        jz      L_fa67
        push    edi
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     eax, dword ptr [edi + 0x54]
        mov     ecx, dword ptr [edi + 0x58]
        cmp     eax, ecx
        lea     esi, [edi + 0x50]
        mov     dword ptr [esp + 0x50], 0x80
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f56a
        lea     ecx, [esp + 0x44]
        push    ecx
        push    eax
        call    FUN_00687c70
        mov     eax, dword ptr [esi + 0x4]
        add     esp, 0x8
        add     eax, 0x18
        mov     dword ptr [esi + 0x4], eax
        jmp     L_f579
L_f56a:
        push    0x1
        lea     edx, [esp + 0x48]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00687ae0
L_f579:
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jz      L_f69c
        fld     dword ptr [ebp + 0x4]
        push    ecx
        fsub    dword ptr [ebp]
        lea     ecx, [esp + 0x48]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ebp]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esp + 0x14]
        fadd    dword ptr [g_770168]
        fstp    dword ptr [esp]
        push    0x0
        push    eax
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0040c410
        fld     dword ptr [ebp + 0x8]
        fsub    dword ptr [g_770168]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x48]
        fstp    dword ptr [esp]
        push    0x0
        push    edx
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040c410
        fld     dword ptr [edi + 0x14]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 1
        jz      L_f64c
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebp, dword ptr [esi + 0x4]
        cmp     ebp, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], 0x80
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f640
        lea     edx, [esp + 0x44]
        jmp     L_f67b
L_f640:
        push    0x1
        lea     eax, [esp + 0x48]
        push    eax
        jmp     L_f7a8
L_f64c:
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebp, dword ptr [esi + 0x4]
        cmp     ebp, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], 0x80
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f690
        lea     edx, [esp + 0x44]
L_f67b:
        push    edx
        push    ebp
        call    FUN_00687c70
        add     esp, 0x8
        add     ebp, 0x18
        mov     dword ptr [esi + 0x4], ebp
        jmp     L_f7b0
L_f690:
        push    0x1
        lea     eax, [esp + 0x48]
        push    eax
        jmp     L_f7a8
L_f69c:
        fld     dword ptr [ebp + 0xc]
        fsub    dword ptr [ebp + 0x8]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ebp + 0x8]
        fstp    dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x10]
        fld     dword ptr [ebp + 0x4]
        fadd    dword ptr [g_770168]
        push    ecx
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x50]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x38]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0040c410
        fld     dword ptr [ebp]
        mov     eax, dword ptr [esp + 0x10]
        fsub    dword ptr [g_770168]
        push    eax
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x50]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0040c410
        fld     dword ptr [edi + 0xc]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 1
        jz      L_f770
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebp, dword ptr [esi + 0x4]
        cmp     ebp, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], 0x80
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f768
        lea     eax, [esp + 0x44]
L_f756:
        push    eax
        push    ebp
        call    FUN_00687c70
        add     esp, 0x8
        add     ebp, 0x18
        mov     dword ptr [esi + 0x4], ebp
        jmp     L_f7b0
L_f768:
        push    0x1
        lea     ecx, [esp + 0x48]
        jmp     L_f7a7
L_f770:
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebp, dword ptr [esi + 0x4]
        cmp     ebp, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], 0x80
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f7a1
        lea     eax, [esp + 0x44]
        jmp     L_f756
L_f7a1:
        push    0x1
        lea     ecx, [esp + 0x48]
L_f7a7:
        push    ecx
L_f7a8:
        push    ebp
        mov     ecx, esi
        call    FUN_00687ae0
L_f7b0:
        mov     al, byte ptr [ebx + 0x14]
        test    al, al
        jz      L_f8d3
        fld     dword ptr [ebx + 0x4]
        push    ecx
        fsub    dword ptr [ebx]
        lea     ecx, [esp + 0x48]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ebx]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [ebx + 0xc]
        mov     ebp, dword ptr [esp + 0x14]
        fadd    dword ptr [g_770168]
        fstp    dword ptr [esp]
        push    0x0
        push    ebp
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x38]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0040c410
        fld     dword ptr [ebx + 0x8]
        fsub    dword ptr [g_770168]
        push    ecx
        lea     ecx, [esp + 0x48]
        fstp    dword ptr [esp]
        push    0x0
        push    ebp
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040c410
        fld     dword ptr [edi + 0x8]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 1
        jz      L_f882
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     edx, dword ptr [edi + 0x44]
        mov     eax, dword ptr [edx + 0x8]
        mov     ebx, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x50], eax
        cmp     ebx, dword ptr [esi + 0x8]
        mov     byte ptr [esp + 0x54], 0x0
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f876
        lea     ecx, [esp + 0x44]
        jmp     L_f989
L_f876:
        push    0x1
        lea     edx, [esp + 0x48]
        push    edx
        jmp     L_f9ee
L_f882:
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ecx, dword ptr [edi + 0x44]
        mov     edx, dword ptr [ecx + 0x8]
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], edx
        mov     byte ptr [esp + 0x54], 0x0
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f8c8
        lea     eax, [esp + 0x44]
        push    eax
        push    ebx
        call    FUN_00687c70
        add     esp, 0x8
        add     ebx, 0x18
        mov     dword ptr [esi + 0x4], ebx
        jmp     L_f9f6
L_f8c8:
        push    0x1
        lea     ecx, [esp + 0x48]
        jmp     L_f9ed
L_f8d3:
        fld     dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx + 0x8]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ebx + 0x8]
        fstp    dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esp + 0x10]
        fld     dword ptr [ebx + 0x4]
        fadd    dword ptr [g_770168]
        push    ebp
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x50]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x38]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0040c410
        fld     dword ptr [ebx]
        fsub    dword ptr [g_770168]
        push    ebp
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x50]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040c410
        fld     dword ptr [edi]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 1
        jz      L_f9a4
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     edx, dword ptr [edi + 0x44]
        mov     eax, dword ptr [edx + 0x8]
        mov     ebx, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x50], eax
        cmp     ebx, dword ptr [esi + 0x8]
        mov     byte ptr [esp + 0x54], 0x0
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f99b
        lea     ecx, [esp + 0x44]
L_f989:
        push    ecx
        push    ebx
        call    FUN_00687c70
        add     esp, 0x8
        add     ebx, 0x18
        mov     dword ptr [esi + 0x4], ebx
        jmp     L_f9f6
L_f99b:
        push    0x1
        lea     edx, [esp + 0x48]
        push    edx
        jmp     L_f9ee
L_f9a4:
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ecx, dword ptr [edi + 0x44]
        mov     edx, dword ptr [ecx + 0x8]
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], edx
        mov     byte ptr [esp + 0x54], 0x0
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_f9e7
        lea     eax, [esp + 0x44]
        push    eax
        push    ebx
        call    FUN_00687c70
        add     esp, 0x8
        add     ebx, 0x18
        mov     dword ptr [esi + 0x4], ebx
        jmp     L_f9f6
L_f9e7:
        push    0x1
        lea     ecx, [esp + 0x48]
L_f9ed:
        push    ecx
L_f9ee:
        push    ebx
        mov     ecx, esi
        call    FUN_00687ae0
L_f9f6:
        lea     eax, [edi + 0xc]
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], 0x80
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_fa46
        lea     edx, [esp + 0x44]
L_fa24:
        push    edx
        push    ebx
        call    FUN_00687c70
        mov     ecx, dword ptr [esi]
        add     ebx, 0x18
        add     esp, 0x8
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [edi + 0x60], ecx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
L_fa46:
        push    0x1
        lea     eax, [esp + 0x48]
        push    eax
        push    ebx
        mov     ecx, esi
        call    FUN_00687ae0
        mov     ecx, dword ptr [esi]
        mov     dword ptr [edi + 0x60], ecx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
L_fa67:
        mov     ecx, dword ptr [edi + 0x34]
        mov     ecx, dword ptr [ecx + 0x48]
        push    esi
        push    edi
        call    FUN_0068d280
        test    eax, eax
        jz      L_fca5
        push    edi
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebx, dword ptr [edi + 0x54]
        mov     eax, dword ptr [edi + 0x58]
        cmp     ebx, eax
        lea     esi, [edi + 0x50]
        mov     dword ptr [esp + 0x50], 0x80
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_fabe
        lea     edx, [esp + 0x44]
        push    edx
        push    ebx
        call    FUN_00687c70
        add     esp, 0x8
        add     ebx, 0x18
        mov     dword ptr [esi + 0x4], ebx
        jmp     L_facd
L_fabe:
        push    0x1
        lea     eax, [esp + 0x48]
        push    eax
        push    ebx
        mov     ecx, esi
        call    FUN_00687ae0
L_facd:
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jz      L_fbfc
        fld     dword ptr [ebp + 0x4]
        push    ecx
        fsub    dword ptr [ebp]
        lea     ecx, [esp + 0x48]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ebp]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [ebp + 0xc]
        mov     ebx, dword ptr [esp + 0x14]
        fadd    dword ptr [g_770168]
        fstp    dword ptr [esp]
        push    0x0
        push    ebx
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0040c410
        fld     dword ptr [ebp + 0x8]
        fsub    dword ptr [g_770168]
        push    ecx
        lea     ecx, [esp + 0x48]
        fstp    dword ptr [esp]
        push    0x0
        push    ebx
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x38]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_0040c410
        fld     dword ptr [edi + 0x14]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 1
        jz      L_fba4
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], 0x80
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_fb90
        lea     ecx, [esp + 0x44]
        jmp     L_fbd3
L_fb90:
        push    0x1
        lea     edx, [esp + 0x48]
        push    edx
        push    ebx
        mov     ecx, esi
        call    FUN_00687ae0
        jmp     L_fc8d
L_fba4:
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_0040ccd0
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], 0x80
        mov     byte ptr [esp + 0x54], 0x1
        mov     dword ptr [esp + 0x58], 0xffffffff
        jz      L_fbe8
        lea     ecx, [esp + 0x44]
L_fbd3:
        push    ecx
        push    ebx
        call    FUN_00687c70
        add     esp, 0x8
        add     ebx, 0x18
        mov     dword ptr [esi + 0x4], ebx
        jmp     L_fc8d
L_fbe8:
        push    0x1
        lea     edx, [esp + 0x48]
        push    edx
        push    ebx
        mov     ecx, esi
        call    FUN_00687ae0
        jmp     L_fc8d
L_fbfc:
        fld     dword ptr [ebp + 0xc]
        push    ecx
        fsub    dword ptr [ebp + 0x8]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ebp + 0x8]
        fstp    dword ptr [esp]
        push    0x0
        fld     dword ptr [ebp + 0x4]
        push    ecx
        fadd    dword ptr [g_770168]
        lea     ecx, [esp + 0x50]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0040c410
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, ebp
        call    FUN_006afee0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040c410
        fld     dword ptr [edi + 0xc]
        fcomp   dword ptr [esp + 0x14]
        push    -0x1
        push    0x1
        push    0x80
        fnstsw  ax
        test    ah, 1
        jz      L_fc77
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x54]
        jmp     L_fc80
L_fc77:
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x54]
L_fc80:
        call    FUN_006ae5e0
        push    eax
        mov     ecx, esi
        call    FUN_006b0310
L_fc8d:
        mov     eax, dword ptr [edi + 0x44]
        mov     ecx, dword ptr [eax + 0x8]
        push    -0x1
        push    0x0
        push    ecx
        lea     eax, [edi + 0xc]
        push    eax
        lea     ecx, [esp + 0x54]
        jmp     L_fe58
L_fca5:
        test    ebx, ebx
        jz      L_fdbf
        mov     edx, dword ptr [edi + 0x34]
        mov     ecx, dword ptr [edx + 0x48]
        push    esi
        push    edi
        call    FUN_0068d280
        test    eax, eax
        jz      L_fdbf
        mov     eax, dword ptr [edi + 0x44]
        mov     eax, dword ptr [eax + 0x8]
        push    -0x1
        push    0x0
        push    eax
        push    edi
        lea     ecx, [esp + 0x54]
        lea     esi, [edi + 0x50]
        call    FUN_006ae5e0
        push    eax
        mov     ecx, esi
        call    FUN_006b0310
        mov     al, byte ptr [ebx + 0x14]
        test    al, al
        jz      L_fd44
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, ebx
        call    FUN_006afeb0
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0040ccd0
        lea     edx, [esp + 0x44]
        push    edx
        mov     ecx, ebx
        call    FUN_006afe80
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040ccd0
        fld     dword ptr [edi + 0x8]
        fcomp   dword ptr [esp + 0x1c]
        push    -0x1
        push    0x0
        fnstsw  ax
        test    ah, 1
        mov     eax, dword ptr [edi + 0x44]
        mov     ecx, dword ptr [eax + 0x8]
        push    ecx
        jz      L_fd39
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x54]
        jmp     L_fd9c
L_fd39:
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esp + 0x54]
        jmp     L_fd9c
L_fd44:
        lea     eax, [esp + 0x44]
        push    eax
        mov     ecx, ebx
        call    FUN_006aff10
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0040ccd0
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, ebx
        call    FUN_006afee0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040ccd0
        fld     dword ptr [edi]
        fcomp   dword ptr [esp + 0x14]
        mov     edx, dword ptr [edi + 0x44]
        push    -0x1
        push    0x0
        fnstsw  ax
        test    ah, 1
        mov     eax, dword ptr [edx + 0x8]
        push    eax
        jz      L_fd93
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x54]
        jmp     L_fd9c
L_fd93:
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x54]
L_fd9c:
        call    FUN_006ae5e0
        push    eax
        mov     ecx, esi
        call    FUN_006b0310
        push    -0x1
        push    0x1
        push    0x80
        lea     eax, [edi + 0xc]
        push    eax
        lea     ecx, [esp + 0x54]
        jmp     L_fe58
L_fdbf:
        mov     eax, dword ptr [edi + 0x44]
        mov     edx, dword ptr [eax + 0x8]
        push    -0x1
        push    0x0
        push    edx
        push    edi
        lea     ecx, [esp + 0x54]
        lea     esi, [edi + 0x50]
        call    FUN_006ae5e0
        push    eax
        mov     ecx, esi
        call    FUN_006b0310
        mov     eax, dword ptr [edi + 0x44]
        mov     eax, dword ptr [eax + 0x8]
        push    eax
        lea     eax, [edi + 0xc]
        push    eax
        push    edi
        lea     ecx, [esp + 0x50]
        push    ecx
        mov     ecx, dword ptr [edi + 0x34]
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_0040ccd0
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x50]
        call    FUN_00587830
        mov     edx, dword ptr [g_7b220c]
        push    edx
        push    eax
        lea     eax, [esp + 0x34]
        push    eax
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      L_fe44
        mov     byte ptr [edi + 0x3c], 0x0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
L_fe44:
        mov     ecx, dword ptr [edi + 0x44]
        mov     edx, dword ptr [ecx + 0x8]
        push    -0x1
        push    0x0
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x54]
L_fe58:
        call    FUN_006ae5e0
        push    eax
        mov     ecx, esi
        call    FUN_006b0310
        mov     ecx, dword ptr [esi]
        mov     dword ptr [edi + 0x60], ecx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
    }
}
