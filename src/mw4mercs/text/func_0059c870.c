/* FUN_0059c870 (0x0059C870, 562 bytes) */
/* Thiscall method - serializes data to stream */

extern void __cdecl FUN_00412a50(void);

__declspec(naked) void func_0059c870(void)
{
    
__asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, [esp + 0x10]
        mov     eax, [esi]
        push    edi
        mov     edi, ecx
        push    4
        lea     ecx, [edi + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x4c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ebx, [edi + 0x40]
        mov     ebp, 3
    L_loop1:
        mov     edx, [esi]
        push    4
        lea     eax, [ebx - 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    4
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     ebx, 4
        dec     ebp
        jne     L_loop1
        mov     ecx, [edi + 0x54]
        mov     eax, [edi + 0x58]
        mov     edx, [esi]
        sub     eax, ecx
        sar     eax, 2
        mov     [esp + 0x14], eax
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, [esp + 0x14]
        xor     ebx, ebx
        test    eax, eax
        jle     L_after1
        mov     ebp, [edi + 0x54]
    L_loop1b:
        mov     edx, [esi]
        lea     eax, [ebx*4]
        push    4
        add     eax, ebp
        push    eax
        mov     ecx, esi
        inc     ebx
        call    dword ptr [edx + 0x24]
        cmp     ebx, [esp + 0x14]
        jl      L_loop1b
    L_after1:
        mov     ecx, [edi + 0x60]
        mov     eax, [edi + 0x64]
        mov     edx, [esi]
        sub     eax, ecx
        sar     eax, 2
        mov     [esp + 0x14], eax
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, [esp + 0x14]
        xor     ebx, ebx
        test    eax, eax
        jle     L_after2
        mov     ebp, [edi + 0x60]
    L_loop2b:
        mov     edx, [esi]
        lea     eax, [ebx*4]
        push    4
        add     eax, ebp
        push    eax
        mov     ecx, esi
        inc     ebx
        call    dword ptr [edx + 0x24]
        cmp     ebx, [esp + 0x14]
        jl      L_loop2b
    L_after2:
        mov     ecx, [edi + 0x6c]
        mov     eax, [edi + 0x70]
        mov     edx, [esi]
        sub     eax, ecx
        sar     eax, 2
        mov     [esp + 0x14], eax
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, [esp + 0x14]
        xor     ebx, ebx
        test    eax, eax
        jle     L_after3
        mov     ebp, [edi + 0x6c]
    L_loop3b:
        mov     edx, [esi]
        lea     eax, [ebx*4]
        push    4
        add     eax, ebp
        push    eax
        mov     ecx, esi
        inc     ebx
        call    dword ptr [edx + 0x24]
        cmp     ebx, [esp + 0x14]
        jl      L_loop3b
    L_after3:
        mov     ecx, [edi + 0x78]
        mov     eax, [edi + 0x7c]
        mov     edx, [esi]
        sub     eax, ecx
        sar     eax, 2
        mov     [esp + 0x14], eax
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, [esp + 0x14]
        xor     ebx, ebx
        test    eax, eax
        jle     L_after4
        mov     ebp, [edi + 0x78]
    L_loop4b:
        mov     edx, [esi]
        lea     eax, [ebx*4]
        push    4
        add     eax, ebp
        push    eax
        mov     ecx, esi
        inc     ebx
        call    dword ptr [edx + 0x24]
        cmp     ebx, [esp + 0x14]
        jl      L_loop4b
    L_after4:
        mov     ecx, [edi + 0x84]
        mov     eax, [edi + 0x88]
        mov     edx, [esi]
        sub     eax, ecx
        sar     eax, 2
        mov     [esp + 0x14], eax
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, [esp + 0x14]
        xor     ebx, ebx
        test    eax, eax
        jle     L_after5
        mov     ebp, [edi + 0x84]
    L_loop5b:
        mov     edx, [esi]
        lea     eax, [ebx*4]
        push    4
        add     eax, ebp
        push    eax
        mov     ecx, esi
        inc     ebx
        call    dword ptr [edx + 0x24]
        cmp     ebx, [esp + 0x14]
        jl      L_loop5b
    L_after5:
        lea     eax, [edi + 0x14]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     edx, [esi]
        add     esp, 8
        push    4
        add     edi, 0x90
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }


}
