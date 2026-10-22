/*
 * FUN_00702dc0 (433 B) — __stdcall RET 4. Initialization/retry routine.
 *
 * Reads param_1 (EBP); if 0, derives it from DAT_008493d4. Builds a
 * stack struct from a set of DAT_007a2fxx globals, calls FUN_00707920,
 * FUN_00741f40 (twice), FUN_006f3c80, FUN_00741930, FUN_006f4230, and
 * recursively retries with param=2 on failure. Sets DAT_0087dd0a /
 * DAT_008589a2 / DAT_008aaa6c flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char DAT_008493d4;
extern int  DAT_007a2f30;
extern int  DAT_007a2f34;
extern int  DAT_007a2f38;
extern int  DAT_007a2f3c;
extern int  DAT_007a2f90;
extern int  DAT_007a2f94;
extern int  DAT_007a2f98;
extern int  DAT_007a2f9c;
extern int  DAT_007a2fb0;
extern int  DAT_007a2fb4;
extern int  DAT_007a2fb8;
extern int  DAT_007a2fbc;
extern int  DAT_008aaae8;
extern int  DAT_008aaae4;
extern int  DAT_00849308;
extern int  DAT_008aaa6c;
extern char DAT_0087dd0a;
extern char DAT_008589a2;

extern void __cdecl FUN_00707920(void);
extern void __cdecl FUN_00741f40(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00741930(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00702dc0(void);

__declspec(naked) int __stdcall func_00702dc0(int param)
{
    __asm {
        sub     esp, 0x4c
        push    ebp
        mov     ebp, dword ptr [esp + 0x54]
        test    ebp, ebp
        push    esi
        push    edi
        jnz     L_dde
        mov     dl, byte ptr [DAT_008493d4]
        xor     eax, eax
        test    dl, dl
        setnz   al
        inc     eax
        mov     ebp, eax
L_dde:
        call    FUN_00707920
        cmp     ebp, 0x2
        mov     ecx, dword ptr [DAT_007a2f30]
        mov     edx, dword ptr [DAT_007a2f34]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [DAT_007a2f38]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [DAT_007a2f3c]
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], 0x10
        jnz     L_e2c
        xor     eax, eax
        mov     dword ptr [esp + 0x24], 0x7a2e20
        mov     dword ptr [esp + 0xc], eax
        jmp     L_e34
L_e2c:
        mov     dword ptr [esp + 0x24], 0x7a2e30
L_e34:
        mov     edx, dword ptr [DAT_007a2f94]
        mov     ecx, dword ptr [DAT_007a2f90]
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, dword ptr [DAT_007a2f9c]
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [DAT_007a2fb4]
        mov     dword ptr [esp + 0x44], edx
        mov     edx, dword ptr [DAT_007a2fbc]
        mov     dword ptr [esp + 0x4c], edx
        xor     edx, edx
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [DAT_007a2f98]
        test    eax, eax
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [DAT_007a2fb0]
        setnz   dl
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [DAT_007a2fb8]
        lea     eax, [esp + 0x5c]
        push    eax
        mov     dword ptr [esp + 0x4c], ecx
        push    0x0
        add     edx, 0x2
        lea     ecx, [esp + 0x14]
        mov     edi, edx
        mov     edx, dword ptr [DAT_008aaae8]
        mov     dword ptr [esp + 0x5c], ecx
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x4c], 0x1
        mov     dword ptr [esp + 0x50], 0x76b768
        mov     dword ptr [esp + 0x64], 0x4
        mov     byte ptr [DAT_0087dd0a], 0x1
        mov     dword ptr [esp + 0x70], 0x0
        call    FUN_00741f40
        mov     eax, dword ptr [DAT_00849308]
        mov     ecx, dword ptr [esp + 0x5c]
        push    eax
        push    ecx
        call    FUN_006f3c80
        mov     ecx, dword ptr [DAT_008aaae8]
        lea     edx, [esp + 0x5c]
        push    edx
        mov     esi, eax
        push    esi
        push    edi
        lea     eax, [esp + 0x1c]
        push    eax
        push    ecx
        call    FUN_00741f40
        mov     edx, dword ptr [DAT_008aaae4]
        push    0x0
        push    esi
        push    edx
        call    FUN_00741930
        mov     edi, eax
        test    edi, edi
        mov     byte ptr [DAT_0087dd0a], 0x0
        jge     L_f39
        push    esi
        call    FUN_006f4230
        cmp     ebp, 0x2
        jz      L_f39
        push    0x2
        call    FUN_00702dc0
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x4c
        ret     0x4
L_f39:
        cmp     ebp, 0x1
        jz      L_f54
        mov     eax, dword ptr [DAT_008aaa6c]
        or      eax, 0x2000
        mov     byte ptr [DAT_008589a2], 0x1
        mov     dword ptr [DAT_008aaa6c], eax
L_f54:
        push    esi
        call    FUN_006f4230
        xor     eax, eax
        test    edi, edi
        pop     edi
        pop     esi
        mov     byte ptr [DAT_0087dd0a], 0x0
        setl    al
        pop     ebp
        add     esp, 0x4c
        ret     0x4
    }
}
