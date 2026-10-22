/*
 * FUN_1001a3f0 (712 B) - __stdcall (2 args, RET 0x8). Serializes a stats
 * object (EDI = param_1) into a log/stream (ESI = param_2) via a sequence
 * of FUN_10001680 (thiscall, ECX=ESI) string/field writes and FUN_10011e20
 * (thiscall) value writes, plus FUN_100143f0 (cdecl) 3-arg writes for the
 * pointer-valued fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_10011e20(void);
extern void __cdecl FUN_100143f0(void);

__declspec(naked) void __cdecl FUN_1001a3f0(void)
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
        jz      skip_e0
        jbe     L2_e0
        mov     ebx, dword ptr [edi + 0xd4]
        jmp     L3_e0
L2_e0:
        mov     ebx, ebp
L3_e0:
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
skip_e0:
        mov     eax, dword ptr [edi + 0x178]
        test    eax, eax
        jz      skip_178
        jbe     L2_178
        mov     ebx, dword ptr [edi + 0x16c]
        jmp     L3_178
L2_178:
        mov     ebx, ebp
L3_178:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x100266a8
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
skip_178:
        mov     eax, dword ptr [edi + 0x210]
        test    eax, eax
        jz      skip_210
        jbe     L2_210
        mov     ebx, dword ptr [edi + 0x204]
        jmp     L3_210
L2_210:
        mov     ebx, ebp
L3_210:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x100266a0
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
skip_210:
        mov     eax, dword ptr [edi + 0x2a8]
        test    eax, eax
        jz      skip_2a8
        jbe     L2_2a8
        mov     eax, dword ptr [edi + 0x29c]
        mov     dword ptr [esp + 0x14], eax
        jmp     L3_2a8
L2_2a8:
        mov     dword ptr [esp + 0x14], ebp
L3_2a8:
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x10026698
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
skip_2a8:
        mov     eax, dword ptr [edi + 0x340]
        test    eax, eax
        jz      skip_340
        jbe     L2_340
        mov     ebx, dword ptr [edi + 0x334]
        jmp     L3_340
L2_340:
        mov     ebx, ebp
L3_340:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026690
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
skip_340:
        mov     eax, dword ptr [edi + 0x3d8]
        test    eax, eax
        jz      skip_3d8
        jbe     L2_3d8
        mov     edx, dword ptr [edi + 0x3cc]
        mov     dword ptr [esp + 0x14], edx
        jmp     L3_3d8
L2_3d8:
        mov     dword ptr [esp + 0x14], ebp
L3_3d8:
        lea     eax, [esp + 0x14]
        push    eax
        push    0x10026724
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
skip_3d8:
        mov     eax, dword ptr [edi + 0x470]
        test    eax, eax
        jz      skip_470
        jbe     L2_470
        mov     ecx, dword ptr [edi + 0x464]
        mov     dword ptr [esp + 0x14], ecx
        jmp     L3_470
L2_470:
        mov     dword ptr [esp + 0x14], ebp
L3_470:
        lea     edx, [esp + 0x14]
        push    edx
        push    0x10026804
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
skip_470:
        mov     eax, dword ptr [edi + 0x508]
        test    eax, eax
        jz      skip_508
        jbe     L2_508
        mov     eax, dword ptr [edi + 0x4fc]
        mov     dword ptr [esp + 0x14], eax
        jmp     L3_508
L2_508:
        mov     dword ptr [esp + 0x14], ebp
L3_508:
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x10026688
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
skip_508:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x8
    }
}
