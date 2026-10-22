/*
 * FUN_00703bb0 (683 B) — __stdcall RET 8 (2 args). Builds a log/error
 * record structure on the stack, calls the log dispatcher FUN_00741f40,
 * then FUN_00741930 / FUN_00741330 / FUN_00741980 to emit the message.
 * Returns 1 on success, 0 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_00707920(void);
extern void FUN_00741f40(void);
extern int FUN_006f3c80(void);
extern int FUN_00741930(void);
extern void FUN_006f4230(void);
extern void FUN_00741330(void);
extern int FUN_00741980(void);
extern void FUN_00740ec0(void);

extern int g_7a2f34;
extern int g_7a2f30;
extern int g_7a2f3c;
extern int g_7a2f38;
extern int g_7a2f94;
extern int g_7a2f90;
extern int g_7a2f9c;
extern int g_7a2f98;
extern int g_7a2fb0;
extern int g_7a2fb4;
extern int g_7a2fbc;
extern int g_7a2fb8;
extern int g_8aaae8;
extern int g_8aaae4;
extern unsigned char g_87dd0a;
extern int g_849308;
extern int g_8aaa80;
extern int g_8aaa84;
extern int g_8aaa88;
extern int g_8aaa8c;
extern int g_8aaa70;
extern int g_8aaa74;
extern int g_8aaa78;
extern int g_8aaa7c;

__declspec(naked) int __stdcall FUN_00703bb0(void)
{
    __asm {
        sub     esp, 0xa0
        push    ebx
        push    esi
        push    edi
        call    FUN_00707920
        mov     ecx, dword ptr [g_7a2f34]
        mov     esi, dword ptr [esp + 0xb0]
        mov     edx, eax
        mov     eax, dword ptr [g_7a2f30]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [g_7a2f3c]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [g_7a2f38]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [g_7a2f94]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [g_7a2f90]
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [g_7a2f9c]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [g_7a2f98]
        mov     dword ptr [esp + 0x38], ecx
        or      ecx, 0xffffffff
        mov     dword ptr [esp + 0x34], eax
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        mov     eax, dword ptr [g_7a2fb0]
        not     ecx
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [g_7a2fb4]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [g_7a2fbc]
        mov     dword ptr [esp + 0x50], ecx
        xor     ecx, ecx
        xor     ebx, ebx
        cmp     edx, ebx
        setnz   cl
        mov     dword ptr [esp + 0x44], eax
        mov     eax, dword ptr [g_7a2fb8]
        mov     dword ptr [esp + 0x10], edx
        lea     edx, [esp + 0xc]
        push    edx
        mov     dword ptr [esp + 0x50], eax
        add     ecx, 0x2
        push    ebx
        lea     eax, [esp + 0x18]
        mov     edi, ecx
        mov     ecx, dword ptr [g_8aaae8]
        mov     dword ptr [esp + 0x60], eax
        push    edi
        lea     eax, [esp + 0x20]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x38], 0x10
        mov     dword ptr [esp + 0x3c], 0x7a2e30
        mov     dword ptr [esp + 0x54], esi
        mov     dword ptr [esp + 0x68], 0x4
        mov     byte ptr [g_87dd0a], 0x1
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00741f40
        mov     edx, dword ptr [g_849308]
        mov     eax, dword ptr [esp + 0xc]
        push    edx
        push    eax
        call    FUN_006f3c80
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     esi, eax
        mov     eax, dword ptr [g_8aaae8]
        push    esi
        push    edi
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        call    FUN_00741f40
        mov     ecx, dword ptr [g_8aaae4]
        push    ebx
        push    esi
        push    ecx
        call    FUN_00741930
        mov     byte ptr [g_87dd0a], bl
        cmp     eax, ebx
        push    esi
        jge     L_703cf7
        call    FUN_006f4230
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0xa0
        ret     0x8
L_703cf7:
        call    FUN_006f4230
        mov     edx, dword ptr [g_8aaa80]
        xor     eax, eax
        mov     ecx, 0x14
        lea     edi, [esp + 0x5c]
        rep     stosd
        mov     eax, dword ptr [g_8aaa84]
        mov     ecx, dword ptr [g_8aaa88]
        push    0x83
        mov     dword ptr [esp + 0x7c], eax
        mov     eax, dword ptr [esp + 0xb8]
        push    eax
        push    0x703b40
        mov     dword ptr [esp + 0x80], edx
        mov     edx, dword ptr [g_8aaa8c]
        mov     dword ptr [esp + 0x88], ecx
        push    0x1388
        lea     ecx, [esp + 0x6c]
        mov     dword ptr [esp + 0x90], edx
        mov     edx, dword ptr [g_8aaae4]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x74], 0x50
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741330
        mov     ecx, 0x4
        mov     edi, 0x7afaf0
        mov     esi, 0x8aaa70
        xor     eax, eax
        repe    cmpsd
        mov     byte ptr [g_87dd0a], bl
        jnz     L_703d99
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0xa0
        ret     0x8
L_703d99:
        mov     edx, dword ptr [g_8aaa84]
        xor     eax, eax
        mov     ecx, 0x14
        lea     edi, [esp + 0x5c]
        rep     stosd
        mov     ecx, dword ptr [g_8aaa80]
        mov     eax, dword ptr [g_8aaa88]
        mov     dword ptr [esp + 0x74], ecx
        mov     ecx, dword ptr [g_8aaa8c]
        mov     dword ptr [esp + 0x7c], eax
        mov     eax, dword ptr [g_8aaa74]
        mov     dword ptr [esp + 0x80], ecx
        mov     ecx, dword ptr [g_8aaa78]
        mov     dword ptr [esp + 0x78], edx
        mov     edx, dword ptr [g_8aaa70]
        mov     dword ptr [esp + 0x68], eax
        push    0x81
        lea     eax, [esp + 0x60]
        mov     dword ptr [esp + 0x70], ecx
        mov     ecx, dword ptr [g_8aaae4]
        mov     dword ptr [esp + 0x68], edx
        mov     edx, dword ptr [g_8aaa7c]
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], 0x1
        mov     dword ptr [esp + 0x68], 0x50
        mov     dword ptr [esp + 0x7c], edx
        call    FUN_00741980
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jge     L_703e4d
        mov     edx, dword ptr [g_8aaae4]
        push    edx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00740ec0
        pop     edi
        pop     esi
        mov     byte ptr [g_87dd0a], bl
        xor     al, al
        pop     ebx
        add     esp, 0xa0
        ret     0x8
L_703e4d:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        add     esp, 0xa0
        ret     0x8
    }
}
