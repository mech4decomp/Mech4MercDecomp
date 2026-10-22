/*
 * FUN_00735FC0 (743 B) — __cdecl, RET 0x1C (7 stack args). Uses a large
 * stack frame (0x4EC8 via __chkstk FUN_0075DC00). Calls IAT functions
 * (0x8aad0c/08/04), asserts via FUN_006FAB90 + int3, allocates a buffer,
 * and does a pixel-format conversion loop (RGB byte -> 0xRRGGBB dword).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075DC00(void);
extern void __cdecl FUN_006FAB90(void);
extern void __cdecl FUN_006F3C80(void);
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_006F4940(void);
extern void __cdecl FUN_007353F0(void);
extern void __cdecl FUN_006F4230(void);
extern void __cdecl FUN_00735440(void);

extern void *g_8aad0c;
extern void *g_8aad08;
extern void *g_8aad04;
extern unsigned long g_849324;
extern unsigned long g_85a22c;
extern char g_7a66b8[];
extern char g_7a66cc[];

__declspec(naked) void func_00735FC0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, 0x4ec8
        call    FUN_0075DC00
        push    ebx
        push    esi
        push    edi
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x88]
        mov     dword ptr [ebp - 4], eax
        mov     dword ptr [ebp - 8], eax
        rep     stosd
        lea     eax, [ebp - 0x4ec8]
        push    eax
        call    dword ptr [g_8aad0c]
        test    eax, eax
        je      L_6019
        lea     ecx, [ebp - 0x4ec8]
        push    ecx
        call    dword ptr [g_8aad08]
        mov     edx, dword ptr [ebp + 8]
        push    edx
        push    offset g_7a66b8
        call    FUN_006FAB90
        add     esp, 8
        test    eax, eax
        je      L_6019
        int     3
L_6019:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        push    1
        lea     edx, [ebp - 0x4ec8]
        push    edx
        mov     dword ptr [ebp - 0x4ea4], eax
        mov     dword ptr [ebp - 0x4ea0], ecx
        call    dword ptr [g_8aad04]
        test    eax, eax
        je      L_6061
        lea     eax, [ebp - 0x4ec8]
        push    eax
        call    dword ptr [g_8aad08]
        mov     ecx, dword ptr [ebp + 8]
        push    ecx
        push    offset g_7a66b8
        call    FUN_006FAB90
        add     esp, 8
        test    eax, eax
        je      L_6061
        int     3
L_6061:
        mov     eax, dword ptr [ebp - 0x4e98]
        mov     esi, dword ptr [ebp - 0x4e9c]
        mov     edx, dword ptr [g_849324]
        mov     edi, eax
        imul    eax, esi
        push    edx
        lea     eax, [eax + eax*2]
        push    eax
        call    FUN_006F3C80
        mov     ecx, dword ptr [ebp - 0x4e94]
        dec     ecx
        neg     ecx
        sbb     ecx, ecx
        mov     ebx, eax
        push    3
        lea     edx, [ebp - 0x4ec8]
        add     ecx, 4
        push    edx
        mov     dword ptr [ebp - 0xc], ebx
        mov     dword ptr [ebp - 0x4ec4], ebx
        mov     dword ptr [ebp - 0x4ec0], esi
        mov     dword ptr [ebp - 0x4ebc], edi
        mov     dword ptr [ebp - 0x4eb4], 3
        mov     dword ptr [ebp - 0x4eb0], 2
        mov     dword ptr [ebp - 0x4e90], ecx
        mov     dword ptr [ebp - 0x4eb8], 0
        call    dword ptr [g_8aad04]
        test    eax, eax
        je      L_6101
        lea     eax, [ebp - 0x4ec8]
        push    eax
        call    dword ptr [g_8aad08]
        mov     ecx, dword ptr [ebp + 8]
        push    ecx
        push    offset g_7a66b8
        call    FUN_006FAB90
        add     esp, 8
        test    eax, eax
        je      L_6101
        int     3
L_6101:
        mov     al, byte ptr [ebp + 0x1c]
        test    al, al
        je      L_61f7
        mov     edx, edi
        or      edx, esi
        test    edx, 0xfffff80f
        jne     L_6126
        lea     eax, [esi - 1]
        test    eax, esi
        jne     L_6126
        lea     ecx, [edi - 1]
        test    ecx, edi
        je      L_613e
L_6126:
        mov     edx, dword ptr [ebp + 8]
        push    edi
        push    esi
        push    edx
        push    offset g_7a66cc
        call    FUN_006FAB90
        add     esp, 0x10
        test    eax, eax
        je      L_613e
        int     3
L_613e:
        mov     eax, dword ptr [ebp + 0x20]
        test    eax, eax
        je      L_614a
        mov     dword ptr [ebp - 4], eax
        jmp     L_61c9
L_614a:
        mov     edx, dword ptr [g_85a22c]
        mov     eax, 0x20
        push    0
        mov     dword ptr [ebp - 0x40], eax
        mov     dword ptr [ebp - 0x34], eax
        lea     eax, [ebp - 4]
        push    eax
        lea     ecx, [ebp - 0x88]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0x88], 0x7c
        mov     dword ptr [ebp - 0x84], 0x1007
        mov     dword ptr [ebp - 0x20], 0x1800
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp - 0x80], edi
        mov     dword ptr [ebp - 0x3c], 0x40
        mov     dword ptr [ebp - 0x24], 0xff000000
        mov     dword ptr [ebp - 0x30], 0xff0000
        mov     dword ptr [ebp - 0x2c], 0xff00
        mov     dword ptr [ebp - 0x28], 0xff
        call    FUN_00735230
        mov     ecx, dword ptr [g_849324]
        mov     eax, edi
        imul    eax, esi
        push    1
        shl     eax, 2
        push    eax
        push    ecx
        call    FUN_006F4940
L_61c9:
        mov     eax, dword ptr [ebp - 4]
        push    0
        push    0x821
        lea     edx, [ebp - 0x88]
        push    edx
        push    0
        push    eax
        mov     dword ptr [ebp - 0x88], 0x7c
        call    FUN_007353F0
        mov     edx, dword ptr [ebp - 0x78]
        mov     eax, dword ptr [ebp - 0x64]
        sar     edx, 2
        jmp     L_6211
L_61f7:
        mov     ecx, dword ptr [g_849324]
        mov     edx, edi
        imul    edx, esi
        push    ecx
        shl     edx, 2
        push    edx
        call    FUN_006F3C80
        mov     dword ptr [ebp - 8], eax
        mov     edx, esi
L_6211:
        test    edi, edi
        mov     dword ptr [ebp + 0xc], edx
        mov     ecx, ebx
        jbe     L_6263
        mov     dword ptr [ebp + 0x10], edi
L_621d:
        test    esi, esi
        jbe     L_6254
        mov     dword ptr [ebp + 8], esi
L_6224:
        xor     edx, edx
        mov     dl, byte ptr [ecx + 2]
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + 1]
        add     eax, 4
        add     ecx, 3
        add     edx, 0xff00
        shl     edx, 8
        add     edx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx - 3]
        shl     edx, 8
        add     edx, ebx
        mov     dword ptr [eax - 4], edx
        dec     dword ptr [ebp + 8]
        jne     L_6224
        mov     edx, dword ptr [ebp + 0xc]
L_6254:
        mov     ebx, edx
        sub     ebx, esi
        lea     eax, [eax + ebx*4]
        dec     dword ptr [ebp + 0x10]
        jne     L_621d
        mov     ebx, dword ptr [ebp - 0xc]
L_6263:
        push    ebx
        call    FUN_006F4230
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 0x18]
        lea     edx, [ebp - 0x4ec8]
        push    edx
        mov     dword ptr [eax], esi
        mov     dword ptr [ecx], edi
        call    dword ptr [g_8aad08]
        mov     al, byte ptr [ebp + 0x1c]
        test    al, al
        pop     edi
        pop     esi
        pop     ebx
        je      L_629e
        mov     eax, dword ptr [ebp - 4]
        push    0
        push    eax
        call    FUN_00735440
        mov     eax, dword ptr [ebp - 4]
        mov     esp, ebp
        pop     ebp
        ret     0x1c
L_629e:
        mov     eax, dword ptr [ebp - 8]
        mov     esp, ebp
        pop     ebp
        ret     0x1c
    }
}
