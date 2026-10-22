/*
 * FUN_10015000 (712 B, __stdcall, 2 params) - Stats save/format routine
 * (variant of FUN_10013D00). Writes a series of string constants + values
 * through the __thiscall helper FUN_10001680 / FUN_10011e20, and
 * conditionally through the __cdecl FUN_100143f0. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_10011e20(void);
extern void __cdecl FUN_100143f0(void);

__declspec(naked) void __cdecl FUN_10015000(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    0x100262d8
        mov     ecx, esi
        mov     eax, dword ptr [edi + 0x34]
        mov     ebx, dword ptr [eax + 4]
        call    FUN_10001680
        push    0x1002674c
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10011e20
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
        mov     ecx, dword ptr [edi + 0x34]
        push    0x100262d8
        mov     ebx, dword ptr [ecx + 8]
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026744
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10011e20
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
        mov     edx, dword ptr [edi + 0x34]
        push    0x100262d8
        mov     ecx, esi
        mov     ebx, dword ptr [edx + 0xc]
        call    FUN_10001680
        push    0x1002673c
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10011e20
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
        mov     eax, dword ptr [edi + 0xe0]
        mov     ebp, 0x100274ec
        test    eax, eax
        jz      L_15119
        jbe     L_150df
        mov     ebx, dword ptr [edi + 0xd4]
        jmp     L_150e1
    L_150df:
        mov     ebx, ebp
    L_150e1:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026734
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
    L_15119:
        mov     eax, dword ptr [edi + 0x178]
        test    eax, eax
        jz      L_15167
        jbe     L_1512d
        mov     ebx, dword ptr [edi + 0x16c]
        jmp     L_1512f
    L_1512d:
        mov     ebx, ebp
    L_1512f:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x1002672c
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
    L_15167:
        mov     eax, dword ptr [edi + 0x210]
        test    eax, eax
        jz      L_151b5
        jbe     L_1517b
        mov     ebx, dword ptr [edi + 0x204]
        jmp     L_1517d
    L_1517b:
        mov     ebx, ebp
    L_1517d:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x100266b0
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
    L_151b5:
        mov     eax, dword ptr [edi + 0x2a8]
        test    eax, eax
        jz      L_151e4
        jbe     L_151cd
        mov     eax, dword ptr [edi + 0x29c]
        mov     dword ptr [esp + 0x14], eax
        jmp     L_151d1
    L_151cd:
        mov     dword ptr [esp + 0x14], ebp
    L_151d1:
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x100266a0
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
    L_151e4:
        mov     eax, dword ptr [edi + 0x340]
        test    eax, eax
        jz      L_15232
        jbe     L_151f8
        mov     ebx, dword ptr [edi + 0x334]
        jmp     L_151fa
    L_151f8:
        mov     ebx, ebp
    L_151fa:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026698
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
    L_15232:
        mov     eax, dword ptr [edi + 0x3d8]
        test    eax, eax
        jz      L_15261
        jbe     L_1524a
        mov     edx, dword ptr [edi + 0x3cc]
        mov     dword ptr [esp + 0x14], edx
        jmp     L_1524e
    L_1524a:
        mov     dword ptr [esp + 0x14], ebp
    L_1524e:
        lea     eax, [esp + 0x14]
        push    eax
        push    0x10026690
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
    L_15261:
        mov     eax, dword ptr [edi + 0x470]
        test    eax, eax
        jz      L_15290
        jbe     L_15279
        mov     ecx, dword ptr [edi + 0x464]
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_1527d
    L_15279:
        mov     dword ptr [esp + 0x14], ebp
    L_1527d:
        lea     edx, [esp + 0x14]
        push    edx
        push    0x10026724
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
    L_15290:
        mov     eax, dword ptr [edi + 0x508]
        test    eax, eax
        jz      L_152bf
        jbe     L_152a8
        mov     eax, dword ptr [edi + 0x4fc]
        mov     dword ptr [esp + 0x14], eax
        jmp     L_152ac
    L_152a8:
        mov     dword ptr [esp + 0x14], ebp
    L_152ac:
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x10026688
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
    L_152bf:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
