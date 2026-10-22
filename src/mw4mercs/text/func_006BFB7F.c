/*
 * FUN_006BFB7F (272 B @ 0x6bfb7f) - __cdecl. Builds a formatted log/error
 * message via sprintf IAT using several global buffers and format strings.
 * (Block 0x6BFB7F is 273 B; the last byte is 0x90 padding.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00721790(void);
extern void __cdecl FUN_006fbc60(void);
extern void __cdecl FUN_00760162(void);
extern void *g_0082e1d4;   /* function pointer */
extern char g_0082e2e0;
extern int  g_0082f338;
extern int  g_0082f330;
extern int  g_0082f334;
extern void *g_76b420;     /* sprintf IAT */
extern char g_0076b768[];
extern char g_79bea0[];
extern char g_79be6c[];
extern char g_79be5c[];
extern char g_79be24[];
extern char g_79be08[];
extern char g_82f3ec[];

__declspec(naked) void FUN_006BFB7F(void)
{
    __asm {
        nop
        mov     eax, dword ptr [g_0082e1d4]
        sub     esp, 0x900
        test    eax, eax
        push    ebp
        push    esi
        je      L_6bfb9e
        call    eax
        mov     esi, eax
        test    esi, esi
        je      L_6bfb9e
        cmp     byte ptr [esi], 0
        jne     L_6bfba3
L_6bfb9e:
        mov     esi, OFFSET g_0076b768
L_6bfba3:
        mov     al, byte ptr [g_0082e2e0]
        test    al, al
        mov     ebp, OFFSET g_79bea0
        jne     L_6bfbb6
        mov     ebp, OFFSET g_79be6c
L_6bfbb6:
        mov     eax, dword ptr [g_0082f338]
        test    eax, eax
        je      L_6bfc6c
        cmp     eax, 0xff81ff81
        je      L_6bfc6c
        mov     eax, dword ptr [g_0082f330]
        test    eax, eax
        je      L_6bfc6c
        mov     ecx, dword ptr [g_0082f334]
        push    ebx
        push    edi
        push    ecx
        push    eax
        lea     edx, [esp + 0x118]
        push    edx
        call    FUN_00721790
        mov     edi, eax
        mov     eax, dword ptr [g_0082f330]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_006fbc60
        mov     eax, dword ptr [g_0082f334]
        mov     ebx, dword ptr [g_76b420]
        lea     edx, [esp + 0x110]
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x51c]
        push    OFFSET g_79be5c
        push    edx
        call    ebx
        add     esp, 0x14
        lea     eax, [esp + 0x510]
        push    eax
        call    FUN_00760162
        mov     ecx, dword ptr [g_0082f334]
        mov     edx, dword ptr [g_0082f330]
        push    edi
        push    ecx
        push    edx
        push    ebp
        push    esi
        push    OFFSET g_79be24
        push    OFFSET g_82f3ec
        call    ebx
        add     esp, 0x1c
        pop     edi
        pop     ebx
        pop     esi
        mov     eax, OFFSET g_82f3ec
        pop     ebp
        add     esp, 0x900
        ret
L_6bfc6c:
        push    ebp
        push    esi
        push    OFFSET g_79be08
        push    OFFSET g_82f3ec
        call    dword ptr [g_76b420]
        add     esp, 0x10
        pop     esi
        mov     eax, OFFSET g_82f3ec
        pop     ebp
        add     esp, 0x900
        ret
    }
}
