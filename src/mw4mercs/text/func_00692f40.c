/*
 * FUN_00692f40 (1688 B) — __cdecl, RET (no stack cleanup).
 *
 * Large loader/parser routine: opens a node, builds string buffers,
 * iterates a child list, and updates a site/armature structure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00507aa0(void *p);
extern void __cdecl FUN_004cfbd0(void *p);
extern void __cdecl FUN_00412570(void *p);
extern void __cdecl FUN_004125e0(void *p);
extern void __cdecl FUN_00412740(void *p);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004d2000(void *p, int a);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2680(void *p, void *q);
extern void __cdecl FUN_004d2840(void *p);
extern void __cdecl FUN_004d05d0(void *p);
extern void __cdecl FUN_0041ee70(int a);
extern void __cdecl FUN_00412b80(void *p);
extern void __cdecl FUN_00411a80(void *p);
extern void __cdecl FUN_0040ed60(void *p);
extern void __cdecl FUN_00412020(void *p, void *q, int a);
extern void __cdecl FUN_00411f70(void *p, void *q, int a);
extern void __cdecl FUN_00412a50(void *p, void *q);
extern void __cdecl FUN_004d0600(void *p, void *q, void *r);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00417980(void *p);
extern void __cdecl FUN_0041ef60(void *p);
extern void __cdecl FUN_00412b60(void *p);
extern void __cdecl FUN_004cfc90(void *p);
extern void __cdecl FUN_004d21c0(void *p);
extern void __cdecl FUN_00412e70(void *p);

extern int   g_7db0a0;   /* 0x007db0a0 */
extern int   g_7db0b0;   /* 0x007db0b0 */
extern short g_7db0ac;   /* 0x007db0ac */
extern short g_7db0ae;   /* 0x007db0ae */
extern int   g_7b8c10;   /* 0x007b8c10 */
extern void *g_76b298;   /* 0x0076b298 (strstr IAT) */
extern void *g_76b304;   /* 0x0076b304 (strlwr IAT) */
extern void *g_76b2ac;   /* 0x0076b2ac (stricmp IAT) */
extern float g_76c5b0;   /* 0x0076c5b0 */

__declspec(naked) void __cdecl FUN_00692f40(void)
{
    __asm {
        sub     esp, 0x158
        push    ebx
        mov     ebx, dword ptr [esp + 0x160]
        push    ebp
        push    esi
        mov     esi, dword ptr [ebx]
        mov     eax, dword ptr [esi]
        push    edi
        push    0x118
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    ebx
        call    FUN_00507aa0
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     edi, dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [g_7db0a0]
        mov     esi, eax
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esi], 0x118
        mov     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x24], eax
        call    FUN_004cfbd0
        mov     ebp, dword ptr [edi + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     edx, [esi + 0x98]
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [esp + 0x20]
        mov     esi, dword ptr [edi]
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x14]
        push    0x7927a4
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x14]
        push    ebp
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x14]
        push    0x7993d4
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [esp + 0x14]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x98]
        call    FUN_004d2000
        push    esi
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     edx, dword ptr [esp + 0x18]
        push    0x7927a4
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x18]
        push    ebp
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [esp + 0x18]
        push    0x7993c8
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x18]
        push    0x0
        push    edx
        lea     ecx, [esp + 0x12c]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0xcc]
        test    eax, eax
        jz      LAB_6931c6
        mov     eax, dword ptr [esp + 0xac]
        test    eax, eax
        jbe     LAB_6931c6
        lea     ecx, [esp + 0x90]
        call    FUN_004d24f0
        test    al, al
        jz      LAB_6931c6
        mov     edx, dword ptr [esp + 0x90]
        push    0x2
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x98]
        call    dword ptr [edx + 0x20]
        mov     ax, word ptr [esp + 0x20]
        mov     ebx, dword ptr [ebx + 0x8]
        add     word ptr [ebx + 0x2], ax
        mov     eax, dword ptr [esp + 0x24]
        mov     cx, word ptr [esp + 0x20]
        add     word ptr [eax + 0x1a], cx
        mov     dx, word ptr [esp + 0xd0]
        mov     word ptr [eax + 0x94], dx
        mov     cx, word ptr [esp + 0xd2]
        mov     word ptr [eax + 0x96], cx
        mov     dx, word ptr [esp + 0x164]
        mov     word ptr [eax + 0x90], dx
        mov     cx, word ptr [esp + 0x166]
        mov     word ptr [eax + 0x92], cx
        lea     ecx, [esp + 0x90]
        call    FUN_004d2630
        test    al, al
        jnz     LAB_69319b
        mov     edx, dword ptr [g_7db0b0]
        push    edx
        lea     ecx, [esp + 0x94]
        call    FUN_004d2840
LAB_69319b:
        lea     ecx, [esp + 0x124]
        call    FUN_004d2630
        test    al, al
        jnz     LAB_693574
        mov     eax, dword ptr [g_7db0b0]
        push    eax
        lea     ecx, [esp + 0x128]
        call    FUN_004d2840
        jmp     LAB_693574
LAB_6931c6:
        mov     ecx, dword ptr [g_7b8c10]
        push    ecx
        lea     ecx, [esp + 0xf0]
        call    FUN_004d05d0
        push    0x0
        lea     ecx, [esp + 0x100]
        call    FUN_0041ee70
        add     edi, 0xc
        push    edi
        lea     ecx, [esp + 0xf0]
        mov     dword ptr [esp + 0xf0], 0x76d1f0
        call    FUN_00412b80
        mov     edx, dword ptr [g_7db0b0]
        lea     eax, [esp + 0xec]
        push    0x2
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [g_7db0b0], eax
        call    FUN_0041ee70
        push    0x0
        lea     ecx, [esp + 0x60]
        call    FUN_0041ee70
        mov     edx, dword ptr [esp + 0x34]
        push    0x2
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     dword ptr [esp + 0x24], 0x0
        call    dword ptr [edx + 0x24]
        mov     ebx, dword ptr [ebx + 0x8]
        mov     ax, word ptr [ebx + 0x2]
        mov     ecx, dword ptr [esp + 0x28]
        push    0x77377c
        mov     word ptr [esp + 0x32], ax
        call    FUN_00411a80
        mov     ecx, dword ptr [eax]
        mov     ebp, dword ptr [g_76b298]
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x8c], ecx
        mov     ecx, dword ptr [esp + 0x8c]
        test    ecx, ecx
        jz      LAB_6933ec
LAB_693275:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x8c], edx
        jz      LAB_6933ec
        mov     esi, dword ptr [eax + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        push    esi
        call    FUN_0040ed60
        push    esi
        mov     edi, eax
        call    dword ptr [g_76b304]
        mov     esi, eax
        push    0x789fa0
        push    esi
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jz      LAB_6933bb
        push    0x7993bc
        push    esi
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jnz     LAB_6933bb
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        push    0x0
        lea     eax, [esp + 0xd8]
        push    eax
        push    0x775430
        mov     ecx, edi
        call    FUN_00412020
        push    0x0
        lea     ecx, [esp + 0xe4]
        push    ecx
        push    0x77544c
        mov     ecx, edi
        call    FUN_00411f70
        mov     eax, dword ptr [esp + 0x5c]
        push    0xc
        lea     edx, [esp + 0xd8]
        push    edx
        lea     ecx, [esp + 0x64]
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esp + 0x5c]
        push    0xc
        lea     ecx, [esp + 0xe4]
        push    ecx
        lea     ecx, [esp + 0x64]
        call    dword ptr [edx + 0x24]
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x60]
        push    ecx
        call    FUN_00412a50
        push    0x782014
        push    esi
        call    dword ptr [g_76b2ac]
        add     esp, 0x10
        test    eax, eax
        jz      LAB_69336b
        push    0x782008
        push    esi
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     LAB_693393
LAB_69336b:
        mov     ecx, dword ptr [g_7db0a0]
        push    ebx
        push    edi
        lea     edx, [esp + 0x3c]
        push    edx
        call    FUN_004d0600
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x48]
        add     ecx, eax
        cmp     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x48], ecx
        jbe     LAB_693393
        mov     dword ptr [esp + 0x4c], ecx
LAB_693393:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        /* __emit: backward jz rel32 to LAB_693275 — MSVC6 miscomputes disp (off-by-0xF) when a call-reloc sits between branch and target */
        __emit 0x0F
        __emit 0x84
        __emit 0xD6
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        /* __emit: backward jnz rel32 to LAB_693275 — MSVC6 miscomputes disp (off-by-0xF) */
        __emit 0x0F
        __emit 0x85
        __emit 0xC8
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        /* __emit: backward jmp rel32 to LAB_693275 — MSVC6 miscomputes disp (off-by-0xF) */
        __emit 0xE9
        __emit 0xBA
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
LAB_6933bb:
        mov     ecx, dword ptr [g_7db0a0]
        push    ebx
        push    edi
        lea     eax, [esp + 0x3c]
        push    eax
        call    FUN_004d0600
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x48]
        add     ecx, eax
        cmp     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x48], ecx
        /* __emit: backward jbe rel32 to LAB_693275 — MSVC6 miscomputes disp (off-by-0xF) */
        __emit 0x0F
        __emit 0x86
        __emit 0x92
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        mov     dword ptr [esp + 0x4c], ecx
        /* __emit: backward jmp rel32 to LAB_693275 — MSVC6 miscomputes disp (off-by-0xF) */
        __emit 0xE9
        __emit 0x89
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
LAB_6933ec:
        mov     eax, dword ptr [esp + 0x48]
        sub     eax, dword ptr [esp + 0x44]
        cmp     eax, 0x2
        jbe     LAB_693475
        mov     edx, dword ptr [esp + 0x34]
        push    0x0
        lea     ecx, [esp + 0x38]
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x34]
        xor     eax, eax
        mov     dword ptr [esp + 0x3c], 0xffffffec
        mov     ax, word ptr [ebx + 0x2]
        sub     ax, word ptr [esp + 0x2e]
        push    0x2
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [edx + 0x24]
        lea     eax, [esp + 0xec]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     ecx, [esp + 0x98]
        call    FUN_004d2680
        mov     dx, word ptr [esp + 0xd0]
        mov     esi, dword ptr [esp + 0x24]
        mov     cx, word ptr [esp + 0x1c]
        mov     word ptr [esi + 0x94], dx
        mov     ax, word ptr [esp + 0xd2]
        mov     word ptr [esi + 0x96], ax
        add     word ptr [esi + 0x1a], cx
        jmp     LAB_693497
LAB_693475:
        mov     eax, dword ptr [esp + 0x24]
        mov     dx, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     word ptr [eax + 0x94], dx
        mov     word ptr [eax + 0x96], cx
        mov     esi, eax
LAB_693497:
        mov     eax, dword ptr [esp + 0x6c]
        mov     edx, dword ptr [esp + 0x70]
        sub     edx, eax
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x30], 0x0
        fild    qword ptr [esp + 0x2c]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 — MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_6934f7
        lea     eax, [esp + 0xec]
        push    eax
        lea     ecx, [esp + 0x60]
        push    ecx
        lea     ecx, [esp + 0x12c]
        call    FUN_004d2680
        mov     dx, word ptr [esp + 0x164]
        mov     word ptr [esi + 0x90], dx
        mov     ax, word ptr [esp + 0x166]
        mov     word ptr [esi + 0x92], ax
        jmp     LAB_693513
LAB_6934f7:
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        mov     word ptr [esi + 0x90], cx
        mov     word ptr [esi + 0x92], dx
LAB_693513:
        lea     ecx, [esp + 0x90]
        call    FUN_004d2630
        test    al, al
        jnz     LAB_693534
        mov     ecx, dword ptr [esp + 0x10]
        lea     eax, [esp + 0xec]
        push    eax
        call    FUN_00412e70
LAB_693534:
        mov     esi, dword ptr [esp + 0x28]
        test    esi, esi
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [g_7db0b0], ecx
        jz      LAB_693556
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
LAB_693556:
        lea     ecx, [esp + 0x5c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x34]
        call    FUN_0041ef60
        lea     ecx, [esp + 0xec]
        call    FUN_00412b60
LAB_693574:
        mov     ecx, dword ptr [g_7db0a0]
        call    FUN_004cfc90
        lea     ecx, [esp + 0x124]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      LAB_6935aa
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     LAB_6935aa
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LAB_6935aa:
        lea     ecx, [esp + 0x80]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      LAB_6935d1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     LAB_6935d1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LAB_6935d1:
        add     esp, 0x158
        ret
    }
}
