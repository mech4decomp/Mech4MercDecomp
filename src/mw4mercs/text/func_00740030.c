/*
 * FUN_00740030 (1199 B) — COM port enumeration / font-table setup.
 *
 * Loads a font table via FUN_00741f40/FUN_00741930, then probes COM1..COM8
 * with CreateFileA (IAT 0x0076b0e8), building a linked list of port records
 * (head DAT_008aaafc) and setting DAT_008aaaef. Uses sprintf (IAT 0x0076b420),
 * malloc/free (0x0076b294/0x0076b2d0), CloseHandle (0x0076b0ec).
 *
 * __cdecl, no params, plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8aaaec;             /* DAT_008aaaec */
extern char g_8aaaed;             /* DAT_008aaaed */
extern char g_8aaaee;             /* DAT_008aaaee */
extern char g_8aaaef;             /* DAT_008aaaef */
extern char g_8aaaf0;             /* DAT_008aaaf0 */
extern int g_8aaaf4;              /* DAT_008aaaf4 */
extern int g_7a2f34;              /* DAT_007a2f34 */
extern int g_7a2f30;              /* DAT_007a2f30 */
extern int g_7a2f3c;              /* DAT_007a2f3c */
extern int g_7a2f94;              /* DAT_007a2f94 */
extern int g_7a2f9c;              /* DAT_007a2f9c */
extern int g_7a2fb4;              /* DAT_007a2fb4 */
extern int g_7a2f38;              /* DAT_007a2f38 */
extern int g_7a2fbc;              /* DAT_007a2fbc */
extern int g_7a2f90;              /* DAT_007a2f90 */
extern int g_7a2f98;              /* DAT_007a2f98 */
extern int g_7a2fb0;              /* DAT_007a2fb0 */
extern int g_7a2fb8;              /* DAT_007a2fb8 */
extern int g_8aaae8;              /* DAT_008aaae8 */
extern char g_87dd0a;             /* DAT_0087dd0a */
extern int g_8aaafc;              /* DAT_008aaafc — port list head */
extern int g_8aab00;              /* DAT_008aab00 */
extern int g_7a2f74;              /* DAT_007a2f74 */
extern int g_7a2f70;              /* DAT_007a2f70 */
extern int g_7a2f50;              /* DAT_007a2f50 */
extern int g_7a2f7c;              /* DAT_007a2f7c */
extern int g_7a2f58;              /* DAT_007a2f58 */
extern int g_7a2f78;              /* DAT_007a2f78 */
extern int g_7a2f54;              /* DAT_007a2f54 */
extern int g_7a2f5c;              /* DAT_007a2f5c */
extern int g_849314;              /* DAT_00849314 */

extern void *g_76b294;            /* malloc */
extern void *g_76b2d0;            /* free */
extern void *g_76b420;            /* IAT: sprintf */
extern void *g_76b0e8;            /* IAT: CreateFileA */
extern void *g_76b0ec;            /* IAT: CloseHandle */

extern void __cdecl FUN_00740d10(void);
extern void __cdecl FUN_00707920(void);
extern void __cdecl FUN_00741f40(void);
extern void __cdecl FUN_00741930(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_007005d0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00741700(void);
extern void __cdecl FUN_00741f90(void);

__declspec(naked) void __cdecl FUN_00740030(void)
{
    __asm {
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x14]
        push    eax
        xor     ebx, ebx
        push    0x7a2e00
        push    0x1
        push    ebx
        push    0x7a2e10
        mov     byte ptr [g_8aaaec], bl
        mov     byte ptr [g_8aaaed], bl
        mov     byte ptr [g_8aaaee], bl
        mov     byte ptr [g_8aaaef], bl
        mov     byte ptr [g_8aaaf0], bl
        mov     dword ptr [g_8aaaf4], ebx
        call    FUN_00740d10
        call    FUN_00707920
        mov     edx, dword ptr [g_7a2f34]
        mov     ecx, dword ptr [g_7a2f30]
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [g_7a2f3c]
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, dword ptr [g_7a2f94]
        mov     dword ptr [esp + 0x4c], edx
        mov     edx, dword ptr [g_7a2f9c]
        mov     dword ptr [esp + 0x54], edx
        mov     edx, dword ptr [g_7a2fb4]
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [g_7a2f38]
        mov     dword ptr [esp + 0x64], edx
        mov     edx, dword ptr [g_7a2fbc]
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [g_7a2f90]
        mov     dword ptr [esp + 0x6c], edx
        xor     edx, edx
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [g_7a2f98]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [g_7a2fb0]
        setnz   dl
        mov     dword ptr [esp + 0x60], ecx
        mov     ecx, dword ptr [g_7a2fb8]
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [esp + 0x10]
        push    eax
        mov     dword ptr [esp + 0x6c], ecx
        add     edx, 0x2
        push    ebx
        lea     ecx, [esp + 0x24]
        mov     edi, edx
        mov     edx, dword ptr [g_8aaae8]
        mov     dword ptr [esp + 0x7c], ecx
        push    edi
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x54], 0x10
        mov     dword ptr [esp + 0x58], 0x7a2e30
        mov     dword ptr [esp + 0x6c], 0x1
        mov     dword ptr [esp + 0x70], 0x76b768
        mov     dword ptr [esp + 0x84], 0x4
        mov     byte ptr [g_87dd0a], 0x1
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00741f40
        mov     eax, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [g_76b294]
        push    eax
        call    ebp
        add     esp, 0x4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     esi, eax
        mov     eax, dword ptr [g_8aaae8]
        push    esi
        push    edi
        lea     edx, [esp + 0x3c]
        push    edx
        push    eax
        call    FUN_00741f40
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        push    esi
        push    ecx
        call    FUN_00741930
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jl      L_019d
        mov     byte ptr [g_8aaaec], 0x1

L_019d:
        mov     edi, dword ptr [g_76b2d0]
        push    esi
        call    edi
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 0x4
        push    edx
        call    FUN_00740db0
        call    FUN_007005d0
        lea     eax, [esp + 0x14]
        push    eax
        push    0x7a2e00
        push    0x1
        push    ebx
        push    0x7a2e10
        call    FUN_00740d10
        mov     edx, dword ptr [g_7a2f34]
        mov     ecx, dword ptr [g_7a2f30]
        mov     eax, dword ptr [g_7a2f38]
        mov     dword ptr [esp + 0x34], edx
        lea     edx, [esp + 0x10]
        push    edx
        push    ebx
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [g_7a2f3c]
        mov     dword ptr [esp + 0x40], eax
        push    0x1
        lea     eax, [esp + 0x3c]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [g_8aaae8]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x54], 0x10
        mov     dword ptr [esp + 0x58], 0x7a2e20
        mov     byte ptr [g_87dd0a], 0x1
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00741f40
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    ebp
        mov     edx, dword ptr [g_8aaae8]
        add     esp, 0x4
        mov     esi, eax
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    edx
        call    FUN_00741f40
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    esi
        push    eax
        call    FUN_00741930
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jl      L_026c
        mov     byte ptr [g_8aaaed], 0x1

L_026c:
        push    esi
        call    edi
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 0x4
        push    ecx
        call    FUN_00740db0
        mov     dword ptr [g_8aaafc], ebx
        mov     ebp, 0x1

L_0287:
        push    ebp
        lea     edx, [esp + 0x28]
        push    0x7a8dcc
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        push    ebx
        push    0x40000000
        push    0x3
        push    ebx
        push    ebx
        push    0xc0000000
        lea     eax, [esp + 0x3c]
        push    eax
        call    dword ptr [g_76b0e8]
        cmp     eax, -0x1
        mov     dword ptr [esp + 0x20], eax
        jz      L_034a
        mov     ecx, dword ptr [g_849314]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x28]
        repne scasb
        not     ecx
        add     ecx, 0x17
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     dword ptr [edx], ebx
        mov     dword ptr [edx + 0x4], ebp
        lea     edi, [esp + 0x24]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [edx + 0x14]
        mov     dword ptr [esp + 0x18], esi
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x18]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [g_8aaafc]
        cmp     ecx, ebx
        jz      L_032c
        mov     eax, dword ptr [ecx]
        cmp     eax, ebx
        jz      L_0328

L_0320:
        mov     ecx, eax
        mov     eax, dword ptr [ecx]
        cmp     eax, ebx
        jnz     L_0320

L_0328:
        mov     dword ptr [ecx], edx
        jmp     L_0332

L_032c:
        mov     dword ptr [g_8aaafc], edx

L_0332:
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov     byte ptr [g_8aaaef], 0x1
        call    dword ptr [g_76b0ec]
        mov     edi, dword ptr [g_76b2d0]

L_034a:
        inc     ebp
        cmp     ebp, 0x9
        jl      L_0287
        lea     edx, [esp + 0x14]
        push    edx
        push    0x7a2e00
        mov     esi, 0x1
        push    esi
        push    ebx
        push    0x7a2e10
        mov     dword ptr [g_8aab00], ebx
        call    FUN_00740d10
        mov     edx, dword ptr [g_7a2f38]
        mov     ecx, dword ptr [g_7a2f34]
        mov     eax, dword ptr [g_7a2f30]
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [g_7a2f74]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [g_7a2f70]
        mov     dword ptr [esp + 0x4c], edx
        mov     edx, dword ptr [g_7a2f50]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [g_7a2f3c]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [g_7a2f7c]
        mov     dword ptr [esp + 0x60], edx
        mov     edx, dword ptr [g_7a2f58]
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, dword ptr [g_7a2f78]
        mov     dword ptr [esp + 0x54], ecx
        mov     ecx, dword ptr [g_7a2f54]
        mov     dword ptr [esp + 0x68], edx
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x54], eax
        mov     eax, 0x76b768
        push    ebx
        mov     dword ptr [esp + 0x6c], ecx
        mov     ecx, dword ptr [g_7a2f5c]
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x7c], eax
        push    0x3
        lea     eax, [esp + 0x3c]
        mov     dword ptr [esp + 0x78], ecx
        mov     ecx, dword ptr [g_8aaae8]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x54], 0x10
        mov     dword ptr [esp + 0x58], 0x7a2e50
        mov     dword ptr [esp + 0x6c], esi
        mov     dword ptr [esp + 0x84], esi
        mov     byte ptr [g_87dd0a], 0x1
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00741f40
        mov     edx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [g_76b294]
        push    edx
        call    ebp
        mov     edx, dword ptr [g_8aaae8]
        add     esp, 0x4
        mov     esi, eax
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x3
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    edx
        call    FUN_00741f40
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    esi
        push    eax
        call    FUN_00741930
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jl      L_04c7
        mov     edx, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    ebx
        push    ebx
        push    edx
        mov     dword ptr [esp + 0x28], ebx
        call    FUN_00741700
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    ebp
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ebp, eax
        push    ebp
        push    ebx
        push    edx
        call    FUN_00741700
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_8aaae8]
        push    ebx
        push    eax
        push    ebp
        push    0x742430
        push    ecx
        call    FUN_00741f90
        push    ebp
        call    edi
        add     esp, 0x4

L_04c7:
        push    esi
        call    edi
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 0x4
        push    edx
        call    FUN_00740db0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x68
        ret
    }
}
