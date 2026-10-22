// Auto-generated: FUN_0050b8e0, 513 bytes, __thiscall
// FUN_0050b8e0

void FUN_004DDD40(void);
void FUN_004DDD20(void);
void FUN_00415230(void);
void FUN_004DE060(void);
void FUN_004DF350(void);
void FUN_0050BAF0(void);

__declspec(naked) void func_0050b8e0(void)
{
    

extern int DAT_007dc6b4;
extern int DAT_007dc8c0;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     eax, [ebx+1Ch]
        mov ecx, dword ptr [DAT_007dc6b4]
        push    edi
        push    eax
        call    FUN_004DDD40

        mov     eax, [ebx+2Ch]
        cmp     eax, -1
        je      loc_50B900
        push    eax
        jmp     loc_50B902

loc_50B900:
        push    -1

loc_50B902:
        mov ecx, dword ptr [DAT_007dc6b4]
        call    FUN_004DDD20

        mov eax, dword ptr [DAT_007dc8c0]
        mov     edi, [esp+14h]
        mov     ecx, [edi+4]
        push    eax
        call    FUN_00415230
        test    al, al
        je      loc_50B9A9

        mov     edx, [edi]
        xor     eax, eax
        mov     al, [ebx+20h]
        mov     ecx, edi
        push    eax
        call    dword ptr [edx+0B0h]

        mov     eax, [ebx+24h]
        mov     edx, [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0B4h]

        mov     edx, [edi]
        xor     eax, eax
        mov     al, [ebx+29h]
        mov     ecx, edi
        push    eax
        call    dword ptr [edx+0B8h]

        mov     eax, [ebx+3Ch]
        mov     edx, [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0BCh]

        mov     eax, [ebx+40h]
        mov     edx, [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0C0h]

        mov     eax, [ebx+44h]
        mov     edx, [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0C4h]

        mov     eax, [ebx+30h]
        mov     edx, [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0C8h]

        mov     eax, [ebx+34h]
        mov     edx, [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0CCh]

        mov     eax, [ebx+38h]
        mov     edx, [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0D0h]

loc_50B9A9:
        mov ecx, dword ptr [DAT_007dc6b4]
        call    FUN_004DE060

        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov esi, dword ptr [DAT_007dab40]
        push    1
        push    1
        push    0
        push    1Bh
        xor     edx, esi
        mov     ecx, [edx+0Ch]
        lea     eax, [edx+0Ch]
        mov     edx, [eax]
        mov     ebp, 9
        push    ebp
        push    -1
        xor     ecx, 85739531h
        push    ecx
        mov ecx, dword ptr [DAT_007dc6b4]
        push    4
        xor     edx, 85739531h
        push    edx
        push    0
        push    0
        call    FUN_004DF350

        mov     esi, [ebx]
        mov     ecx, [ebx+4]
        mov     eax, esi
        cmp     eax, ecx
        je      loc_50BA30

loc_50BA06:
        mov     edx, [eax+4]
        test    edx, edx
        je      loc_50BA29
        cmp     dword ptr [eax+10h], 8
        jne     loc_50BA29
        mov     edx, [eax+14h]
        cmp     edx, 201h
        je      loc_50BA26
        cmp     edx, 200h
        jne     loc_50BA29

loc_50BA26:
        mov     [eax+10h], ebp

loc_50BA29:
        add     eax, 24h
        cmp     eax, ecx
        jne     loc_50BA06

loc_50BA30:
        cmp     esi, ecx
        je      loc_50BADA

loc_50BA38:
        mov     edx, [esi+4]
        test    edx, edx
        jne     loc_50BA77

        mov     eax, [esi+14h]
        mov     ecx, [esi+10h]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_0050BAF0
        test    al, al
        jne     loc_50BACC

        mov     edx, [esi+1Ch]
        mov     eax, [esi+18h]
        push    edx
        mov     edx, [esi+14h]
        push    eax
        mov     eax, [esi+10h]
        xor     ecx, ecx
        mov     cl, [esi+20h]
        push    ecx
        mov     ecx, [esi+0Ch]
        push    edx
        mov     edx, [esi]
        push    eax
        push    ecx
        push    edi
        push    0
        push    0
        push    edx
        push    edi
        jmp     loc_50BAC1

loc_50BA77:
        cmp     dword ptr [esi+10h], 8
        jne     loc_50BA91
        mov     eax, [esi+14h]
        cmp     eax, 201h
        je      loc_50BA8E
        cmp     eax, 200h
        jne     loc_50BA91

loc_50BA8E:
        mov     [esi+10h], ebp

loc_50BA91:
        mov     eax, [esi+10h]
        cmp     eax, ebp
        jne     loc_50BAA7
        mov     ecx, [esi+14h]
        test    ecx, ecx
        je      loc_50BACC
        cmp     ecx, 212h
        jge     loc_50BACC

loc_50BAA7:
        mov     ecx, [esi+1Ch]
        push    ecx
        mov     ecx, [esi+18h]
        push    ecx
        mov     ecx, [esi+14h]
        push    0
        push    ecx
        push    eax
        mov     eax, [esi+0Ch]
        push    eax
        push    edi
        push    edx
        push    edi
        push    0
        push    0

loc_50BAC1:
        mov ecx, dword ptr [DAT_007dc6b4]
        call    FUN_004DF350

loc_50BACC:
        mov     eax, [ebx+4]
        add     esi, 24h
        cmp     esi, eax
        jne     loc_50BA38

loc_50BADA:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }


}
