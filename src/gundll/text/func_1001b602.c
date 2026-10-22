/*
 * FUN_1001b602 (246 B) — __stdcall, RET 0x4.
 * Linked-list node walker with callback dispatch (this in EDI).
 */

extern void FUN_1000c4c0(void);
extern void FUN_10001d60(void);
extern unsigned int g_10055050;

__declspec(naked) void __stdcall FUN_1001b602(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    eax
        call    dword ptr [edi + 0xC]
        and     ax, word ptr [edi + 0x2]
        mov     ecx, dword ptr [edi + 0x4]
        xor     ebp, ebp
        mov     bp, ax
        shl     ebp, 0x4
        mov     esi, dword ptr [ebp + ecx]
        add     ebp, ecx
        cmp     esi, ebp
        mov     dword ptr [esp + 0x10], ebp
        jz      loc_1001b6d2
        __emit 0x8D /* __emit: 6-byte alignment NOP lea ebx,[ebx]; MSVC6 collapses to 2-byte 8D 1B */
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    loc_1001b630:
        mov     eax, dword ptr [esi + 0xC]
        test    eax, eax
        mov     ebx, dword ptr [esi]
        jns     loc_1001b660
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [eax], ebx
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [ebx + 0x4], ecx
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     edx, dword ptr [g_10055050]
        push    esi
        push    edx
        call    FUN_1000c4c0
        jmp     loc_1001b678
    loc_1001b660:
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esi + 0x8]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x1C], eax
        call    dword ptr [edi + 0x8]
        test    al, al
        jnz     loc_1001b68d
        mov     ebp, dword ptr [esp + 0x10]
    loc_1001b678:
        cmp     ebx, ebp
        mov     esi, ebx
        jnz     loc_1001b630
        pop     esi
        pop     ebp
        pop     ebx
        mov     eax, 0xC1120007
        pop     edi
        add     esp, 0xC
        ret     0x4
    loc_1001b68d:
        mov     eax, dword ptr [edi + 0x28]
        xor     ebp, ebp
        cmp     eax, ebp
        jnz     loc_1001b6b5
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [edx], ebx
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi], ebp
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        jmp     loc_1001b6c7
    loc_1001b6b5:
        mov     eax, dword ptr [esi + 0xC]
        test    eax, eax
        js      loc_1001b6ca
        or      eax, 0x80000000
        mov     dword ptr [esi + 0xC], eax
        mov     dword ptr [esi + 0x8], ebp
    loc_1001b6c7:
        dec     dword ptr [edi + 0x24]
    loc_1001b6ca:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jnz     loc_1001b6e1
    loc_1001b6d2:
        pop     esi
        pop     ebp
        pop     ebx
        mov     eax, 0xC1120007
        pop     edi
        add     esp, 0xC
        ret     0x4
    loc_1001b6e1:
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esp + 0x1C]
        add     esp, 0x4
        pop     esi
        pop     ebp
        pop     ebx
        pop     edi
        add     esp, 0xC
        ret     0x4
    }
}
