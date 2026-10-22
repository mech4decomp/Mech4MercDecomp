/*
 * FUN_10037d37 (203 B) -- __thiscall.
 * Character conversion helper: if codepage DAT_1007567c is 0, lowercases
 * A-Z; otherwise maps a char via the flag table DAT_10051984 / length gate
 * DAT_10051b90 and MultiByteToWideChar-style conversion FUN_1003a220.
 *
 * CFLAGS: /O1
 */

extern int g_1007567c;
extern int g_10051b90;
extern int g_10051984;
extern void __cdecl FUN_100399db(void);
extern void __cdecl FUN_1003a220(void);

__declspec(naked) void FUN_10037d37(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        cmp     dword ptr [g_1007567c], 0x0
        push    ebx
        push    esi
        push    edi
        jnz     L_64
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, 0x41
        jl      L_fd
        cmp     eax, 0x5a
        jg      L_fd
        add     eax, 0x20
        jmp     L_fd
    L_64:
        mov     ebx, dword ptr [ebp + 0x8]
        mov     edi, 0x100
        push    0x1
        cmp     ebx, edi
        pop     esi
        jge     L_98
        cmp     dword ptr [g_10051b90], esi
        jle     L_86
        push    esi
        push    ebx
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_90
    L_86:
        mov     eax, dword ptr [g_10051984]
        mov     al, byte ptr [eax + ebx*2]
        and     eax, esi
    L_90:
        test    eax, eax
        jnz     L_98
    L_94:
        mov     eax, ebx
        jmp     L_fd
    L_98:
        mov     edx, dword ptr [g_10051984]
        mov     eax, ebx
        sar     eax, 0x8
        movzx   ecx, al
        test    byte ptr [edx + ecx*2 + 0x1], 0x80
        jz      L_bc
        and     byte ptr [ebp + 0xa], 0x0
        push    0x2
        mov     byte ptr [ebp + 0x8], al
        mov     byte ptr [ebp + 0x9], bl
        pop     eax
        jmp     L_c5
    L_bc:
        and     byte ptr [ebp + 0x9], 0x0
        mov     byte ptr [ebp + 0x8], bl
        mov     eax, esi
    L_c5:
        push    esi
        push    0x0
        lea     ecx, [ebp - 0x4]
        push    0x3
        push    ecx
        push    eax
        lea     eax, [ebp + 0x8]
        push    eax
        push    edi
        push    dword ptr [g_1007567c]
        call    FUN_1003a220
        add     esp, 0x20
        test    eax, eax
        jz      L_94
        cmp     eax, esi
        jnz     L_f0
        movzx   eax, byte ptr [ebp - 0x4]
        jmp     L_fd
    L_f0:
        movzx   eax, byte ptr [ebp - 0x3]
        movzx   ecx, byte ptr [ebp - 0x4]
        shl     eax, 0x8
        or      eax, ecx
    L_fd:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
