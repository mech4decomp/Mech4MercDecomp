/*
 * FUN_00740580 (432 B) — DirectInput device creation/setup.
 *
 * __stdcall, RET 8 (2 stack params: name string + flags word).
 * Builds a device-config struct on the stack, calls FUN_00741f40 to
 * size/allocate, registers via FUN_00741930, and initializes the
 * device (FUN_007404f0). Uses malloc/free (IAT) and the error-log
 * helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00741f40(void);
extern void __cdecl FUN_00741930(void);
extern void __cdecl FUN_007404f0(void *param);
extern void __cdecl FUN_00740db0(void *param);
extern void __cdecl FUN_00740d10(void);

extern int  g_7a2f30, g_7a2f34, g_7a2f3c, g_7a2f38;
extern int  g_7a2f94, g_7a2f90, g_7a2f9c, g_7a2f98;
extern int  g_7a2fb0, g_7a2fb4, g_7a2fb8, g_7a2fbc;
extern char g_87dd0a;
extern int  g_8aaae8;
extern int  g_8aaae4;
extern int  g_8aaaf4;
extern void *g_76b294;   /* IAT: malloc */
extern void *g_76b2d0;   /* IAT: free */

__declspec(naked) void FUN_00740580(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        sub     esp, 0x48
        test    edx, edx
        jnz     L_590
        mov     edx, 0x76b768
L_590:
        mov     eax, dword ptr [g_7a2f30]
        mov     ecx, dword ptr [g_7a2f34]
        mov     dword ptr [esp + 4], ecx
        mov     ecx, dword ptr [g_7a2f3c]
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (89 04 24 vs ref 89 44 24 00) */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     eax, dword ptr [g_7a2f38]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [g_7a2f94]
        mov     dword ptr [esp + 8], eax
        mov     eax, dword ptr [g_7a2f90]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [g_7a2f9c]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [g_7a2f98]
        push    esi
        mov     dword ptr [esp + 0x28], ecx
        push    edi
        mov     dword ptr [esp + 0x28], eax
        or      ecx, -1
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        mov     ax, word ptr [esp + 0x58]
        test    ax, ax
        not     ecx
        mov     dword ptr [esp + 0x18], 0x10
        mov     dword ptr [esp + 0x1c], 0x7a2e30
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x34], edx
        jz      L_643
        mov     edx, dword ptr [g_7a2fb0]
        mov     ecx, dword ptr [g_7a2fb4]
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [g_7a2fb8]
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [g_7a2fbc]
        mov     dword ptr [esp + 0x40], edx
        lea     edx, [esp + 0x58]
        mov     dword ptr [esp + 0x44], ecx
        mov     dword ptr [esp + 0x48], 2
        mov     dword ptr [esp + 0x4c], edx
L_643:
        xor     edx, edx
        test    ax, ax
        setnz   dl
        lea     ecx, [esp + 0x54]
        push    ecx
        mov     ecx, dword ptr [g_8aaae8]
        push    0
        lea     eax, [esp + 0x10]
        mov     byte ptr [g_87dd0a], 1
        add     edx, 2
        push    edx
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x68], 0
        call    FUN_00741f40
        mov     edx, dword ptr [esp + 0x54]
        push    edx
        call    dword ptr [g_76b294]
        add     esp, 4
        xor     ecx, ecx
        cmp     word ptr [esp + 0x58], cx
        mov     esi, eax
        setnz   cl
        lea     eax, [esp + 0x54]
        push    eax
        mov     eax, dword ptr [g_8aaae8]
        push    esi
        lea     edx, [esp + 0x10]
        add     ecx, 2
        push    ecx
        push    edx
        push    eax
        call    FUN_00741f40
        mov     ecx, dword ptr [g_8aaae4]
        push    0
        push    esi
        push    ecx
        call    FUN_00741930
        push    esi
        mov     edi, eax
        mov     byte ptr [g_87dd0a], 0
        call    dword ptr [g_76b2d0]
        add     esp, 4
        test    edi, edi
        pop     edi
        pop     esi
        jge     L_6da
        xor     al, al
        add     esp, 0x48
        ret     8
L_6da:
        push    1
        call    FUN_007404f0
        test    eax, eax
        jge     L_71e
        mov     eax, dword ptr [g_8aaae4]
        test    eax, eax
        jz      L_6fe
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_8aaae4], 0
L_6fe:
        push    0x8aaae4
        push    0x7a2e00
        push    1
        push    0
        push    0x7a2e10
        call    FUN_00740d10
        xor     al, al
        add     esp, 0x48
        ret     8
L_71e:
        mov     dword ptr [g_8aaaf4], 1
        mov     al, 1
        add     esp, 0x48
        ret     8
    }
}
