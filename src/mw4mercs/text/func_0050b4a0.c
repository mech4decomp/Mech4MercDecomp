// Auto-generated: FUN_0050b4a0, 1005 bytes, __thiscall
// FUN_0050b4a0

void FUN_004D2000(void);
void FUN_004D2310(void);
void FUN_0040DCA0(void);
void FUN_0040ECC0(void);
void FUN_00411D60(void);
void FUN_004084D0(void);
void FUN_0050CE70(void);
void FUN_004084E0(void);
void FUN_004DFCD0(void);
void FUN_0050B260(void);
void FUN_0040DE20(void);
void FUN_004D21C0(void);

extern int *g_76b588;   /* IAT @ 0x0076B588 */
extern int g_50b890[];  /* jump table @ 0x0050B890 */

__declspec(naked) void func_0050b4a0(void)
{
    __asm {
        sub     esp, 0ACh
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    0
        mov     [esp+28h], ebx
        call    dword ptr [g_76b588]
        and     eax, 0x3FF
        add     eax, -4
        cmp     eax, 19h
        ja      loc_50B528

        xor     ecx, ecx
        mov     cl, byte ptr [eax+0x50B8C4]
        jmp     dword ptr [ecx*4 + g_50b890]

loc_50B4D4:
        mov     eax, 777BCCh
        jmp     loc_50B52D

loc_50B4DB:
        mov     eax, 777B9Ch
        jmp     loc_50B52D

loc_50B4E2:
        mov     eax, 777B6Ch
        jmp     loc_50B52D

loc_50B4E9:
        mov     eax, 777B3Ch
        jmp     loc_50B52D

loc_50B4F0:
        mov     eax, 777B0Ch
        jmp     loc_50B52D

loc_50B4F7:
        mov     eax, 777ADCh
        jmp     loc_50B52D

loc_50B4FE:
        mov     eax, 777AACh
        jmp     loc_50B52D

loc_50B505:
        mov     eax, 777A7Ch
        jmp     loc_50B52D

loc_50B50C:
        mov     eax, 777A4Ch
        jmp     loc_50B52D

loc_50B513:
        mov     eax, 777A1Ch
        jmp     loc_50B52D

loc_50B51A:
        mov     eax, 7779ECh
        jmp     loc_50B52D

loc_50B521:
        mov     eax, 7779BCh
        jmp     loc_50B52D

loc_50B528:
        mov     eax, 777990h

loc_50B52D:
        push    0
        push    eax
        lea     ecx, [esp+30h]
        call    FUN_004D2000

        lea     ecx, [esp+28h]
        call    FUN_004D2310

        mov     eax, [esp+28h]
        push    4
        lea     edx, [ebx+1Ch]
        push    edx
        lea     ecx, [esp+30h]
        call    dword ptr [eax+20h]

        mov     edx, [esp+28h]
        push    1
        lea     ecx, [ebx+20h]
        push    ecx
        lea     ecx, [esp+30h]
        call    dword ptr [edx+20h]

        mov     edx, [esp+28h]
        push    4
        lea     eax, [ebx+24h]
        push    eax
        lea     ecx, [esp+30h]
        call    dword ptr [edx+20h]

        mov     edx, [esp+28h]
        push    4
        lea     eax, [ebx+2Ch]
        push    eax
        lea     ecx, [esp+30h]
        call    dword ptr [edx+20h]

        mov     edx, [esp+28h]
        push    1
        lea     eax, [ebx+29h]
        push    eax
        lea     ecx, [esp+30h]
        call    dword ptr [edx+20h]

        mov     edx, [esp+28h]
        push    4
        lea     eax, [ebx+3Ch]
        push    eax
        lea     ecx, [esp+30h]
        call    dword ptr [edx+20h]

        mov     edx, [esp+28h]
        push    4
        lea     eax, [ebx+40h]
        push    eax
        lea     ecx, [esp+30h]
        call    dword ptr [edx+20h]

        mov     edx, [esp+28h]
        push    4
        lea     eax, [ebx+44h]
        push    eax
        lea     ecx, [esp+30h]
        call    dword ptr [edx+20h]

        push    1
        push    0
        push    76C6B4h
        lea     ecx, [esp+78h]
        call    FUN_0040DCA0

        push    77792Ch
        lea     ecx, [esp+70h]
        call    FUN_0040ECC0
        mov     esi, eax
        test    esi, esi
        je      loc_50B626

        push    0
        lea     eax, [ebx+30h]
        push    eax
        push    777958h
        mov     ecx, esi
        call    FUN_00411D60

        push    0
        lea     ecx, [ebx+34h]
        push    ecx
        push    777948h
        mov     ecx, esi
        call    FUN_00411D60

        push    0
        lea     edx, [ebx+38h]
        push    edx
        push    777938h
        mov     ecx, esi
        call    FUN_00411D60

loc_50B626:
        mov     edx, [esp+28h]
        push    4
        lea     eax, [esp+1Ch]
        push    eax
        lea     ecx, [esp+30h]
        call    dword ptr [edx+20h]

        mov     ebp, [esp+0C0h]
        mov     eax, [esp+3Ch]
        mov     esi, [ebp]
        mov     ecx, [ebp+8]
        mov     edi, [esp+18h]
        sub     ecx, esi
        mov     [esp+20h], eax
        mov     eax, 38E38E39h
        imul    ecx
        sar     edx, 3
        mov     ecx, edx
        shr     ecx, 1Fh
        add     edx, ecx
        cmp     edx, edi
        mov     [esp+14h], edi
        jae     loc_50B733

        mov     ebx, [ebp+4]
        mov     ecx, ebx
        sub     ecx, esi
        mov     eax, 38E38E39h
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     edx, eax
        test    esi, esi
        mov     [esp+1Ch], edx
        je      loc_50B6F5

        test    edi, edi
        je      loc_50B6AD

        lea     ecx, [edi+edi*8]
        shl     ecx, 2
        push    ecx
        call    FUN_004084D0
        mov     edi, [esp+1Ch]
        add     esp, 4
        mov     [esp+10h], eax
        jmp     loc_50B6B5

loc_50B6AD:
        mov     dword ptr [esp+10h], 0

loc_50B6B5:
        cmp     esi, ebx
        je      loc_50B6D7

        mov     edi, [esp+10h]
        sub     edi, esi
loc_50B6BF:
        lea     edx, [edi+esi]
        push    esi
        push    edx
        call    FUN_0050CE70
        add     esi, 24h
        add     esp, 8
        cmp     esi, ebx
        jne     loc_50B6BF
        mov     edi, [esp+18h]

loc_50B6D7:
        mov     eax, [ebp]
        test    eax, eax
        mov     esi, [esp+10h]
        mov     [esp+10h], eax
        je      loc_50B712

        push    eax
        call    FUN_004084E0
        mov     edi, [esp+1Ch]
        add     esp, 4
        jmp     loc_50B712

loc_50B6F5:
        test    edi, edi
        je      loc_50B710

        lea     eax, [edi+edi*8]
        shl     eax, 2
        push    eax
        call    FUN_004084D0
        mov     edi, [esp+1Ch]
        add     esp, 4
        mov     esi, eax
        jmp     loc_50B712

loc_50B710:
        xor     esi, esi

loc_50B712:
        mov     eax, [esp+1Ch]
        mov     ebx, [esp+24h]
        lea     ecx, [eax+eax*8]
        mov     eax, [esp+14h]
        lea     edx, [esi+ecx*4]
        lea     eax, [eax+eax*8]
        lea     ecx, [esi+eax*4]
        mov     [ebp], esi
        mov     [ebp+4], edx
        mov     [ebp+8], ecx

loc_50B733:
        test    edi, edi
        mov     dword ptr [esp+1Ch], 0
        jle     loc_50B867

loc_50B743:
        mov     edx, [esp+20h]
        mov     eax, [edx+18h]
        test    eax, eax
        je      loc_50B84B

        mov     ebx, [ebp+4]
        cmp     ebx, [ebp+8]
        je      loc_50B778

        test    ebx, ebx
        je      loc_50B76D

        mov     ecx, 9
        mov     esi, edx
        mov     edi, ebx
        rep movsd
        mov     edi, [esp+18h]

loc_50B76D:
        add     ebx, 24h
        mov     [ebp+4], ebx
        jmp     loc_50B847

loc_50B778:
        mov     edi, [ebp]
        mov     ecx, ebx
        sub     ecx, edi
        mov     eax, 38E38E39h
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     edx, eax
        cmp     edx, 1
        mov     dword ptr [esp+14h], 1
        mov     [esp+10h], edx
        lea     eax, [esp+14h]
        jb      loc_50B7A9

        lea     eax, [esp+10h]

loc_50B7A9:
        mov     esi, [eax]
        add     esi, edx
        mov     [esp+14h], esi
        je      loc_50B7C8

        lea     ecx, [esi+esi*8]
        shl     ecx, 2
        push    ecx
        call    FUN_004084D0
        add     esp, 4
        mov     [esp+10h], eax
        jmp     loc_50B7D0

loc_50B7C8:
        mov     dword ptr [esp+10h], 0

loc_50B7D0:
        mov     edx, [esp+1Ch]
        mov     eax, [esp+10h]
        push    edx
        push    eax
        push    ebx
        push    edi
        call    FUN_004DFCD0
        add     esp, 10h
        test    eax, eax
        je      loc_50B7F9

        mov     esi, [esp+20h]
        mov     ecx, 9
        mov     edi, eax
        rep movsd
        mov     esi, [esp+14h]

loc_50B7F9:
        add     eax, 24h
        cmp     ebx, ebx
        mov     edi, eax
        je      loc_50B81C

loc_50B802:
        mov     esi, ebx
loc_50B804:
        push    esi
        push    edi
        call    FUN_0050CE70
        add     esi, 24h
        add     esp, 8
        add     edi, 24h
        cmp     esi, ebx
        jne     loc_50B804
        mov     esi, [esp+14h]

loc_50B81C:
        mov     eax, [ebp]
        test    eax, eax
        mov     [esp+14h], eax
        je      loc_50B830

        push    eax
        call    FUN_004084E0
        add     esp, 4

loc_50B830:
        mov     eax, [esp+10h]
        lea     ecx, [esi+esi*8]
        lea     edx, [eax+ecx*4]
        mov     [ebp+4], edi
        mov     edi, [esp+18h]
        mov     [ebp], eax
        mov     [ebp+8], edx

loc_50B847:
        mov     ebx, [esp+24h]

loc_50B84B:
        mov     eax, [esp+1Ch]
        mov     edx, [esp+20h]
        inc     eax
        add     edx, 24h
        cmp     eax, edi
        mov     [esp+1Ch], eax
        mov     [esp+20h], edx
        jl      loc_50B743

loc_50B867:
        mov     ecx, ebx
        call    FUN_0050B260

        lea     ecx, [esp+6Ch]
        call    FUN_0040DE20

        lea     ecx, [esp+28h]
        call    FUN_004D21C0

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0ACh
        ret     4
    }
}
