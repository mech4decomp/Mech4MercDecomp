// Auto-generated: FUN_0050c5d0, 466 bytes, __fastcall (ECX = this)
// FUN_0050c5d0
// Builds a string representation of a key binding (modifiers + key name)
// at global buffer 0x007dd168.

char* FUN_00723A70(int);

__declspec(naked) void func_0050c5d0(void)
{
    

extern int DAT_007dd168;
__asm {
push    ebp
        mov     ebp, [ecx+88h]
        xor     edx, edx
        cmp     ebp, edx
        mov byte ptr [DAT_007dd168], dl
        jnz     loc_50C5EA

        mov     eax, 7DD168h
        pop     ebp
        ret

loc_50C5EA:
        mov     eax, [ecx+84h]
        push    ebx
        add     eax, -2
        push    esi
        xor     ebx, ebx
        cmp     eax, 7Eh
        push    edi
        ja      loc_50C63B

        xor     ecx, ecx
        mov     cl, byte ptr [eax+50C7C4h]
        jmp     dword ptr [ecx*4+50C7A4h]

        ; Jump table targets
        mov     ebx, 2
        jmp     loc_50C63B

        mov     ebx, 1
        jmp     loc_50C63B

        mov     ebx, 4
        jmp     loc_50C63B

        mov     ebx, 3
        jmp     loc_50C63B

        mov     ebx, 6
        jmp     loc_50C63B

        mov     ebx, 5
        jmp     loc_50C63B

        mov     ebx, 7

loc_50C63B:
        test    bl, 2
        mov byte ptr [DAT_007dd168], dl
        jz      loc_50C69D

        push    1000h
        call    FUN_00723A70
        or      ecx, -1
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 7DD168h
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

        or      ecx, -1
        mov     edi, 76CB8Ch
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 7DD168h
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

loc_50C69D:
        test    bl, 1
        jz      loc_50C701

        push    1100h
        call    FUN_00723A70
        or      ecx, -1
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 7DD168h
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

        or      ecx, -1
        mov     edi, 76CB8Ch
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 7DD168h
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

loc_50C701:
        test    bl, 4
        jz      loc_50C765

        push    1200h
        call    FUN_00723A70
        or      ecx, -1
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 7DD168h
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

        or      ecx, -1
        mov     edi, 76CB8Ch
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 7DD168h
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

loc_50C765:
        shl     ebp, 8
        push    ebp
        call    FUN_00723A70
        or      ecx, -1
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 7DD168h
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

        pop     edi
        pop     esi
        pop     ebx
        mov     eax, 7DD168h
        pop     ebp
        ret
    }




}
