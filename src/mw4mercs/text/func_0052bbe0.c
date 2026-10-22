// FUN_0052BBE0 (117 bytes)
extern void __cdecl FUN_004D3230(void);
extern void __cdecl FUN_0052B470(void);
extern void __cdecl FUN_0052BC80(void);

__declspec(naked) void func_0052bbe0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_004D3230
        lea     edi, [esi + 0xec]
        mov     ebx, 8

    l_loop:
        mov     ecx, edi
        call    FUN_0052B470
        add     edi, 0x50
        dec     ebx
        jnz     l_loop

        xor     eax, eax
        mov     dword ptr [esi + 0xcf8], eax
        push    1
        mov     ecx, esi
        mov     dword ptr [esi], 0x77aa28
        mov     dword ptr [esi + 0x374], eax
        mov     byte ptr [esi + 0x378], al
        mov     byte ptr [esi + 0x3f8], al
        mov     byte ptr [esi + 0x478], al
        mov     byte ptr [esi + 0x4f8], al
        mov     byte ptr [esi + 0x5f8], al
        mov     byte ptr [esi + 0x7f8], al
        mov     byte ptr [esi + 0x8f8], al
        mov     dword ptr [esi + 0xcfc], eax
        call    FUN_0052BC80
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
