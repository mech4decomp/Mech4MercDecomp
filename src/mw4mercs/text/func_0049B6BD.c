/*
 * FUN_0049B6BD (979 B, code at 0x49B6C0) — __fastcall (ECX = this), RET 4
 * (1 stack dword param). Copy-assignment for a large MLR object: copies many
 * member fields/sub-objects from the source (ebx) into this (esi), then
 * reallocates/copies two dynamic arrays (0x170/0x174 and 0x178/0x17c) and
 * rebuilds the 0x180/0x188 sub-objects. Returns via FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7da920;   /* DAT_007da920 */
extern void __cdecl FUN_004939d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004adf10(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_0049d410(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0049d220(void);
extern void __cdecl FUN_0049d2e0(void);
extern void __cdecl FUN_0049d3f0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __fastcall FUN_0049B6BD(void)
{
    __asm {
        nop
        nop
        nop
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_004939d0
        mov     eax, dword ptr [g_7da920]
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [ebx + 0x64]
        lea     edx, [ebx + 0x68]
        mov     dword ptr [esi + 0x64], ecx
        push    edx
        lea     ecx, [esi + 0x68]
        call    FUN_004adf10
        lea     eax, [ebx + 0x80]
        push    eax
        lea     ecx, [esi + 0x80]
        call    FUN_004ae4c0
        lea     ecx, [ebx + 0x8c]
        push    ecx
        lea     ecx, [esi + 0x8c]
        call    FUN_004ae4c0
        mov     dl, byte ptr [ebx + 0x98]
        lea     eax, [ebx + 0xa0]
        push    eax
        lea     ecx, [esi + 0xa0]
        mov     byte ptr [esi + 0x98], dl
        call    FUN_004ae4c0
        lea     ecx, [ebx + 0xac]
        push    ecx
        lea     ecx, [esi + 0xac]
        call    FUN_004adf10
        mov     dl, byte ptr [ebx + 0xc0]
        mov     eax, dword ptr [ebx + 0xcc]
        lea     ecx, [ebx + 0xd0]
        push    ecx
        lea     ecx, [esi + 0xd0]
        mov     byte ptr [esi + 0xc0], dl
        mov     dword ptr [esi + 0xcc], eax
        call    FUN_0049d410
        mov     dl, byte ptr [ebx + 0xdc]
        lea     eax, [ebx + 0xe4]
        push    eax
        lea     ecx, [esi + 0xe4]
        mov     byte ptr [esi + 0xdc], dl
        call    FUN_004adf10
        lea     ecx, [ebx + 0xf8]
        push    ecx
        lea     ecx, [esi + 0xf8]
        call    FUN_0049d410
        mov     dl, byte ptr [ebx + 0x104]
        lea     eax, [ebx + 0x10c]
        push    eax
        lea     ecx, [esi + 0x10c]
        mov     byte ptr [esi + 0x104], dl
        call    FUN_004ae4c0
        lea     ecx, [ebx + 0x118]
        push    ecx
        lea     ecx, [esi + 0x118]
        call    FUN_004ae4c0
        mov     dl, byte ptr [ebx + 0x124]
        lea     eax, [ebx + 0x12c]
        push    eax
        lea     ecx, [esi + 0x12c]
        mov     byte ptr [esi + 0x124], dl
        call    FUN_004ae4c0
        lea     ecx, [ebx + 0x138]
        push    ecx
        lea     ecx, [esi + 0x138]
        call    FUN_0049d410
        mov     dl, byte ptr [ebx + 0x144]
        mov     eax, dword ptr [ebx + 0x150]
        lea     ecx, [ebx + 0x154]
        push    ecx
        mov     byte ptr [esi + 0x144], dl
        mov     dword ptr [esi + 0x150], eax
        lea     ecx, [esi + 0x154]
        call    FUN_0049d410
        mov     dl, byte ptr [ebx + 0x160]
        lea     eax, [ebx + 0x164]
        push    eax
        lea     ecx, [esi + 0x164]
        mov     byte ptr [esi + 0x160], dl
        call    FUN_0040c410
        lea     ecx, [ebx + 0x190]
        push    ecx
        lea     ecx, [esi + 0x190]
        call    FUN_00412740
        mov     edi, dword ptr [ebx + 0x174]
        cmp     edi, dword ptr [esi + 0x174]
        je      L_b8ef
        test    edi, edi
        jbe     L_b8d0
        lea     edx, [edi*4]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esi + 0x170]
        add     esp, 4
        test    edx, edx
        mov     ebp, eax
        mov     dword ptr [esp + 0x24], ebp
        je      L_b8c8
        mov     ecx, dword ptr [esi + 0x174]
        cmp     edi, ecx
        jae     L_b89a
        mov     ecx, edi
L_b89a:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      L_b8b9
        lea     eax, [ebp + ecx*4]
        sub     edx, ebp
        inc     ecx
L_b8a8:
        mov     ebp, dword ptr [edx + eax]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_b8a8
        mov     ebp, dword ptr [esp + 0x24]
L_b8b9:
        mov     eax, dword ptr [esi + 0x170]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_b8c8:
        mov     dword ptr [esi + 0x170], ebp
        jmp     L_b8e9
L_b8d0:
        mov     ecx, dword ptr [esi + 0x170]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x170], 0
L_b8e9:
        mov     dword ptr [esi + 0x174], edi
L_b8ef:
        cmp     edi, dword ptr [esi + 0x17c]
        je      L_b9c2
        test    edi, edi
        jbe     L_b9a3
        lea     edx, [edi + edi*2]
        shl     edx, 2
        push    edx
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 4
        test    ebp, ebp
        je      L_b92e
        push    0x454eb0
        push    edi
        push    0xc
        push    ebp
        call    FUN_00406c90
        mov     edx, ebp
        mov     dword ptr [esp + 0x24], edx
        jmp     L_b93a
L_b92e:
        mov     dword ptr [esp + 0x24], 0
        mov     edx, dword ptr [esp + 0x24]
L_b93a:
        mov     ecx, dword ptr [esi + 0x178]
        test    ecx, ecx
        je      L_b99b
        mov     eax, dword ptr [esi + 0x17c]
        cmp     edi, eax
        jae     L_b950
        mov     eax, edi
L_b950:
        mov     ebp, eax
        dec     eax
        test    ebp, ebp
        je      L_b988
        lea     ebp, [eax + eax*2]
        sub     ecx, edx
        inc     eax
        lea     ebp, [edx + ebp*4]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], eax
        jmp     L_b96e
L_b96a:
        mov     ecx, dword ptr [esp + 0x14]
L_b96e:
        add     ecx, ebp
        push    ecx
        mov     ecx, ebp
        call    FUN_0040ccd0
        mov     eax, dword ptr [esp + 0x10]
        dec     eax
        sub     ebp, 0xc
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        ja      L_b96a
L_b988:
        mov     eax, dword ptr [esi + 0x178]
        push    eax
        call    FUN_004084e0
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 4
L_b99b:
        mov     dword ptr [esi + 0x178], edx
        jmp     L_b9bc
L_b9a3:
        mov     eax, dword ptr [esi + 0x178]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x178], 0
L_b9bc:
        mov     dword ptr [esi + 0x17c], edi
L_b9c2:
        lea     ebp, [esi + 0x180]
        push    edi
        mov     ecx, ebp
        call    FUN_0049d220
        lea     ecx, [esi + 0x188]
        push    edi
        mov     dword ptr [esp + 0x28], ecx
        call    FUN_0049d2e0
        test    edi, edi
        jle     L_ba7c
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [esi + 0x178]
        mov     esi, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esi]
        mov     edx, dword ptr [ebp]
        mov     dword ptr [esp + 0x18], esi
        mov     esi, dword ptr [ebx + 0x188]
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, edi
        mov     edi, dword ptr [esp + 0x18]
        rep movsd
        mov     esi, dword ptr [ebx + 0x178]
        mov     edi, dword ptr [ebx + 0x180]
        mov     ebx, dword ptr [ebx + 0x170]
        sub     esi, eax
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     edi, edx
        mov     dword ptr [esp + 0x24], edx
        sub     ebx, eax
L_ba3d:
        lea     ecx, [esi + ebp]
        push    ecx
        mov     ecx, ebp
        call    FUN_0040c410
        mov     ecx, dword ptr [esp + 0x24]
        lea     edx, [edi + ecx]
        push    edx
        call    FUN_0049d3f0
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebx + ecx]
        inc     word ptr [eax + 0x10]
        mov     dword ptr [ecx], eax
        add     dword ptr [esp + 0x24], 0x10
        mov     eax, dword ptr [esp + 0x14]
        add     ecx, 4
        add     ebp, 0xc
        dec     eax
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], eax
        jne     L_ba3d
L_ba7c:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
