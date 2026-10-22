/*
 * func_005c4c30 - FUN_005c4c30
 * __fastcall. Complex game logic: iterates a list, performs float
 * computations, and calls many helpers.
 */
__declspec(naked) void func_005c4c30()
{
    

extern void __cdecl FUN_1005c4bc9(void);
extern int DAT_007f2460;
extern void __cdecl FUN_006f4936(void);
extern void __cdecl FUN_00707e41(void);
extern void __cdecl FUN_005c4ef4(void);
extern void __cdecl FUN_005dccbc(void);
extern void __cdecl FUN_006f4957(void);
extern void __cdecl FUN_10040c576(void);
extern void __cdecl FUN_1005804d3(void);
extern void __cdecl FUN_10041fce2(void);
extern void __cdecl FUN_1005808f7(void);
extern void __cdecl FUN_100580686(void);
extern void __cdecl FUN_005c71ea(void);
extern void __cdecl FUN_100419359(void);
extern void __cdecl FUN_100419344(void);
extern void __cdecl FUN_10040c8b9(void);
extern int DAT_007b220c;
extern void __cdecl FUN_10040d3ca(void);
extern void __cdecl FUN_10040c269(void);
extern void __cdecl FUN_100420f48(void);
extern void __cdecl FUN_10041fbb0(void);
extern void __cdecl FUN_10041fba5(void);
extern int DAT_007f268c;
extern void __cdecl FUN_100415046(void);
extern void __cdecl FUN_10041fb8b(void);
extern void __cdecl FUN_005fb8f8(void);
extern void __cdecl FUN_005c9139(void);
extern int DAT_0076c5b0;
extern void __cdecl FUN_005eaca9(void);
extern void __cdecl FUN_1005c45b7(void);
extern void __cdecl FUN_1005802a0(void);
extern void __cdecl FUN_100408205(void);
__asm {
sub     esp, 0xa0
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        call FUN_1005c4bc9
        test    al, al
        jz      L_f18
        mov eax, dword ptr [DAT_007f2460]
        push    eax
        call FUN_006f4936
        mov     edx, [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x1d4]
        test    al, al
        jz      L_c7e
        push    0x0
        call FUN_00707e41
        sub     esp, 8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call FUN_005c4ef4
        push    eax
        mov     ecx, esi
        call FUN_005dccbc
    L_c7e:
        call FUN_006f4957
        mov     eax, [esp + 0xb4]
        push    eax
        lea     ecx, [esp + 0x38]
        call FUN_10040c576
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x14], 0x0
        call FUN_1005804d3
        mov     eax, [esi + 0x170]
        mov     edx, [eax + 0x410]
        mov     edi, [eax + 0x40c]
        add     eax, 0x40c
        sub     edx, edi
        sar     edx, 2
        cmp     edx, 1
        jbe     L_d20
        lea     ecx, [esi + 0x1c8]
        mov     byte ptr [esp + 0x10], 0x1
        call FUN_10041fce2
        mov     ecx, [esp + 0x30]
        mov     [esp + 0x24], eax
        mov     eax, [esp + 0x2c]
        cmp     eax, ecx
        jz      L_d03
        lea     ecx, [esp + 0x24]
        push    ecx
        push    eax
        call FUN_1005808f7
        mov     eax, [esp + 0x34]
        add     esp, 8
        add     eax, 4
        mov     [esp + 0x2c], eax
        jmp     L_d14
    L_d03:
        push    0x1
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        lea     ecx, [esp + 0x34]
        call FUN_100580686
    L_d14:
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call FUN_005c71ea
    L_d20:
        mov     edi, [esi + 0x170]
        mov     ebx, [edi + 0x40c]
        cmp     ebx, [edi + 0x410]
        jz      L_f07
    L_d38:
        cmp     byte ptr [esp + 0x10], 0x1
        mov     ebp, [ebx]
        jnz     L_e62
        mov     ecx, [ebp + 0x17c]
        mov     edx, [ecx + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x50]
        call FUN_100419359
        mov     eax, [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x68]
        call FUN_100419344
        mov     ecx, [esp + 0x50]
        lea     edx, [esp + 0x64]
        push    edx
        lea     eax, [esp + 0x50]
        mov     [esp + 0x6c], ecx
        push    eax
        lea     ecx, [esp + 0x48]
        call FUN_10040c8b9
        fld     dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x44], 0x0
        fmul    dword ptr [esp + 0x40]
        fld     st(1)
        fmul    st, st(2)
        faddp   st(1), st
        fabs
        fstp    st(1)
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jz      L_ef1
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0x74]
        call FUN_10040d3ca
        lea     edx, [esp + 0x4c]
        push    edx
        lea     ecx, [esp + 0x80]
        call FUN_10040c269
        lea     eax, [esp + 0x70]
        push    eax
        lea     ecx, [esp + 0x8c]
        call FUN_100420f48
        lea     edi, [esi + 0x1c8]
        mov     ecx, edi
        mov     dword ptr [esp + 0x94], 0x447a0000
        call FUN_10041fbb0
        test    eax, eax
        jz      L_e62
        mov     ecx, edi
        call FUN_10041fba5
        mov ecx, dword ptr [DAT_007f268c]
        push    ecx
        mov     ecx, [eax + 4]
        call FUN_100415046
        cmp     al, 1
        jnz     L_e62
        mov     ecx, edi
        call FUN_10041fb8b
        test    eax, eax
        jz      L_e62
        lea     ecx, [esp + 0x98]
        push    ecx
        mov     ecx, eax
        call FUN_005fb8f8
        fld     dword ptr [eax]
        mov     edx, [eax + 4]
        mov     eax, [eax + 8]
        fstp    dword ptr [esp + 0x34]
        mov     ecx, edx
        mov     [esp + 0x5c], edx
        mov     edx, eax
        mov     [esp + 0x60], eax
        mov     [esp + 0x38], ecx
        mov     [esp + 0x3c], edx
    L_e62:
        lea     eax, [esp + 0xa4]
        push    eax
        mov     ecx, esi
        call FUN_005c9139
        mov     ecx, [eax]
        mov     [esp + 0x18], ecx
        mov     edx, [eax + 4]
        mov     [esp + 0x1c], edx
        mov     eax, [eax + 8]
        mov     [esp + 0x20], eax
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x1c]
        faddp   st(1), st
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_eb5
        lea     ecx, [esp + 0x18]
        push    ecx
        jmp     L_eba
    L_eb5:
        lea     edx, [esp + 0x34]
        push    edx
    L_eba:
        mov     ecx, ebp
        call FUN_005eaca9
        mov     eax, [esp + 0x10]
        push    eax
        push    ebp
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     ecx, esi
        call FUN_1005c45b7
        fstp    dword ptr [ebp + 0x1c8]
        mov     edi, [esi + 0x170]
        mov     eax, [edi + 0x410]
        add     ebx, 4
        cmp     ebx, eax
        jz      L_f07
        jmp     L_d38
    L_ef1:
        lea     ecx, [esp + 0x28]
        call FUN_1005802a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa0
        ret     4
    L_f07:
        mov     eax, [esp + 0x28]
        test    eax, eax
        jz      L_f18
        push    eax
        call FUN_100408205
        add     esp, 4
    L_f18:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa0
        ret     4
    }


}
