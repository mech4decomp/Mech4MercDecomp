// Auto-generated: FUN_0050b130, 138 bytes, __thiscall
// FUN_0050b130

void FUN_0050AC80(void);
void FUN_0050B2C0(void);

__declspec(naked) void func_0050b130(void)
{
    __asm {
        mov     eax, [esp+4]
        sub     esp, 8
        push    ebx
        push    esi
        mov     esi, ecx
        mov     [esi+2Ch], eax
        mov     eax, [esi+10h]
        xor     ebx, ebx
        cmp     eax, ebx
        push    edi
        jne     loc_50B14E

        push    ebx
        call    FUN_0050AC80

loc_50B14E:
        mov     eax, [esi+0Ch]
        xor     edi, edi
        xor     ecx, ecx
        cmp     eax, ebx
        jle     loc_50B18F

        mov     eax, [esi+10h]
        push    ebp
        lea     edx, [esp+10h]
        add     eax, 4Ch

loc_50B164:
        cmp     byte ptr [eax], bl
        je      loc_50B181

        mov     ebp, [eax+44h]
        cmp     ebp, [esi+2Ch]
        jne     loc_50B181

        mov     [eax+44h], ebx
        mov     byte ptr [eax], bl
        mov     [edx], ecx
        inc     edi
        mov     [eax-10h], ebx
        add     edx, 4
        mov     [eax-18h], ebx

loc_50B181:
        mov     ebp, [esi+0Ch]
        inc     ecx
        add     eax, 98h
        cmp     ecx, ebp
        jl      loc_50B164

        pop     ebp

loc_50B18F:
        mov     ecx, [esp+1Ch]
        push    ecx
        mov     ecx, esi
        call    FUN_0050B2C0

        mov     edx, [esp+20h]
        mov     eax, [esp+0Ch]
        mov     ecx, [esp+24h]
        mov     [edx], eax
        mov     edx, [esp+10h]
        mov     eax, edi
        pop     edi
        pop     esi
        mov     [ecx], edx
        pop     ebx
        add     esp, 8
        ret     10h
    }
}
