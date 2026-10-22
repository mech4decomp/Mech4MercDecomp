/*
 * FUN_10042806 (204 B) -- __thiscall.
 * Character conversion helper (uppercase): if codepage DAT_1007567c is 0,
 * uppercases a-z; otherwise maps a char via flag table DAT_10051984 / length
 * gate DAT_10051b90 and MultiByteToWideChar-style conversion FUN_1003a220.
 *
 * CFLAGS: /O1
 */

extern int g_1007567c;
extern int g_10051b90;
extern int g_10051984;
extern void __cdecl FUN_100399db(void);
extern void __cdecl FUN_1003a220(void);

__declspec(naked) void FUN_10042806(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        cmp     dword ptr [g_1007567c], 0x0
        push    ebx
        jnz     L_31
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, 0x61
        jl      L_cf
        cmp     eax, 0x7a
        jg      L_cf
        sub     eax, 0x20
        jmp     L_cf
    L_31:
        mov     ebx, dword ptr [ebp + 0x8]
        cmp     ebx, 0x100
        jge     L_64
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_51
        push    0x2
        push    ebx
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_5c
    L_51:
        mov     eax, dword ptr [g_10051984]
        mov     al, byte ptr [eax + ebx*2]
        and     eax, 0x2
    L_5c:
        test    eax, eax
        jnz     L_64
    L_60:
        mov     eax, ebx
        jmp     L_cf
    L_64:
        mov     edx, dword ptr [g_10051984]
        mov     eax, ebx
        sar     eax, 0x8
        movzx   ecx, al
        test    byte ptr [edx + ecx*2 + 0x1], 0x80
        jz      L_87
        and     byte ptr [ebp + 0xa], 0x0
        mov     byte ptr [ebp + 0x8], al
        mov     byte ptr [ebp + 0x9], bl
        push    0x2
        jmp     L_90
    L_87:
        and     byte ptr [ebp + 0x9], 0x0
        mov     byte ptr [ebp + 0x8], bl
        push    0x1
    L_90:
        pop     eax
        lea     ecx, [ebp - 0x4]
        push    0x1
        push    0x0
        push    0x3
        push    ecx
        push    eax
        lea     eax, [ebp + 0x8]
        push    eax
        push    0x200
        push    dword ptr [g_1007567c]
        call    FUN_1003a220
        add     esp, 0x20
        test    eax, eax
        jz      L_60
        cmp     eax, 0x1
        jnz     L_c2
        movzx   eax, byte ptr [ebp - 0x4]
        jmp     L_cf
    L_c2:
        movzx   eax, byte ptr [ebp - 0x3]
        movzx   ecx, byte ptr [ebp - 0x4]
        shl     eax, 0x8
        or      eax, ecx
    L_cf:
        pop     ebx
        leave
        ret
    }
}
