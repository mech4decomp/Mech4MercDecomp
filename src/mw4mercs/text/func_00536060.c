// FUN_00536060 (298 bytes)
// __cdecl, RET 0x4
// Registry/key query function
__declspec(naked) void func_00536060(void)
{
    

extern int DAT_0076b014;
extern int DAT_0076b018;
extern int DAT_0076b00c;
extern int DAT_0076b320;
extern int DAT_0076b2f8;
extern int DAT_0076b40c;
__asm {
sub     esp, 0x118
        mov     eax, dword ptr [esp + 0x11c]
        cmp     eax, 0x01
        push    esi
        mov     dword ptr [esp + 0x08], 0x100
        jnz     case_2

        lea     eax, [esp + 0x04]
        push    eax
        push    0x77b5c8
        push    0x80000002
        call dword ptr [DAT_0076b014]
        test    eax, eax
        jnz     ret_zero

        lea     ecx, [esp + 0x08]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    0x77b5c4
        push    eax
        call dword ptr [DAT_0076b018]
        mov     ecx, dword ptr [esp + 0x04]
        push    ecx
        mov     esi, eax
        call dword ptr [DAT_0076b00c]
        test    esi, esi
        jz      check_string

ret_zero:
        xor     eax, eax
        xor     edx, edx
        pop     esi
        add     esp, 0x118
        ret     0x04

case_2:
        cmp     eax, 0x02
        jnz     ret_zero

        lea     edx, [esp + 0x04]
        push    edx
        push    0x77b58c
        push    0x80000002
        call dword ptr [DAT_0076b014]
        test    eax, eax
        jnz     ret_zero

        mov     edx, dword ptr [esp + 0x04]
        lea     eax, [esp + 0x08]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x00
        push    0x00
        push    0x77b5c4
        push    edx
        call dword ptr [DAT_0076b018]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x04]
        push    eax
        call dword ptr [DAT_0076b00c]
        test    esi, esi
        jnz     ret_zero

check_string:
        lea     ecx, [esp + 0x1c]
        test    ecx, ecx
        jz      ret_zero

        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x20]
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x0f
        pop     edi
        jc      ret_zero

        push    0x05
        lea     edx, [esp + 0x20]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        call dword ptr [DAT_0076b320]
        mov esi, dword ptr [DAT_0076b2f8]
        push    0x03
        lea     ecx, [esp + 0x32]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        mov     byte ptr [esp + 0x29], 0x00
        call    esi
        push    0x07
        lea     eax, [esp + 0x42]
        push    eax
        lea     ecx, [esp + 0x2c]
        push    ecx
        call    esi
        lea     edx, [esp + 0x30]
        push    edx
        call dword ptr [DAT_0076b40c]
        add     esp, 0x28
        pop     esi
        add     esp, 0x118
        ret     0x04
    }


}
