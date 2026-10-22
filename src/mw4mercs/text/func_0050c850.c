// Auto-generated: FUN_0050c850, 312 bytes, __fastcall (ECX = this)
// FUN_0050c850
// Builds a key binding display string at global buffer 0x007dd168.

char* FUN_00723A70(int);

__declspec(naked) void func_0050c850(void)
{
    

extern int DAT_007dd168;
extern int DAT_0076b420;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0C8h
        push    ebp
        mov     ebp, ecx
        cmp     dword ptr [ebp+34h], 2
        push    esi
        push    edi
        mov     byte ptr [esp+0Ch], 0
        mov byte ptr [DAT_007dd168], 0x0
        jnz     loc_50C8C6

        push    1000h
        call    FUN_00723A70
        or      ecx, -1
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 7DD168h
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb

        or      ecx, -1
        xor     eax, eax
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

loc_50C8C6:
        mov     al, [ebp+4Ch]
        test    al, al
        jz      loc_50C948

        mov     ecx, [ebp+90h]
        cmp     ecx, 0Ah
        jge     loc_50C8EF

        inc     ecx
        push    ecx
        lea     eax, [esp+10h]
        push    76B9A8h
        push    eax
        call dword ptr [DAT_0076b420]
        add     esp, 0Ch
        jmp     loc_50C94D

loc_50C8EF:
        test    al, al
        jz      loc_50C948

        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx+0Ch]
        mov     edx, [ebp+90h]
        xor     ecx, 85739531h
        mov     eax, [ecx]
        add     edx, 34Eh
        push    edx
        call    dword ptr [eax+34h]

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
        jmp     loc_50C94D

loc_50C948:
        mov     byte ptr [esp+0Ch], 0

loc_50C94D:
        or      ecx, -1
        xor     eax, eax
        lea     edi, [esp+0Ch]
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

        pop     edi
        pop     esi
        mov     eax, 7DD168h
        pop     ebp
        add     esp, 0C8h
        ret
    }


}
