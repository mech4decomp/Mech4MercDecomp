/*
 * func_005c6900 - FUN_005c6900
 * __thiscall. Complex weapon/aiming computation with many FPU ops,
 * random-value helpers, and conditional vtable dispatch.
 */
__declspec(naked) void func_005c6900()
{
    

extern void __cdecl FUN_00637b15(void);
extern void __cdecl FUN_00637b1e(void);
extern void __cdecl FUN_00637af8(void);
extern void __cdecl FUN_00637b21(void);
extern int DAT_007f25c0;
extern void __cdecl FUN_1004151b9(void);
extern void __cdecl FUN_100415180(void);
extern void __cdecl FUN_10041516e(void);
extern void __cdecl FUN_10041fca3(void);
extern void __cdecl FUN_00637a4f(void);
extern void __cdecl FUN_00637928(void);
extern void __cdecl FUN_00637a38(void);
extern void __cdecl FUN_00637a81(void);
extern void __cdecl FUN_00637a1f(void);
extern void __cdecl FUN_00637a88(void);
extern void __cdecl FUN_00637a04(void);
extern void __cdecl FUN_00637a8d(void);
extern void __cdecl FUN_006379c2(void);
extern void __cdecl FUN_00637adb(void);
extern void __cdecl FUN_006379a7(void);
extern void __cdecl FUN_00637c10(void);
extern void __cdecl FUN_1005c0a8e(void);
extern void __cdecl FUN_00637970(void);
extern void __cdecl FUN_00637849(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_005dbb88(void);
extern int DAT_0076d5ec;
extern void __cdecl FUN_006378e6(void);
extern void __cdecl FUN_0063798f(void);
extern void __cdecl FUN_005dbb79(void);
extern void __cdecl FUN_005dbb87(void);
__asm {
sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     edi, [esp + 0x28]
        mov     eax, [edi + 0x2f4]
        test    eax, eax
        mov     ebx, ecx
        mov     byte ptr [esp + 0xc], 0
        jz      L6926
        cmp     dword ptr [eax + 0x14], 0x25
        jnz     L6926
        mov     byte ptr [esp + 0xc], 1
    L6926:
        fld     dword ptr [edi + 0x3b8]
        push    ecx
        fstp    dword ptr [esp]
        call FUN_00637b15
        mov     ecx, eax
        call FUN_00637b1e
        mov     esi, [esp + 0x24]
        fmul    dword ptr [esi]
        mov     eax, [esp + 0xc]
        push    eax
        fst     dword ptr [esp + 0x2c]
        fstp    dword ptr [esi]
        call FUN_00637af8
        mov     ecx, eax
        call FUN_00637b21
        fmul    dword ptr [esp + 0x28]
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, [edi + 4]
        fst     dword ptr [esp + 0x10]
        push    eax
        fstp    dword ptr [esi]
        mov     dword ptr [esp + 0x2c], 0
        mov     dword ptr [esp + 0x10], 0
        call FUN_1004151b9
        cmp     al, 1
        jnz     L699d
        fld     dword ptr [edi + 0x444]
        fabs
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [edi + 0x430]
        fabs
        fstp    dword ptr [esp + 0xc]
    L699d:
        mov eax, dword ptr [DAT_007f25c0]
        push    ebp
        mov     ebp, [ebx + 0x170]
        mov     ecx, [ebp + 4]
        push    eax
        mov     dword ptr [esp + 0x2c], 0
        call FUN_100415180
        cmp     al, 1
        jnz     L69dc
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, [ebp + 4]
        push    eax
        call FUN_10041516e
        neg     al
        sbb     eax, eax
        and     eax, ebp
        mov     ecx, [eax + 0x444]
        mov     [esp + 0x28], ecx
    L69dc:
        lea     ecx, [ebx + 0x1c8]
        call FUN_10041fca3
        cmp     edi, eax
        jnz     L6a08
        cmp     dword ptr [ebx + 0x5b8], 2
        jz      L6a08
        push    0x37
        call FUN_00637a4f
        mov     ecx, eax
        call FUN_00637928
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esi]
    L6a08:
        mov     ebp, [esp + 0x2c]
        push    ebp
        call FUN_00637a38
        mov     ecx, eax
        call FUN_00637a81
        fmul    dword ptr [esi]
        mov     edx, [esp + 0x28]
        push    edx
        fst     dword ptr [esp + 0x30]
        fstp    dword ptr [esi]
        call FUN_00637a1f
        mov     ecx, eax
        call FUN_00637a88
        fmul    dword ptr [esp + 0x2c]
        mov     eax, [esp + 0x34]
        push    eax
        fst     dword ptr [esp + 0x30]
        fstp    dword ptr [esi]
        call FUN_00637a04
        mov     ecx, eax
        call FUN_00637a8d
        fmul    dword ptr [esp + 0x2c]
        mov     eax, [esp + 0x30]
        mov     ecx, [eax + 0xc]
        mov     edx, [eax + 0x1c]
        fst     dword ptr [esp + 0x2c]
        mov     eax, [eax + 0x2c]
        fstp    dword ptr [esi]
        mov     [esp + 0x18], ecx
        mov     ecx, [edi + 0xd8]
        push    ebp
        add     ecx, 0x80
        mov     [esp + 0x20], edx
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        mov     [esp + 0x2c], eax
        call FUN_006379c2
        mov     ecx, eax
        call FUN_00637adb
        fmul    dword ptr [esp + 0x2c]
        mov     eax, [esp + 0x10]
        push    eax
        fst     dword ptr [esp + 0x30]
        fstp    dword ptr [esi]
        call FUN_006379a7
        mov     ecx, eax
        call FUN_00637c10
        fmul    dword ptr [esp + 0x2c]
        mov     al, byte ptr [ebx + 0x6a1]
        test    al, al
        fst     dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x2c], 0x447a0000
        fstp    dword ptr [esi]
        pop     ebp
        jnz     L6ad0
        call FUN_1005c0a8e
        fstp    dword ptr [esp + 0x28]
    L6ad0:
        push    0xf0
        call FUN_00637970
        mov     ecx, eax
        call FUN_00637849
        fcomp   dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 0x1
        jz      L6b3b
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x20]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x20]
        jz      L6b56
        mov     eax, [eax]
        xor     eax, 0x85739531
        mov     edx, [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        test    eax, eax
        jz      L6b56
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, [ecx + 0x20]
        xor     edx, 0x85739531
        cmp     byte ptr [edx + 0x169], 1
        jnz     L6b56
    L6b3b:
        mov     ecx, ebx
        call FUN_005dbb88
        mov     [esp + 0x28], eax
        fild    dword ptr [esp + 0x28]
        fmul dword ptr [DAT_0076d5ec]
        fmul    dword ptr [esp + 0x24]
        fstp    dword ptr [esi]
    L6b56:
        mov     eax, [esp + 0x30]
        push    0x21
        push    0x1d
        push    eax
        call FUN_006378e6
        mov     ecx, eax
        call FUN_0063798f
        cmp     eax, 0x1d
        jl      L6bb5
        cmp     eax, 0x1f
        jle     L6b9c
        cmp     eax, 0x21
        jnz     L6bb5
        mov     ecx, ebx
        call FUN_005dbb79
        mov     [esp + 0x30], eax
        fild    dword ptr [esp + 0x30]
        pop     edi
        fmul dword ptr [DAT_0076d5ec]
        fmul    dword ptr [esi]
        fstp    dword ptr [esi]
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     0x10
    L6b9c:
        mov     ecx, ebx
        call FUN_005dbb87
        mov     [esp + 0x30], eax
        fild    dword ptr [esp + 0x30]
        fmul dword ptr [DAT_0076d5ec]
        fmul    dword ptr [esi]
        fstp    dword ptr [esi]
    L6bb5:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     0x10
    }


}
