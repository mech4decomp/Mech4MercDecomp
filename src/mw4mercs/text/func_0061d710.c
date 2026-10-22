/*
 * FUN_0061D710 (637 B) — Global cleanup/shutdown routine.
 *
 * If the global flag at 0x7f2996 is set, tears down a series of
 * global objects (freeing lists, calling destructors) and clears
 * the flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00699d40(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0064ab30(void);
extern void __cdecl FUN_0064aec0(void);
extern void __cdecl FUN_0061ebb0(void);
extern void __cdecl FUN_0061ee80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_0061eae0(void);
extern void __cdecl FUN_0061fc60(void);
extern void __cdecl FUN_0061fb80(void);
extern void __cdecl FUN_0061db10(void);
extern void __cdecl FUN_0061d990(void);
extern void __cdecl FUN_0061da20(void);
extern void __cdecl FUN_0064a840(void);

extern unsigned char g_7f2996;
extern unsigned char g_7f2995;
extern int g_7f29a0;
extern int g_80da7c;
extern int g_805938;
extern int g_80593c;
extern int g_805910;
extern int g_805928;
extern int g_7f2ba8;
extern int g_8058b4;
extern int g_8058b8;
extern int g_8058bc;

__declspec(naked) void FUN_0061d710(void)
{
    __asm {
        mov     al, byte ptr [g_7f2996]
        sub     esp, 0x8
        test    al, al
        jz      L_989
        push    esi
        mov     esi, dword ptr [g_7f29a0]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        jz      L_744
        mov     ecx, esi
        call    FUN_00699d40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [g_7f29a0], edi
L_744:
        call    FUN_0064ab30
        call    FUN_0064aec0
        mov     eax, dword ptr [g_80da7c]
        mov     esi, dword ptr [eax]
        cmp     esi, dword ptr [eax + 0x4]
        jnc     L_774
L_75a:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [g_80da7c]
        mov     ecx, dword ptr [eax + 0x4]
        add     esi, 0x4
        add     esp, 0x4
        cmp     esi, ecx
        jc      L_75a
L_774:
        mov     esi, eax
        cmp     esi, edi
        jz      L_790
        mov     ecx, dword ptr [esi]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, esi
        call    FUN_0061ebb0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_790:
        mov     eax, dword ptr [g_805938]
        cmp     eax, edi
        push    ebx
        push    ebp
        jz      L_7fa
        mov     ecx, dword ptr [g_8058b8]
        mov     esi, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ecx + 0x14]
        lea     ebx, [ecx + 0x10]
        add     ecx, 0x14
        cmp     esi, edx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_7ee
        lea     ebp, [esi + 0x4]
L_7bc:
        cmp     dword ptr [esi], eax
        jnz     L_7e4
        mov     edi, dword ptr [ebx + 0x4]
        cmp     ebp, edi
        jz      L_7d6
        push    esi
        push    edi
        push    ebp
        call    FUN_0061ee80
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0xc
L_7d6:
        mov     eax, dword ptr [esp + 0x14]
        add     edi, -0x4
        mov     dword ptr [ebx + 0x4], edi
        xor     edi, edi
        jmp     L_7ea
L_7e4:
        add     esi, 0x4
        add     ebp, 0x4
L_7ea:
        cmp     esi, dword ptr [ecx]
        jnz     L_7bc
L_7ee:
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_805938], edi
L_7fa:
        mov     eax, dword ptr [g_80593c]
        cmp     eax, edi
        jz      L_862
        mov     ecx, dword ptr [g_8058b8]
        mov     esi, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ecx + 0x14]
        lea     ebx, [ecx + 0x10]
        add     ecx, 0x14
        cmp     esi, edx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_856
        lea     ebp, [esi + 0x4]
L_824:
        cmp     dword ptr [esi], eax
        jnz     L_84c
        mov     edi, dword ptr [ebx + 0x4]
        cmp     ebp, edi
        jz      L_83e
        push    esi
        push    edi
        push    ebp
        call    FUN_0061ee80
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0xc
L_83e:
        mov     eax, dword ptr [esp + 0x10]
        add     edi, -0x4
        mov     dword ptr [ebx + 0x4], edi
        xor     edi, edi
        jmp     L_852
L_84c:
        add     esi, 0x4
        add     ebp, 0x4
L_852:
        cmp     esi, dword ptr [ecx]
        jnz     L_824
L_856:
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_80593c], edi
L_862:
        mov     esi, dword ptr [g_805910]
        cmp     esi, edi
        jz      L_8a4
        mov     ebp, dword ptr [g_8058bc]
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x14]
        lea     ebx, [ebp + 0x10]
        add     ebp, 0x14
        cmp     eax, ecx
        jz      L_898
L_882:
        cmp     dword ptr [eax], esi
        jnz     L_890
        push    eax
        mov     ecx, ebx
        call    FUN_0061eae0
        jmp     L_893
L_890:
        add     eax, 0x4
L_893:
        cmp     eax, dword ptr [ebp]
        jnz     L_882
L_898:
        push    esi
        call    FUN_006f4230
        mov     dword ptr [g_805910], edi
L_8a4:
        mov     ebp, dword ptr [g_805928]
        cmp     ebp, edi
        jz      L_8e5
        mov     ebx, dword ptr [g_8058b8]
        mov     eax, dword ptr [ebx + 0x10]
        mov     ecx, dword ptr [ebx + 0x14]
        lea     esi, [ebx + 0x10]
        add     ebx, 0x14
        cmp     eax, ecx
        jz      L_8d9
L_8c4:
        cmp     dword ptr [eax], ebp
        jnz     L_8d2
        push    eax
        mov     ecx, esi
        call    FUN_0061eae0
        jmp     L_8d5
L_8d2:
        add     eax, 0x4
L_8d5:
        cmp     eax, dword ptr [ebx]
        jnz     L_8c4
L_8d9:
        push    ebp
        call    FUN_006f4230
        mov     dword ptr [g_805928], edi
L_8e5:
        mov     esi, dword ptr [g_7f2ba8]
        cmp     esi, edi
        pop     ebp
        pop     ebx
        jz      L_907
        mov     ecx, esi
        call    FUN_0061fc60
        push    esi
        call    FUN_0061fb80
        add     esp, 0x4
        mov     dword ptr [g_7f2ba8], edi
L_907:
        mov     esi, dword ptr [g_8058b4]
        cmp     esi, edi
        jz      L_934
        mov     ecx, esi
        mov     dword ptr [esi], 0x78c804
        call    FUN_0061db10
        mov     ecx, esi
        call    FUN_0061d990
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [g_8058b4], edi
L_934:
        mov     esi, dword ptr [g_8058b8]
        cmp     esi, edi
        jz      L_954
        mov     ecx, esi
        call    FUN_0061da20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [g_8058b8], edi
L_954:
        mov     esi, dword ptr [g_8058bc]
        cmp     esi, edi
        jz      L_974
        mov     ecx, esi
        call    FUN_0061da20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [g_8058bc], edi
L_974:
        call    FUN_0064a840
        pop     edi
        mov     byte ptr [g_7f2995], 0
        mov     byte ptr [g_7f2996], 0
        pop     esi
L_989:
        add     esp, 0x8
        ret
    }
}
