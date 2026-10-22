/*
 * func_005c5110 - FUN_005c5110
 * __thiscall. Complex game logic with float checks and multiple
 * early-return paths.
 */
__declspec(naked) void func_005c5110()
{
    

extern void __cdecl FUN_1005c4f68(void);
extern int DAT_007f2104;
extern void __cdecl FUN_10041520c(void);
extern int DAT_007f2460;
extern void __cdecl FUN_006f48f8(void);
extern void __cdecl FUN_00707e11(void);
extern void __cdecl FUN_005c52ce(void);
extern void __cdecl FUN_005dcc86(void);
extern void __cdecl FUN_006f4921(void);
extern int DAT_007878e0;
extern int DAT_0077a198;
extern void __cdecl FUN_006f481d(void);
extern void __cdecl FUN_00707d36(void);
extern int DAT_007f24cc;
extern void __cdecl FUN_100415fc7(void);
extern void __cdecl FUN_1005b34b8(void);
extern void __cdecl FUN_006f47bc(void);
extern void __cdecl FUN_00707cd5(void);
extern void __cdecl FUN_005c514c(void);
extern void __cdecl FUN_10040c40c(void);
extern void __cdecl FUN_1005b3465(void);
extern void __cdecl FUN_005dcb29(void);
extern void __cdecl FUN_006f47c4(void);
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, ecx
        call FUN_1005c4f68
        test    al, al
        jz      L52f6
        mov eax, dword ptr [DAT_007f2104]
        mov     esi, [edi + 0x170]
        mov     ecx, [esi + 4]
        push    eax
        call FUN_10041520c
        cmp     al, 1
        jnz     L51a1
        mov     eax, [esi + 0xe0]
        mov     eax, [eax + 0x14]
        cmp     eax, 1
        jz      L52f6
        cmp     eax, 2
        jz      L52f6
        cmp     eax, 0x13
        jz      L52f6
        mov ecx, dword ptr [DAT_007f2460]
        push    ecx
        call FUN_006f48f8
        push    0x0
        call FUN_00707e11
        mov     edx, [ebp + 8]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x0
        push    edx
        mov     ecx, edi
        call FUN_005c52ce
        push    eax
        mov     ecx, edi
        call FUN_005dcc86
        call FUN_006f4921
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    L51a1:
        mov     eax, [esi + 0x410]
        mov     edx, [esi + 0x40c]
        sub     eax, edx
        sar     eax, 2
        jz      L51ba
        mov     ecx, edx
        mov     eax, [ecx]
        jmp     L51bc
    L51ba:
        xor     eax, eax
    L51bc:
        mov     edx, [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        fld     dword ptr [eax + 0x63c]
        fcom dword ptr [DAT_007878e0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L51e2
        fstp    st(0)
        fld dword ptr [DAT_007878e0]
        jmp     L51e8
    L51e2:
        fmul dword ptr [DAT_0077a198]
    L51e8:
        mov     al, [ebp + 0xc]
        test    al, al
        jz      L52a0
        mov     eax, [esi + 0x410]
        mov     edx, [esi + 0x40c]
        sub     eax, edx
        sar     eax, 2
        jz      L52a0
        mov     ecx, edx
        cmp     dword ptr [ecx], 0x0
        jz      L52a0
        mov     edx, [esi + 0x410]
        sub     edx, ecx
        sar     edx, 2
        jz      L5228
        mov     eax, ecx
        mov     eax, [eax]
        jmp     L522a
    L5228:
        xor     eax, eax
    L522a:
        fld     dword ptr [eax + 0x198]
        fabs
        fcomp
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jnz     L52f6
        mov ecx, dword ptr [DAT_007f2460]
        push    ecx
        call FUN_006f481d
        push    0x0
        call FUN_00707d36
        fstp    qword ptr [esp + 8]
        mov ecx, dword ptr [DAT_007f24cc]
        call FUN_100415fc7
        test    eax, eax
        jz      L5276
        push    0x0
        push    0x2
        mov     ecx, eax
        call FUN_1005b34b8
        mov     esi, eax
        jmp     L5278
    L5276:
        xor     esi, esi
    L5278:
        mov     edx, [esp + 8]
        mov     eax, [esp + 0xc]
        mov     ecx, [ebp + 8]
        mov     [esi + 8], edx
        mov     edx, [ecx]
        sub     esp, 0xc
        mov     [esi + 0xc], eax
        mov     eax, esp
        mov     [eax], edx
        mov     edx, [ecx + 4]
        mov     ecx, [ecx + 8]
        mov     [eax + 4], edx
        mov     [eax + 8], ecx
        jmp     L52de
    L52a0:
        mov edx, dword ptr [DAT_007f2460]
        fstp    st(0)
        push    edx
        call FUN_006f47bc
        push    0x0
        call FUN_00707cd5
        fstp    qword ptr [esp + 8]
        mov     eax, [esp + 0xc]
        mov     ecx, [esp + 8]
        push    eax
        push    ecx
        push    0x0
        push    0x2
        mov     ecx, edi
        call FUN_005c514c
        mov     edx, [ebp + 8]
        sub     esp, 0xc
        mov     ecx, esp
        push    edx
        mov     esi, eax
        call FUN_10040c40c
    L52de:
        mov     ecx, esi
        call FUN_1005b3465
        push    esi
        mov     ecx, edi
        mov     byte ptr [esi + 0x24], 0x0
        call FUN_005dcb29
        call FUN_006f47c4
    L52f6:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    }


}
