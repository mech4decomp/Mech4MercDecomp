/*
 * FUN_004ad160 (896 B) -- __thiscall (RET 0x8). MLR sub-object bounding-box
 * dispatcher: switch on *this (cases 0..11) via jump table at 0x4ad4e0.
 * Cases 0-3,8-11 forward to transform helpers; cases 4-7 compute axis-aligned
 * min/max extents with FPU. Shared min/max tail at 0x4ad465.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004ade60(void);
extern void __cdecl FUN_004ae0c0(void);
extern void __cdecl FUN_004aec80(void);
extern void __cdecl FUN_004aedc0(void);
extern void __cdecl FUN_004aef40(void);
extern void __cdecl FUN_004aee70(void);
extern void __cdecl FUN_004aeff0(void);

__declspec(naked) void FUN_004ad160(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        cmp     eax, 0xb
        ja      L_default
        /* __emit: jump-table dispatch FF 24 85 [eax*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xE0
        __emit 0xD4
        __emit 0x4A
        __emit 0x00
L_c0:
        fld     dword ptr [esi + 0x4]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        fld     st(0)
        fstp    dword ptr [eax]
        pop     esi
        fstp    dword ptr [ecx]
        add     esp, 0x14
        ret     0x8
L_c1:
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004ade60
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c2:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004ae0c0
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c3:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004aec80
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c4:
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esi + 0x4]
        call    FUN_004aec80
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esi + 0x10]
        call    FUN_004ade60
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        fst     dword ptr [esp + 0x4]
        fstp    dword ptr [edx]
        fld     dword ptr [esp + 0x4]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x8]
        fcom    dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_22f
        fstp    dword ptr [ecx]
        jmp     L_240
L_22f:
        fcom    dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_23e
        fstp    dword ptr [edx]
        jmp     L_240
L_23e:
        fstp    st(0)
L_240:
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x14]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_255
        fstp    dword ptr [ecx]
        jmp     L_264
L_255:
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_262
        fstp    dword ptr [edx]
        jmp     L_264
L_262:
        fstp    st(0)
L_264:
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x14]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_465
        fstp    dword ptr [ecx]
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c5:
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esi + 0x4]
        call    FUN_004aec80
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esi + 0x10]
        call    FUN_004aec80
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        fst     dword ptr [esp + 0x4]
        fstp    dword ptr [edx]
        fld     dword ptr [esp + 0x4]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x14]
        fcom    dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_2d9
        fstp    dword ptr [ecx]
        jmp     L_2ea
L_2d9:
        fcom    dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_2e8
        fstp    dword ptr [edx]
        jmp     L_2ea
L_2e8:
        fstp    st(0)
L_2ea:
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x8]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_2ff
        fstp    dword ptr [ecx]
        jmp     L_30e
L_2ff:
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_30c
        fstp    dword ptr [edx]
        jmp     L_30e
L_30c:
        fstp    st(0)
L_30e:
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x8]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_465
        fstp    dword ptr [ecx]
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c6:
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esi + 0x4]
        call    FUN_004aec80
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esi + 0x10]
        call    FUN_004ae0c0
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        fst     dword ptr [esp + 0x4]
        fstp    dword ptr [edx]
        fld     dword ptr [esp + 0x4]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x14]
        fcom    dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_383
        fstp    dword ptr [ecx]
        jmp     L_394
L_383:
        fcom    dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_392
        fstp    dword ptr [edx]
        jmp     L_394
L_392:
        fstp    st(0)
L_394:
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x8]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_3a9
        fstp    dword ptr [ecx]
        jmp     L_3b8
L_3a9:
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_3b6
        fstp    dword ptr [edx]
        jmp     L_3b8
L_3b6:
        fstp    st(0)
L_3b8:
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x8]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_465
        fstp    dword ptr [ecx]
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c7:
        mov     edx, dword ptr [esi + 0x8]
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_004aec80
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        fld     st(0)
        fstp    dword ptr [edx]
        fld     st(0)
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x14]
        fst     dword ptr [esp + 0x20]
        fld     st(1)
        fcomp   dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_424
        fstp    dword ptr [ecx]
        jmp     L_433
L_424:
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L_431
        fstp    dword ptr [edx]
        jmp     L_433
L_431:
        fstp    st(0)
L_433:
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_440
        fstp    dword ptr [ecx]
        jmp     L_44f
L_440:
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_44d
        fstp    dword ptr [edx]
        jmp     L_44f
L_44d:
        fstp    st(0)
L_44f:
        fld     dword ptr [esp + 0x20]
        fcom    dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_465
        fstp    dword ptr [ecx]
        pop     esi
        add     esp, 0x14
        ret     0x8
L_465:
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4d7
        fstp    dword ptr [edx]
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c8:
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004aedc0
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c9:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004aef40
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c10:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004aee70
        pop     esi
        add     esp, 0x14
        ret     0x8
L_c11:
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004aeff0
        pop     esi
        add     esp, 0x14
        ret     0x8
L_4d7:
        fstp    st(0)
L_default:
        pop     esi
        add     esp, 0x14
        ret     0x8
    }
}
