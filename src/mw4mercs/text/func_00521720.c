// FUN_00521720 (101 bytes)
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00617920(int);

__declspec(naked) void func_00521720(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0x4]
        xor     eax, edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x44]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00617920
        xor     ecx, ecx
        mov     edx, esi
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + 0x4], ecx
        mov     dword ptr [edx + 0x8], ecx
        mov     dword ptr [edx + 0xc], ecx
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jz      l_skip
        mov     dword ptr [esi], 0x3c
        mov     dword ptr [esi + 0x4], 0x32
        mov     dword ptr [esi + 0x8], 0x50
        mov     dword ptr [esi + 0xc], 0x3c
    l_skip:
        mov     eax, 0x1
        pop     esi
        ret     0x8
    }
}
