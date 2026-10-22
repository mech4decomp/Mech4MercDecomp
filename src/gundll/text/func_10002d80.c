/*
 * FUN_10002d80 (878 B) - __stdcall, RET 0x4. HTTP download routine using
 * WinINet: opens a connection, sends a request, reads the response in a
 * loop, decodes it, and tears everything down. Uses an SEH frame.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d50(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __stdcall FUN_10002120(void); /* rel32 call */
extern void __cdecl FUN_10037999(void);   /* rel32 call */
extern void __cdecl FUN_1003796f(void);   /* rel32 call */
extern void __cdecl FUN_10037a49(void);   /* rel32 call */
extern void __cdecl FUN_1000db60(void);   /* rel32 call */
extern void __cdecl FUN_1000dbd0(void);   /* rel32 call */

extern void (__stdcall *g_InternetOpenA)(void);              /* IAT 0x100491f8 */
extern void (__stdcall *g_InternetConnectA)(void);           /* IAT 0x100491f4 */
extern void (__stdcall *g_HttpOpenRequestA)(void);           /* IAT 0x100491ec */
extern void (__stdcall *g_HttpSendRequestA)(void);           /* IAT 0x100491e0 */
extern void (__stdcall *g_InternetQueryDataAvailable)(void); /* IAT 0x100491e4 */
extern void (__stdcall *g_InternetReadFile)(void);           /* IAT 0x100491e8 */
extern void (__stdcall *g_HttpQueryInfoA)(void);             /* IAT 0x100491dc */
extern void (__stdcall *g_InternetCloseHandle)(void);        /* IAT 0x100491f0 */

__declspec(naked) void __stdcall FUN_10002d80(void)
{
    __asm {
        push    -1
        push    0x10046b3e
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x128
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        push    edi
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    0x10050188
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x34], 0xff
        call    dword ptr [g_InternetOpenA]
        cmp     eax, ebx
        mov     esi, dword ptr [esp + 0x148]
        mov     dword ptr [esi + 0x14], eax
        jnz     L_de0
        mov     ebp, 0x80004005
        jmp     L_f5e
L_de0:
        mov     edx, dword ptr [esi]
        push    ebx
        push    ebx
        push    3
        xor     ecx, ecx
        mov     cx, word ptr [esi + 8]
        push    ebx
        push    ebx
        push    ecx
        push    edx
        push    eax
        call    dword ptr [g_InternetConnectA]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x18], eax
        jnz     L_e08
        mov     ebp, 0x80004005
        jmp     L_f5e
L_e08:
        mov     ecx, dword ptr [esi + 4]
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    ecx
        push    0x10050184
        push    eax
        call    dword ptr [g_HttpOpenRequestA]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x1c], eax
        jnz     L_e2e
        mov     ebp, 0x80004005
        jmp     L_f5e
L_e2e:
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    eax
        call    dword ptr [g_HttpSendRequestA]
        test    eax, eax
        jnz     L_e47
L_e3d:
        mov     ebp, 0x80004005
        jmp     L_f5e
L_e47:
        mov     eax, dword ptr [esi + 0x1c]
        push    0
        push    0
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        call    dword ptr [g_InternetQueryDataAvailable]
        test    eax, eax
        jz      L_f2c
        mov     ecx, dword ptr [esp + 0x1c]
        inc     ecx
        push    ecx
        call    FUN_10001d50
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      L_f45
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esi + 0x1c]
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        push    edi
        push    ecx
        call    dword ptr [g_InternetReadFile]
        test    eax, eax
        jz      L_f4c
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_fd1
        lea     edx, [esp + 0x10]
        push    edx
        push    edi
        mov     byte ptr [edi + eax], 0
        call    FUN_10002120
        mov     ebp, eax
        test    ebp, ebp
        jl      L_f51
        push    edi
        call    FUN_10001d60
        mov     eax, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x1c]
        lea     ecx, [eax + ebp]
        lea     edx, [ecx + ecx + 2]
        push    edx
        call    FUN_10001d50
        mov     edi, eax
        add     esp, 8
        test    edi, edi
        jz      L_f45
        test    ebx, ebx
        jz      L_ef0
        push    ebx
        push    edi
        call    FUN_10037999
        add     esp, 8
        jmp     L_ef5
L_ef0:
        mov     word ptr [edi], 0
L_ef5:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    edi
        call    FUN_1003796f
        push    ebx
        call    FUN_10001d60
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        mov     ebx, edi
        call    FUN_10001d60
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x10
        add     ebp, eax
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x18], ebp
        jmp     L_e47
L_f2c:
        push    0
        mov     ebp, 0x80004005
        call    FUN_10001d60
        push    ebx
        call    FUN_10001d60
        add     esp, 8
        xor     ebx, ebx
        jmp     L_f5e
L_f45:
        mov     ebp, 0x8007000e
        jmp     L_f5e
L_f4c:
        mov     ebp, 0x80004005
L_f51:
        test    edi, edi
        jz      L_f5e
        push    edi
        call    FUN_10001d60
        add     esp, 4
L_f5e:
        mov     eax, dword ptr [esp + 0x10]
        xor     edi, edi
        cmp     eax, edi
        jz      L_f71
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_f71:
        cmp     ebp, edi
        jge     L_f84
        cmp     ebx, edi
        jz      L_f84
        push    ebx
        call    FUN_10001d60
        add     esp, 4
        xor     ebx, ebx
L_f84:
        push    0x28
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x18], eax
        cmp     eax, edi
        mov     dword ptr [esp + 0x140], edi
        jz      L_fa6
        mov     ecx, eax
        call    FUN_1000db60
        mov     edi, eax
L_fa6:
        test    edi, edi
        mov     dword ptr [esp + 0x140], 0xffffffff
        jnz     L_101f
        test    ebx, ebx
        jz      L_fc2
        push    ebx
        call    FUN_10001d60
        add     esp, 4
L_fc2:
        mov     edx, dword ptr [esi + 0x10]
        mov     byte ptr [edx + 0x98], 0
        jmp     L_10d1
L_fd1:
        push    edi
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x1c]
        add     esp, 4
        push    0
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x40]
        push    eax
        push    0x13
        push    ecx
        call    dword ptr [g_HttpQueryInfoA]
        test    eax, eax
        jz      L_e3d
        lea     edx, [esp + 0x38]
        push    edx
        call    FUN_10037a49
        xor     ecx, ecx
        add     esp, 4
        cmp     eax, 0xc8
        setz    cl
        dec     ecx
        and     ecx, 0x80004005
        mov     ebp, ecx
        jmp     L_f5e
L_101f:
        mov     eax, dword ptr [esi + 0xc]
        push    ebx
        push    ebp
        push    eax
        push    edi
        call    FUN_1000dbd0
        mov     edx, dword ptr [esi + 0x10]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x24], 4
        mov     dword ptr [esp + 0x28], 1
        xor     ebp, ebp
        mov     dword ptr [esp + 0x30], ebp
        mov     dword ptr [esp + 0x34], edi
        mov     eax, dword ptr [edx + 0x30]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     eax, dword ptr [esi + 0x10]
        mov     edi, dword ptr [g_InternetCloseHandle]
        mov     byte ptr [eax + 0x98], 0
        mov     eax, dword ptr [esi + 0x1c]
        cmp     eax, ebp
        jz      L_1086
        push    eax
        call    edi
L_1086:
        mov     eax, dword ptr [esi + 0x18]
        cmp     eax, ebp
        jz      L_1090
        push    eax
        call    edi
L_1090:
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, ebp
        jz      L_109a
        push    eax
        call    edi
L_109a:
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, ebp
        jz      L_10a7
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
L_10a7:
        mov     edx, dword ptr [esi + 4]
        push    edx
        mov     dword ptr [esi + 0x10], ebp
        call    FUN_10001d60
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_10001d60
        push    esi
        call    FUN_10001d60
        add     esp, 0xc
        cmp     ebx, ebp
        jz      L_10d1
        push    ebx
        call    FUN_10001d60
        add     esp, 4
L_10d1:
        mov     ecx, dword ptr [esp + 0x138]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x134
        ret     4
    }
}
