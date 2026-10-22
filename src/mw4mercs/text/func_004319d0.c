/*
 * FUN_004319d0 (336 B) — MLR __thiscall. Calls FUN_00435ed0, then either
 * copies a buffer via virtual calls (vtable +0xb0 / +0xac) with a manual
 * 12-byte-element copy loop, or takes a fallback path. Uses FUN_004084d0
 * (alloc) / FUN_004084e0 (free).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00435ed0(void);
extern void* __cdecl FUN_004084d0(void);
extern void  __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004319d0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x20]
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp+0x18], ebx
        call    FUN_00435ed0
        mov     eax, dword ptr [esi+0xc]
        xor     ebp, ebp
        cmp     eax, ebp
        jz      L_431aed
        cmp     dword ptr [eax+0x2c], ebp
        jbe     L_431aed
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp+0x24]
        push    ecx
        lea     edx, [esp+0x14]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax+0xb0]
        mov     esi, dword ptr [ebx+0xc]
        mov     eax, dword ptr [esp+0x24]
        mov     edi, dword ptr [esi+0x2c]
        cmp     eax, edi
        mov     dword ptr [esp+0x14], eax
        jz      L_431ab4
        cmp     eax, ebp
        jbe     L_431a9a
        mov     ebx, eax
        lea     eax, [eax+eax*2]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_431a47
        dec     ebx
        mov     dword ptr [esp+0x1c], ebx
        mov     ebp, eax
L_431a47:
        mov     ebx, dword ptr [esi+0x28]
        test    ebx, ebx
        jz      L_431a91
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, edi
        jc      L_431a58
        mov     edx, edi
L_431a58:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_431a88
        lea     ecx, [edx+edx*2]
        shl     ecx, 2
        lea     eax, [ecx+ebx]
        lea     ecx, [ecx+ebp+8]
        inc     edx
L_431a6d:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx-8], edi
        mov     edi, dword ptr [eax+4]
        mov     dword ptr [ecx-4], edi
        mov     edi, dword ptr [eax+8]
        mov     dword ptr [ecx], edi
        dec     edx
        sub     eax, 0xc
        sub     ecx, 0xc
        test    edx, edx
        ja      L_431a6d
L_431a88:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_431a91:
        mov     ebx, dword ptr [esp+0x18]
        mov     dword ptr [esi+0x28], ebp
        jmp     L_431aa9
L_431a9a:
        mov     edx, dword ptr [esi+0x28]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x28], ebp
L_431aa9:
        mov     eax, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x2c], eax
        mov     eax, dword ptr [esp+0x24]
L_431ab4:
        mov     edx, dword ptr [esi+0x28]
        mov     esi, dword ptr [esp+0x10]
        lea     ecx, [eax+eax*2]
        shl     ecx, 2
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebx]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp+0x24]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax+0xac]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     4
L_431aed:
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0xb0]
        mov     eax, dword ptr [esp+0x20]
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0xac]
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
