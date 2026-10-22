// FUN_005202A0 (113 bytes)
// __thiscall-style: frees *piVar2, allocates 0x80 buffer, copies a string.
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_006f4230(int);
extern void * __cdecl FUN_006f3c80(int, int);

__declspec(naked) void func_005202a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        mov     eax, dword ptr [esi]
        test    eax, eax
        push    edi
        jz      l_skip
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0x0
    l_skip:
        push    0x0
        push    0x80
        call    FUN_006f3c80
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edi, dword ptr [DAT_007dab40]
        mov     edx, eax
        mov     eax, dword ptr [ecx]
        xor     eax, edi
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edi, dword ptr [ecx + 0xb0]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi], edx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        pop     edi
        mov     eax, 0x1
        pop     esi
        ret     0x8
    }
}
