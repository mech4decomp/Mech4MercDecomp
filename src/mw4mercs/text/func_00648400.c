/*
 * FUN_00648400 (341 B) — red-black tree node insertion with rebalancing
 * (8-byte-key variant). Allocates a new node (FUN_004084d0), copies the
 * key via FUN_00648620, links it in, and rebalances via rotations
 * (FUN_00410a60 / FUN_00410ab0). __thiscall, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00648620(void);
extern void __cdecl FUN_00410a60(void);
extern void __cdecl FUN_00410ab0(void);

__declspec(naked) void FUN_00648400(void)
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
        mov     eax, dword ptr [ebx]
        cmp     eax, dword ptr [edi+0x10]
        jl      L_ff8

        push    0x18
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp+0x10]
        add     esp, 4
        test    ecx, ecx
        jz      L_843f
        push    ebx
        call    FUN_00648620
    L_843f:
        cmp     edi, dword ptr [esi+0xc]
        mov     dword ptr [edi+0xc], ebp
        jnz     L_847c
        mov     dword ptr [esi+0xc], ebp
        jmp     L_847c

    L_ff8:
        push    0x18
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp+0x10]
        add     esp, 4
        test    ecx, ecx
        jz      L_8465
        push    ebx
        call    FUN_00648620
    L_8465:
        cmp     edi, esi
        mov     dword ptr [edi+8], ebp
        jnz     L_8474
        mov     dword ptr [esi+4], ebp
        mov     dword ptr [esi+0xc], ebp
        jmp     L_847c
    L_8474:
        cmp     edi, dword ptr [esi+8]
        jnz     L_847c
        mov     dword ptr [esi+8], ebp

    L_847c:
        xor     eax, eax
        mov     dword ptr [ebp+4], edi
        lea     edi, [esi+4]
        mov     dword ptr [ebp+8], eax
        mov     dword ptr [ebp+0xc], eax
        mov     byte ptr [ebp], al
        cmp     ebp, dword ptr [edi]
        mov     esi, ebp
        jz      L_8537

    L_8497:
        mov     eax, dword ptr [esi+4]
        cmp     byte ptr [eax], 0
        jnz     L_8537
        mov     edx, dword ptr [eax+4]
        mov     ecx, dword ptr [edx+8]
        cmp     eax, ecx
        jnz     L_84ef
        mov     ecx, dword ptr [edx+0xc]
        test    ecx, ecx
        jz      L_84c9
        cmp     byte ptr [ecx], 0
        jnz     L_84c9
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L_852f
    L_84c9:
        cmp     esi, dword ptr [eax+0xc]
        jnz     L_84da
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 8
    L_84da:
        mov     eax, dword ptr [esi+4]
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        call    FUN_00410ab0
        jmp     L_852c

    L_84ef:
        test    ecx, ecx
        jz      L_8508
        cmp     byte ptr [ecx], 0
        jnz     L_8508
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        mov     byte ptr [ecx], 1
        mov     byte ptr [eax], 0
        mov     esi, eax
        jmp     L_852f
    L_8508:
        cmp     esi, dword ptr [eax+8]
        jnz     L_8519
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 8
    L_8519:
        mov     eax, dword ptr [esi+4]
        mov     byte ptr [eax], 1
        mov     eax, dword ptr [eax+4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0
        call    FUN_00410a60
    L_852c:
        add     esp, 8
    L_852f:
        cmp     esi, dword ptr [edi]
        jnz     L_8497

    L_8537:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esp+0x10]
        mov     byte ptr [ecx], 1
        mov     ecx, dword ptr [eax+4]
        inc     ecx
        pop     edi
        mov     dword ptr [eax+4], ecx
        mov     eax, dword ptr [esp+0x14]
        pop     esi
        mov     dword ptr [eax], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
