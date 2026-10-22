/*
 * func_005c53a0 - FUN_005c53a0
 * __thiscall. Complex game logic with float computations and
 * multiple early-return paths.
 */
__declspec(naked) void func_005c53a0()
{
    

extern void __cdecl FUN_10041c810(void);
extern int DAT_007b220c;
extern int DAT_0076c5b0;
extern int DAT_0077d094;
extern int DAT_007f2460;
extern void __cdecl FUN_006f488a(void);
extern void __cdecl FUN_00707da3(void);
extern int DAT_007f24cc;
extern void __cdecl FUN_100416035(void);
extern void __cdecl FUN_1005b3519(void);
extern void __cdecl FUN_005dcbdd(void);
extern void __cdecl FUN_006f4878(void);
extern int DAT_00787d24;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        mov     ebx, [ebp + 8]
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, [edi + 0x170]
        mov     ecx, [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        push    ebx
        lea     ecx, [ebp - 0x18]
        call FUN_10041c810
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        faddp   st(1), st
        fstp    dword ptr [ebp + 8]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fadd    dword ptr [ebp + 8]
        fstp    dword ptr [ebp - 4]
        mov     eax, [ebp - 4]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     [ebp - 8], eax
        fld     dword ptr [ebp - 8]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     L5410
        fld dword ptr [DAT_0076c5b0]
        jmp     L5447
    L5410:
        mov     edx, [ebp + 8]
        mov     [ebp + 8], edx
        mov     eax, [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     [ebp - 8], eax
        fld     dword ptr [ebp - 8]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     L543f
        fld dword ptr [DAT_0076c5b0]
        jmp     L5447
    L543f:
        fld     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x10]
        fpatan
    L5447:
        fabs
        fcomp dword ptr [DAT_0077d094]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54db
        mov     eax, [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x1c4]
        mov ecx, dword ptr [DAT_007f2460]
        push    ecx
        call FUN_006f488a
        push    0x0
        call FUN_00707da3
        fstp    qword ptr [ebp - 0xc]
        mov ecx, dword ptr [DAT_007f24cc]
        call FUN_100416035
        test    eax, eax
        jz      L5497
        mov     dword ptr [eax + 4], 0x2
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L5499
    L5497:
        xor     esi, esi
    L5499:
        mov     edx, [ebp - 0xc]
        mov     eax, [ebp - 8]
        mov     ecx, [ebx]
        mov     [esi + 8], edx
        mov     edx, [ebx + 4]
        sub     esp, 0xc
        mov     [esi + 0xc], eax
        mov     eax, esp
        mov     [eax], ecx
        mov     ecx, [ebx + 8]
        mov     [eax + 8], ecx
        mov     ecx, esi
        mov     [eax + 4], edx
        call FUN_1005b3519
        push    esi
        mov     ecx, edi
        mov     byte ptr [esi + 0x24], 0x0
        call FUN_005dcbdd
        call FUN_006f4878
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    L54db:
        fld     dword ptr [edi + 0x3d8]
        fcomp dword ptr [DAT_00787d24]
        fnstsw  ax
        test    ah, 0x41
        jnz     L54f8
        mov     edx, [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x194]
    L54f8:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }


}
