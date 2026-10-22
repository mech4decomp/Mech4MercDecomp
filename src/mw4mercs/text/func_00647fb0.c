/*
 * FUN_00647fb0 (334 B) — red-black tree node insertion with rebalancing
 * (integer-key variant). Allocates a new node (FUN_004084d0), copies the
 * int key, links it in, and rebalances via rotations (FUN_00410a60 /
 * FUN_00410ab0). __thiscall, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00410a60(void);
extern void __cdecl FUN_00410ab0(void);

__declspec(naked) void FUN_00647fb0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp+0x18]
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [esp+0x20]
        cmp     edi, esi
        mov     dword ptr [esp+0x10], ecx
        jz      L_ff8

        mov     eax, dword ptr [esp+0x1c]
        test    eax, eax
        jnz     L_ff8
        mov     ebp, dword ptr [ebx]
        cmp     ebp, dword ptr [edi+0x10]
        jl      L_ff8

        push    0x14
        call    FUN_004084d0
        lea     ecx, [eax+0x10]
        add     esp, 4
        test    ecx, ecx
        jz      L_fe9
        mov     dword ptr [ecx], ebp
    L_fe9:
        cmp     edi, dword ptr [esi+0xc]
        mov     ebx, eax
        mov     dword ptr [edi+0xc], eax
        jnz     L_8026
        mov     dword ptr [esi+0xc], eax
        jmp     L_8026

    L_ff8:
        push    0x14
        call    FUN_004084d0
        lea     ecx, [eax+0x10]
        add     esp, 4
        test    ecx, ecx
        jz      L_800d
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ecx], edx
    L_800d:
        cmp     edi, esi
        mov     ebx, eax
        mov     dword ptr [edi+8], eax
        jnz     L_801e
        mov     dword ptr [esi+4], eax
        mov     dword ptr [esi+0xc], eax
        jmp     L_8026
    L_801e:
        cmp     edi, dword ptr [esi+8]
        jnz     L_8026
        mov     dword ptr [esi+8], eax

    L_8026:
        xor     eax, eax
        mov     dword ptr [ebx+4], edi
        lea     edi, [esi+4]
        mov     dword ptr [ebx+8], eax
        mov     dword ptr [ebx+0xc], eax
        mov     byte ptr [ebx], al
        cmp     ebx, dword ptr [edi]
        mov     esi, ebx
        jz      L_80e0

    L_8040:
        mov     eax, dword ptr [esi+4]
        cmp     byte ptr [eax], 0
        jnz     L_80e0
        mov     edx, dword ptr [eax+4]
        mov     ecx, dword ptr [edx+8]
        cmp     eax, ecx
        jnz     L_8098
        mov     ecx, dword ptr [edx+0xc]
        test    ecx, ecx
        jz      L_8072
        cmp     byte ptr [ecx], 0
        jnz     L_8072
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L_80d8
    L_8072:
        cmp     esi, dword ptr [eax+0xc]
        jnz     L_8083
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 8
    L_8083:
        mov     eax, dword ptr [esi+4]
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        call    FUN_00410ab0
        jmp     L_80d5

    L_8098:
        test    ecx, ecx
        jz      L_80b1
        cmp     byte ptr [ecx], 0
        jnz     L_80b1
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L_80d8
    L_80b1:
        cmp     esi, dword ptr [eax+8]
        jnz     L_80c2
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 8
    L_80c2:
        mov     eax, dword ptr [esi+4]
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        call    FUN_00410a60
    L_80d5:
        add     esp, 8
    L_80d8:
        cmp     esi, dword ptr [edi]
        jnz     L_8040

    L_80e0:
        mov     eax, dword ptr [edi]
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [eax+4]
        pop     edi
        inc     ecx
        pop     esi
        mov     dword ptr [eax+4], ecx
        mov     eax, dword ptr [esp+0x10]
        pop     ebp
        mov     dword ptr [eax], ebx
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
