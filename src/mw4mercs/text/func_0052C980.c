/*
 * FUN_0052C980 (extent 0x52C980-0x52CE26, 1190 bytes) - UTIL in-.text block.
 * __thiscall-style (ecx = this), ret 4. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern int *g_0076b420;

extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00411e70(void);
extern void __cdecl FUN_004123f0(void);
extern void __cdecl FUN_004d3350(void);
extern void __cdecl FUN_0052b790(void);

__declspec(naked) void func_0052C980(void)
{
    __asm {
        sub     esp, 0x84
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x98]
        mov     esi, ecx
        push    edi
        call    FUN_004d3350
        push    0x7727b4
        mov     ecx, edi
        call    FUN_0040eda0
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        push    0x77acac
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x24]
        push    ecx
        push    0x77ac94
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x28]
        push    edx
        push    0x77ac78
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x2c]
        push    eax
        push    0x77ac70
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x30]
        push    ecx
        push    0x77ac64
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x34]
        push    edx
        push    0x77ac54
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x38]
        push    eax
        push    0x77ac44
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x3c]
        push    ecx
        push    0x77ac30
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jge     L_ca37
        mov     dword ptr [esi + 0x40], 0
        jmp     L_ca43
L_ca37:
        cmp     eax, 9
        jle     L_ca43
        mov     dword ptr [esi + 0x40], 9
L_ca43:
        mov     edx, dword ptr [esi + 0x40]
        push    edx
        push    0x77ac1c
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x44]
        push    eax
        push    0x77ac0c
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x48]
        push    ecx
        push    0x77ac00
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x4c]
        push    edx
        push    0x77abec
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x50]
        push    eax
        push    0x77abdc
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x54]
        push    ecx
        push    0x77abc4
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x58]
        push    edx
        push    0x77abb8
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x5c]
        push    eax
        push    0x77aba8
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x64]
        push    ecx
        push    0x77ab98
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x6c]
        push    edx
        push    0x77ab90
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x70]
        push    eax
        push    0x77ab88
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x80]
        push    ecx
        push    0x77ab7c
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x74]
        push    edx
        push    0x77ab70
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x84]
        push    eax
        push    0x77ab60
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x88]
        push    ecx
        push    0x77a4b0
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x8c]
        mov     eax, 0x64
        cmp     ecx, eax
        jle     L_cb51
        mov     dword ptr [esi + 0x8c], eax
L_cb51:
        mov     edx, dword ptr [esi + 0x8c]
        push    edx
        push    0x77a4c0
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x90]
        mov     eax, 0x2160ec0
        cmp     ecx, eax
        jle     L_cb79
        mov     dword ptr [esi + 0x90], eax
L_cb79:
        mov     eax, dword ptr [esi + 0x90]
        push    eax
        push    0x77a9e4
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x94]
        push    ecx
        push    0x77ab54
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x98]
        push    edx
        push    0x77ab44
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x9c]
        push    eax
        push    0x77ab34
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0xa0]
        push    ecx
        push    0x77ab20
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0xa8]
        push    edx
        push    0x77ab10
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0xac]
        push    eax
        push    0x77aaf4
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0xa4]
        push    ecx
        push    0x77aae8
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0xe4]
        push    edx
        push    0x77aadc
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0xe8]
        push    eax
        push    0x77aad0
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0xb0]
        push    ecx
        push    0x77aabc
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0xb4]
        push    edx
        push    0x77aab0
        mov     ecx, edi
        call    FUN_00411d10
        mov     ebx, dword ptr [esi + 0x36c]
        push    ebx
        push    0x77aaa4
        mov     ecx, edi
        call    FUN_00411d10
        cmp     dword ptr [esi + 0x370], ebx
        jle     L_cc7e
        mov     dword ptr [esi + 0x370], ebx
L_cc7e:
        mov     eax, dword ptr [esi + 0x370]
        push    eax
        push    0x77aa9c
        mov     ecx, edi
        call    FUN_00411d10
        lea     ecx, [esi + 0x378]
        push    ecx
        push    0x77aa94
        mov     ecx, edi
        call    FUN_00411c40
        lea     edx, [esi + 0x4f8]
        push    edx
        push    0x77aa88
        mov     ecx, edi
        call    FUN_00411c40
        lea     eax, [esi + 0x5f8]
        push    eax
        push    0x77aa7c
        mov     ecx, edi
        call    FUN_00411c40
        lea     ecx, [esi + 0x3f8]
        push    ecx
        push    0x77aa6c
        mov     ecx, edi
        call    FUN_00411c40
        lea     edx, [esi + 0x478]
        push    edx
        push    0x77aa5c
        mov     ecx, edi
        call    FUN_00411c40
        lea     eax, [esi + 0x7f8]
        push    eax
        push    0x77aa50
        mov     ecx, edi
        call    FUN_00411c40
        mov     ecx, dword ptr [esi + 0xbc]
        push    ecx
        push    0x77a9ac
        mov     ecx, edi
        call    FUN_00411e70
        mov     edx, dword ptr [esi + 0xc0]
        push    edx
        push    0x77a99c
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esi + 0xc4]
        push    eax
        push    0x77a98c
        mov     ecx, edi
        call    FUN_00411e70
        mov     ecx, dword ptr [esi + 0xc8]
        push    ecx
        push    0x77a97c
        mov     ecx, edi
        call    FUN_00411e70
        mov     edx, dword ptr [esi + 0xcc]
        push    edx
        push    0x77a96c
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esi + 0xd0]
        push    eax
        push    0x77a95c
        mov     ecx, edi
        call    FUN_00411e70
        mov     ecx, dword ptr [esi + 0xd4]
        push    ecx
        push    0x77a948
        mov     ecx, edi
        call    FUN_00411e70
        mov     edx, dword ptr [esi + 0xd8]
        push    edx
        push    0x77a934
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esi + 0xdc]
        push    eax
        push    0x77a920
        mov     ecx, edi
        call    FUN_00411e70
        mov     ecx, dword ptr [esi + 0xe0]
        push    ecx
        push    0x77a90c
        mov     ecx, edi
        call    FUN_00411e70
        mov     ebp, dword ptr [g_0076b420]
        xor     ebx, ebx
        add     esi, 0xec
L_cdcf:
        push    0
        lea     ecx, [esp + 0x14]
        call    FUN_0040dd50
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    FUN_0052b790
        push    ebx
        lea     eax, [esp + 0x64]
        push    0x77aa48
        push    eax
        call    ebp
        add     esp, 0xc
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x64]
        push    edx
        mov     ecx, edi
        call    FUN_004123f0
        lea     ecx, [esp + 0x10]
        call    FUN_0040de20
        inc     ebx
        add     esi, 0x50
        cmp     ebx, 8
        jl      L_cdcf
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x84
        ret     4
    }
}
