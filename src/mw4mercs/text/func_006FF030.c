/*
 * FUN_006FF030 (648 B) — __stdcall (RET 0xC). Log/formatting helper that
 * builds a message via the log API (0x6f89f0/0x6f5e50/0x6f5b80), queries
 * several global config words, and dispatches through object vtables.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F89F0(void);
extern void __cdecl FUN_006F5E50(void);
extern void __cdecl FUN_006F5B80(void);
extern void __cdecl FUN_006F3C80(void);
extern void* g_0076B110;
extern void* g_0076B318;
extern void* g_0076B100;
extern unsigned int g_0076B634;
extern unsigned int g_007A2F34;
extern unsigned int g_007A2F30;
extern unsigned int g_007A2F38;
extern unsigned int g_007A2F90;
extern unsigned int g_007A2F3C;
extern unsigned int g_007A2F9C;
extern unsigned int g_007A2F94;
extern unsigned int g_007A2F98;
extern unsigned int g_007A2FB4;
extern unsigned int g_007A2FB8;
extern unsigned int g_007A2FB0;
extern unsigned int g_007A2FBC;
extern unsigned int g_008589A4;
extern unsigned int g_008589A8;
extern unsigned int g_008589AC;
extern unsigned int g_008589B0;

__declspec(naked) void FUN_006FF030(void)
{
    __asm {
        sub     esp, 0xa8
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x8aaa20
        call    dword ptr [g_0076B110]
        mov     eax, dword ptr [esp + 0xc0]
        push    eax
        xor     ebp, ebp
        push    0x79fa10
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x18], ebp
        call    FUN_006F89F0
        mov     ecx, eax
        call    FUN_006F5E50
        mov     esi, eax
        push    0x79fa18
        push    esi
        call    FUN_006F89F0
        mov     ecx, eax
        call    FUN_006F5B80
        push    0x79fa54
        push    esi
        mov     ebx, eax
        call    FUN_006F89F0
        mov     ecx, eax
        call    FUN_006F5B80
        cmp     eax, ebp
        je      L6FF0A7
        push    eax
        call    dword ptr [g_0076B318]
        add     esp, 4
        cmp     eax, 1
        mov     dword ptr [esp + 0x18], eax
        jne     L6FF0AB
L6FF0A7:
        mov     dword ptr [esp + 0x18], ebp
L6FF0AB:
        mov     edi, dword ptr [g_0076B634]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x7a2e00
        push    7
        push    ebp
        push    0x7a2e10
        call    edi
        test    eax, eax
        jl      L6FF272
        mov     esi, dword ptr [esp + 0xc4]
        mov     eax, dword ptr [esi]
        cmp     eax, ebp
        je      L6FF0E2
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov     dword ptr [esi], ebp
L6FF0E2:
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7a2eb0
        push    7
        push    ebp
        push    0x7a2ed0
        mov     dword ptr [esi], eax
        call    edi
        test    eax, eax
        jl      L6FF272
        mov     eax, dword ptr [g_007A2F34]
        mov     edx, dword ptr [g_007A2F30]
        mov     ecx, dword ptr [g_007A2F38]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [g_007A2F90]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [g_007A2F3C]
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [g_007A2F9C]
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [g_007A2F94]
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, dword ptr [g_007A2F98]
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x3c], ecx
        mov     dword ptr [esp + 0x40], edx
        mov     edx, dword ptr [g_007A2FB4]
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     dword ptr [esp + 0x30], 0x10
        mov     dword ptr [esp + 0x34], 0x7a2e30
        mov     edi, ebx
        repne   scasb
        mov     eax, dword ptr [g_007A2FB8]
        mov     dword ptr [esp + 0x54], edx
        mov     dword ptr [esp + 0x58], eax
        lea     edx, [esp + 0x18]
        mov     dword ptr [esp + 0x64], edx
        mov     edx, dword ptr [esp + 0x18]
        xor     eax, eax
        cmp     edx, ebp
        setne   al
        not     ecx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     dword ptr [esp + 0x4c], ecx
        mov     ecx, dword ptr [g_007A2FB0]
        push    ebp
        add     eax, 2
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x58], ecx
        mov     ecx, dword ptr [g_007A2FBC]
        push    esi
        lea     edx, [esp + 0x2c]
        push    edx
        mov     dword ptr [esp + 0x5c], ebx
        mov     dword ptr [esp + 0x6c], ecx
        mov     dword ptr [esp + 0x70], 4
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x38]
        mov     eax, dword ptr [esp + 0x1c]
        push    ebp
        push    eax
        call    FUN_006F3C80
        lea     edx, [esp + 0x1c]
        push    edx
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    edi
        push    esi
        lea     edx, [esp + 0x2c]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x38]
        test    eax, eax
        jl      L6FF272
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    ebp
        push    edi
        push    eax
        call    dword ptr [ecx + 0x98]
        test    eax, eax
        jl      L6FF272
        mov     edx, dword ptr [g_008589A4]
        push    0xc2
        xor     eax, eax
        push    ebp
        mov     ecx, 0x14
        lea     edi, [esp + 0x70]
        rep     stosd
        mov     eax, dword ptr [g_008589A8]
        mov     ecx, dword ptr [g_008589AC]
        mov     dword ptr [esp + 0x88], edx
        mov     edx, dword ptr [g_008589B0]
        push    0x6ff020
        mov     dword ptr [esp + 0x98], edx
        push    ebp
        mov     dword ptr [esp + 0x94], eax
        mov     eax, dword ptr [esp + 0x24]
        lea     edx, [esp + 0x78]
        push    edx
        mov     dword ptr [esp + 0x7c], 0x50
        mov     dword ptr [esp + 0x9c], ecx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x34]
        test    eax, eax
        jge     L6FF29E
L6FF272:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        je      L6FF284
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     dword ptr [esp + 0x10], ebp
L6FF284:
        push    0x8aaa20
        call    dword ptr [g_0076B100]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xa8
        ret     0xc
L6FF29E:
        push    0x8aaa20
        call    dword ptr [g_0076B100]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xa8
        ret     0xc
    }
}
