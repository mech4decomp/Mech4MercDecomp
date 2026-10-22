/*
 * FUN_007472A0 (944 B) — __stdcall (1 dword param), RET 4.
 *
 * Creates a game object/stream from a source object (param_1). Reads the
 * object's vtable header; if the first dword of *param_1 is 0x80000003 it
 * returns 0 immediately. Otherwise allocates a large (0x11d8-byte) object,
 * fills it with string data copied from several .rdata string literals and a
 * global string, sets up IAT/stream handles, and runs a message/event loop
 * (0x4e20 timeout) dispatching through IAT function pointers. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_76b178)(void);
extern void (__stdcall *g_76b174)(void);
extern void (__stdcall *g_76b16c)(void);
extern void (__stdcall *g_76b21c)(void);
extern void (__stdcall *g_76b23c)(void);
extern void (__stdcall *g_76b1d8)(void);
extern void (__stdcall *g_76b208)(void);
extern void (__stdcall *g_76b158)(void);
extern void (__stdcall *g_76b3e0)(void);
extern void (__stdcall *g_76b264)(void);
extern void (__stdcall *g_76b4f8)(void);
extern void (__stdcall *g_76b0d4)(void);
extern void (__stdcall *g_76b0f4)(void);
extern void (__stdcall *g_76b168)(void);
extern void (__stdcall *g_76b210)(void);
extern void (__stdcall *g_76b0ec)(void);
extern void (__stdcall *g_76b17c)(void);
extern char g_858920;   /* DAT_00858920 (string pointer) */
extern int  g_8b27f0;   /* DAT_008b27f0 */
extern char g_858954;   /* DAT_00858954 */
extern int  g_858bf8;   /* DAT_00858bf8 */
extern void __cdecl FUN_0070a920(void);
extern void __cdecl FUN_006fab20(void);

__declspec(naked) void FUN_007472A0(void)
{
    __asm {
        sub     esp, 0x278
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x288]
        mov     eax, dword ptr [esi]
        cmp     dword ptr [eax], 0x80000003
        push    edi
        jne     L_ca
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x278
        ret     4
L_ca:
        xor     ecx, ecx
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x24], ecx
        push    ecx
        push    0x11d8
        push    ecx
        push    4
        lea     edx, [esp + 0x30]
        push    edx
        mov     dword ptr [esp + 0x3c], ecx
        push    -1
        mov     dword ptr [esp + 0x38], 0xc
        mov     dword ptr [esp + 0x40], 1
        call    dword ptr [g_76b178]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        je      L_635
        push    0
        push    0
        push    0
        push    6
        push    eax
        call    dword ptr [g_76b174]
        mov     ebx, eax
        test    ebx, ebx
        je      L_635
        xor     eax, eax
        push    eax
        push    eax
        mov     ecx, 0x476
        mov     edi, ebx
        rep stosd
        mov     edi, dword ptr [g_76b16c]
        push    eax
        lea     eax, [esp + 0x2c]
        push    eax
        call    edi
        push    0
        push    0
        push    0
        lea     ecx, [esp + 0x2c]
        mov     ebp, eax
        push    ecx
        mov     dword ptr [esp + 0x28], ebp
        call    edi
        push    0
        push    0
        lea     edx, [esp + 0x28]
        push    edx
        mov     dword ptr [esp + 0x1c], eax
        call    dword ptr [g_76b21c]
        mov     edi, dword ptr [g_76b23c]
        push    0
        push    1
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [ebx + 0x24]
        push    0x1f0fff
        push    eax
        call    edi
        push    eax
        call    edi
        push    eax
        call    edi
        push    eax
        call    dword ptr [g_76b1d8]
        test    eax, eax
        je      L_635
        test    ebp, ebp
        je      L_635
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_635
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        je      L_635
        mov     eax, dword ptr [ebx + 0x24]
        test    eax, eax
        je      L_635
        call    dword ptr [g_76b208]
        mov     dword ptr [ebx + 4], eax
        call    dword ptr [g_76b158]
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx + 0xc]
        or      ecx, 0xffffffff
        mov     dword ptr [ebx + 0x20], edi
        mov     dword ptr [ebx + 8], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0x14], eax
        mov     dword ptr [ebx + 0x1c], ebp
        mov     ebp, dword ptr [g_858920]
        mov     eax, 7
        mov     dword ptr [ebx + 0x34], eax
        mov     dword ptr [ebx + 0x3c], eax
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     dword ptr [ebx + 0x10], esi
        mov     esi, edi
        mov     dword ptr [ebx + 0xc], edx
        mov     dword ptr [ebx], 0x11d8
        mov     dword ptr [ebx + 0x28], 4
        lea     edx, [ebx + 0x48]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7aa338
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebx + 0x80]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7aa314
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebx + 0x6d0]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        mov     edi, 0x7aa2fc
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebx + 0x3c4]
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [g_8b27f0]
        push    ecx
        lea     edx, [ebx + 0x1bc]
        push    edx
        call    dword ptr [g_76b3e0]
        add     esp, 8
        push    0x104
        lea     eax, [ebx + 0xb8]
        push    eax
        push    0
        call    dword ptr [g_76b264]
        mov     edx, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     ecx, 0x11
        lea     edi, [esp + 0x3c]
        rep stosd
        xor     ecx, ecx
        mov     dword ptr [esp + 0x2c], ecx
        push    edx
        mov     dword ptr [esp + 0x34], ecx
        lea     eax, [esp + 0x84]
        mov     dword ptr [esp + 0x38], ecx
        push    0x7aa2f0
        push    eax
        mov     dword ptr [esp + 0x48], 0x44
        mov     dword ptr [esp + 0x44], ecx
        call    dword ptr [g_76b4f8]
        mov     al, byte ptr [g_858954]
        add     esp, 0xc
        test    al, al
        je      L_548
        mov     eax, dword ptr [g_858bf8]
        test    eax, eax
        je      L_548
        call    FUN_0070a920
L_548:
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     edx, [esp + 0x40]
        push    edx
        push    0
        push    0
        push    0x4000020
        push    1
        push    0
        push    0
        lea     eax, [esp + 0xa0]
        push    eax
        push    0
        call    dword ptr [g_76b0d4]
        test    eax, eax
        je      L_617
        mov     esi, dword ptr [g_76b0f4]
        mov     ebp, 1
L_584:
        mov     ecx, dword ptr [esp + 0x18]
        push    0x4e20
        push    ecx
        call    esi
        test    eax, eax
        jne     L_5a7
        mov     edx, dword ptr [esp + 0x10]
        push    1
        push    edx
        call    esi
        test    eax, eax
        mov     edi, dword ptr [esp + 0x14]
        je      L_5fe
        jmp     L_5f1
L_5a7:
        mov     edi, dword ptr [esp + 0x14]
        push    0x4e20
        push    edi
        call    esi
        cmp     eax, 0x102
        je      L_5fe
        cmp     eax, 0x80
        je      L_5f7
        mov     eax, dword ptr [esp + 0x18]
        push    1
        push    eax
        call    esi
        test    eax, eax
        je      L_5db
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    dword ptr [g_76b168]
        jmp     L_5e8
L_5db:
        mov     edx, dword ptr [esp + 0x10]
        push    1
        push    edx
        call    esi
        test    eax, eax
        jne     L_5ea
L_5e8:
        xor     ebp, ebp
L_5ea:
        push    edi
        call    dword ptr [g_76b210]
L_5f1:
        test    ebp, ebp
        je      L_5fe
        jmp     L_584
L_5f7:
        push    edi
        call    dword ptr [g_76b210]
L_5fe:
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, dword ptr [g_76b0ec]
        push    eax
        call    esi
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    esi
        push    edi
        call    esi
        jmp     L_61d
L_617:
        mov     esi, dword ptr [g_76b0ec]
L_61d:
        push    ebx
        call    dword ptr [g_76b17c]
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        call    esi
        mov     eax, dword ptr [esp + 0x28c]
        push    eax
        jmp     L_636
L_635:
        push    esi
L_636:
        call    FUN_006fab20
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x278
        ret     4
    }
}
