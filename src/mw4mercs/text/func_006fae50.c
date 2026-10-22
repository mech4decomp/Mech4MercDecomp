/*
 * FUN_006fae50 (432 B) — Background file-loader thread. Waits on two
 * events (WaitForMultipleObjects), then for each pending node in the
 * g_856710 list opens/maps the file, reads it, and flags it loaded.
 *
 * __cdecl, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8566d0;
extern int g_8566d4;
extern int g_856710;
extern int g_896c88;

extern int *g_76b170;   /* IAT: WaitForMultipleObjects */
extern int *g_76b110;   /* IAT: EnterCriticalSection */
extern int *g_76b100;   /* IAT: LeaveCriticalSection */
extern int *g_76b0e8;   /* IAT: CreateFileA */
extern int *g_76b15c;   /* IAT: GetFileSize */
extern int *g_76b160;   /* IAT: SetFilePointer */
extern int *g_76b294;   /* IAT: malloc */
extern int *g_76b164;   /* IAT: ReadFile */
extern int *g_76b0ec;   /* IAT: CloseHandle */
extern int *g_76b380;   /* IAT: _endthreadex */

extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void __stdcall FUN_006fae50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        mov     eax, dword ptr [g_8566d0]
        mov     ecx, dword ptr [g_8566d4]
        push    -0x1
        push    0x0
        lea     edx, [ebp - 0xc]
        push    edx
        push    0x2
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], ecx
        call    dword ptr [g_76b170]
        cmp     eax, 0x1
        jnz     L6FAFED
        push    ebx
        push    esi
        push    edi
    L6FAE83:
        push    0x8566d8
        call    dword ptr [g_76b110]
        mov     esi, dword ptr [g_856710]
        test    esi, esi
        jz      L6FAFC6
    L6FAE9C:
        mov     al, byte ptr [esi + 0x120]
        test    al, al
        jnz     L6FAFBB
        push    0x8566d8
        call    dword ptr [g_76b100]
        push    0x0
        push    0x0
        push    0x3
        push    0x0
        push    0x1
        push    0x80000000
        lea     edi, [esi + 0x8]
        push    edi
        call    dword ptr [g_76b0e8]
        mov     ebx, eax
        cmp     ebx, -0x1
        jnz     L6FAEF4
        mov     eax, dword ptr [g_896c88]
        push    edi
        push    0x2746
        push    eax
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L6FAEF4
        int     3
    L6FAEF4:
        push    0x0
        push    ebx
        call    dword ptr [g_76b15c]
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x118]
        test    eax, eax
        jz      L6FAF39
        cmp     edi, eax
        jnc     L6FAF25
        push    edi
        lea     ecx, [esi + 0x8]
        push    ecx
        push    eax
        push    0x7a01c8
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        jz      L6FAF25
        int     3
    L6FAF25:
        mov     eax, dword ptr [esi + 0x118]
        push    0x0
        push    0x0
        push    eax
        push    ebx
        sub     edi, eax
        call    dword ptr [g_76b160]
    L6FAF39:
        mov     eax, dword ptr [esi + 0x11c]
        cmp     edi, eax
        jbe     L6FAF45
        mov     edi, eax
    L6FAF45:
        push    edi
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [esi + 0x114]
        add     esp, 0x4
        push    0x0
        push    ecx
        push    edi
        push    eax
        push    ebx
        mov     dword ptr [ebp - 0x4], eax
        call    dword ptr [g_76b164]
        mov     eax, dword ptr [esi + 0x114]
        cmp     dword ptr [eax], edi
        jz      L6FAF91
        mov     ecx, dword ptr [g_896c88]
        lea     eax, [esi + 0x8]
        push    eax
        push    0x2745
        push    ecx
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L6FAF91
        int     3
    L6FAF91:
        push    ebx
        call    dword ptr [g_76b0ec]
        push    0x8566d8
        call    dword ptr [g_76b110]
        mov     eax, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [esi + 0x10c]
        mov     dword ptr [esi + 0x110], eax
        mov     dword ptr [edx], eax
        mov     byte ptr [esi + 0x120], 0x1
    L6FAFBB:
        mov     esi, dword ptr [esi + 0x4]
        test    esi, esi
        jnz     L6FAE9C
    L6FAFC6:
        push    0x8566d8
        call    dword ptr [g_76b100]
        push    -0x1
        push    0x0
        lea     eax, [ebp - 0xc]
        push    eax
        push    0x2
        call    dword ptr [g_76b170]
        cmp     eax, 0x1
        jz      L6FAE83
        pop     edi
        pop     esi
        pop     ebx
    L6FAFED:
        push    0x0
        call    dword ptr [g_76b380]
        add     esp, 0x4
        xor     eax, eax
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
