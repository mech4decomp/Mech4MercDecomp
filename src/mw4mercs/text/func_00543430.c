// FUN_00543430 (704 bytes)
// __thiscall (ECX = this, stack params at ESP+0x1c and ESP+0x18)
// RET 0x08 - player data initialization function
__declspec(naked) void func_00543430(void)
{
    

extern void __cdecl FUN_10041ea50(void);
extern void __cdecl FUN_10041eb1c(void);
extern void __cdecl FUN_10041ea2e(void);
extern void __cdecl FUN_10041eafc(void);
extern void __cdecl FUN_10041ea0e(void);
extern void __cdecl FUN_10041eadc(void);
extern void __cdecl FUN_10041eaca(void);
extern void __cdecl FUN_10041eaaa(void);
extern void __cdecl FUN_10041ea87(void);
extern void __cdecl FUN_10041e988(void);
extern void __cdecl FUN_10041e969(void);
extern void __cdecl FUN_10041ea26(void);
extern void __cdecl FUN_10041ea14(void);
extern int DAT_007db090;
extern void __cdecl FUN_10041e99b(void);
extern void __cdecl FUN_10041e976(void);
extern void __cdecl FUN_10041e87d(void);
extern void __cdecl FUN_10041e940(void);
extern void __cdecl FUN_10041e839(void);
extern void __cdecl FUN_10041e802(void);
extern void __cdecl FUN_10052deb1(void);
__asm {
sub     esp, 0x0c
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, ecx
        lea     eax, [edi + 0x3518]
        push    eax
        mov     ecx, esi
        call FUN_10041ea50
        lea     eax, [edi + 0x351c]
        push    0x20
        xor     ebx, ebx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax], ebx
        call FUN_10041eb1c
        lea     ecx, [edi + 0x3520]
        push    ecx
        mov     ecx, esi
        call FUN_10041ea2e
        lea     eax, [edi + 0x3524]
        push    0x20
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax], ebx
        call FUN_10041eafc
        lea     edx, [edi + 0x3528]
        push    edx
        mov     ecx, esi
        call FUN_10041ea0e
        lea     eax, [edi + 0x352c]
        push    0x20
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax], ebx
        call FUN_10041eadc
        push    0x08
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], ebx
        call FUN_10041eaca
        cmp     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x0c], ebx
        jle     init_weapon_slots

player_loop:
        push    0x08
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], ebx
        call FUN_10041eaaa
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, eax
        shl     edx, 0x07
        add     edx, eax
        shl     edx, 0x03
        sub     edx, eax
        lea     eax, [edi + edx*0x8 + 0x3554]
        push    0x08
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax], ebx
        call FUN_10041ea87
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, eax
        shl     ecx, 0x07
        add     ecx, eax
        shl     ecx, 0x03
        sub     ecx, eax
        lea     edx, [edi + ecx*0x8 + 0x353a]
        push    edx
        mov     ecx, esi
        call FUN_10041e988
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, eax
        shl     ecx, 0x07
        add     ecx, eax
        shl     ecx, 0x03
        sub     ecx, eax
        lea     edx, [edi + ecx*0x8 + 0x353b]
        push    edx
        mov     ecx, esi
        call FUN_10041e969
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, eax
        shl     ecx, 0x07
        add     ecx, eax
        shl     ecx, 0x03
        sub     ecx, eax
        lea     eax, [edi + ecx*0x8 + 0x3548]
        push    0x04
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax], ebx
        call FUN_10041ea26
        push    0x08
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x28], bl
        call FUN_10041ea14
        mov edx, dword ptr [DAT_007db090]
        mov     eax, dword ptr [esp + 0x10]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        cmp     eax, ecx
        jz      skip_local_player
        mov     dl, byte ptr [esp + 0x20]
        mov     ecx, eax
        shl     ecx, 0x07
        add     ecx, eax
        shl     ecx, 0x03
        sub     ecx, eax
        mov     byte ptr [edi + ecx*0x8 + 0x355c], dl

skip_local_player:
        mov     eax, dword ptr [esp + 0x0c]
        mov     ecx, dword ptr [esp + 0x14]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x0c], eax
        jl      player_loop

init_weapon_slots:
        mov     ecx, 0x18
        lea     eax, [edi + 0x205f34]
        mov     dword ptr [esp + 0x0c], ecx

zero_weapon_slots:
        mov     byte ptr [eax], bl
        add     eax, 0x22ac
        dec     ecx
        jnz     zero_weapon_slots

        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call dword ptr [eax + 0x08]
        test    eax, eax
        jz      cleanup_weapon_slots

weapon_slot_loop:
        push    0x08
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], ebx
        call FUN_10041e99b
        mov     edx, dword ptr [esp + 0x0c]
        imul    edx, edx, 0x22ac
        lea     eax, [edx + edi*0x1]
        mov     byte ptr [eax + 0x205f34], 0x01
        add     eax, 0x205f3c
        push    0x08
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax], ebx
        call FUN_10041e976
        mov     eax, dword ptr [esp + 0x0c]
        imul    eax, eax, 0x22ac
        lea     ecx, [eax + edi*0x1 + 0x205f35]
        push    ecx
        mov     ecx, esi
        call FUN_10041e87d
        mov     edx, dword ptr [esp + 0x0c]
        imul    edx, edx, 0x22ac
        lea     eax, [edx + edi*0x1 + 0x205f38]
        push    0x04
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax], ebx
        call FUN_10041e940
        mov     ecx, esi
        call FUN_10041e839
        mov     eax, dword ptr [esi]
        push    0x04
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], ebx
        call dword ptr [eax + 0x20]
        mov     ecx, dword ptr [esp + 0x0c]
        mov     eax, dword ptr [esp + 0x20]
        imul    ecx, ecx, 0x22ac
        mov     edx, dword ptr [esi]
        push    eax
        lea     eax, [ecx + edi*0x1 + 0x205d34]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     ecx, esi
        call FUN_10041e802
        mov     edx, dword ptr [esi]
        push    0x04
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x0c]
        mov     eax, dword ptr [esp + 0x20]
        imul    ecx, ecx, 0x22ac
        mov     edx, dword ptr [esi]
        push    eax
        lea     eax, [ecx + edi*0x1 + 0x205e34]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call dword ptr [edx + 0x08]
        test    eax, eax
        jnz     weapon_slot_loop

cleanup_weapon_slots:
        xor     ecx, ecx
        mov     dword ptr [esp + 0x0c], ecx

check_loop:
        mov     eax, ecx
        imul    eax, eax, 0x22ac
        mov     dl, byte ptr [eax + edi*0x1 + 0x205f34]
        add     eax, edi
        cmp     dl, bl
        jnz     next_check
        lea     ecx, [eax + 0x205d24]
        call FUN_10052deb1
        mov     ecx, dword ptr [esp + 0x0c]

next_check:
        inc     ecx
        cmp     ecx, 0x18
        mov     dword ptr [esp + 0x0c], ecx
        jl      check_loop

        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x0c
        ret     0x08
    }


}
