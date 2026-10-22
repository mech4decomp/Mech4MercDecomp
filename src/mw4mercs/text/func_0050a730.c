/*
 * FUN_0050A730 (995 B) — GameData physics-parameter load/rebuild.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Loads a set of physics parameters via virtual calls, parses several
 * values, then rebuilds an array of 0x24-byte records (realloc + copy
 * loop) and re-sorts them.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dfbb0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_007224d0(void);
extern void __cdecl FUN_00722f70(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0050ce70(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004dfcd0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0050b260(void);
extern void __cdecl FUN_0040de20(void);

extern int DAT_007dc12c; /* 0x007DC12C */

__declspec(naked) void __cdecl FUN_0050a730(void)
{
    __asm {
        sub     esp, 0x64
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0x4]
        push    edi
        push    ecx
        push    eax
        push    eax
        call    FUN_004dfbb0
        mov     edx, dword ptr [DAT_007dc12c]
        add     esp, 0xc
        push    edx
        mov     dword ptr [ebp + 0x4], eax
        call    FUN_006f4950
        mov     esi, dword ptr [esp + 0x78]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ebx, [ebp + 0x1c]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [ebp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [ebp + 0x29]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        push    0x1
        push    0x0
        push    0x76c6b4
        lea     ecx, [esp + 0x30]
        call    FUN_0040dca0
        push    0x77792c
        lea     ecx, [esp + 0x28]
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        jz      l_50a873
        push    0x0
        lea     ecx, [esp + 0x7c]
        push    ecx
        push    0x77791c
        mov     ecx, edi
        mov     byte ptr [esp + 0x84], 0x0
        call    FUN_00411ec0
        mov     al, byte ptr [esp + 0x78]
        test    al, al
        push    0x0
        lea     edx, [ebp + 0x30]
        push    edx
        jz      l_50a843
        push    0x77797c
        mov     ecx, edi
        call    FUN_00411d60
        push    0x0
        lea     eax, [ebp + 0x34]
        push    eax
        push    0x77797c
        mov     ecx, edi
        call    FUN_00411d60
        push    0x0
        lea     ecx, [ebp + 0x38]
        push    ecx
        push    0x77796c
        jmp     l_50a86c
    l_50a843:
        push    0x777958
        mov     ecx, edi
        call    FUN_00411d60
        push    0x0
        lea     eax, [ebp + 0x34]
        push    eax
        push    0x777948
        mov     ecx, edi
        call    FUN_00411d60
        push    0x0
        lea     ecx, [ebp + 0x38]
        push    ecx
        push    0x777938
    l_50a86c:
        mov     ecx, edi
        call    FUN_00411d60
    l_50a873:
        push    0x0
        call    FUN_007224d0
        cmp     dword ptr [ebx], eax
        jc      l_50a88b
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [ebp + 0x18], 0x0
    l_50a88b:
        mov     eax, dword ptr [ebp + 0x18]
        test    eax, eax
        jnz     l_50a8c1
        push    0x0
        call    FUN_007224d0
        test    eax, eax
        jbe     l_50a8c1
        mov     ecx, dword ptr [ebx]
        lea     eax, [esp + 0x1c]
        xor     edx, edx
        push    eax
        mov     dword ptr [esp + 0x20], edx
        push    ecx
        mov     dword ptr [esp + 0x28], edx
        call    FUN_00722f70
        mov     edx, dword ptr [esp + 0x20]
        shr     edx, 0x10
        and     edx, 0x1f
        mov     dword ptr [ebp + 0x18], edx
    l_50a8c1:
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     esi, dword ptr [ebp]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x78], eax
        sub     ecx, esi
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, edi
        mov     dword ptr [esp + 0x18], edi
        jnc     l_50a9c2
        mov     ebx, dword ptr [ebp + 0x4]
        mov     ecx, ebx
        sub     ecx, esi
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 0x3
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        test    esi, esi
        mov     dword ptr [esp + 0x1c], edx
        jz      l_50a988
        test    edi, edi
        jz      l_50a940
        lea     edx, [edi + edi*8]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        mov     edi, dword ptr [esp + 0x14]
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], eax
        jmp     l_50a948
    l_50a940:
        mov     dword ptr [esp + 0x14], 0x0
    l_50a948:
        cmp     esi, ebx
        jz      l_50a96a
        mov     edi, dword ptr [esp + 0x14]
        sub     edi, esi
    l_50a952:
        lea     eax, [edi + esi]
        push    esi
        push    eax
        call    FUN_0050ce70
        add     esi, 0x24
        add     esp, 0x8
        cmp     esi, ebx
        jnz     l_50a952
        mov     edi, dword ptr [esp + 0x10]
    l_50a96a:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        mov     esi, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x14], eax
        jz      l_50a9a5
        push    eax
        call    FUN_004084e0
        mov     edi, dword ptr [esp + 0x14]
        add     esp, 0x4
        jmp     l_50a9a5
    l_50a988:
        test    edi, edi
        jz      l_50a9a3
        lea     ecx, [edi + edi*8]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        mov     edi, dword ptr [esp + 0x14]
        add     esp, 0x4
        mov     esi, eax
        jmp     l_50a9a5
    l_50a9a3:
        xor     esi, esi
    l_50a9a5:
        mov     eax, dword ptr [esp + 0x1c]
        lea     edx, [eax + eax*8]
        lea     eax, [esi + edx*4]
        mov     dword ptr [ebp + 0x4], eax
        mov     eax, dword ptr [esp + 0x18]
        lea     ecx, [eax + eax*8]
        lea     edx, [esi + ecx*4]
        mov     dword ptr [ebp], esi
        mov     dword ptr [ebp + 0x8], edx
    l_50a9c2:
        test    edi, edi
        mov     dword ptr [esp + 0x1c], 0x0
        jle     l_50aaf4
    l_50a9d2:
        mov     eax, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        jz      l_50aad8
        mov     ebx, dword ptr [ebp + 0x4]
        cmp     ebx, dword ptr [ebp + 0x8]
        jz      l_50aa09
        test    ebx, ebx
        jz      l_50a9fe
        mov     esi, dword ptr [esp + 0x78]
        mov     ecx, 0x9
        mov     edi, ebx
        rep movsd
        mov     edi, dword ptr [esp + 0x10]
    l_50a9fe:
        add     ebx, 0x24
        mov     dword ptr [ebp + 0x4], ebx
        jmp     l_50aad8
    l_50aa09:
        mov     esi, dword ptr [ebp]
        mov     ecx, ebx
        sub     ecx, esi
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 0x3
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, 0x1
        mov     dword ptr [esp + 0x18], 0x1
        mov     dword ptr [esp + 0x14], edx
        lea     eax, [esp + 0x18]
        jc      l_50aa3a
        lea     eax, [esp + 0x14]
    l_50aa3a:
        mov     edi, dword ptr [eax]
        add     edi, edx
        mov     dword ptr [esp + 0x18], edi
        jz      l_50aa59
        lea     edx, [edi + edi*8]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], eax
        jmp     l_50aa61
    l_50aa59:
        mov     dword ptr [esp + 0x14], 0x0
    l_50aa61:
        mov     eax, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    ebx
        push    esi
        call    FUN_004dfcd0
        add     esp, 0x10
        test    eax, eax
        jz      l_50aa8a
        mov     esi, dword ptr [esp + 0x78]
        mov     ecx, 0x9
        mov     edi, eax
        rep movsd
        mov     edi, dword ptr [esp + 0x18]
    l_50aa8a:
        add     eax, 0x24
        cmp     ebx, ebx
        mov     esi, eax
        jz      l_50aaad
        mov     edi, ebx
    l_50aa95:
        push    edi
        push    esi
        call    FUN_0050ce70
        add     edi, 0x24
        add     esp, 0x8
        add     esi, 0x24
        cmp     edi, ebx
        jnz     l_50aa95
        mov     edi, dword ptr [esp + 0x18]
    l_50aaad:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jz      l_50aac1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_50aac1:
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [edi + edi*8]
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [ebp], eax
        lea     eax, [eax + edx*4]
        mov     dword ptr [ebp + 0x4], esi
        mov     dword ptr [ebp + 0x8], eax
    l_50aad8:
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x78]
        inc     eax
        add     edx, 0x24
        cmp     eax, edi
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x78], edx
        jl      l_50a9d2
    l_50aaf4:
        call    FUN_006f49a0
        mov     ecx, ebp
        call    FUN_0050b260
        lea     ecx, [esp + 0x24]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x64
        ret     4
    }
}
