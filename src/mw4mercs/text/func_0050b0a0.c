// Auto-generated: FUN_0050b0a0, 130 bytes, __thiscall
// FUN_0050b0a0

void FUN_007224D0(void);
void FUN_00722F70(void);
void FUN_0050B130(void);
void FUN_0050B8E0(void);

__declspec(naked) void func_0050b0a0(void)
{
    __asm {
        mov     al, byte ptr [esp+4]
        sub     esp, 8
        push    ebx
        mov     ebx, [esp+14h]
        push    esi
        push    edi
        xor     edi, edi
        test    al, al
        mov     esi, ecx
        je      loc_50B104

        push    edi
        call    FUN_007224D0
        test    eax, eax
        je      loc_50B0E3

        mov     ecx, [esi+1Ch]
        lea     eax, [esp+0Ch]
        push    eax
        push    ecx
        call    FUN_00722F70
        mov     edx, [esp+10h]
        shr     edx, 10h
        and     edx, 1Fh
        lea     eax, [edx-1]
        cmp     eax, 8
        mov     [esi+2Ch], eax
        jge     loc_50B0EA

loc_50B0E3:
        mov     dword ptr [esi+2Ch], 0FFFFFFFFh

loc_50B0EA:
        mov     eax, [esp+24h]
        mov     ecx, [esp+20h]
        mov     edx, [esi+2Ch]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, esi
        call    FUN_0050B130
        mov     edi, eax
        jmp     loc_50B10B

loc_50B104:
        mov     dword ptr [esi+2Ch], 0FFFFFFFFh

loc_50B10B:
        test    ebx, ebx
        je      loc_50B117
        push    ebx
        mov     ecx, esi
        call    FUN_0050B8E0

loc_50B117:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     10h
    }
}
