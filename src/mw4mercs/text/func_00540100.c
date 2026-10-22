// FUN_00540100 (552 bytes)
// __thiscall (ECX = this, stack param at ESP+0x40 = player index)
// Player weapon update function
__declspec(naked) void func_00540100(void)
{
    

extern void __cdecl FUN_0054446c(void);
extern void __cdecl FUN_0054043e(void);
extern void __cdecl FUN_005404b5(void);
extern void __cdecl FUN_10041edb3(void);
extern void __cdecl FUN_10041ef50(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004ce036(void);
extern void __cdecl FUN_10041edfd(void);
extern void __cdecl FUN_1004cdfff(void);
extern void __cdecl FUN_1004cdfd2(void);
extern void __cdecl FUN_005402bc(void);
extern void __cdecl FUN_00540337(void);
__asm {
sub     esp, 0x2c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x40]
        mov     eax, edi
        shl     eax, 0x07
        add     eax, edi
        shl     eax, 0x03
        sub     eax, edi
        mov     esi, ecx
        lea     ebp, [esi + eax*0x8]
        mov     al, byte ptr [ebp + 0x3538]
        test    al, al
        jz      done
        mov     eax, dword ptr [ebp + 0x3580]
        test    eax, eax
        jz      done
        push    edi
        call FUN_0054446c
        mov     dword ptr [esp + 0x10], eax
        mov     byte ptr [ebp + 0x3539], 0x00
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      skip_weapon_init
        mov     eax, dword ptr [ebp + 0x3548]
        cmp     eax, 0x08
        jz      skip_weapon_init
        mov     ecx, dword ptr [esi + 0x50]
        mov     ebx, eax
        mov     dword ptr [esp + 0x40], ecx
        push    ebx
        mov     ecx, esi
        call FUN_0054043e
        mov     eax, dword ptr [esp + 0x40]
        lea     edx, [ebx + ebx*0x4]
        shl     edx, 0x04
        push    ebx
        fstp    dword ptr [edx + eax*0x1 + 0xfc]
        mov     ecx, esi
        call FUN_005404b5
        mov     eax, dword ptr [ebp + 0x3548]
        mov     edx, dword ptr [esp + 0x40]
        lea     ecx, [eax + eax*0x4]
        shl     ecx, 0x04
        fstp    dword ptr [ecx + edx*0x1 + 0x108]

skip_weapon_init:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        push    ecx
        push    edi
        mov     ecx, esi
        call dword ptr [eax + 0x6c]
        test    al, al
        jz      call_fail
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      call_success_no_weapon
        push    0x00
        lea     ecx, [esp + 0x18]
        call FUN_10041edb3
        mov     edx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [edx + 0x74]
        test    eax, eax
        push    0x10
        jz      use_default_color
        lea     eax, [esi + 0x239dcc]
        push    eax
        jmp     push_color_done

use_default_color:
        push    0x7afaf0

push_color_done:
        lea     ecx, [esp + 0x1c]
        call FUN_10041ef50
        mov     edx, dword ptr [esp + 0x14]
        push    0x00
        lea     ecx, [esp + 0x18]
        call dword ptr [edx + 0x0c]
        mov ecx, dword ptr [DAT_007dab44]
        mov     ebx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x1c], 0xffffffec
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        sub     eax, ebx
        mov     ebx, dword ptr [ecx + edi*0x4 + 0x3c44]
        add     ecx, 0x3c3c
        shl     eax, 0x03
        add     ebx, eax
        mov     dword ptr [ecx + edi*0x4 + 0x08], ebx
        mov     ebx, dword ptr [ecx + 0xc00]
        add     ebx, eax
        push    0x01
        lea     eax, [esp + 0x18]
        push    eax
        mov     dword ptr [ecx + 0xc00], ebx
        mov     ecx, dword ptr [edx]
        push    0x12
        push    edi
        xor     ecx, 0x85739531
        call FUN_1004ce036
        lea     ecx, [esp + 0x14]
        call FUN_10041edfd
        mov     byte ptr [ebp + 0x3539], 0x01
        jmp     check_weapon_after

call_success_no_weapon:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        push    0x01
        push    0x00
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x14]
        push    0x12
        push    edi
        xor     ecx, 0x85739531
        call FUN_1004cdfff
        mov     byte ptr [ebp + 0x3539], 0x01
        jmp     check_weapon_after

call_fail:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        push    0x01
        push    0x00
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0x14]
        push    0x13
        push    edi
        xor     ecx, 0x85739531
        call FUN_1004cdfd2
        mov     byte ptr [ebp + 0x3539], 0x00

check_weapon_after:
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      done
        mov     eax, dword ptr [ebp + 0x3548]
        cmp     eax, 0x08
        jz      done
        mov     ebx, dword ptr [esi + 0x50]
        mov     edi, eax
        push    edi
        mov     ecx, esi
        call FUN_005402bc
        lea     edx, [edi + edi*0x4]
        shl     edx, 0x04
        push    edi
        fstp    dword ptr [edx + ebx*0x1 + 0xfc]
        mov     ecx, esi
        call FUN_00540337
        mov     ebp, dword ptr [ebp + 0x3548]
        lea     eax, [ebp + ebp*0x4]
        shl     eax, 0x04
        fstp    dword ptr [eax + ebx*0x1 + 0x108]
        mov     byte ptr [esi + 0x239df0], 0x01

done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x2c
        ret     0x04
    }


}
