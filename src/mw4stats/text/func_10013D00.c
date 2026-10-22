/*
 * FUN_10013D00 (717 B, __stdcall, 2 params) - Stats save/format routine.
 * Writes a series of string constants + values through the __thiscall
 * helper FUN_10001680 and FUN_10011e20, and conditionally through the
 * __cdecl FUN_100143f0. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_10011e20(void);
extern void __cdecl FUN_100143f0(void);

__declspec(naked) void __cdecl FUN_10013D00(void)
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
        push    0x100266d0
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
        push    0x100266c8
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
        mov     eax, dword ptr [edi + 0x17c]
        mov     ebp, 0x100274ec
        test    eax, eax
        jz      L_13ddb
        jbe     L_13da1
        mov     ebx, dword ptr [edi + 0x170]
        jmp     L_13da3
    L_13da1:
        mov     ebx, ebp
    L_13da3:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x100266c0
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
    L_13ddb:
        mov     eax, dword ptr [edi + 0xe4]
        test    eax, eax
        jz      L_13e29
        jbe     L_13def
        mov     ebx, dword ptr [edi + 0xd8]
        jmp     L_13df1
    L_13def:
        mov     ebx, ebp
    L_13df1:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x100266b8
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
    L_13e29:
        mov     eax, dword ptr [edi + 0x214]
        test    eax, eax
        jz      L_13e77
        jbe     L_13e3d
        mov     ebx, dword ptr [edi + 0x208]
        jmp     L_13e3f
    L_13e3d:
        mov     ebx, ebp
    L_13e3f:
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
    L_13e77:
        mov     al, byte ptr [edi + 0xd4]
        test    al, al
        jz      L_13eb0
        mov     eax, dword ptr [edi + 0x2ac]
        test    eax, eax
        jz      L_13eb0
        jbe     L_13e99
        mov     edx, dword ptr [edi + 0x2a0]
        mov     dword ptr [esp + 0x14], edx
        jmp     L_13e9d
    L_13e99:
        mov     dword ptr [esp + 0x14], ebp
    L_13e9d:
        lea     eax, [esp + 0x14]
        push    eax
        push    0x100266a8
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
    L_13eb0:
        mov     eax, dword ptr [edi + 0x344]
        test    eax, eax
        jz      L_13efe
        jbe     L_13ec4
        mov     ebx, dword ptr [edi + 0x338]
        jmp     L_13ec6
    L_13ec4:
        mov     ebx, ebp
    L_13ec6:
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
    L_13efe:
        mov     eax, dword ptr [edi + 0x3dc]
        test    eax, eax
        jz      L_13f2d
        jbe     L_13f16
        mov     ecx, dword ptr [edi + 0x3d0]
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_13f1a
    L_13f16:
        mov     dword ptr [esp + 0x14], ebp
    L_13f1a:
        lea     edx, [esp + 0x14]
        push    edx
        push    0x10026698
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
    L_13f2d:
        mov     eax, dword ptr [edi + 0x50c]
        test    eax, eax
        jz      L_13f5c
        jbe     L_13f45
        mov     eax, dword ptr [edi + 0x500]
        mov     dword ptr [esp + 0x14], eax
        jmp     L_13f49
    L_13f45:
        mov     dword ptr [esp + 0x14], ebp
    L_13f49:
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x10026690
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
    L_13f5c:
        mov     eax, dword ptr [edi + 0x5a4]
        test    eax, eax
        jz      L_13f8b
        jbe     L_13f74
        mov     edx, dword ptr [edi + 0x598]
        mov     dword ptr [esp + 0x14], edx
        jmp     L_13f78
    L_13f74:
        mov     dword ptr [esp + 0x14], ebp
    L_13f78:
        lea     eax, [esp + 0x14]
        push    eax
        push    0x10026688
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
    L_13f8b:
        mov     al, byte ptr [edi + 0xd4]
        test    al, al
        jz      L_13fc4
        mov     eax, dword ptr [edi + 0x474]
        test    eax, eax
        jz      L_13fc4
        jbe     L_13fad
        mov     ecx, dword ptr [edi + 0x468]
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_13fb1
    L_13fad:
        mov     dword ptr [esp + 0x14], ebp
    L_13fb1:
        lea     edx, [esp + 0x14]
        push    edx
        push    0x10026680
        push    esi
        call    FUN_100143f0
        add     esp, 0xc
    L_13fc4:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
