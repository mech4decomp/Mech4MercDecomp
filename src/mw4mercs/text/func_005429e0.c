// FUN_005429E0 (282 bytes)
// __thiscall (ECX = this, stack param at ESP+0x50 = player index)
// Player data iterator/accumulator function
__declspec(naked) void func_005429e0(void)
{
    

extern void __cdecl FUN_10041ee67(void);
extern void __cdecl FUN_100416ba7(void);
extern void __cdecl FUN_100416c96(void);
extern void __cdecl FUN_10041efd4(void);
extern void __cdecl FUN_10041efc8(void);
extern void __cdecl FUN_10041efb6(void);
extern void __cdecl FUN_100416c3d(void);
extern int DAT_007dab40;
extern int DAT_007dab44;
extern void __cdecl FUN_1004ce09b(void);
extern void __cdecl FUN_100416b62(void);
extern void __cdecl FUN_10041ee59(void);
__asm {
sub     esp, 0x40
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    0x00
        lea     ecx, [esp + 0x28]
        call FUN_10041ee67
        add     esi, 0xd8
        push    esi
        lea     ecx, [esp + 0x14]
        call FUN_100416ba7
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x77b17c
        call FUN_100416c96
        mov     esi, eax
        test    esi, esi
        jz      calc_diff

loop_top:
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, 0x40
        lea     ebx, [esi + 0x14]
        jl      next_iter
        mov     edi, dword ptr [esi + 0x18]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        push    0x01
        lea     eax, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ecx
        push    eax
        lea     ecx, [esp + 0x2c]
        call FUN_10041efd4
        push    0x01
        push    ebx
        lea     ecx, [esp + 0x2c]
        call FUN_10041efc8
        mov     ecx, dword ptr [esp + 0x0c]
        mov     edx, dword ptr [esi + 0x18]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x2c]
        call FUN_10041efb6

next_iter:
        lea     ecx, [esp + 0x10]
        call FUN_100416c3d
        mov     esi, eax
        test    esi, esi
        jnz     loop_top

calc_diff:
        mov     eax, dword ptr [esp + 0x3c]
        sub     eax, dword ptr [esp + 0x34]
        jz      cleanup
        mov ebx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [esp + 0x50]
        lea     ecx, [eax*0x8 + 0x0]
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, ebx
        mov     eax, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     ebx, dword ptr [eax + esi*0x4 + 0x3c44]
        add     eax, 0x3c3c
        add     ebx, ecx
        mov     dword ptr [eax + esi*0x4 + 0x08], ebx
        mov     edi, dword ptr [eax + 0xc00]
        add     edi, ecx
        push    0x01
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [edx]
        push    0x24
        push    esi
        xor     ecx, 0x85739531
        mov     dword ptr [eax + 0xc00], edi
        call FUN_1004ce09b

cleanup:
        lea     ecx, [esp + 0x10]
        call FUN_100416b62
        lea     ecx, [esp + 0x24]
        call FUN_10041ee59
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x40
        ret     0x04
    }


}
