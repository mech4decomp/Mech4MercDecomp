/*
 * FUN_0040bd60 (773 B) — __fastcall engine/loader teardown/rebuild routine.
 * Walks two linked lists (param_1+0x14, param_1+0x1c), allocates 0x14-byte
 * nodes via FUN_004084d0/FUN_0040bbc0, and rebuilds the lists via the
 * FUN_00417xxx list helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040bbc0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00417aa0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_00417b00(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00415040(void);

__declspec(naked) void FUN_0040bd60(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        lea     ebx, [ecx+0x1c]
        push    edi
        xor     edi, edi
        lea     ebp, [ecx+0x14]
        mov     dword ptr [esp+0x10], ebx
    L_0040bd73:
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_0040bd8d
        push    edi
        mov     ecx, eax
        call    FUN_0040bbc0
        mov     esi, eax
        jmp     L_0040bd8f
    L_0040bd8d:
        xor     esi, esi
    L_0040bd8f:
        push    esi
        mov     ecx, ebp
        call    FUN_004179b0
        push    esi
        mov     ecx, ebx
        call    FUN_004179b0
        inc     edi
        cmp     edi, 0x32
        jb      L_0040bd73
        mov     eax, dword ptr [ebp]
        mov     ecx, dword ptr [ebx]
    L_0040bdaa:
        test    eax, eax
        jz      L_0040bdbb
        cmp     dword ptr [eax], 0
        jz      L_0040bdbb
        mov     eax, dword ptr [eax+4]
        mov     ecx, dword ptr [ecx+4]
        jmp     L_0040bdaa
    L_0040bdbb:
        mov     eax, dword ptr [ebp+4]
        mov     ecx, dword ptr [ebx+4]
    L_0040bdc1:
        test    eax, eax
        jz      L_0040bdd2
        cmp     dword ptr [eax], 0
        jz      L_0040bdd2
        mov     eax, dword ptr [eax+8]
        mov     ecx, dword ptr [ecx+8]
        jmp     L_0040bdc1
    L_0040bdd2:
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ebp]
        mov     edi, 0x76d038
        mov     dword ptr [esp+0x28], ecx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x18], ebp
        mov     dword ptr [esp+0x1c], eax
        mov     dword ptr [esp+0x14], edi
        mov     dword ptr [esp+0x24], ebx
        mov     dword ptr [esp+0x20], edi
        call    FUN_0040c0e0
        test    eax, eax
        jz      L_0040be17
    L_0040be01:
        lea     ecx, [esp+0x20]
        call    FUN_0040c0e0
        lea     ecx, [esp+0x14]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L_0040be01
    L_0040be17:
        mov     edx, dword ptr [esp+0x18]
        mov     eax, dword ptr [edx+4]
        mov     ecx, dword ptr [esp+0x24]
        mov     dword ptr [esp+0x1c], eax
        mov     edx, dword ptr [ecx+4]
    L_0040be29:
        mov     dword ptr [esp+0x28], edx
    L_0040be2d:
        test    eax, eax
        jz      L_0040be47
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax+8]
        mov     dword ptr [esp+0x1c], eax
        jz      L_0040be47
        test    edx, edx
        jz      L_0040be2d
        mov     edx, dword ptr [edx+8]
        jmp     L_0040be29
    L_0040be47:
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esp+0x24], ebp
        mov     dword ptr [esp+0x28], edx
        mov     dword ptr [esp+0x20], edi
        mov     dword ptr [esp+0x18], ebx
        mov     dword ptr [esp+0x1c], eax
        mov     dword ptr [esp+0x14], edi
        xor     esi, esi
    L_0040be66:
        push    esi
        lea     ecx, [esp+0x24]
        call    FUN_00417aa0
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00417aa0
        inc     esi
        cmp     esi, 0x32
        jb      L_0040be66
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ebp]
        mov     dword ptr [esp+0x18], ebx
        mov     dword ptr [esp+0x24], ebp
        mov     dword ptr [esp+0x28], eax
        mov     dword ptr [esp+0x20], edi
        mov     dword ptr [esp+0x1c], ecx
        mov     dword ptr [esp+0x14], edi
        xor     ebx, ebx
    L_0040be9f:
        test    eax, eax
        jz      L_0040bee4
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      L_0040bee4
        test    bl, 1
        jnz     L_0040beb9
        lea     ecx, [esp+0x20]
        call    FUN_00417ad0
        jmp     L_0040bec6
    L_0040beb9:
        mov     edx, dword ptr [eax+4]
        push    ebp
        mov     dword ptr [esp+0x2c], edx
        call    FUN_004154d0
    L_0040bec6:
        push    0
        lea     ecx, [esp+0x18]
        call    FUN_00417aa0
        test    eax, eax
        jz      L_0040bedd
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
    L_0040bedd:
        mov     eax, dword ptr [esp+0x28]
        inc     ebx
        jmp     L_0040be9f
    L_0040bee4:
        mov     eax, dword ptr [ebp]
        mov     dword ptr [esp+0x18], ebp
        mov     dword ptr [esp+0x1c], eax
        mov     dword ptr [esp+0x14], edi
        xor     esi, esi
    L_0040bef5:
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_0040bf0d
        push    esi
        mov     ecx, eax
        call    FUN_0040bbc0
        jmp     L_0040bf0f
    L_0040bf0d:
        xor     eax, eax
    L_0040bf0f:
        push    eax
        mov     ecx, ebp
        call    FUN_004179b0
        add     esi, 2
        cmp     esi, 0x32
        jb      L_0040bef5
        mov     edi, 1
    L_0040bf24:
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_0040bf3e
        push    edi
        mov     ecx, eax
        call    FUN_0040bbc0
        mov     ebx, eax
        jmp     L_0040bf40
    L_0040bf3e:
        xor     ebx, ebx
    L_0040bf40:
        mov     ecx, dword ptr [esp+0x18]
        mov     eax, dword ptr [ecx]
    L_0040bf46:
        test    eax, eax
        mov     dword ptr [esp+0x1c], eax
        jz      L_0040bf6c
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_0040bf6c
        cmp     edi, dword ptr [esi+0x10]
        jb      L_0040bf5e
        mov     eax, dword ptr [eax+4]
        jmp     L_0040bf46
    L_0040bf5e:
        push    ebx
        lea     ecx, [esp+0x18]
        call    FUN_00417b00
        test    esi, esi
        jnz     L_0040bf74
    L_0040bf6c:
        push    ebx
        mov     ecx, ebp
        call    FUN_004179b0
    L_0040bf74:
        add     edi, 2
        cmp     edi, 0x32
        jb      L_0040bf24
        mov     esi, 1
    L_0040bf81:
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00417aa0
        lea     edx, [esi-1]
        push    edx
        lea     ecx, [esp+0x18]
        call    FUN_00417aa0
        inc     esi
        cmp     esi, 0x32
        jb      L_0040bf81
    L_0040bf9e:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L_0040bfb3
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      L_0040bfb3
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        jmp     L_0040bf9e
    L_0040bfb3:
        xor     edi, edi
    L_0040bfb5:
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_0040bfcf
        push    edi
        mov     ecx, eax
        call    FUN_0040bbc0
        mov     esi, eax
        jmp     L_0040bfd1
    L_0040bfcf:
        xor     esi, esi
    L_0040bfd1:
        push    esi
        mov     ecx, ebp
        call    FUN_004179b0
        mov     ecx, dword ptr [esp+0x10]
        push    esi
        call    FUN_004179b0
        inc     edi
        cmp     edi, 0x32
        jb      L_0040bfb5
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp+0x28], ecx
        mov     ecx, 0x76d038
        mov     dword ptr [esp+0x20], ecx
        mov     dword ptr [esp+0x14], ecx
        mov     ecx, ebp
        mov     dword ptr [esp+0x24], ebp
        mov     dword ptr [esp+0x18], eax
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00417a40
        test    eax, eax
        jz      L_0040c05b
    L_0040c01a:
        push    eax
        call    FUN_00415040
        add     esp, 4
        mov     esi, eax
        push    esi
        lea     ecx, [esp+0x24]
        call    FUN_00417aa0
        lea     ecx, [esp+0x20]
        call    FUN_00417ad0
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00417aa0
        test    eax, eax
        jz      L_0040c04e
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
    L_0040c04e:
        mov     ecx, dword ptr [esp+0x24]
        call    FUN_00417a40
        test    eax, eax
        jnz     L_0040c01a
    L_0040c05b:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
