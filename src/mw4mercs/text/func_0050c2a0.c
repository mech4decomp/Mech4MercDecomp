// Auto-generated: FUN_0050c2a0, 195 bytes, __thiscall
// FUN_0050c2a0

void FUN_0050B2C0(void);

__declspec(naked) void func_0050c2a0(void)
{
    __asm {
        sub     esp, 24h
        push    ebx
        push    ebp
        push    esi
        mov     esi, [esp+38h]
        mov     edx, ecx
        push    edi
        mov     edi, [edx+0Ch]
        xor     eax, eax
        test    edi, edi
        mov     ebx, esi
        jle     loc_50C305

        mov     ecx, [edx+10h]
        add     ecx, 84h

loc_50C2C1:
        mov     ebp, [ecx+4]
        cmp     ebp, [esp+40h]
        jne     loc_50C2D2
        mov     ebp, [ecx]
        cmp     ebp, [esp+44h]
        je      loc_50C2DF

loc_50C2D2:
        inc     eax
        add     ecx, 98h
        cmp     eax, edi
        jl      loc_50C2C1
        jmp     loc_50C305

loc_50C2DF:
        cmp     eax, esi
        je      loc_50C305

        lea     ecx, [eax+eax*8]
        lea     ecx, [eax+ecx*2]
        mov     ebx, eax
        mov     eax, [edx+10h]
        lea     eax, [eax+ecx*8]
        xor     ecx, ecx
        mov     [eax+88h], ecx
        mov     [eax+84h], ecx
        mov     [eax+14h], ecx
        mov     [eax+0Ch], ecx

loc_50C305:
        lea     eax, [esi+esi*8]
        lea     ecx, [esi+eax*2]
        mov     eax, [edx+10h]
        lea     eax, [eax+ecx*8]
        mov     esi, eax
        mov     ecx, 9
        lea     edi, [esp+10h]
        rep movsd

        mov     ecx, [esp+40h]
        mov     esi, [esp+44h]
        mov     [eax+88h], ecx
        mov     [esp+24h], ecx
        mov     [eax+84h], esi
        mov     [esp+1Ch], esi
        mov     edi, eax
        mov     ecx, 9
        lea     esi, [esp+10h]
        rep movsd

        mov     ecx, [esp+38h]
        push    ecx
        mov     ecx, edx
        mov     byte ptr [eax+24h], 1
        call    FUN_0050B2C0

        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 24h
        ret     10h
    }
}
