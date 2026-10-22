// FUN_0053FA70 (1494 bytes)
// __fastcall (ECX = this pointer, saved to EBP)
// Network/player info update function - builds a data packet with player info
__declspec(naked) void func_0053fa70(void)
{
    

extern void __cdecl FUN_10041ee62(void);
extern int DAT_007db0b8;
extern void __cdecl FUN_100416f38(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004d2a63(void);
extern void __cdecl FUN_0062dd47(void);
extern void __cdecl FUN_100535e99(void);
extern void __cdecl FUN_10041ef81(void);
extern void __cdecl FUN_10041ef71(void);
extern void __cdecl FUN_10041ef61(void);
extern void __cdecl FUN_10041ef51(void);
extern void __cdecl FUN_10040dba5(void);
extern void __cdecl FUN_10040ebb4(void);
extern void __cdecl FUN_100411b92(void);
extern void __cdecl FUN_10041ef06(void);
extern int DAT_007dd268;
extern int DAT_0076b320;
extern int DAT_007db090;
extern void __cdecl FUN_100408308(void);
extern void __cdecl FUN_1004082ed(void);
extern void __cdecl FUN_0070e0c9(void);
extern void __cdecl FUN_0070e0d2(void);
extern void __cdecl FUN_0070e0ab(void);
extern void __cdecl FUN_0070e139(void);
extern void __cdecl FUN_10041ecd8(void);
extern void __cdecl FUN_10041ecc2(void);
extern void __cdecl FUN_10041ecb2(void);
extern void __cdecl FUN_10041ec3b(void);
extern void __cdecl FUN_10041ec2b(void);
extern void __cdecl FUN_100535c4c(void);
extern void __cdecl FUN_100535f3d(void);
extern void __cdecl FUN_100535c1c(void);
extern void __cdecl FUN_100535f0d(void);
extern void __cdecl FUN_10041ebbf(void);
extern void __cdecl FUN_10041ebb3(void);
extern void __cdecl FUN_10041eb7f(void);
extern void __cdecl FUN_00701a66(void);
extern int DAT_0076b2dc;
extern void __cdecl FUN_10041eb37(void);
extern void __cdecl FUN_10041eb27(void);
extern int DAT_007db094;
extern void __cdecl FUN_1004cdbfd(void);
extern void __cdecl FUN_10053ec64(void);
extern void __cdecl FUN_10040d868(void);
extern void __cdecl FUN_10041e99f(void);
__asm {
sub     esp, 0x1d4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        xor     ebx, ebx
        push    ebx
        lea     ecx, [esp + 0x2c]
        call FUN_10041ee62
        mov eax, dword ptr [DAT_007db0b8]
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     ecx, [eax + 0x14]
        mov     dword ptr [esp + 0x54], 0x01
        call FUN_100416f38
        mov edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [edx]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x1804]
        push    ecx
        mov     ecx, eax
        call FUN_1004d2a63
        mov esi, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0x20], edx
        mov     eax, dword ptr [eax]
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x1804]
        push    edx
        call FUN_0062dd47
        mov     ecx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x20]
        xor     ecx, edx
        xor     esi, eax
        mov     dword ptr [esp + 0x24], ecx
        add     esp, 0x04
        mov     ecx, ebp
        mov     dword ptr [esp + 0x1c], esi
        call FUN_100535e99
        mov     dword ptr [esp + 0x54], eax
        push    0x08
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x60], edx
        call FUN_10041ef81
        push    0x08
        lea     ecx, [esp + 0x58]
        push    ecx
        lea     ecx, [esp + 0x30]
        call FUN_10041ef71
        push    0x01
        push    0x7b4678
        lea     ecx, [esp + 0x30]
        call FUN_10041ef61
        push    0x01
        push    0x7b4674
        lea     ecx, [esp + 0x30]
        call FUN_10041ef51
        push    0x01
        push    ebx
        lea     esi, [ebp + 0xec]
        push    0x76c6b4
        lea     ecx, [esp + 0x1a0]
        mov     dword ptr [esi], ebx
        call FUN_10040dba5
        push    0x7727b4
        lea     ecx, [esp + 0x198]
        call FUN_10040ebb4
        cmp     eax, ebx
        jz      skip_allowdecal
        push    ebx
        push    esi
        push    0x77aabc
        mov     ecx, eax
        call FUN_100411b92

skip_allowdecal:
        push    0x01
        push    esi
        lea     ecx, [esp + 0x30]
        call FUN_10041ef06
        xor     eax, eax
        mov     byte ptr [esp + 0x7c], bl
        mov     ecx, 0x0f
        lea     edi, [esp + 0x7d]
        rep stosd
        stosw
        stosb
        mov eax, dword ptr [DAT_007dd268]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x24], ebx
        jz      skip_player_info
        cmp     dword ptr [eax + 0x40ee8], ebx
        jz      skip_player_info
        xor     edx, edx
        mov     dword ptr [esp + 0x5c], edx
        mov     dword ptr [esp + 0x60], edx
        mov     dword ptr [esp + 0x64], edx
        mov     dword ptr [esp + 0x68], edx
        mov     eax, dword ptr [eax + 0x40ee8]
        mov     eax, dword ptr [eax + 0x64]
        cmp     eax, ebx
        jz      skip_strncpy1
        cmp     byte ptr [eax], bl
        jz      skip_strncpy1
        push    0x3f
        push    eax
        lea     ecx, [esp + 0x84]
        push    ecx
        call dword ptr [DAT_0076b320]
        add     esp, 0x0c
        mov     byte ptr [esp + 0xbb], bl

skip_strncpy1:
        mov eax, dword ptr [DAT_007db090]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x7c]
        repne scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        mov     ecx, edx
        shl     ecx, 0x07
        add     ecx, edx
        shl     ecx, 0x03
        sub     ecx, edx
        mov     eax, dword ptr [ebp + ecx*0x8 + 0x358c]
        lea     edi, [ebp + ecx*0x8 + 0x358c]
        inc     esi
        cmp     eax, ebx
        jz      skip_free
        push    eax
        call FUN_100408308
        add     esp, 0x04
        mov     dword ptr [edi], ebx

skip_free:
        push    esi
        call FUN_1004082ed
        mov     edx, eax
        mov     dword ptr [edi], edx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x04
        lea     edi, [esp + 0x7c]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x02
        mov     edi, edx
        mov edx, dword ptr [DAT_007dd268]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x03
        rep movsb
        mov     ecx, dword ptr [edx + 0x40ee8]
        mov     eax, dword ptr [ecx + 0x7c]
        mov     dword ptr [esp + 0x24], eax
        xor     eax, eax
        mov     byte ptr [esp + 0xbc], bl
        mov     ecx, 0x0f
        lea     edi, [esp + 0xbd]
        rep stosd
        stosw
        stosb
        mov     byte ptr [esp + 0xfc], bl
        xor     eax, eax
        mov     ecx, 0x0f
        lea     edi, [esp + 0xfd]
        rep stosd
        stosw
        stosb
        mov     ecx, dword ptr [edx + 0x40ee8]
        mov     eax, dword ptr [ecx + 0x68]
        cmp     eax, ebx
        jz      skip_strncpy2
        push    0x3f
        push    eax
        lea     edx, [esp + 0x104]
        push    edx
        call dword ptr [DAT_0076b320]
        mov edx, dword ptr [DAT_007dd268]
        add     esp, 0x0c
        mov     byte ptr [esp + 0x13b], bl

skip_strncpy2:
        mov     eax, dword ptr [edx + 0x40ee8]
        mov     eax, dword ptr [eax + 0x60]
        cmp     eax, ebx
        jz      skip_strncpy3
        push    0x3f
        push    eax
        lea     ecx, [esp + 0xc4]
        push    ecx
        call dword ptr [DAT_0076b320]
        add     esp, 0x0c
        mov     byte ptr [esp + 0xfb], bl

skip_strncpy3:
        cmp     byte ptr [esp + 0xfc], bl
        jz      skip_player_info
        cmp     byte ptr [esp + 0xbc], bl
        jz      skip_player_info
        lea     edx, [esp + 0x13c]
        push    edx
        call FUN_0070e0c9
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0xbc]
        repne scasb
        not     ecx
        dec     ecx
        push    ecx
        lea     eax, [esp + 0xc0]
        push    eax
        lea     ecx, [esp + 0x144]
        push    ecx
        call FUN_0070e0d2
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0xfc]
        repne scasb
        not     ecx
        dec     ecx
        push    ecx
        lea     edx, [esp + 0x100]
        push    edx
        lea     eax, [esp + 0x144]
        push    eax
        call FUN_0070e0ab
        lea     ecx, [esp + 0x13c]
        push    ecx
        lea     edx, [esp + 0x60]
        push    edx
        call FUN_0070e139

skip_player_info:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x7c]
        repne scasb
        not     ecx
        cmp     ecx, 0xff
        mov     dword ptr [esp + 0x18], ecx
        jle     skip_clamp_len
        mov     dword ptr [esp + 0x18], 0xff

skip_clamp_len:
        push    0x04
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x30]
        call FUN_10041ecd8
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x80]
        push    edx
        lea     ecx, [esp + 0x30]
        call FUN_10041ecc2
        push    0x04
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x30]
        call FUN_10041ecb2
        mov eax, dword ptr [DAT_007dab44]
        mov esi, dword ptr [DAT_007dab40]
        xor     dl, dl
        xor     cl, cl
        mov     byte ptr [esp + 0x13], dl
        mov     byte ptr [esp + 0x12], cl
        mov     edi, dword ptr [eax]
        xor     edi, esi
        mov     edi, dword ptr [edi + 0x4c]
        xor     edi, 0x85739531
        jz      check_weapon2
        mov     dl, 0x01
        mov     byte ptr [esp + 0x13], dl

check_weapon2:
        mov     eax, dword ptr [eax]
        xor     eax, esi
        mov     eax, dword ptr [eax + 0x58]
        xor     eax, 0x85739531
        jz      store_flags
        mov     cl, 0x01
        mov     byte ptr [esp + 0x12], cl

store_flags:
        mov esi, dword ptr [DAT_007db090]
        xor     eax, eax
        mov     al, byte ptr [esi + 0x28]
        push    0x01
        mov     esi, eax
        shl     esi, 0x07
        add     esi, eax
        shl     esi, 0x03
        sub     esi, eax
        lea     esi, [ebp + esi*0x8]
        mov     byte ptr [esi + 0x355d], dl
        mov     byte ptr [esi + 0x355e], cl
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     ecx, [esp + 0x30]
        call FUN_10041ec3b
        push    0x01
        lea     edx, [esp + 0x16]
        push    edx
        lea     ecx, [esp + 0x30]
        call FUN_10041ec2b
        cmp     byte ptr [esp + 0x13], bl
        jz      zero_weapon1
        push    0x01
        mov     ecx, ebp
        call FUN_100535c4c
        push    edx
        push    eax
        mov     ecx, ebp
        lea     edi, [esi + 0x3594]
        call FUN_100535f3d
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 0x04], edx
        jmp     check_weapon2_flag

zero_weapon1:
        lea     edi, [esi + 0x3594]
        mov     dword ptr [edi], ebx
        mov     dword ptr [edi + 0x04], ebx

check_weapon2_flag:
        cmp     byte ptr [esp + 0x12], bl
        jz      zero_weapon2
        push    0x02
        mov     ecx, ebp
        call FUN_100535c1c
        push    edx
        push    eax
        mov     ecx, ebp
        add     esi, 0x359c
        call FUN_100535f0d
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x04], edx
        jmp     store_weapon_data

zero_weapon2:
        add     esi, 0x359c
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x04], ebx

store_weapon_data:
        push    0x08
        push    edi
        lea     ecx, [esp + 0x30]
        call FUN_10041ebbf
        push    0x08
        push    esi
        lea     ecx, [esp + 0x30]
        call FUN_10041ebb3
        lea     eax, [ebp + 0x239d44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x04]
        mov     dword ptr [esp + 0x6c], ecx
        mov     ecx, dword ptr [eax + 0x08]
        mov     dword ptr [esp + 0x70], edx
        mov     edx, dword ptr [eax + 0x0c]
        push    0x10
        lea     eax, [esp + 0x70]
        mov     dword ptr [esp + 0x78], ecx
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x80], edx
        call FUN_10041eb7f
        push    ebx
        push    ebx
        push    0x03
        call FUN_00701a66
        cmp     eax, ebx
        mov     dword ptr [esp + 0x14], ebx
        jz      skip_sscanf
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     edx, [esp + 0x1a]
        push    edx
        lea     ecx, [esp + 0x1d]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        push    0x77b744
        push    eax
        call dword ptr [DAT_0076b2dc]
        add     esp, 0x18

skip_sscanf:
        push    0x04
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     byte ptr [esp + 0x1f], bl
        call FUN_10041eb37
        push    0x10
        lea     ecx, [esp + 0x60]
        push    ecx
        lea     ecx, [esp + 0x30]
        call FUN_10041eb27
        mov     edx, dword ptr [esp + 0x28]
        push    ebx
        lea     ecx, [esp + 0x2c]
        call dword ptr [edx + 0x0c]
        cmp     byte ptr [ebp + 0x16], bl
        mov     dword ptr [esp + 0x30], 0xffffffec
        jnz     call_alt_update
        mov     ecx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esp + 0x40]
        mov ebx, dword ptr [DAT_007dab40]
        sub     eax, ecx
        mov ecx, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x28]
        mov ecx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [ecx]
        xor     ecx, ebx
        lea     esi, [ecx + 0x14]
        mov     ecx, dword ptr [esi]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     ebx, dword ptr [ecx + edx*0x4 + 0x3c44]
        add     ecx, 0x3c3c
        shl     eax, 0x03
        add     ebx, eax
        mov     dword ptr [ecx + edx*0x4 + 0x08], ebx
        mov     edi, dword ptr [ecx + 0xc00]
        add     edi, eax
        push    0x01
        lea     eax, [esp + 0x2c]
        push    eax
        mov     dword ptr [ecx + 0xc00], edi
        mov     ecx, dword ptr [esi]
        push    0x0a
        push    edx
        xor     ecx, 0x85739531
        call FUN_1004cdbfd
        jmp     cleanup

call_alt_update:
        mov eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, ebp
        push    edx
        call FUN_10053ec64

cleanup:
        lea     ecx, [esp + 0x194]
        call FUN_10040d868
        lea     ecx, [esp + 0x28]
        call FUN_10041e99f
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1d4
        ret
    }


}
