/*
 * FUN_005d1330 (1005 B) - __thiscall (ECX = this), RET 0x8 (2 stack params).
 *
 * Complex update routine. Locks via FUN_006f4950. If this+0x368 (EBP) is
 * non-null, handles a pending object: if this+0x3d0 > 5, dispatches through
 * [EDI+0x1c] with 4 args; otherwise increments this+0x3d0 and performs a
 * terrain/heightmap update with two switch jump tables (0x5d1720, 0x5d1748),
 * calls FUN_005d98b0/FUN_005d9c70/FUN_005d9500/FUN_005d9810, and manages
 * this+0x45c / this+0x368 via FUN_00684fb0/FUN_004084e0. Unlocks via
 * FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(int new_ctx);
extern void __stdcall FUN_006f49a0(void);
extern void __cdecl   FUN_004084e0(void *ptr);
extern void FUN_00684fb0(void);
extern void FUN_00419480(void);
extern char FUN_005d98b0(void);
extern void FUN_005d9c70(void);
extern void FUN_005d9500(void);
extern void *FUN_005d9810(void);
extern void FUN_00551870(void);
extern void FUN_005d9ac0(void);
extern void FUN_0068b190(void);
extern void FUN_0068b110(void);
extern void FUN_00707e70(void);

__declspec(naked) void __stdcall FUN_005d1330(int param1, int param2)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007f244c;
extern int DAT_007f2438;
extern int DAT_007f2464;
extern int DAT_00788104;
extern int DAT_007f2440;
__asm {
/* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 mem-deref */
        mov eax, dword ptr [DAT_007f244c]
        sub     esp, 0x24
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     ebp, dword ptr [esi + 0x368]
        xor     ebx, ebx
        cmp     ebp, ebx
        jz      loc_5d1637
        cmp     dword ptr [esi + 0x3d0], 5
        jle     loc_5d142e
        mov     edi, dword ptr [esi + 0x364]
        cmp     edi, ebx
        mov     dword ptr [esi + 0x3d0], ebx
        jz      loc_5d142e
        mov     eax, dword ptr [edi + 8]
        cmp     eax, 2
        jz      loc_5d1386
        cmp     eax, 9
        jnz     loc_5d142e
loc_5d1386:
        cmp     eax, 9
        jnz     loc_5d13df
        mov     edx, dword ptr [edi]
        mov     ebx, dword ptr [edi + 0x40]
        mov     ecx, edi
        call    dword ptr [edx + 0x30]
        dec     eax
        cmp     ebx, eax
        jge     loc_5d142e
        test    ebp, ebp
        jz      loc_5d13b2
        mov     ecx, ebp
        call    FUN_00684fb0
        push    ebp
        call    FUN_004084e0
        add     esp, 4
loc_5d13b2:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [edi]
        push    0x0
        push    ecx
        push    edx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esi + 0x368], 0x0
        call    dword ptr [eax + 0x1c]
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x8
loc_5d13df:
        mov     eax, dword ptr [edi + 0x44]
        mov     edx, dword ptr [edi + 0x40]
        mov     ecx, dword ptr [edi + 0x4c]
        sub     eax, edx
        sar     eax, 2
        dec     eax
        cmp     ecx, eax
        jge     loc_5d142e
        cmp     ebp, ebx
        jz      loc_5d1406
        mov     ecx, ebp
        call    FUN_00684fb0
        push    ebp
        call    FUN_004084e0
        add     esp, 4
loc_5d1406:
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [edi]
        push    ebx
        push    eax
        push    ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esi + 0x368], ebx
        call    dword ptr [edx + 0x1c]
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x8
loc_5d142e:
        inc     dword ptr [esi + 0x3d0]
        mov     ebx, dword ptr [esi + 0x35c]
        mov     edx, dword ptr [ebx + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_00419480
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esi + 0x45c]
        test    edi, edi
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x20], ecx
        fld     dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x14]
        fstp    dword ptr [esp + 0x10]
        mov     edx, eax
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, ecx
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], eax
        jz      loc_5d14dd
        mov     al, byte ptr [edi + 0xc]
        test    al, al
        jnz     loc_5d1510
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, edi
        call    FUN_005d98b0
        test    al, al
        jnz     loc_5d1550
loc_5d14b3:
        /* __emit: MSVC6 encodes mov ecx,[imm32] as immediate load, not 8B 0D mem-deref */
        mov ecx, dword ptr [DAT_007f2438]
        push    edi
        call    FUN_005d9c70
        test    edi, edi
        jz      loc_5d14d3
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 4
loc_5d14d3:
        mov     dword ptr [esi + 0x45c], 0x0
loc_5d14dd:
        mov     edx, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        mov     edi, eax
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 mem-deref */
        mov eax, dword ptr [DAT_007f2464]
        push    eax
        call    FUN_006f4950
        mov     eax, dword ptr [edi + 0x50]
        cmp     eax, 9
        ja      loc_5d15ae
        /* __emit: MSVC6 cannot encode jmp dword ptr [eax*4+imm32] indirect jump */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x20
        __emit 0x17
        __emit 0x5D
        __emit 0x00
        mov     edi, 0x10
        jmp     loc_5d15b0
loc_5d1510:
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, edi
        call    FUN_005d9810
        fld     dword ptr [eax]
        fsub    dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x30], ecx
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x18]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        /* __emit: FCOMP dword ptr [imm32] not supported in MSVC6 inline asm */
        fcomp dword ptr [DAT_00788104]
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jz      loc_5d14b3
loc_5d1550:
        test    ebp, ebp
        jz      loc_5d1564
        mov     ecx, ebp
        call    FUN_00684fb0
        push    ebp
        call    FUN_004084e0
        add     esp, 4
loc_5d1564:
        mov     dword ptr [esi + 0x368], 0x0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x8
        mov     edi, 0x11
        jmp     loc_5d15b0
        mov     edi, 0x2
        jmp     loc_5d15b0
        mov     edi, 0x8
        jmp     loc_5d15b0
        mov     edi, 0x4
        jmp     loc_5d15b0
        mov     edi, 0x20
        jmp     loc_5d15b0
        mov     edi, 0x40
        jmp     loc_5d15b0
        mov     edi, 0x100
        jmp     loc_5d15b0
loc_5d15ae:
        xor     edi, edi
loc_5d15b0:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x168]
        push    eax
        push    esi
        push    edi
        sub     esp, 0xc
        lea     eax, [esp + 0x28]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        sub     esp, 0xc
        lea     edx, [esp + 0x40]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 mem-deref */
        mov eax, dword ptr [DAT_007f2440]
        push    eax
        push    0x0
        call    FUN_00707e70
        /* __emit: MSVC6 encodes mov ecx,[imm32] as immediate load, not 8B 0D mem-deref */
        mov ecx, dword ptr [DAT_007f2438]
        sub     esp, 8
        fstp    qword ptr [esp]
        call    FUN_005d9ac0
        mov     edi, dword ptr [esi + 0x368]
        test    edi, edi
        mov     dword ptr [esi + 0x45c], eax
        jz      loc_5d1619
        mov     ecx, edi
        call    FUN_00684fb0
        push    edi
        call    FUN_004084e0
        add     esp, 4
loc_5d1619:
        mov     dword ptr [esi + 0x368], 0x0
        call    FUN_006f49a0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x8
loc_5d1637:
        mov     edi, dword ptr [esi + 0x364]
        cmp     edi, ebx
        jz      loc_5d170e
        cmp     dword ptr [edi + 8], 9
        jnz     loc_5d170e
        mov     ecx, dword ptr [esi + 0x35c]
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esi + 0x45c]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x20], edx
        jz      loc_5d16a9
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, edi
        call    FUN_0068b190
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x8
loc_5d16a9:
        mov     edx, dword ptr [ecx + 0x78]
        add     ecx, 0x78
        call    dword ptr [edx + 4]
        mov     eax, dword ptr [eax + 0x50]
        cmp     eax, 9
        ja      loc_5d16f9
        /* __emit: MSVC6 cannot encode jmp dword ptr [eax*4+imm32] indirect jump */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x48
        __emit 0x17
        __emit 0x5D
        __emit 0x00
        mov     eax, 0x10
        jmp     loc_5d16fb
        mov     eax, 0x11
        jmp     loc_5d16fb
        mov     eax, 0x2
        jmp     loc_5d16fb
        mov     eax, 0x8
        jmp     loc_5d16fb
        mov     eax, 0x4
        jmp     loc_5d16fb
        mov     eax, 0x20
        jmp     loc_5d16fb
        mov     eax, 0x40
        jmp     loc_5d16fb
        mov     eax, 0x100
        jmp     loc_5d16fb
loc_5d16f9:
        xor     eax, eax
loc_5d16fb:
        push    eax
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, edi
        call    FUN_0068b110
        mov     dword ptr [esi + 0x45c], eax
loc_5d170e:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x8
    }


}
