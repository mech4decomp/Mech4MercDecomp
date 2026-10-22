// Auto-generated: FUN_0050c370, 239 bytes, __thiscall
// FUN_0050c370

void FUN_0050B2C0(void);

__declspec(naked) void func_0050c370(void)
{
    __asm {
        sub     esp, 24h
        push    ebx
        mov     ebx, [esp+34h]
        push    ebp
        mov     ebp, ecx
        mov     edx, [ebp+0Ch]
        push    esi
        mov     esi, [esp+38h]
        xor     eax, eax
        test    edx, edx
        push    edi
        mov     [esp+3Ch], esi
        jle     loc_50C3DC

        mov     ecx, [ebp+10h]
        add     ecx, 90h

loc_50C397:
        cmp     byte ptr [ecx-44h], 0
        je      loc_50C3AA
        cmp     [ecx], ebx
        jne     loc_50C3AA
        mov     edi, [esp+44h]
        cmp     [ecx-5Ch], edi
        je      loc_50C3B7

loc_50C3AA:
        inc     eax
        add     ecx, 98h
        cmp     eax, edx
        jl      loc_50C397
        jmp     loc_50C3DC

loc_50C3B7:
        cmp     eax, esi
        je      loc_50C3DC

        lea     ecx, [eax+eax*8]
        lea     edx, [eax+ecx*2]
        mov     [esp+3Ch], eax
        mov     eax, [ebp+10h]
        lea     eax, [eax+edx*8]
        xor     ecx, ecx
        mov     [eax+90h], ecx
        mov     byte ptr [eax+4Ch], cl
        mov     [eax+3Ch], ecx
        mov     [eax+34h], ecx

loc_50C3DC:
        cmp     ebx, 0Ah
        mov     edx, [ebp+10h]
        lea     eax, [esi+esi*8]
        lea     ecx, [esi+eax*2]
        lea     eax, [edx+ecx*8]
        mov     ecx, 9
        mov     esi, eax
        lea     edi, [esp+10h]
        rep movsd

        mov     edx, 1
        jge     loc_50C409

        mov     [esp+20h], edx
        mov     [esp+24h], ebx
        jmp     loc_50C418

loc_50C409:
        lea     ecx, [ebx-0Ah]
        mov     dword ptr [esp+20h], 2
        mov     [esp+24h], ecx

loc_50C418:
        mov     ecx, [esp+44h]
        mov     [esp+1Ch], ecx
        mov     ecx, [eax+78h]
        mov     [esp+14h], ecx
        mov     ecx, [eax+7Ch]
        mov     [esp+28h], ecx
        mov     [eax+90h], ebx
        lea     edi, [eax+28h]
        mov     ecx, 9
        lea     esi, [esp+10h]
        rep movsd
        mov     byte ptr [eax+4Ch], dl

        mov     edx, [esp+38h]
        push    edx
        mov     ecx, ebp
        call    FUN_0050B2C0

        mov     eax, [esp+3Ch]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 24h
        ret     10h
    }
}
