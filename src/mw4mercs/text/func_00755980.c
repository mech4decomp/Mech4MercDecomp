/*
 * FUN_00755980 (537 B) — __thiscall sound-object state updater. Enters a
 * critical section, copies a config struct, and dispatches to a set of
 * per-flag helper methods (FUN_00756590 / 00756790 / 00756670 / 007568d0 /
 * 00756810 / 00756870 / 00756aa0 / 00756a60 / 00756c40 / 00755ba0 / 00755e40).
 *
 * __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_76b110)(void *);             /* EnterCriticalSection IAT */
extern char * (__cdecl *g_76b320)(char *, const char *, unsigned int); /* strncpy IAT */
extern void (__stdcall *g_76b100)(void *);             /* LeaveCriticalSection IAT */
extern unsigned int g_856b8c;                          /* DAT_00856b8c */

extern void __cdecl FUN_00756590(void);
extern void __cdecl FUN_00756790(void);
extern void __cdecl FUN_00756670(void);
extern void __cdecl FUN_007568d0(void);
extern void __cdecl FUN_00756810(void);
extern void __cdecl FUN_00756870(void);
extern void __cdecl FUN_00756aa0(void);
extern void __cdecl FUN_00756a60(void);
extern void __cdecl FUN_00756c40(void);
extern int __cdecl FUN_006fab90(const char *);
extern void __cdecl FUN_00755ba0(void);
extern void __cdecl FUN_00755e40(void);

__declspec(naked) void __stdcall FUN_00755980(void *this, void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        push    0x858ac8
        mov     esi, ecx
        call    dword ptr [g_76b110]
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        mov     dword ptr [esi + 0x9c], eax
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        jz      L_59b7
        push    0x7f
        push    eax
        lea     ecx, [esi + 0xa0]
        push    ecx
        call    dword ptr [g_76b320]
        add     esp, 0xc
L_59b7:
        cmp     dword ptr [esi + 0x70], edi
        jnz     L_5a8a
        mov     edx, dword ptr [esi + 0x6c]
        cmp     edx, dword ptr [esi + 0x68]
        jnz     L_5a8a
        mov     eax, dword ptr [esi + 0x5c]
        push    eax
        mov     ecx, esi
        call    FUN_00756590
        test    byte ptr [esi + 0x68], 0x8
        jz      L_59e8
        mov     ecx, dword ptr [esi + 0x64]
        push    ecx
        mov     ecx, esi
        call    FUN_00756790
L_59e8:
        test    byte ptr [esi + 0x68], 0x4
        jz      L_59f9
        mov     edx, dword ptr [esi + 0x60]
        push    edx
        mov     ecx, esi
        call    FUN_00756670
L_59f9:
        mov     eax, dword ptr [esi + 0x68]
        test    ah, 0x2
        jz      L_5a10
        mov     eax, dword ptr [esi + 0x54]
        mov     ecx, dword ptr [esi + 0x50]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_007568d0
L_5a10:
        test    byte ptr [esi + 0x68], 0x20
        jz      L_5a29
        mov     edx, dword ptr [esi + 0x28]
        mov     eax, dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x20]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00756810
L_5a29:
        test    byte ptr [esi + 0x68], 0x40
        jz      L_5a42
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x2c]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00756870
L_5a42:
        test    dword ptr [esi + 0x68], 0x10000
        jz      L_5a5e
        mov     edx, dword ptr [esi + 0x48]
        mov     eax, dword ptr [esi + 0x44]
        mov     ecx, dword ptr [esi + 0x40]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00756aa0
L_5a5e:
        mov     eax, dword ptr [esi + 0x68]
        test    ah, 0x80
        jz      L_5b88
        mov     edx, dword ptr [esi + 0x3c]
        mov     eax, dword ptr [esi + 0x38]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00756a60
        push    0x858ac8
        call    dword ptr [g_76b100]
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
L_5a8a:
        mov     ecx, dword ptr [esi + 0x68]
        mov     dword ptr [esi + 0x6c], ecx
        mov     ecx, esi
        call    FUN_00756c40
        mov     eax, dword ptr [g_856b8c]
        test    eax, eax
        mov     edx, dword ptr [edi + 0x24]
        mov     dword ptr [esi + 0x70], edi
        mov     dword ptr [esi + 0x90], edx
        jnz     L_5abe
        push    0x7ae4b8
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_5abe
        int     3
L_5abe:
        mov     eax, dword ptr [esi + 0x9c]
        cmp     eax, 0x4
        jz      L_5ad7
        cmp     eax, 0x6
        jz      L_5ad7
        mov     ecx, esi
        call    FUN_00755ba0
        jmp     L_5adf
L_5ad7:
        push    edi
        mov     ecx, esi
        call    FUN_00755e40
L_5adf:
        mov     eax, dword ptr [esi + 0x5c]
        push    eax
        mov     ecx, esi
        call    FUN_00756590
        test    byte ptr [esi + 0x68], 0x8
        jz      L_5afb
        mov     ecx, dword ptr [esi + 0x64]
        push    ecx
        mov     ecx, esi
        call    FUN_00756790
L_5afb:
        test    byte ptr [esi + 0x68], 0x4
        jz      L_5b0c
        mov     edx, dword ptr [esi + 0x60]
        push    edx
        mov     ecx, esi
        call    FUN_00756670
L_5b0c:
        test    byte ptr [esi + 0x68], 0x20
        jz      L_5b25
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [esi + 0x24]
        mov     edx, dword ptr [esi + 0x20]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00756810
L_5b25:
        test    byte ptr [esi + 0x68], 0x40
        jz      L_5b3e
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [esi + 0x30]
        mov     edx, dword ptr [esi + 0x2c]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00756870
L_5b3e:
        test    dword ptr [esi + 0x68], 0x10000
        jz      L_5b5a
        mov     eax, dword ptr [esi + 0x48]
        mov     ecx, dword ptr [esi + 0x44]
        mov     edx, dword ptr [esi + 0x40]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00756aa0
L_5b5a:
        mov     eax, dword ptr [esi + 0x68]
        test    ah, 0x80
        jz      L_5b71
        mov     eax, dword ptr [esi + 0x3c]
        mov     ecx, dword ptr [esi + 0x38]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00756a60
L_5b71:
        mov     eax, dword ptr [esi + 0x68]
        test    ah, 0x2
        jz      L_5b88
        mov     edx, dword ptr [esi + 0x54]
        mov     eax, dword ptr [esi + 0x50]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_007568d0
L_5b88:
        push    0x858ac8
        call    dword ptr [g_76b100]
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
    }
}
