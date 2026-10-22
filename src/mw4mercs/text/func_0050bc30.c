// Auto-generated: FUN_0050bc30, 1614 bytes, __thiscall
// FUN_0050bc30

void FUN_0050CE90(void);
void FUN_0040DCA0(void);
void FUN_004084C0(void);
void FUN_00417A40(void);
void FUN_006FAB90(void);
void FUN_00411BF0(void);
void FUN_004084D0(void);
void FUN_004084E0(void);
void FUN_00411EC0(void);
void FUN_00412570(void);
void FUN_00416F60(void);
void FUN_0040DE20(void);
void FUN_004D5ED0(void);
void FUN_00411CB0(void);

__declspec(naked) void func_0050bc30(void)
{
    

extern int DAT_007db0a0;
extern int DAT_007b8810;
extern int DAT_0076b2ac;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0A8h
        mov eax, dword ptr [DAT_007db0a0]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, [ebp+0Ch]
        mov     edx, [esi]
        xor     edi, edi
        push    edi
        push    ecx
        mov     [ebp-58h], eax
        mov     eax, [esi+4]
        push    edx
        push    eax
        push    eax
        mov     [ebp-18h], esi
        call    FUN_0050CE90
        add     esp, 14h
        push    edi
        mov     [esi+4], eax
        mov     eax, [ebp+8]
        push    edi
        push    eax
        lea     ecx, [ebp-0A8h]
        call    FUN_0040DCA0

        mov ecx, dword ptr [DAT_007b8810]
        push    ecx
        push    0Ch
        call    FUN_004084C0
        add     esp, 8
        cmp     eax, edi
        je      loc_50BC9F

        lea     edx, [ebp-64h]
        mov     [eax+4], edx
        mov     ecx, [ebp-64h]
        mov     [eax+8], ecx
        mov     dword ptr [eax], 76CD64h
        mov     ebx, eax
        jmp     loc_50BCA1

loc_50BC9F:
        xor     ebx, ebx

loc_50BCA1:
        mov     ecx, [ebx+4]
        mov     [ebp-50h], ebx
        call    FUN_00417A40
        test    eax, eax
        jne     loc_50BCC9

        mov     edx, [ebp-0A8h]
        push    edx
        push    777E3Ch
        call    FUN_006FAB90
        add     esp, 8
        test    eax, eax
        je      loc_50BCC9
        int     3

loc_50BCC9:
        mov     eax, [ebx+8]
        cmp     eax, edi
        je      loc_50C261

        mov     esi, [eax]
        cmp     esi, edi
        mov     eax, [eax+4]
        mov     [ebp-1Ch], esi
        mov     [ebx+8], eax
        je      loc_50C261

        mov     ebx, [esi+14h]
        push    1
        lea     ecx, [ebp-10h]
        push    ecx
        push    777E30h
        mov     ecx, esi
        mov     [ebp-4Ch], edi
        mov     [ebp-48h], edi
        mov     [ebp-44h], edi
        mov     [ebp-30h], edi
        mov     [ebp-34h], edi
        mov     [ebp-38h], edi
        mov     [ebp-3Ch], edi
        mov     [ebp-40h], edi
        mov     byte ptr [ebp-2Ch], 0
        mov     [ebp-14h], ebx
        call    FUN_00411BF0

        mov     eax, [ebp-10h]
        mov     ecx, [ebp-58h]
        mov     edx, [ecx]
        push    eax
        lea     eax, [ebp-38h]
        push    eax
        lea     eax, [ebp-3Ch]
        push    eax
        call    dword ptr [edx+0Ch]
        test    al, al
        jne     loc_50BD51

        mov     ecx, [ebp-10h]
        mov     edx, [ebp-0A8h]
        push    ecx
        push    ebx
        push    edx
        push    777E00h
        call    FUN_006FAB90
        add     esp, 10h
        test    eax, eax
        je      loc_50BD51
        int     3

loc_50BD51:
        push    edi
        lea     eax, [ebp-8]
        push    eax
        push    777DF4h
        mov     ecx, esi
        mov     dword ptr [ebp-40h], 1
        call    FUN_00411BF0
        test    al, al
        je      loc_50BF33

        mov     edi, [ebp-8]
        or      ecx, 0FFFFFFFFh
        xor     eax, eax
        mov     dword ptr [ebp-40h], 0
        repne scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        inc     esi
        push    esi
        call    FUN_004084D0
        mov     ecx, esi
        mov     esi, [ebp-8]
        mov     edx, ecx
        mov     ebx, eax
        shr     ecx, 2
        mov     edi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     al, [ebx]
        add     esp, 4
        test    al, al
        mov     [ebp-20h], ebx
        je      loc_50BF14

loc_50BDB5:
        mov     al, [ebx]
        cmp     al, 20h
        je      loc_50BDC3
        cmp     al, 9
        je      loc_50BDC3
        cmp     al, 7Ch
        jne     loc_50BDC6

loc_50BDC3:
        inc     ebx
        jmp     loc_50BDB5

loc_50BDC6:
        mov     al, [ebx]
        test    al, al
        je      loc_50BF14
        cmp     al, 20h
        mov     esi, ebx
        je      loc_50BDEA
loc_50BDD6:
        cmp     al, 9
        je      loc_50BDEA
        cmp     al, 7Ch
        je      loc_50BDEA
        test    al, al
        je      loc_50BDEA
        mov     al, [ebx+1]
        inc     ebx
        cmp     al, 20h
        jne     loc_50BDD6

loc_50BDEA:
        cmp     byte ptr [ebx], 0
        je      loc_50BDF3
        mov     byte ptr [ebx], 0
        inc     ebx

loc_50BDF3:
        mov edi, dword ptr [DAT_0076b2ac]
        push    777DECh
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BE12
        mov     eax, 1
        jmp     loc_50BF08

loc_50BE12:
        push    777DE4h
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BE2B
        mov     eax, 2
        jmp     loc_50BF08

loc_50BE2B:
        push    777DDCh
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BE44
        mov     eax, 4
        jmp     loc_50BF08

loc_50BE44:
        push    777DD8h
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BE5D
        mov     eax, 10h
        jmp     loc_50BF08

loc_50BE5D:
        push    777DCCh
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BE76
        mov     eax, 2
        jmp     loc_50BF08

loc_50BE76:
        push    777DC0h
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BE8C
        mov     eax, 8
        jmp     loc_50BF08

loc_50BE8C:
        push    777DB4h
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BEA2
        mov     eax, 20h
        jmp     loc_50BF08

loc_50BEA2:
        push    777DACh
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BEB8
        mov     eax, 40h
        jmp     loc_50BF08

loc_50BEB8:
        push    777D9Ch
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BECE
        mov     eax, 80h
        jmp     loc_50BF08

loc_50BECE:
        push    777D8Ch
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     loc_50BEE4
        mov     eax, 0FFFFh
        jmp     loc_50BF08

loc_50BEE4:
        mov     eax, [ebp-8]
        mov     ecx, [ebp-14h]
        mov     edx, [ebp-0A8h]
        push    esi
        push    eax
        push    ecx
        push    edx
        push    777D50h
        call    FUN_006FAB90
        add     esp, 14h
        test    eax, eax
        je      loc_50BF06
        int     3

loc_50BF06:
        xor     eax, eax

loc_50BF08:
        or      [ebp-40h], eax
        cmp     byte ptr [ebx], 0
        jne     loc_50BDB5

loc_50BF14:
        mov     eax, [ebp-40h]
        test    eax, eax
        jne     loc_50BF22
        mov     dword ptr [ebp-40h], 1

loc_50BF22:
        mov     eax, [ebp-20h]
        push    eax
        call    FUN_004084E0
        mov     esi, [ebp-1Ch]
        add     esp, 4
        xor     edi, edi

loc_50BF33:
        push    1
        lea     ecx, [ebp-4]
        push    ecx
        push    773784h
        mov     ecx, esi
        call    FUN_00411BF0

        mov     edx, [ebp-4]
        mov ebx, dword ptr [DAT_0076b2ac]
        push    777D40h
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     loc_50BFBC

        push    1
        lea     eax, [ebp-28h]
        push    eax
        push    777D34h
        mov     ecx, esi
        call    FUN_00411BF0

        mov     eax, [ebp+0Ch]
        cmp     eax, edi
        je      loc_50C093

        mov     ecx, [ebp-28h]
        push    ecx
        mov     ecx, eax
        call    FUN_004D5ED0
        mov     ebx, eax
        cmp     ebx, edi
        jne     loc_50BFAC

        mov     edx, [ebp-28h]
        mov     eax, [ebp-14h]
        mov     ecx, [ebp-0A8h]
        push    edx
        push    eax
        push    ecx
        push    777D08h
        call    FUN_006FAB90
        add     esp, 10h
        test    eax, eax
        je      loc_50BFAC
        int     3

loc_50BFAC:
        mov     edx, [ebx]
        mov ebx, dword ptr [DAT_0076b2ac]
        mov     [ebp-48h], edx
        jmp     loc_50C093

loc_50BFBC:
        mov     eax, [ebp-4]
        push    777CF8h
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     loc_50C072

        push    1
        lea     ecx, [ebp-24h]
        push    ecx
        push    777CECh
        mov     ecx, esi
        call    FUN_00411BF0

        push    edi
        lea     edx, [ebp+0Bh]
        push    edx
        push    777CE4h
        mov     ecx, esi
        mov     byte ptr [ebp+0Bh], 0
        call    FUN_00411EC0

        mov     al, [ebp+0Bh]
        mov     [ebp-2Ch], al
        cmp     [ebp+0Ch], edi
        je      loc_50C093

        mov     ecx, [ebp-24h]
        push    ecx
        lea     ecx, [ebp-54h]
        call    FUN_00412570

        mov     eax, [ebp+0Ch]
        lea     edx, [ebp-54h]
        push    edx
        lea     ecx, [eax+5Ch]
        call    FUN_00416F60
        mov     ebx, eax
        mov     eax, [ebp-54h]
        cmp     eax, edi
        je      loc_50C03F

        mov     cl, [eax-1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     loc_50C03F
        push    eax
        call    FUN_004084E0
        add     esp, 4

loc_50C03F:
        cmp     ebx, edi
        jne     loc_50C064

        mov     ecx, [ebp-24h]
        mov     edx, [ebp-14h]
        mov     eax, [ebp-0A8h]
        push    ecx
        push    edx
        push    eax
        push    777CB4h
        call    FUN_006FAB90
        add     esp, 10h
        test    eax, eax
        je      loc_50C064
        int     3

loc_50C064:
        mov     ecx, [ebx+10h]
        mov ebx, dword ptr [DAT_0076b2ac]
        mov     [ebp-4Ch], ecx
        jmp     loc_50C093

loc_50C072:
        mov     edx, [ebp-4]
        mov     eax, [ebp-14h]
        mov     ecx, [ebp-0A8h]
        push    edx
        push    eax
        push    ecx
        push    777C88h
        call    FUN_006FAB90
        add     esp, 10h
        test    eax, eax
        je      loc_50C093
        int     3

loc_50C093:
        push    edi
        lea     edx, [ebp-0Ch]
        push    edx
        push    777C7Ch
        mov     ecx, esi
        mov     [ebp-0Ch], edi
        call    FUN_00411CB0

        mov     eax, [ebp-0Ch]
        push    edi
        lea     ecx, [ebp-4]
        push    ecx
        push    777C74h
        mov     ecx, esi
        mov     [ebp-34h], eax
        mov     dword ptr [ebp-4], 777C64h
        call    FUN_00411BF0

        mov     edx, [ebp-4]
        push    777C64h
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     loc_50C0E0
        mov     dword ptr [ebp-30h], 1
        jmp     loc_50C14E

loc_50C0E0:
        mov     eax, [ebp-4]
        push    777C54h
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     loc_50C0F7
        mov     [ebp-30h], edi
        jmp     loc_50C14E

loc_50C0F7:
        mov     ecx, [ebp-4]
        push    777C44h
        push    ecx
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     loc_50C112
        mov     dword ptr [ebp-30h], 2
        jmp     loc_50C14E

loc_50C112:
        mov     edx, [ebp-4]
        push    777C30h
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     loc_50C12D
        mov     dword ptr [ebp-30h], 3
        jmp     loc_50C14E

loc_50C12D:
        mov     eax, [ebp-4]
        mov     ecx, [ebp-14h]
        mov     edx, [ebp-0A8h]
        push    eax
        push    ecx
        push    edx
        push    777BFCh
        call    FUN_006FAB90
        add     esp, 10h
        test    eax, eax
        je      loc_50C14E
        int     3

loc_50C14E:
        mov     eax, [ebp-18h]
        mov     ebx, [eax+4]
        cmp     ebx, [eax+8]
        je      loc_50C179

        cmp     ebx, edi
        je      loc_50C16B
        mov     ecx, 9
        lea     esi, [ebp-4Ch]
        mov     edi, ebx
        rep movsd
        xor     edi, edi

loc_50C16B:
        add     ebx, 24h
        mov     [eax+4], ebx
        mov     ebx, [ebp-50h]
        jmp     loc_50BCC9

loc_50C179:
        mov     eax, [ebp-18h]
        mov     esi, [eax]
        mov     ecx, ebx
        sub     ecx, esi
        mov     eax, 38E38E39h
        imul    ecx
        sar     edx, 3
        mov     ecx, edx
        shr     ecx, 1Fh
        add     edx, ecx
        cmp     edx, 1
        mov     dword ptr [ebp-1Ch], 1
        mov     [ebp-20h], edx
        lea     eax, [ebp-1Ch]
        jb      loc_50C1A8
        lea     eax, [ebp-20h]

loc_50C1A8:
        mov     eax, [eax]
        add     eax, edx
        mov     [ebp-20h], eax
        je      loc_50C1C2

        lea     edx, [eax+eax*8]
        shl     edx, 2
        push    edx
        call    FUN_004084D0
        add     esp, 4
        jmp     loc_50C1C4

loc_50C1C2:
        xor     eax, eax

loc_50C1C4:
        cmp     esi, ebx
        mov     [ebp-14h], eax
        je      loc_50C1E8

loc_50C1CD:
        mov     edx, esi
loc_50C1CF:
        cmp     eax, edi
        je      loc_50C1DE
        mov     ecx, 9
        mov     esi, edx
        mov     edi, eax
        rep movsd
        xor     edi, edi

loc_50C1DE:
        add     edx, 24h
        add     eax, 24h
        cmp     edx, ebx
        jne     loc_50C1CF

loc_50C1E8:
        cmp     eax, edi
        je      loc_50C1F8
        mov     ecx, 9
        lea     esi, [ebp-4Ch]
        mov     edi, eax
        rep movsd

loc_50C1F8:
        lea     ebx, [eax+24h]
        mov     eax, [ebp-18h]
        mov     edx, [eax+4]
        cmp     edx, edx
        je      loc_50C229

loc_50C20C:
        mov     ecx, edx
        sub     ecx, ebx
        mov     [ebp-1Ch], ecx
loc_50C210:
        test    ebx, ebx
        je      loc_50C21F
        lea     esi, [ecx+ebx]
        mov     ecx, 9
        mov     edi, ebx
        rep movsd
        mov     ecx, [ebp-1Ch]

loc_50C21F:
        add     ebx, 24h
        lea     esi, [ecx+ebx]
        cmp     esi, edx
        jne     loc_50C210

loc_50C229:
        mov     ecx, [eax]
        test    ecx, ecx
        mov     [ebp-1Ch], ecx
        je      loc_50C243
        mov     eax, [ebp-18h]
        mov     eax, [eax]
        push    eax
        call    FUN_004084E0
        mov     eax, [ebp-18h]
        add     esp, 4

loc_50C243:
        mov     ecx, [ebp-14h]
        mov     edx, [ebp-20h]
        lea     edx, [edx+edx*8]
        mov     [eax], ecx
        lea     ecx, [ecx+edx*4]
        mov     [eax+4], ebx
        mov     ebx, [ebp-50h]
        mov     [eax+8], ecx
        xor     edi, edi
        jmp     loc_50BCC9

loc_50C261:
        push    ebx
        call    FUN_004084E0
        add     esp, 4
        lea     ecx, [ebp-0A8h]
        call    FUN_0040DE20
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }


}
