/*
 * FUN_10041599 (201 B) -- __cdecl.
 * MultiByteToWideChar wrapper: converts a single-byte char (param_2) to a
 * wide char (param_1) using codepage DAT_1007568c, with a flag table
 * (DAT_10051984) and length gate (DAT_10051b90). Returns 0/1/len or -1 on
 * error (sets *FUN_1004277d() = 0x2a).
 *
 * CFLAGS: /O1
 */

extern int g_1007567c;
extern int g_10051984;
extern int g_10051b90;
extern int g_1007568c;
extern void *g_10049100;
extern void __cdecl FUN_1004277d(void);

__declspec(naked) void FUN_10041599(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        xor     ebx, ebx
        cmp     esi, ebx
        jz      L_bc
        cmp     dword ptr [ebp + 0x10], ebx
        jz      L_bc
        mov     al, byte ptr [esi]
        cmp     al, bl
        jnz     L_c2
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, ebx
        jz      L_bc
        mov     word ptr [eax], bx
    L_bc:
        xor     eax, eax
    L_be:
        pop     esi
        pop     ebx
        pop     ebp
        ret
    L_c2:
        cmp     dword ptr [g_1007567c], ebx
        jnz     L_dd
        mov     ecx, dword ptr [ebp + 0x8]
        cmp     ecx, ebx
        jz      L_d8
        movzx   ax, al
        mov     word ptr [ecx], ax
    L_d8:
        push    0x1
        pop     eax
        jmp     L_be
    L_dd:
        mov     ecx, dword ptr [g_10051984]
        movzx   eax, al
        test    byte ptr [ecx + eax*2 + 0x1], 0x80
        jz      L_3b
        mov     eax, dword ptr [g_10051b90]
        cmp     eax, 0x1
        jle     L_21
        cmp     dword ptr [ebp + 0x10], eax
        jl      L_2b
        xor     ecx, ecx
        cmp     dword ptr [ebp + 0x8], ebx
        setnz   cl
        push    ecx
        push    dword ptr [ebp + 0x8]
        push    eax
        push    esi
        push    0x9
        push    dword ptr [g_1007568c]
        call    dword ptr [g_10049100]
        test    eax, eax
        mov     eax, dword ptr [g_10051b90]
        jnz     L_be
    L_21:
        cmp     dword ptr [ebp + 0x10], eax
        jc      L_2b
        cmp     byte ptr [esi + 0x1], bl
        jnz     L_be
    L_2b:
        call    FUN_1004277d
        mov     dword ptr [eax], 0x2a
        or      eax, 0xffffffff
        jmp     L_be
    L_3b:
        xor     eax, eax
        cmp     dword ptr [ebp + 0x8], ebx
        setnz   al
        push    eax
        push    dword ptr [ebp + 0x8]
        push    0x1
        push    esi
        push    0x9
        push    dword ptr [g_1007568c]
        call    dword ptr [g_10049100]
        test    eax, eax
        jnz     L_d8
        jmp     L_2b
    }
}
