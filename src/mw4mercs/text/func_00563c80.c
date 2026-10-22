/*
 * FUN_00563c80 (263 B) — write a formatted log line ("%.4f\t%s\r\n")
 * to the log stream (DAT_007ee7b8) via FUN_006fc620. Uses a float
 * value either from a global or from FUN_006100a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007eebbc;
extern int *g_007dab44;
extern int g_007dab40;
extern int g_007ee7b8;
extern char g_str_77eadc[];
extern float g_float_76c5b0;

extern int __cdecl FUN_00563550(const char *, ...);
extern void __cdecl FUN_006fc620(int, char *, int);
extern float __cdecl FUN_006100a0(void);

__declspec(naked) void FUN_00563c80(void)
{
    __asm {
        mov     eax, dword ptr [g_007eebbc]
        test    eax, eax
        push    edi
        jnz     L_91
        mov     eax, 0x1
        pop     edi
        ret
L_91:
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        jz      L_d80
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x16]
        test    cl, cl
        jz      L_d80
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x17]
        test    dl, dl
        jz      L_d80
        mov     ecx, dword ptr [g_007ee7b8]
        test    ecx, ecx
        jz      L_d80
        mov     edx, dword ptr [eax + 0x20]
        xor     edx, 0x85739531
        jnz     L_d24
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        push    0x0
        push    0x0
        push    offset g_str_77eadc
        call    FUN_00563550
        mov     edx, eax
        add     esp, 0x10
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        mov     ecx, dword ptr [g_007ee7b8]
        push    edx
        push    ecx
        call    FUN_006fc620
        xor     eax, eax
        pop     edi
        ret
L_d24:
        mov     eax, dword ptr [eax + 0x20]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax + 0x2214]
        test    cl, cl
        jnz     L_d3e
        fld     dword ptr [g_float_76c5b0]
        jmp     L_d49
L_d3e:
        lea     ecx, [eax + 0x21e8]
        call    FUN_006100a0
L_d49:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_str_77eadc
        call    FUN_00563550
        mov     edx, eax
        add     esp, 0x10
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        mov     eax, dword ptr [g_007ee7b8]
        not     ecx
        dec     ecx
        push    ecx
        push    edx
        push    eax
        call    FUN_006fc620
        xor     eax, eax
        pop     edi
        ret
L_d80:
        mov     eax, 0x80004005
        pop     edi
        ret
    }
}
