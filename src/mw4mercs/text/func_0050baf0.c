// Auto-generated: FUN_0050baf0, 215 bytes, __thiscall
// FUN_0050baf0

extern int g_50bbc8;   // jump table 1 @ 0x50BBC8
extern int g_50bbe8;   // jump table 2 @ 0x50BBE8

__declspec(naked) void func_0050baf0(void)
{
    __asm {
        mov     eax, [esp+4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        or      esi, 0FFFFFFFFh
        or      edi, 0FFFFFFFFh
        or      ebx, 0FFFFFFFFh
        or      ebp, 0FFFFFFFFh
        cmp     eax, 7
        ja      loc_50BBB5

        jmp     dword ptr [eax*4 + g_50bbc8]

loc_50BB14:
        mov     eax, [esp+18h]
        cmp     eax, 3
        ja      loc_50BB8C

        jmp     dword ptr [eax*4 + g_50bbe8]

loc_50BB24:
        mov     esi, 206h
        mov     edi, 207h
        jmp     loc_50BB8C

loc_50BB30:
        mov     esi, 208h
        mov     edi, 209h
        jmp     loc_50BB8C

loc_50BB3C:
        mov     esi, 20Ch
        mov     edi, 20Dh
        jmp     loc_50BB8C

loc_50BB48:
        mov     esi, 20Ah
        mov     edi, 20Bh
        jmp     loc_50BB8C

loc_50BB54:
        mov     esi, 20Eh
        mov     edi, 20Fh
        mov     ebx, 210h
        mov     ebp, 211h
        jmp     loc_50BB8C

loc_50BB6A:
        mov     esi, 202h
        mov     edi, 203h
        jmp     loc_50BB8C

loc_50BB76:
        mov     esi, 204h
        mov     edi, 205h
        jmp     loc_50BB8C

loc_50BB82:
        mov     esi, 201h
        mov     edi, 200h

loc_50BB8C:
        mov     edx, [ecx]
        mov     ecx, [ecx+4]
        cmp     edx, ecx
        je      loc_50BBB5

loc_50BB95:
        cmp     dword ptr [edx+10h], 9
        jne     loc_50BBAE
        mov     eax, [edx+14h]
        cmp     eax, esi
        je      loc_50BBBE
        cmp     eax, edi
        je      loc_50BBBE
        cmp     eax, ebx
        je      loc_50BBBE
        cmp     eax, ebp
        je      loc_50BBBE

loc_50BBAE:
        add     edx, 24h
        cmp     edx, ecx
        jne     loc_50BB95

loc_50BBB5:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     8

loc_50BBBE:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     8
    }
}
