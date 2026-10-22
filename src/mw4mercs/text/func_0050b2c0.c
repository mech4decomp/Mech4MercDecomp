// Auto-generated: FUN_0050b2c0, 479 bytes, __thiscall
// FUN_0050b2c0

void FUN_0050AC80(void);
void FUN_0050CB60(void);
void FUN_0050CB90(void);
void FUN_0050CCC0(void);
void FUN_0050B220(void);
void FUN_0050B8E0(void);
void FUN_0050CB80(void);

__declspec(naked) void func_0050b2c0(void)
{
    __asm {
        sub     esp, 18h
        push    esi
        mov     esi, ecx
        mov     eax, [esi+10h]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        mov     [esp+0Ch], esi
        jne     loc_50B2DA

        push    edi
        call    FUN_0050AC80

loc_50B2DA:
        push    ebx
        push    ebp
        lea     eax, [esp+18h]
        push    eax
        lea     ecx, [esp+17h]
        push    ecx
        lea     ecx, [esp+2Ch]
        mov     [esp+24h], edi
        mov     [esp+28h], edi
        mov     [esp+20h], edi
        call    FUN_0050CB60

        mov     ebp, [esi]
        mov     ebx, [esi+4]
        cmp     ebp, ebx
        mov     edi, [esp+20h]
        je      loc_50B36E

loc_50B308:
        mov     eax, [ebp+4]
        test    eax, eax
        jne     loc_50B31B

        cmp     edi, [esp+24h]
        je      loc_50B352
        test    edi, edi
        je      loc_50B349
        jmp     loc_50B33C

loc_50B31B:
        mov     eax, [ebp+10h]
        cmp     eax, 1
        je      loc_50B363
        cmp     eax, 8
        je      loc_50B363
        cmp     eax, 9
        je      loc_50B363
        cmp     eax, 2
        je      loc_50B363

        cmp     edi, [esp+24h]
        je      loc_50B352
        test    edi, edi
        je      loc_50B349

loc_50B33C:
        mov     ecx, 9
        mov     esi, ebp
        rep movsd
        mov     edi, [esp+20h]

loc_50B349:
        add     edi, 24h
        mov     [esp+20h], edi
        jmp     loc_50B363

loc_50B352:
        push    1
        push    ebp
        push    edi
        lea     ecx, [esp+28h]
        call    FUN_0050CB90
        mov     edi, [esp+20h]

loc_50B363:
        add     ebp, 24h
        cmp     ebp, ebx
        jne     loc_50B308
        mov     esi, [esp+14h]

loc_50B36E:
        mov     eax, [esi+0Ch]
        test    eax, eax
        mov     ebp, [esi+10h]
        jle     loc_50B44D

        mov     ebx, eax

loc_50B37E:
        mov     al, [ebp+24h]
        test    al, al
        jne     loc_50B393

        mov     al, [ebp+74h]
        test    al, al
        jne     loc_50B3CB

        mov     al, [ebp+4Ch]
        test    al, al
        jne     loc_50B3C4

loc_50B393:
        cmp     edi, [esp+24h]
        je      loc_50B3B3
        test    edi, edi
        je      loc_50B3AA

        mov     ecx, 9
        mov     esi, ebp
        rep movsd
        mov     edi, [esp+20h]

loc_50B3AA:
        add     edi, 24h
        mov     [esp+20h], edi
        jmp     loc_50B3C4

loc_50B3B3:
        push    1
        push    ebp
        push    edi
        lea     ecx, [esp+28h]
        call    FUN_0050CB90
        mov     edi, [esp+20h]

loc_50B3C4:
        mov     al, [ebp+74h]
        test    al, al
        je      loc_50B400

loc_50B3CB:
        cmp     edi, [esp+24h]
        je      loc_50B3EC
        test    edi, edi
        je      loc_50B3E3

        lea     esi, [ebp+50h]
        mov     ecx, 9
        rep movsd
        mov     edi, [esp+20h]

loc_50B3E3:
        add     edi, 24h
        mov     [esp+20h], edi
        jmp     loc_50B400

loc_50B3EC:
        push    1
        lea     edx, [ebp+50h]
        push    edx
        push    edi
        lea     ecx, [esp+28h]
        call    FUN_0050CB90
        mov     edi, [esp+20h]

loc_50B400:
        mov     al, [ebp+4Ch]
        test    al, al
        je      loc_50B43C

        cmp     edi, [esp+24h]
        je      loc_50B428
        test    edi, edi
        je      loc_50B41F

        lea     esi, [ebp+28h]
        mov     ecx, 9
        rep movsd
        mov     edi, [esp+20h]

loc_50B41F:
        add     edi, 24h
        mov     [esp+20h], edi
        jmp     loc_50B43C

loc_50B428:
        push    1
        lea     eax, [ebp+28h]
        push    eax
        push    edi
        lea     ecx, [esp+28h]
        call    FUN_0050CB90
        mov     edi, [esp+20h]

loc_50B43C:
        add     ebp, 98h
        dec     ebx
        jne     loc_50B37E
        mov     esi, [esp+14h]

loc_50B44D:
        lea     ecx, [esp+1Ch]
        push    ecx
        mov     ecx, esi
        call    FUN_0050CCC0

        mov     ecx, esi
        call    FUN_0050B220

        mov     eax, [esp+2Ch]
        test    eax, eax
        pop     ebp
        pop     ebx
        je      loc_50B472

        push    eax
        mov     ecx, esi
        call    FUN_0050B8E0

loc_50B472:
        mov     esi, [esp+14h]
        mov     ecx, [esp+1Ch]
        sub     ecx, esi
        mov     eax, 38E38E39h
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     edx, eax
        push    edx
        push    esi
        call    FUN_0050CB80
        add     esp, 8
        pop     edi
        pop     esi
        add     esp, 18h
        ret     4
    }
}
