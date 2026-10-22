/*
 * FUN_004108d0 (391 B) — red-black tree node insertion with rebalancing.
 * Allocates a new node (FUN_004084d0), copies the key (FUN_00411860), links
 * it in, and rebalances via rotations (FUN_00410a60 / FUN_00410ab0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00411860(void);
extern void __cdecl FUN_00410a60(void);
extern void __cdecl FUN_00410ab0(void);

__declspec(naked) void FUN_004108d0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp+0x18]
        push    ebp
        mov     ebp, dword ptr [esp+0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx]
        cmp     ebp, edi
        mov     dword ptr [esp+0x10], ecx
        jz      L_10949

        mov     eax, dword ptr [esp+0x1c]
        test    eax, eax
        jnz     L_10949
        mov     esi, dword ptr [ebp+0x10]
        mov     eax, dword ptr [ebx]
    L_108f4:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_10918
        test    cl, cl
        jz      L_10914
        mov     dl, byte ptr [eax+1]
        mov     cl, dl
        cmp     dl, byte ptr [esi+1]
        jnz     L_10918
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_108f4
    L_10914:
        xor     eax, eax
        jmp     L_1091d
    L_10918:
        sbb     eax, eax
        sbb     eax, -1
    L_1091d:
        test    eax, eax
        jl      L_10949

        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        lea     ecx, [esi+0x10]
        add     esp, 4
        test    ecx, ecx
        jz      L_1093a
        push    ebx
        call    FUN_00411860
    L_1093a:
        cmp     ebp, dword ptr [edi+0xc]
        mov     ebx, esi
        mov     dword ptr [ebp+0xc], esi
        jnz     L_1097b
        mov     dword ptr [edi+0xc], esi
        jmp     L_1097b

    L_10949:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        lea     ecx, [esi+0x10]
        add     esp, 4
        test    ecx, ecx
        jz      L_10962
        push    ebx
        call    FUN_00411860
    L_10962:
        cmp     ebp, edi
        mov     ebx, esi
        mov     dword ptr [ebp+8], esi
        jnz     L_10973
        mov     dword ptr [edi+4], esi
        mov     dword ptr [edi+0xc], esi
        jmp     L_1097b
    L_10973:
        cmp     ebp, dword ptr [edi+8]
        jnz     L_1097b
        mov     dword ptr [edi+8], esi

    L_1097b:
        mov     eax, dword ptr [edi+4]
        add     edi, 4
        mov     dword ptr [ebx+4], ebp
        xor     ebp, ebp
        cmp     ebx, eax
        mov     dword ptr [ebx+8], ebp
        mov     dword ptr [ebx+0xc], ebp
        mov     esi, ebx
        mov     byte ptr [ebx], 0
        jz      L_10a39

    L_10999:
        mov     eax, dword ptr [esi+4]
        cmp     byte ptr [eax], 0
        jnz     L_10a39
        mov     edx, dword ptr [eax+4]
        mov     ecx, dword ptr [edx+8]
        cmp     eax, ecx
        jnz     L_109f1
        mov     ecx, dword ptr [edx+0xc]
        cmp     ecx, ebp
        jz      L_109cb
        cmp     byte ptr [ecx], 0
        jnz     L_109cb
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L_10a31
    L_109cb:
        cmp     esi, dword ptr [eax+0xc]
        jnz     L_109dc
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 8
    L_109dc:
        mov     eax, dword ptr [esi+4]
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        call    FUN_00410ab0
        jmp     L_10a2e

    L_109f1:
        cmp     ecx, ebp
        jz      L_10a0a
        cmp     byte ptr [ecx], 0
        jnz     L_10a0a
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L_10a31
    L_10a0a:
        cmp     esi, dword ptr [eax+8]
        jnz     L_10a1b
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 8
    L_10a1b:
        mov     eax, dword ptr [esi+4]
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        call    FUN_00410a60
    L_10a2e:
        add     esp, 8
    L_10a31:
        cmp     esi, dword ptr [edi]
        jnz     L_10999

    L_10a39:
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
