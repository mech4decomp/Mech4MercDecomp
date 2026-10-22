/*
 * FUN_004550C0 (982 B) — __fastcall (ECX = this), RET 0x2c (11 stack dwords).
 *
 * MLR object update/refresh: calls several virtual methods on this (ebx) and
 * on a source object (ebp = first stack param), reallocates/copies three
 * dynamic arrays (esi+0x10/0x14, esi+0x0/0x4, ebx+0x5c/0x60, edi+0x18/0x1c),
 * and finishes by copying two 6-dword vectors into this+0x2c and this+0x70
 * and calling FUN_004555e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_00458230(void);
extern void __cdecl FUN_004555e0(void);

__declspec(naked) void __fastcall FUN_004550C0(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x24]
        mov     eax, dword ptr [ebp]
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, ebp
        call    dword ptr [eax + 0x28]
        mov     esi, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esi + 0x14]
        cmp     eax, edi
        mov     dword ptr [esp + 0x18], eax
        je      L_51a3
        test    eax, eax
        jbe     L_5185
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [eax + eax*2]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_5125
        mov     ecx, dword ptr [esp + 0x14]
        dec     ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_5131
L_5125:
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
L_5131:
        mov     edx, dword ptr [esi + 0x10]
        test    edx, edx
        je      L_5180
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, edi
        jb      L_5142
        mov     eax, edi
L_5142:
        mov     esi, eax
        dec     eax
        test    esi, esi
        je      L_516d
        lea     esi, [eax + eax*2]
        mov     ebp, edx
        lea     esi, [ecx + esi*4]
        sub     ebp, ecx
        lea     edi, [eax + 1]
L_5156:
        lea     edx, [esi + ebp]
        push    edx
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     edi
        sub     esi, 0xc
        test    edi, edi
        ja      L_5156
        mov     ebp, dword ptr [esp + 0x2c]
L_516d:
        mov     esi, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 4
L_5180:
        mov     dword ptr [esi + 0x10], ecx
        jmp     L_5198
L_5185:
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x10], 0
L_5198:
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x14], ecx
        mov     eax, dword ptr [esp + 0x10]
L_51a3:
        mov     edx, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esp + 0x1c]
        lea     ecx, [eax + eax*2]
        shl     ecx, 2
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebx]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [ebp]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 0x8c]
        mov     esi, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esi + 4]
        cmp     eax, edi
        mov     dword ptr [esp + 0x18], eax
        je      L_525c
        test    eax, eax
        jbe     L_5240
        push    eax
        call    FUN_004084d0
        mov     ebp, dword ptr [esi]
        add     esp, 4
        test    ebp, ebp
        mov     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        je      L_5238
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, edi
        jb      L_5217
        mov     eax, edi
L_5217:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_522b
L_521e:
        mov     dl, byte ptr [eax + ebp]
        mov     byte ptr [eax + ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jne     L_521e
L_522b:
        push    ebp
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 4
L_5238:
        mov     ebp, dword ptr [esp + 0x2c]
        mov     dword ptr [esi], ecx
        jmp     L_5251
L_5240:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
L_5251:
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 4], ecx
        mov     eax, dword ptr [esp + 0x10]
L_525c:
        mov     edx, dword ptr [esi]
        mov     esi, dword ptr [esp + 0x20]
        lea     ecx, [eax + eax]
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebx]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0x88]
        mov     edx, dword ptr [ebp]
        mov     esi, dword ptr [ebx]
        push    1
        mov     ecx, ebp
        call    dword ptr [edx + 8]
        push    eax
        push    0
        mov     ecx, ebx
        call    dword ptr [esi + 0xc]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 8]
        mov     edi, dword ptr [ebx + 0x60]
        mov     esi, eax
        cmp     esi, edi
        mov     dword ptr [esp + 0x18], esi
        je      L_5346
        test    esi, esi
        jbe     L_5330
        mov     ecx, esi
        shl     ecx, 4
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_52d4
        lea     edx, [esi - 1]
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x14], eax
        jmp     L_52e0
L_52d4:
        mov     dword ptr [esp + 0x14], 0
        mov     eax, dword ptr [esp + 0x14]
L_52e0:
        mov     ecx, dword ptr [ebx + 0x5c]
        test    ecx, ecx
        je      L_532b
        cmp     esi, edi
        jae     L_52ed
        mov     edi, esi
L_52ed:
        mov     edx, edi
        dec     edi
        test    edx, edx
        je      L_531b
        mov     esi, edi
        shl     esi, 4
        mov     ebp, ecx
        add     esi, eax
        sub     ebp, eax
        inc     edi
L_5300:
        lea     eax, [esi + ebp]
        push    eax
        mov     ecx, esi
        call    FUN_00458230
        dec     edi
        sub     esi, 0x10
        test    edi, edi
        ja      L_5300
        mov     esi, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x2c]
L_531b:
        mov     eax, dword ptr [ebx + 0x5c]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 4
L_532b:
        mov     dword ptr [ebx + 0x5c], eax
        jmp     L_5343
L_5330:
        mov     ecx, dword ptr [ebx + 0x5c]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x5c], 0
L_5343:
        mov     dword ptr [ebx + 0x60], esi
L_5346:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x94]
        mov     eax, dword ptr [ebp]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, ebp
        call    dword ptr [eax + 0x30]
        mov     edi, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [edi + 0x1c]
        mov     dword ptr [esp + 0x18], eax
        je      L_5412
        test    eax, eax
        jbe     L_53f4
        mov     dword ptr [esp + 0x2c], eax
        shl     eax, 3
        push    eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_53a4
        mov     ecx, dword ptr [esp + 0x2c]
        push    0x423b70
        push    ecx
        push    8
        push    esi
        call    FUN_00406c90
        jmp     L_53a6
L_53a4:
        xor     esi, esi
L_53a6:
        mov     ecx, dword ptr [edi + 0x18]
        test    ecx, ecx
        mov     dword ptr [esp + 0x2c], esi
        je      L_53ef
        mov     eax, dword ptr [edi + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        cmp     edx, eax
        jb      L_53be
        mov     edx, eax
L_53be:
        mov     eax, edx
        dec     edx
        test    eax, eax
        je      L_53e3
        lea     eax, [esi + edx*8]
        sub     ecx, esi
        inc     edx
L_53cb:
        mov     esi, dword ptr [ecx + eax]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + eax + 4]
        mov     dword ptr [eax + 4], esi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_53cb
        mov     esi, dword ptr [esp + 0x2c]
L_53e3:
        mov     eax, dword ptr [edi + 0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_53ef:
        mov     dword ptr [edi + 0x18], esi
        jmp     L_5407
L_53f4:
        mov     ecx, dword ptr [edi + 0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x18], 0
L_5407:
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x1c], edx
        mov     eax, dword ptr [esp + 0x10]
L_5412:
        mov     edx, dword ptr [edi + 0x18]
        mov     esi, dword ptr [esp + 0x24]
        lea     ecx, [eax*8]
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebx]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0x2c]
        mov     edx, dword ptr [ebp]
        push    0
        mov     ecx, ebp
        call    dword ptr [edx + 0x18]
        push    0x42c80000
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x58]
        push    0x42a00000
        push    eax
        mov     eax, dword ptr [esp + 0x5c]
        lea     edi, [ebx + 0x2c]
        mov     ecx, 6
        rep movsd
        push    eax
        lea     edi, [ebx + 0x70]
        mov     ecx, 6
        lea     esi, [esp + 0x40]
        rep movsd
        mov     ecx, dword ptr [esp + 0x58]
        push    eax
        push    ecx
        mov     ecx, ebx
        mov     word ptr [ebx + 0x56], 0
        call    FUN_004555e0
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [ebx + 0x64], 1
        pop     ebx
        add     esp, 0x18
        ret     0x2c
    }
}
