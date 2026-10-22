/*
 * FUN_1002d790 (248 B) — __stdcall, RET 0xC.
 * Buffer/stream advance with hash-list node scan and callback.
 */

extern void FUN_10038141(void);
extern void __stdcall FUN_1002d890(void);   /* __stdcall name matches the def; naked body bytes unchanged */

__declspec(naked) void __stdcall FUN_1002d790(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebp + 0x34]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x8]
        push    eax
        mov     eax, dword ptr [edi]
        push    0x10049c60
        push    0x10049e28
        push    0x100514b4
        push    eax
        push    ecx
        call    FUN_10038141
        add     esp, 0x18
        test    eax, eax
        jl      loc_1002d87a
        mov     ecx, dword ptr [edi + 0x4]
        push    ebx
        mov     ebx, dword ptr [edi]
        push    esi
        mov     esi, dword ptr [edi + 0x8]
        lea     edx, [eax + eax*0x1]
        add     ecx, eax
        sub     ebx, eax
        add     esi, edx
        mov     dword ptr [edi + 0x4], ecx
        mov     dword ptr [edi], ebx
        mov     dword ptr [edi + 0x8], esi
        mov     edx, dword ptr [ebp + 0x28]
        xor     eax, eax
        inc     edx
        cmp     word ptr [ebp], ax
        mov     dword ptr [ebp + 0x28], edx
        mov     dword ptr [esp + 0x1C], eax
        jbe     loc_1002d835
    loc_1002d7f2:
        mov     edx, dword ptr [ebp + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      loc_1002d82a
    loc_1002d806:
        mov     eax, dword ptr [esi + 0xC]
        test    eax, eax
        js      loc_1002d820
        mov     eax, dword ptr [esi + 0x8]
        push    edi
        push    esi
        push    eax
        call    FUN_1002d890
        test    al, al
        jz      loc_1002d871
        mov     ebp, dword ptr [esp + 0x14]
    loc_1002d820:
        mov     esi, dword ptr [esi]
        cmp     esi, ebx
        jnz     loc_1002d806
        mov     eax, dword ptr [esp + 0x1C]
    loc_1002d82a:
        inc     eax
        cmp     ax, word ptr [ebp]
        mov     dword ptr [esp + 0x1C], eax
        jc      loc_1002d7f2
    loc_1002d835:
        dec     dword ptr [ebp + 0x28]
    loc_1002d838:
        mov     eax, dword ptr [edi + 0x8]
        test    eax, eax
        pop     esi
        pop     ebx
        jz      loc_1002d87a
        mov     ecx, dword ptr [edi]
        push    0x100502b0
        push    ecx
        push    eax
        call    FUN_10038141
        add     esp, 0xC
        test    eax, eax
        jl      loc_1002d87a
        mov     edx, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edi]
        add     edx, eax
        sub     ecx, eax
        mov     dword ptr [edi + 0x4], edx
        lea     edx, [eax + eax*0x1]
        add     dword ptr [edi + 0x8], edx
        mov     dword ptr [edi], ecx
        pop     edi
        mov     al, 0x1
        pop     ebp
        ret     0xC
    loc_1002d871:
        mov     eax, dword ptr [esp + 0x14]
        dec     dword ptr [eax + 0x28]
        jmp     loc_1002d838
    loc_1002d87a:
        mov     dword ptr [edi + 0x8], 0x0
        pop     edi
        xor     al, al
        pop     ebp
        ret     0xC
    }
}
