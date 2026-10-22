// Auto-generated: FUN_0050c460, 201 bytes, __thiscall
// FUN_0050c460

void FUN_0050B2C0(void);

__declspec(naked) void func_0050c460(void)
{
    __asm {
        sub     esp, 24h
        push    ebx
        mov     ebx, [esp+34h]          ; param_1
        push    ebp
        push    esi
        mov     esi, [esp+38h]          ; param_2 (index)
        mov     ebp, ecx                ; this
        lea     eax, [esi+esi*8]
        lea     ecx, [esi+eax*2]
        push    edi
        mov     edi, [ebp+10h]
        mov     eax, [edi+ecx*8+94h]
        lea     edx, [edi+ecx*8]
        mov     ecx, [ebp+0Ch]
        mov     [esp+3Ch], eax
        xor     eax, eax
        test    ecx, ecx
        jle     loc_50C4D0

        add     edi, 8Ch

loc_50C497:
        cmp     byte ptr [edi-18h], 0
        jz      loc_50C4A1
        cmp     [edi], ebx
        jz      loc_50C4AE

loc_50C4A1:
        inc     eax
        add     edi, 98h
        cmp     eax, ecx
        jl      loc_50C497
        jmp     loc_50C4D0

loc_50C4AE:
        cmp     eax, esi
        jz      loc_50C4D0

        lea     ecx, [eax+eax*8]
        lea     ecx, [eax+ecx*2]
        mov     [esp+3Ch], eax
        mov     eax, [ebp+10h]
        lea     eax, [eax+ecx*8]
        xor     ecx, ecx
        mov     [eax+8Ch], ecx
        mov     [eax+74h], cl
        mov     [eax+64h], ecx

loc_50C4D0:
        mov     eax, [edx+78h]
        mov     esi, edx
        mov     ecx, 9
        lea     edi, [esp+10h]
        rep movsd

        mov     ecx, [edx+7Ch]
        mov     [esp+28h], ecx
        mov     [edx+8Ch], ebx
        lea     edi, [edx+50h]
        mov     [esp+14h], eax
        mov     ecx, 9
        lea     esi, [esp+10h]
        mov     dword ptr [esp+20h], 8
        mov     [esp+24h], ebx
        rep movsd

        mov     byte ptr [edx+74h], 1
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
        ret     0Ch
    }
}
