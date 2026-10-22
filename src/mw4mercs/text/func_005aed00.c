/*
 * FUN_005aed00 (419 B) — __thiscall (ECX = this), RET 4.
 * Takes a float* param (at [EBP+0x8]) and updates it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004fcb30(void);
extern void __stdcall FUN_00415230(void);
extern void __stdcall FUN_00707e70(void);
extern void __stdcall FUN_00590460(void);
extern void __stdcall FUN_00415020(void);

__declspec(naked) void __stdcall FUN_005aed00(void)
{
    extern int DAT_007dab44;
    extern int DAT_007dab40;
    extern int DAT_007f1f84;
    extern float DAT_0077de90;
    extern float DAT_00785aa8;
    extern float DAT_0076d064;
    extern float DAT_0077d050;
    extern float DAT_0076d070;
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x28
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 0x348]
        test    ecx, ecx
        jl      done
        mov     eax, dword ptr [edi + 0x344]
        test    eax, eax
        jle     done
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x10]
        xor     edx, 0x85739531
        jz      done
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      done
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      done
        mov     eax, dword ptr [DAT_007f1f84]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      done
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [ebp - 0x8]
        mov     ecx, esi
        call    FUN_00590460
        fsubr   dword ptr [ebp - 0x8]
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        mov     edx, dword ptr [eax + 0xac]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [edi + 0xd8]
        fsubr   dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x24], ecx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [ebp - 0x20], edx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x18], ecx
        fld     dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x14], edx
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [ebp - 0x20]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp - 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0xc], eax
        fld     dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [DAT_0077de90]
        fnstsw  ax
        test    ah, 0x41
        jz      done
        mov     edi, dword ptr [edi + 0x344]
        lea     eax, [edi + edi*1]
        mov     dword ptr [ebp - 0xc], eax
        fild    dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x10], edi
        fcomp   dword ptr [ebp - 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     done
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [DAT_00785aa8]
        fsubr   dword ptr [DAT_0076d064]
        fild    dword ptr [ebp - 0x10]
        fdiv    dword ptr [ebp - 0x8]
        fmulp   st(1), st(0)
        fmul    dword ptr [DAT_0077d050]
        fstp    dword ptr [ebp - 0x4]
        call    FUN_00415020
        fsub    dword ptr [DAT_0076d070]
        mov     esi, dword ptr [ebp + 0x8]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [esi]
        fstp    dword ptr [esi]
        call    FUN_00415020
        fsub    dword ptr [DAT_0076d070]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [esi + 0x4]
        fstp    dword ptr [esi + 0x4]
        call    FUN_00415020
        fsub    dword ptr [DAT_0076d070]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [esi + 0x8]
        fstp    dword ptr [esi + 0x8]
done:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
