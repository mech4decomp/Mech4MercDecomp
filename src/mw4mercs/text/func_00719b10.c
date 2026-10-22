/*
 * FUN_00719b10 (extent 0x719b10-0x71dc8d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b00c;
extern int    g_0076b010;
extern int    g_0076b014;
extern int    g_0076b018;
extern int    g_0076b298;
extern int    g_0076b2ac;
extern int    g_0076b2d4;
extern int    g_0076b2f8;
extern int    g_0076b304;
extern int    g_0076b420;
extern int    g_00857f28;
extern int    g_00858138;
extern int    g_00858994;
extern char   g_008589a0;
extern int    g_0085b4a0;
extern char   g_0087bc35;
extern char   g_0087d8a0;
extern int    g_008abe54;
extern void __cdecl FUN_006fa880(void);
extern void __cdecl FUN_006fa8f0(void);
extern void __cdecl FUN_00718710(void);
extern void __cdecl FUN_00718950(void);
extern void __cdecl FUN_007189c0(void);
extern void __cdecl FUN_00719a00(void);
extern void __cdecl FUN_0071ddf0(void);
extern void __cdecl FUN_00722f70(void);
extern void __cdecl FUN_00751100(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00719b10(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        push    -1
        push    0x7a45d0
        push    0x75ded2
        mov    eax, dword ptr fs:[0]
        push    eax
        mov    dword ptr fs:[0], esp
        sub    esp, 0x6b8
        push    ebx
        push    esi
        push    edi
        mov    dword ptr [ebp - 0x18], esp
        wait    
        mov    dword ptr [ebp - 4], 0
        mov    dword ptr [ebp - 0x20], 0x80
        mov    eax, dword ptr [g_0085b4a0]
        mov    dword ptr [ebp - 0xf0], eax
        mov    cl, byte ptr [g_0087bc35]
        mov    byte ptr [ebp - 0x24], cl
        mov    byte ptr [g_0087bc35], 1
        mov    dword ptr [g_0085b4a0], 2
        mov    eax, dword ptr [g_00858138]
        test    al, al
        je    L_a240
        mov    edx, 0x7a45b0
        test    edx, edx
        je    L_9be6
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x2c0], eax
        mov    ebx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_9bb1
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x2c0], eax
L_9bb1:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a45b0
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    eax, dword ptr [g_00858138]
        jmp    L_9be9
L_9be6:
        mov    ebx, dword ptr [ebp + 8]
L_9be9:
        mov    dword ptr [ebp - 0xf4], 0
L_9bf3:
        and    eax, 0xff
        mov    ecx, dword ptr [ebp - 0xf4]
        cmp    ecx, eax
        jge    L_a243
        lea    eax, [ebp - 0xfc]
        push    eax
        push    ecx
        call    FUN_00722f70
        mov    eax, dword ptr [ebp - 0xf8]
        test    eax, 0x40000000
        mov    dword ptr [ebp - 0x2d0], 0x7a459c
        jne    L_9c34
        mov    dword ptr [ebp - 0x2d0], 0x77a078
L_9c34:
        mov    esi, dword ptr [ebp - 0xfc]
        mov    dword ptr [ebp - 0x2c8], esi
        test    esi, esi
        je    L_9c9e
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x2c4], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_9c6f
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x2c4], eax
L_9c6f:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    eax, dword ptr [ebp - 0xf8]
L_9c9e:
        mov    edi, dword ptr [ebp - 0x2d0]
        test    edi, edi
        je    L_9d06
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x2cc], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_9cd1
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x2cc], eax
L_9cd1:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, dword ptr [ebp - 0x2d0]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    eax, dword ptr [ebp - 0xf8]
L_9d06:
        mov    ecx, 0x7a4590
        test    ecx, ecx
        je    L_9d6e
        mov    edi, ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x2d4], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_9d3a
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x2d4], eax
L_9d3a:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4590
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    eax, dword ptr [ebp - 0xf8]
L_9d6e:
        shr    eax, 0x10
        and    eax, 0x1f
        mov    dword ptr [ebp - 0x2fc], eax
        push    0xa
        lea    ecx, [ebp - 0x2f4]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x2f4]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x2f8], eax
        mov    ecx, dword ptr [ebx + 4]
        mov    edx, dword ptr [ebx]
        mov    dword ptr [ebp - 0x6bc], edx
        lea    esi, [eax + ecx]
        cmp    esi, edx
        jle    L_9dc2
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x2f8], eax
L_9dc2:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x2f4]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_9e4f
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x300], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_9e22
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x300], ecx
L_9e22:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x300]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_9e4f:
        mov    edx, 0x7a4584
        test    edx, edx
        je    L_9eb5
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x304], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_9e87
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x304], eax
L_9e87:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4584
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_9eb5:
        mov    eax, dword ptr [ebp - 0xf8]
        shr    eax, 0xc
        and    eax, 0xf
        mov    dword ptr [ebp - 0x32c], eax
        push    0xa
        lea    ecx, [ebp - 0x324]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x324]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x328], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_9f0d
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x328], eax
L_9f0d:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x324]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_9f9a
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x330], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_9f6d
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x330], ecx
L_9f6d:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x330]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_9f9a:
        mov    edx, 0x7a4578
        test    edx, edx
        je    L_a000
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x334], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_9fd2
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x334], eax
L_9fd2:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4578
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_a000:
        mov    eax, dword ptr [ebp - 0xf8]
        shr    eax, 0x15
        and    eax, 0xf
        mov    dword ptr [ebp - 0x35c], eax
        push    0xa
        lea    ecx, [ebp - 0x354]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x354]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x358], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_a058
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x358], eax
L_a058:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x354]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_a0e5
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x360], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_a0b8
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x360], ecx
L_a0b8:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x360]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_a0e5:
        mov    edx, 0x7a456c
        test    edx, edx
        je    L_a14b
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x364], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_a11d
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x364], eax
L_a11d:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a456c
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_a14b:
        mov    eax, dword ptr [ebp - 0xf8]
        shr    eax, 0x19
        and    eax, 0xf
        mov    dword ptr [ebp - 0x38c], eax
        push    0xa
        lea    ecx, [ebp - 0x384]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x384]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x388], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_a1a3
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x388], eax
L_a1a3:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x384]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_a230
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x390], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_a203
        sub    eax, edx
        mov    ecx, eax
        mov    dword ptr [ebp - 0x390], ecx
L_a203:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x390]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_a230:
        inc    dword ptr [ebp - 0xf4]
        mov    eax, dword ptr [g_00858138]
        jmp    L_9bf3
L_a240:
        mov    ebx, dword ptr [ebp + 8]
L_a243:
        mov    edx, dword ptr [ebp - 0xf0]
        mov    dword ptr [g_0085b4a0], edx
        mov    al, byte ptr [ebp - 0x24]
        mov    byte ptr [g_0087bc35], al
        mov    byte ptr [ebp - 0xe8], 0
        lea    ecx, [ebp - 0xec]
        push    ecx
        push    0x7a4540
        push    0x80000001
        call    dword ptr [g_0076b014]
        mov    dword ptr [ebp - 0x1c], eax
        test    eax, eax
        jne    L_a2ad
        lea    edx, [ebp - 0x20]
        push    edx
        lea    eax, [ebp - 0xe8]
        push    eax
        push    0
        push    0
        push    0x7a4534
        mov    ecx, dword ptr [ebp - 0xec]
        push    ecx
        call    dword ptr [g_0076b018]
        mov    dword ptr [ebp - 0x1c], eax
        mov    edx, dword ptr [ebp - 0xec]
        push    edx
        call    dword ptr [g_0076b00c]
L_a2ad:
        mov    dword ptr [ebp - 0x28], 0
L_a2b4:
        mov    eax, dword ptr [ebp - 0x28]
        cmp    eax, dword ptr [g_00857f28]
        jae    L_cb6a
        mov    ecx, 0x7a4524
        test    ecx, ecx
        je    L_a325
        mov    edi, ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x394], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_a2f7
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x394], eax
L_a2f7:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4524
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_a325:
        push    0xa
        lea    eax, [ebp - 0x3b4]
        push    eax
        mov    ecx, dword ptr [ebp - 0x28]
        push    ecx
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x3b4]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    edx, ecx
        inc    edx
        mov    dword ptr [ebp - 0x3b8], edx
        mov    eax, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        mov    dword ptr [ebp - 0x6bc], ecx
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_a370
        mov    edx, ecx
        sub    edx, eax
        mov    dword ptr [ebp - 0x3b8], edx
L_a370:
        mov    eax, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, edx
        lea    esi, [ebp - 0x3b4]
        add    edi, eax
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    eax, dword ptr [ebx + 4]
        lea    edx, [edx + eax - 1]
        mov    dword ptr [ebp - 0x6c0], edx
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        cmp    dword ptr [g_00857f28], 1
        jbe    L_a5f8
        mov    al, byte ptr [ebp - 0xe8]
        test    al, al
        jne    L_a3c3
        mov    eax, dword ptr [ebp - 0x28]
        test    eax, eax
        je    L_a3f0
L_a3c3:
        mov    eax, dword ptr [ebp - 0x28]
        lea    ecx, [eax + eax*4]
        shl    ecx, 3
        sub    ecx, eax
        shl    ecx, 4
        add    ecx, 0x856bb8
        push    ecx
        lea    edx, [ebp - 0xe8]
        push    edx
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        jne    L_a520
L_a3f0:
        mov    eax, 0x7a4510
        test    eax, eax
        je    L_a459
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3bc], eax
        mov    edi, dword ptr [ebp - 0x6c0]
        lea    edx, [eax + edi]
        mov    ecx, dword ptr [ebp - 0x6bc]
        cmp    edx, ecx
        jle    L_a42b
        mov    eax, ecx
        sub    eax, edi
        mov    dword ptr [ebp - 0x3bc], eax
L_a42b:
        mov    ecx, eax
        mov    esi, 0x7a4510
        mov    edx, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x6c0]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_a459:
        mov    edx, dword ptr [ebp - 0x6bc]
        mov    eax, dword ptr [g_00858994]
        test    eax, eax
        jne    L_a6b5
        mov    al, byte ptr [g_008589a0]
        test    al, al
        jne    L_a4b7
        mov    eax, 0x7a44ec
        test    eax, eax
        je    L_a6b5
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3c0], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        cmp    esi, edx
        jle    L_a4ab
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x3c0], eax
L_a4ab:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a44ec
        jmp    L_a4f7
L_a4b7:
        mov    eax, 0x7a44c8
        test    eax, eax
        je    L_a6b5
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3c4], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        cmp    esi, edx
        jle    L_a4ed
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x3c4], eax
L_a4ed:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a44c8
L_a4f7:
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        jmp    L_a6b5
L_a520:
        mov    eax, dword ptr [g_00858994]
        dec    eax
        cmp    eax, dword ptr [ebp - 0x28]
        jne    L_a6b5
        mov    al, byte ptr [g_008589a0]
        test    al, al
        jne    L_a5b0
        mov    ecx, 0x7a44ec
        test    ecx, ecx
        je    L_a6b5
        mov    edi, ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3c8], eax
        mov    ecx, dword ptr [ebp - 0x6c0]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_a577
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x3c8], eax
L_a577:
        mov    ecx, eax
        mov    esi, 0x7a44ec
L_a57e:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebp - 0x6c0]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x6c0]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        jmp    L_a6b5
L_a5b0:
        mov    edx, 0x7a44c8
        test    edx, edx
        je    L_a6b5
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3cc], eax
        mov    ecx, dword ptr [ebp - 0x6c0]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_a5ef
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x3cc], eax
L_a5ef:
        mov    ecx, eax
        mov    esi, 0x7a44c8
        jmp    L_a57e
L_a5f8:
        mov    al, byte ptr [g_008589a0]
        test    al, al
        jne    L_a657
        mov    eax, 0x7a44ec
        test    eax, eax
        je    L_a6b5
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x3d0], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_a636
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x3d0], ecx
L_a636:
        mov    esi, 0x7a44ec
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x3d0]
        jmp    L_a6a7
L_a657:
        mov    eax, 0x7a44c8
        test    eax, eax
        je    L_a6b5
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x3d4], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_a688
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x3d4], ecx
L_a688:
        mov    esi, 0x7a44c8
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x3d4]
L_a6a7:
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_a6b5:
        mov    edx, 0x7a44b8
        test    edx, edx
        je    L_a71b
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3d8], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_a6ed
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x3d8], eax
L_a6ed:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a44b8
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_a71b:
        mov    edx, dword ptr [ebp - 0x6bc]
        mov    eax, 0x7a44a0
        test    eax, eax
        je    L_a787
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3dc], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        cmp    esi, edx
        jle    L_a753
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x3dc], eax
L_a753:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a44a0
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    edx, dword ptr [ebp - 0x6bc]
L_a787:
        mov    eax, dword ptr [ebp - 0x28]
        lea    esi, [eax + eax*4]
        shl    esi, 3
        sub    esi, eax
        shl    esi, 4
        add    esi, 0x856bb8
        mov    dword ptr [ebp - 0x3e4], esi
        je    L_a7fb
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3e0], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    edi, [eax + ecx]
        cmp    edi, edx
        jle    L_a7cc
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x3e0], eax
L_a7cc:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    edx, dword ptr [ebp - 0x6bc]
L_a7fb:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_a85b
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3e8], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        cmp    esi, edx
        jle    L_a82d
        sub    edx, ecx
        mov    eax, edx
        mov    dword ptr [ebp - 0x3e8], eax
L_a82d:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_a85b:
        mov    dword ptr [ebp - 0x104], 0
        lea    eax, [ebp - 0x120]
        push    eax
        push    0x7a4470
        push    0x80000002
        call    dword ptr [g_0076b014]
        mov    dword ptr [ebp - 0x100], eax
        test    eax, eax
        jne    L_adba
L_a88a:
        mov    dword ptr [ebp - 0x124], 0x100
        mov    ecx, dword ptr [ebp - 0x104]
        mov    eax, ecx
        inc    ecx
        mov    dword ptr [ebp - 0x104], ecx
        lea    ecx, [ebp - 0x114]
        push    ecx
        push    0
        push    0
        push    0
        lea    edx, [ebp - 0x124]
        push    edx
        push    0x87da38
        push    eax
        mov    eax, dword ptr [ebp - 0x120]
        push    eax
        call    dword ptr [g_0076b010]
        mov    dword ptr [ebp - 0x11c], eax
        test    eax, eax
        jne    L_ad9f
        mov    edi, 0x87da38
        or    ecx, 0xffffffff
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    edx, ecx
        mov    esi, edi
        mov    edi, 0x87d938
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    edi, 0x7a445c
        or    ecx, 0xffffffff
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    esi, edi
        mov    edx, ecx
        mov    edi, 0x87d938
        or    ecx, 0xffffffff
        repne scasb
        dec    edi
        mov    ecx, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        lea    eax, [ebp - 0x108]
        push    eax
        push    0x87d938
        mov    ecx, dword ptr [ebp - 0x120]
        push    ecx
        call    dword ptr [g_0076b014]
        mov    dword ptr [ebp - 0x100], eax
        test    eax, eax
        jne    L_ad9f
        mov    dword ptr [ebp - 0x128], 0xff
        lea    edx, [ebp - 0x128]
        push    edx
        lea    eax, [ebp - 0x228]
        push    eax
        push    0
        push    0
        push    0x7a444c
        mov    ecx, dword ptr [ebp - 0x108]
        push    ecx
        call    dword ptr [g_0076b018]
        mov    dword ptr [ebp - 0x100], eax
        test    eax, eax
        jne    L_ad92
        lea    edx, [ebp - 0x228]
        push    edx
        call    dword ptr [g_0076b304]
        mov    eax, dword ptr [ebp - 0x28]
        lea    ecx, [eax + eax*4]
        shl    ecx, 3
        sub    ecx, eax
        shl    ecx, 4
        add    ecx, 0x856c38
        push    ecx
        lea    edx, [ebp - 0x228]
        push    edx
        call    dword ptr [g_0076b298]
        add    esp, 0xc
        test    eax, eax
        je    L_ad92
        mov    edi, 0x87da38
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    eax, ecx
        mov    esi, edi
        mov    edi, 0x87d938
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    edi, 0x7a442c
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    esi, edi
        mov    edx, ecx
        mov    edi, 0x87d938
        or    ecx, 0xffffffff
        repne scasb
        dec    edi
        mov    ecx, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        lea    eax, [ebp - 0x10c]
        push    eax
        push    0x87d938
        mov    ecx, dword ptr [ebp - 0x120]
        push    ecx
        call    dword ptr [g_0076b014]
        mov    dword ptr [ebp - 0x100], eax
        test    eax, eax
        jne    L_ad92
        mov    dword ptr [ebp - 0x230], 4
        lea    edx, [ebp - 0x230]
        push    edx
        lea    eax, [ebp - 0x234]
        push    eax
        push    0
        push    0
        push    0x7a4428
        mov    ecx, dword ptr [ebp - 0x10c]
        push    ecx
        mov    edi, dword ptr [g_0076b018]
        call    edi
        mov    esi, eax
        mov    dword ptr [ebp - 0x238], esi
        mov    dword ptr [ebp - 0x230], 4
        lea    edx, [ebp - 0x230]
        push    edx
        lea    eax, [ebp - 0x22c]
        push    eax
        push    0
        push    0
        push    0x7a4424
        mov    ecx, dword ptr [ebp - 0x10c]
        push    ecx
        call    edi
        mov    dword ptr [ebp - 0x23c], eax
        test    esi, esi
        jne    L_ad85
        test    eax, eax
        jne    L_ad85
        mov    edi, 0x87da38
        or    ecx, 0xffffffff
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    edx, ecx
        mov    esi, edi
        mov    edi, 0x87d938
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    edi, 0x7a4408
        or    ecx, 0xffffffff
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    esi, edi
        mov    edx, ecx
        mov    edi, 0x87d938
        or    ecx, 0xffffffff
        repne scasb
        dec    edi
        mov    ecx, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        lea    eax, [ebp - 0x118]
        push    eax
        push    0x87d938
        mov    ecx, dword ptr [ebp - 0x120]
        push    ecx
        call    dword ptr [g_0076b014]
        mov    dword ptr [ebp - 0x100], eax
        test    eax, eax
        jne    L_ad78
        mov    dword ptr [ebp - 0x240], 4
        lea    edx, [ebp - 0x240]
        push    edx
        lea    eax, [ebp - 0x244]
        push    eax
        push    0
        push    0
        push    0x78a4e4
        mov    ecx, dword ptr [ebp - 0x118]
        push    ecx
        call    dword ptr [g_0076b018]
        mov    dword ptr [ebp - 0x100], eax
        test    eax, eax
        jne    L_ad78
        mov    eax, dword ptr [ebp - 0x234]
        test    eax, eax
        jne    L_aba6
        mov    eax, dword ptr [ebp - 0x22c]
        test    eax, eax
        jne    L_aba6
        lea    edx, [ebp - 0x254]
        mov    edi, 0x77008c
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    eax, ecx
        mov    esi, edi
        mov    edi, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        jmp    L_ac4c
L_aba6:
        mov    eax, dword ptr [ebp - 0x244]
        test    eax, eax
        jne    L_abd8
        lea    edx, [ebp - 0x254]
        mov    edi, 0x7a4400
        or    ecx, 0xffffffff
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    eax, ecx
        mov    esi, edi
        mov    edi, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        jmp    L_ac4c
L_abd8:
        cmp    eax, 8
        jne    L_ac07
        lea    edx, [ebp - 0x254]
        mov    edi, 0x771d4c
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    eax, ecx
        mov    esi, edi
        mov    edi, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        jmp    L_ac4c
L_ac07:
        cmp    eax, 0xf
        jne    L_ac36
        lea    edx, [ebp - 0x254]
        mov    edi, 0x7a43f8
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    eax, ecx
        mov    esi, edi
        mov    edi, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        jmp    L_ac4c
L_ac36:
        push    eax
        push    0x76b9a8
        lea    ecx, [ebp - 0x254]
        push    ecx
        call    dword ptr [g_0076b420]
        add    esp, 0xc
L_ac4c:
        mov    edx, 0x7a43e0
        test    edx, edx
        je    L_acae
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3ec], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_ac80
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x3ec], eax
L_ac80:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a43e0
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_acae:
        lea    eax, [ebp - 0x254]
        test    eax, eax
        je    L_ad16
        lea    edi, [ebp - 0x254]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3f0], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_ace7
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x3f0], eax
L_ace7:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x254]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_ad16:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_ad78
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3f4], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_ad4a
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x3f4], eax
L_ad4a:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_ad78:
        mov    eax, dword ptr [ebp - 0x118]
        push    eax
        call    dword ptr [g_0076b00c]
L_ad85:
        mov    ecx, dword ptr [ebp - 0x10c]
        push    ecx
        call    dword ptr [g_0076b00c]
L_ad92:
        mov    edx, dword ptr [ebp - 0x108]
        push    edx
        call    dword ptr [g_0076b00c]
L_ad9f:
        mov    eax, dword ptr [ebp - 0x11c]
        test    eax, eax
        je    L_a88a
        mov    eax, dword ptr [ebp - 0x120]
        push    eax
        call    dword ptr [g_0076b00c]
L_adba:
        mov    eax, dword ptr [ebp - 0x28]
        lea    esi, [eax + eax*4]
        shl    esi, 3
        sub    esi, eax
        shl    esi, 4
        mov    dword ptr [ebp - 0x6c4], esi
        push    0
        lea    ecx, [esi + 0x856c38]
        push    ecx
        push    ebx
        call    FUN_007189c0
        mov    eax, dword ptr [esi + 0x856dbc]
        mov    dword ptr [ebp - 0x6c8], eax
        test    al, 0x40
        mov    esi, 0x770d38
        jne    L_adf7
        mov    esi, 0x770d24
L_adf7:
        mov    dword ptr [ebp - 0x400], esi
        mov    edx, 0x7a43c8
        test    edx, edx
        je    L_ae65
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3f8], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_ae31
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x3f8], eax
L_ae31:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a43c8
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x400]
L_ae65:
        test    esi, esi
        je    L_aebd
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x3fc], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_ae94
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x3fc], eax
L_ae94:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_aebd:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_af1f
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x404], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_aef1
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x404], eax
L_aef1:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_af1f:
        test    byte ptr [ebp - 0x6c8], 0x20
        mov    esi, 0x770d38
        jne    L_af32
        mov    esi, 0x770d24
L_af32:
        mov    dword ptr [ebp - 0x410], esi
        mov    eax, 0x7a43b0
        test    eax, eax
        je    L_afa0
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x408], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_af6c
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x408], eax
L_af6c:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a43b0
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x410]
L_afa0:
        test    esi, esi
        je    L_aff8
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x40c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_afcf
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x40c], eax
L_afcf:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_aff8:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_b05a
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x414], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b02c
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x414], eax
L_b02c:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b05a:
        test    byte ptr [ebp - 0x6c8], 0x10
        mov    esi, 0x770d38
        jne    L_b06d
        mov    esi, 0x770d24
L_b06d:
        mov    dword ptr [ebp - 0x420], esi
        mov    eax, 0x7a4398
        test    eax, eax
        je    L_b0db
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x418], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b0a7
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x418], eax
L_b0a7:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4398
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x420]
L_b0db:
        test    esi, esi
        je    L_b133
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x41c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_b10a
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x41c], eax
L_b10a:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b133:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_b195
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x424], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b167
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x424], eax
L_b167:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b195:
        test    byte ptr [ebp - 0x6c8], 1
        mov    esi, 0x770d38
        jne    L_b1a8
        mov    esi, 0x770d24
L_b1a8:
        mov    dword ptr [ebp - 0x430], esi
        mov    eax, 0x7a4380
        test    eax, eax
        je    L_b216
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x428], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b1e2
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x428], eax
L_b1e2:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4380
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x430]
L_b216:
        test    esi, esi
        je    L_b26e
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x42c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_b245
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x42c], eax
L_b245:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b26e:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_b2d0
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x434], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b2a2
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x434], eax
L_b2a2:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b2d0:
        test    byte ptr [ebp - 0x6c8], 2
        mov    esi, 0x770d38
        jne    L_b2e3
        mov    esi, 0x770d24
L_b2e3:
        mov    dword ptr [ebp - 0x440], esi
        mov    eax, 0x7a4368
        test    eax, eax
        je    L_b351
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x438], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b31d
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x438], eax
L_b31d:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4368
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x440]
L_b351:
        test    esi, esi
        je    L_b3a9
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x43c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_b380
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x43c], eax
L_b380:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b3a9:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_b40b
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x444], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b3dd
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x444], eax
L_b3dd:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b40b:
        test    byte ptr [ebp - 0x6c8], 4
        mov    esi, 0x770d38
        jne    L_b41e
        mov    esi, 0x770d24
L_b41e:
        mov    dword ptr [ebp - 0x450], esi
        mov    eax, 0x7a4350
        test    eax, eax
        je    L_b48c
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x448], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b458
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x448], eax
L_b458:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4350
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x450]
L_b48c:
        test    esi, esi
        je    L_b4e4
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x44c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_b4bb
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x44c], eax
L_b4bb:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b4e4:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_b546
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x454], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b518
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x454], eax
L_b518:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b546:
        test    byte ptr [ebp - 0x6c8], 8
        mov    esi, 0x770d38
        jne    L_b559
        mov    esi, 0x770d24
L_b559:
        mov    dword ptr [ebp - 0x460], esi
        mov    eax, 0x7a4338
        test    eax, eax
        je    L_b5c7
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x458], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b593
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x458], eax
L_b593:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4338
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x460]
L_b5c7:
        test    esi, esi
        je    L_b61f
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x45c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_b5f6
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x45c], eax
L_b5f6:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b61f:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_b681
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x464], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b653
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x464], eax
L_b653:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b681:
        mov    eax, dword ptr [ebp - 0x6c8]
        test    ah, 1
        mov    esi, 0x770d38
        jne    L_b696
        mov    esi, 0x770d24
L_b696:
        mov    dword ptr [ebp - 0x470], esi
        mov    eax, 0x7a4320
        test    eax, eax
        je    L_b704
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x468], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b6d0
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x468], eax
L_b6d0:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4320
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x470]
L_b704:
        test    esi, esi
        je    L_b75c
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x46c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_b733
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x46c], eax
L_b733:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b75c:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_b7be
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x474], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b790
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x474], eax
L_b790:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b7be:
        mov    eax, dword ptr [ebp - 0x6c8]
        test    ah, 2
        mov    esi, 0x770d38
        jne    L_b7d3
        mov    esi, 0x770d24
L_b7d3:
        mov    dword ptr [ebp - 0x480], esi
        mov    eax, 0x7a4308
        test    eax, eax
        je    L_b841
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x478], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b80d
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x478], eax
L_b80d:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4308
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x480]
L_b841:
        test    esi, esi
        je    L_b899
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x47c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_b870
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x47c], eax
L_b870:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b899:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_b8fb
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x484], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b8cd
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x484], eax
L_b8cd:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b8fb:
        mov    eax, dword ptr [ebp - 0x6c8]
        test    ah, 4
        mov    esi, 0x770d38
        jne    L_b910
        mov    esi, 0x770d24
L_b910:
        mov    dword ptr [ebp - 0x490], esi
        mov    eax, 0x7a42f0
        test    eax, eax
        je    L_b97e
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x488], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_b94a
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x488], eax
L_b94a:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a42f0
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x490]
L_b97e:
        test    esi, esi
        je    L_b9d6
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x48c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_b9ad
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x48c], eax
L_b9ad:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_b9d6:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_ba38
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x494], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_ba0a
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x494], eax
L_ba0a:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_ba38:
        mov    eax, dword ptr [ebp - 0x6c8]
        test    ah, 8
        mov    esi, 0x770d38
        jne    L_ba4d
        mov    esi, 0x770d24
L_ba4d:
        mov    dword ptr [ebp - 0x4a0], esi
        mov    eax, 0x7a42d8
        test    eax, eax
        je    L_babb
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x498], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_ba87
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x498], eax
L_ba87:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a42d8
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        mov    esi, dword ptr [ebp - 0x4a0]
L_babb:
        test    esi, esi
        je    L_bb13
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x49c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [eax + edx]
        cmp    edi, ecx
        jle    L_baea
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x49c], eax
L_baea:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_bb13:
        mov    eax, 0x77a078
        test    eax, eax
        je    L_bb75
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x4a4], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_bb47
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x4a4], eax
L_bb47:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x77a078
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_bb75:
        mov    eax, 0x7a42b8
        test    eax, eax
        je    L_bbd7
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x4a8], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [eax + edx]
        cmp    esi, ecx
        jle    L_bba9
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x4a8], eax
L_bba9:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a42b8
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_bbd7:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856dc0]
        mov    dword ptr [ebp - 0x4d0], eax
        push    0xa
        lea    ecx, [ebp - 0x4c8]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x4c8]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x4cc], eax
        mov    ecx, dword ptr [ebx + 4]
        mov    edx, dword ptr [ebx]
        mov    dword ptr [ebp - 0x6bc], edx
        lea    esi, [eax + ecx]
        cmp    esi, edx
        jle    L_bc31
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x4cc], eax
L_bc31:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x4c8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_bcbe
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x4d4], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_bc91
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x4d4], ecx
L_bc91:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x4d4]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_bcbe:
        mov    edx, 0x7a4298
        test    edx, edx
        je    L_bd24
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x4d8], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_bcf6
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x4d8], eax
L_bcf6:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4298
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_bd24:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856dc4]
        mov    dword ptr [ebp - 0x500], eax
        push    0xa
        lea    ecx, [ebp - 0x4f8]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x4f8]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x4fc], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_bd7c
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x4fc], eax
L_bd7c:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x4f8]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_be09
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x504], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_bddc
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x504], ecx
L_bddc:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x504]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_be09:
        mov    edx, 0x7a4278
        test    edx, edx
        je    L_be6f
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x508], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_be41
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x508], eax
L_be41:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4278
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_be6f:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856dc8]
        mov    dword ptr [ebp - 0x530], eax
        push    0xa
        lea    ecx, [ebp - 0x528]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x528]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x52c], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_bec7
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x52c], eax
L_bec7:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x528]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_bf54
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x534], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_bf27
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x534], ecx
L_bf27:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x534]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_bf54:
        mov    edx, 0x7a4258
        test    edx, edx
        je    L_bfba
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x538], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_bf8c
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x538], eax
L_bf8c:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4258
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_bfba:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856dcc]
        mov    dword ptr [ebp - 0x560], eax
        push    0xa
        lea    ecx, [ebp - 0x558]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x558]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x55c], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c012
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x55c], eax
L_c012:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x558]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_c09f
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x564], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_c072
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x564], ecx
L_c072:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x564]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_c09f:
        mov    edx, 0x7a4238
        test    edx, edx
        je    L_c105
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x568], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c0d7
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x568], eax
L_c0d7:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4238
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_c105:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856dd0]
        mov    dword ptr [ebp - 0x590], eax
        push    0xa
        lea    ecx, [ebp - 0x588]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x588]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x58c], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c15d
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x58c], eax
L_c15d:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x588]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_c1ea
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x594], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_c1bd
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x594], ecx
L_c1bd:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x594]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_c1ea:
        mov    edx, 0x7a4218
        test    edx, edx
        je    L_c250
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x598], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c222
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x598], eax
L_c222:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4218
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_c250:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856dd4]
        mov    dword ptr [ebp - 0x5c0], eax
        push    0xa
        lea    ecx, [ebp - 0x5b8]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x5b8]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x5bc], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c2a8
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x5bc], eax
L_c2a8:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x5b8]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_c335
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x5c4], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_c308
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x5c4], ecx
L_c308:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x5c4]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_c335:
        mov    edx, 0x7a41f8
        test    edx, edx
        je    L_c39b
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x5c8], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c36d
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x5c8], eax
L_c36d:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a41f8
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_c39b:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856dd8]
        mov    dword ptr [ebp - 0x5f0], eax
        push    0xa
        lea    ecx, [ebp - 0x5e8]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x5e8]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x5ec], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c3f3
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x5ec], eax
L_c3f3:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x5e8]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_c480
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x5f4], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_c453
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x5f4], ecx
L_c453:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x5f4]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_c480:
        mov    edx, 0x7a41d8
        test    edx, edx
        je    L_c4e6
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x5f8], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c4b8
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x5f8], eax
L_c4b8:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a41d8
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_c4e6:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856ddc]
        mov    dword ptr [ebp - 0x620], eax
        push    0xa
        lea    ecx, [ebp - 0x618]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x618]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x61c], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c53e
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x61c], eax
L_c53e:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x618]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_c5cb
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x624], ecx
        lea    esi, [ecx + edx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_c59e
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x624], ecx
L_c59e:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x624]
        lea    edx, [ecx + edx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_c5cb:
        mov    edx, 0x7a41b8
        test    edx, edx
        je    L_c631
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x628], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c603
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x628], eax
L_c603:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a41b8
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_c631:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856de0]
        mov    dword ptr [ebp - 0x650], eax
        push    0xa
        lea    ecx, [ebp - 0x648]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x648]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x64c], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c689
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x64c], eax
L_c689:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x648]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_c716
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x654], ecx
        lea    esi, [edx + ecx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_c6e9
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x654], ecx
L_c6e9:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x654]
        lea    edx, [edx + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_c716:
        mov    edx, 0x7a4198
        test    edx, edx
        je    L_c77c
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x658], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c74e
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x658], eax
L_c74e:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4198
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_c77c:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856de4]
        mov    dword ptr [ebp - 0x680], eax
        push    0xa
        lea    ecx, [ebp - 0x678]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x678]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x67c], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c7d4
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x67c], eax
L_c7d4:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x678]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_c861
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x684], ecx
        lea    esi, [edx + ecx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_c834
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x684], ecx
L_c834:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x684]
        lea    edx, [edx + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_c861:
        mov    edx, 0x7a4178
        test    edx, edx
        je    L_c8c7
        mov    edi, edx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x688], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c899
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x688], eax
L_c899:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4178
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_c8c7:
        mov    eax, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [eax + 0x856de8]
        mov    dword ptr [ebp - 0x6b0], eax
        push    0xa
        lea    ecx, [ebp - 0x6a8]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    edi, [ebp - 0x6a8]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x6ac], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        mov    edx, dword ptr [ebp - 0x6bc]
        cmp    esi, edx
        jle    L_c91f
        mov    eax, edx
        sub    eax, ecx
        mov    dword ptr [ebp - 0x6ac], eax
L_c91f:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x6a8]
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    edx, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
        mov    eax, 0x77a078
        test    eax, eax
        je    L_c9ac
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        mov    dword ptr [ebp - 0x6b4], ecx
        lea    esi, [edx + ecx]
        mov    eax, dword ptr [ebp - 0x6bc]
        cmp    esi, eax
        jle    L_c97f
        mov    ecx, eax
        sub    ecx, edx
        mov    dword ptr [ebp - 0x6b4], ecx
L_c97f:
        mov    esi, 0x77a078
        mov    eax, dword ptr [ebx + 8]
        lea    edi, [edx + eax]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebp - 0x6b4]
        lea    edx, [edx + ecx - 1]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [ebx + 8]
        mov    byte ptr [edx + eax], 0
L_c9ac:
        mov    edx, dword ptr [ebp - 0x6bc]
        mov    eax, 0x7a4158
        test    eax, eax
        je    L_ca12
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x6b8], eax
        mov    ecx, dword ptr [ebx + 4]
        lea    esi, [eax + ecx]
        cmp    esi, edx
        jle    L_c9e4
        sub    edx, ecx
        mov    eax, edx
        mov    dword ptr [ebp - 0x6b8], eax
L_c9e4:
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4158
        mov    edi, dword ptr [ebx + 8]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [eax + ecx - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_ca12:
        push    0x77a078
        mov    esi, dword ptr [ebp - 0x6c4]
        mov    eax, dword ptr [esi + 0x856dec]
        push    eax
        mov    ecx, ebx
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov    ecx, dword ptr [esi + 0x856df0]
        push    ecx
        push    0x7a4138
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov    edx, dword ptr [esi + 0x856df4]
        push    edx
        push    0x7a4118
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov    eax, dword ptr [esi + 0x856df8]
        push    eax
        push    0x7a40f8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov    ecx, dword ptr [esi + 0x856dfc]
        push    ecx
        push    0x7a40d8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov    edx, dword ptr [esi + 0x856e00]
        push    edx
        push    0x7a40b8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov    eax, dword ptr [esi + 0x856e04]
        push    eax
        push    0x7a4098
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov    ecx, dword ptr [esi + 0x856e08]
        push    ecx
        push    0x7a4078
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov    edx, dword ptr [esi + 0x856e0c]
        push    edx
        push    0x7a4058
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        inc    dword ptr [ebp - 0x28]
        jmp    L_a2b4
L_cb6a:
        xor    edi, edi
        mov    dword ptr [ebp - 0x28], edi
L_cb6f:
        cmp    edi, dword ptr [g_008abe54]
        jae    L_dc5a
        push    0x7a4044
        push    edi
        push    0x7a4034
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, edi
        shl    eax, 4
        add    eax, edi
        lea    eax, [edi + eax*8]
        lea    esi, [eax + eax*2]
        shl    esi, 3
        push    0x77a078
        lea    ecx, [esi + 0x8ac070]
        push    ecx
        push    0x7a401c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        lea    edx, [esi + 0x8acab0]
        push    edx
        push    0x7a4018
        lea    eax, [esi + 0x8aca30]
        push    eax
        push    0x7a4000
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    0
        lea    ecx, [esi + 0x8abe70]
        push    ecx
        push    ebx
        call    FUN_007189c0
        mov    edx, dword ptr [esi + 0x8ac270]
        push    edx
        mov    eax, dword ptr [esi + 0x8ac274]
        push    eax
        lea    ecx, [ebp - 0x68]
        push    ecx
        call    FUN_00718950
        push    eax
        push    0x7a3fe8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    edx, dword ptr [esi + 0x8ac280]
        push    edx
        mov    eax, dword ptr [esi + 0x8ac284]
        push    eax
        mov    ecx, dword ptr [esi + 0x8ac27c]
        push    ecx
        mov    edx, dword ptr [esi + 0x8ac278]
        push    edx
        push    0x7a3fc8
        push    0x87d8a0
        call    dword ptr [g_0076b420]
        add    esp, 0x18
        push    0x87d8a0
        push    0x7a3fb0
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        mov    eax, dword ptr [esi + 0x8aca08]
        push    eax
        call    FUN_0071ddf0
        push    eax
        push    0x7a3f98
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        mov    ecx, dword ptr [esi + 0x8aca0c]
        push    ecx
        call    FUN_0071ddf0
        push    eax
        push    0x7a3f80
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        mov    edx, dword ptr [esi + 0x8aca10]
        push    edx
        call    FUN_0071ddf0
        push    eax
        push    0x7a3f68
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    byte ptr [g_0087d8a0], 0
        mov    dword ptr [ebp - 0x258], 0
L_cd09:
        cmp    dword ptr [ebp - 0x258], 0x10
        jge    L_cd7b
        push    4
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, eax
        shl    ecx, 4
        add    ecx, eax
        lea    eax, [eax + ecx*8]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [ebp - 0x258]
        lea    ecx, [eax + edx*2]
        lea    edx, [ecx*4 + 0x8ac508]
        push    edx
        push    0x87d8a0
        call    dword ptr [g_0076b2f8]
        add    esp, 0xc
        mov    edi, 0x76cb8c
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    esi, edi
        mov    edx, ecx
        mov    edi, 0x87d8a0
        or    ecx, 0xffffffff
        repne scasb
        dec    edi
        mov    ecx, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        inc    dword ptr [ebp - 0x258]
        mov    edi, dword ptr [ebp - 0x28]
        jmp    L_cd09
L_cd7b:
        push    0x87d8a0
        push    0x7a3f50
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    byte ptr [g_0087d8a0], 0
        xor    eax, eax
        mov    dword ptr [ebp - 0x258], eax
L_cda2:
        cmp    eax, 0x10
        jge    L_ce07
        mov    ecx, eax
        shl    ecx, 5
        mov    edx, edi
        shl    edx, 4
        add    edx, edi
        lea    eax, [edi + edx*8]
        lea    eax, [eax + eax*2]
        lea    eax, [ecx + eax*8 + 0x8ac548]
        cmp    dword ptr [eax], 0
        je    L_ce07
        push    eax
        call    FUN_00751100
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    esi, edi
        mov    edx, ecx
        mov    edi, 0x87d8a0
        or    ecx, 0xffffffff
        repne scasb
        dec    edi
        mov    ecx, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    eax, dword ptr [ebp - 0x258]
        inc    eax
        mov    dword ptr [ebp - 0x258], eax
        mov    edi, dword ptr [ebp - 0x28]
        jmp    L_cda2
L_ce07:
        push    0x87d8a0
        push    0x7a3f38
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    byte ptr [g_0087d8a0], 0
        xor    eax, eax
        mov    dword ptr [ebp - 0x258], eax
L_ce2e:
        cmp    eax, 0x10
        jge    L_ce93
        mov    ecx, eax
        shl    ecx, 5
        mov    edx, edi
        shl    edx, 4
        add    edx, edi
        lea    eax, [edi + edx*8]
        lea    eax, [eax + eax*2]
        lea    eax, [ecx + eax*8 + 0x8ac808]
        cmp    dword ptr [eax], 0
        je    L_ce93
        push    eax
        call    FUN_00751100
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    esi, edi
        mov    edx, ecx
        mov    edi, 0x87d8a0
        or    ecx, 0xffffffff
        repne scasb
        dec    edi
        mov    ecx, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    eax, dword ptr [ebp - 0x258]
        inc    eax
        mov    dword ptr [ebp - 0x258], eax
        mov    edi, dword ptr [ebp - 0x28]
        jmp    L_ce2e
L_ce93:
        push    0x87d8a0
        push    0x7a3f20
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    byte ptr [g_0087d8a0], 0
        xor    ecx, ecx
        mov    dword ptr [ebp - 0x258], ecx
L_ceba:
        cmp    ecx, 0x20
        jge    L_cf4f
        mov    eax, edi
        shl    eax, 4
        add    eax, edi
        lea    eax, [edi + eax*8]
        lea    edx, [eax + eax*2]
        lea    ecx, [ecx + edx*4]
        shl    ecx, 1
        xor    eax, eax
        mov    ax, word ptr [ecx + 0x8ac748]
        test    ax, ax
        je    L_cf4f
        xor    edx, edx
        mov    dx, word ptr [ecx + 0x8ac74a]
        push    edx
        and    eax, 0xffff
        push    eax
        push    0x7a3f18
        lea    eax, [ebp - 0x2ac]
        push    eax
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        lea    edi, [ebp - 0x2ac]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    esi, edi
        mov    edx, ecx
        mov    edi, 0x87d8a0
        or    ecx, 0xffffffff
        repne scasb
        dec    edi
        mov    ecx, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    eax, dword ptr [ebp - 0x258]
        add    eax, 2
        mov    dword ptr [ebp - 0x258], eax
        mov    ecx, eax
        mov    edi, dword ptr [ebp - 0x28]
        jmp    L_ceba
L_cf4f:
        push    0x87d8a0
        push    0x7a3f00
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    byte ptr [g_0087d8a0], 0
        xor    ecx, ecx
        mov    dword ptr [ebp - 0x258], ecx
L_cf76:
        cmp    ecx, 0x20
        jge    L_d00b
        mov    eax, edi
        shl    eax, 4
        add    eax, edi
        lea    eax, [edi + eax*8]
        lea    edx, [eax + eax*2]
        lea    ecx, [ecx + edx*4]
        shl    ecx, 1
        xor    eax, eax
        mov    ax, word ptr [ecx + 0x8ac7a8]
        test    ax, ax
        je    L_d00b
        xor    edx, edx
        mov    dx, word ptr [ecx + 0x8ac7aa]
        push    edx
        and    eax, 0xffff
        push    eax
        push    0x7a3f18
        lea    eax, [ebp - 0x2bc]
        push    eax
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        lea    edi, [ebp - 0x2bc]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    esi, edi
        mov    edx, ecx
        mov    edi, 0x87d8a0
        or    ecx, 0xffffffff
        repne scasb
        dec    edi
        mov    ecx, edx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    eax, dword ptr [ebp - 0x258]
        add    eax, 2
        mov    dword ptr [ebp - 0x258], eax
        mov    ecx, eax
        mov    edi, dword ptr [ebp - 0x28]
        jmp    L_cf76
L_d00b:
        push    0x87d8a0
        push    0x7a3ee8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, edi
        shl    eax, 4
        add    eax, edi
        lea    eax, [edi + eax*8]
        lea    esi, [eax + eax*2]
        shl    esi, 3
        test    byte ptr [esi + 0x8ac2a8], 1
        mov    eax, 0x770d38
        jne    L_d046
        mov    eax, 0x770d24
L_d046:
        push    eax
        push    0x7a3ed0
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac41c]
        test    ah, 0x20
        mov    eax, 0x770d38
        jne    L_d06f
        mov    eax, 0x770d24
L_d06f:
        push    eax
        push    0x7a3eb8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac41c]
        test    ah, 0x80
        mov    eax, 0x770d38
        jne    L_d098
        mov    eax, 0x770d24
L_d098:
        push    eax
        push    0x7a3ea0
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac41c]
        test    ah, 4
        mov    eax, 0x770d38
        jne    L_d0c1
        mov    eax, 0x770d24
L_d0c1:
        push    eax
        push    0x7a3e88
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac2a8], 0x200000
        mov    eax, 0x770d38
        jne    L_d0eb
        mov    eax, 0x770d24
L_d0eb:
        push    eax
        push    0x7a3e70
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac2a8], 0x400000
        mov    eax, 0x770d38
        jne    L_d115
        mov    eax, 0x770d24
L_d115:
        push    eax
        push    0x7a3e58
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac2a8], 2
        mov    eax, 0x770d38
        jne    L_d13c
        mov    eax, 0x770d24
L_d13c:
        push    eax
        push    0x7a3e40
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    edi, 0x200
        test    dword ptr [esi + 0x8ac2a8], edi
        mov    eax, 0x770d38
        jne    L_d167
        mov    eax, 0x770d24
L_d167:
        push    eax
        push    0x7a3e28
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac2a8]
        test    ah, 8
        mov    eax, 0x770d38
        jne    L_d190
        mov    eax, 0x770d24
L_d190:
        push    eax
        push    0x7a3e10
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac2a8], 0x100000
        mov    eax, 0x770d38
        jne    L_d1ba
        mov    eax, 0x770d24
L_d1ba:
        push    eax
        push    0x7a3df8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac2a8], 0x20000
        mov    eax, 0x770d38
        jne    L_d1e4
        mov    eax, 0x770d24
L_d1e4:
        push    eax
        push    0x7a3de0
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac494]
        test    ah, 4
        mov    eax, 0x7a3ddc
        jne    L_d20d
        mov    eax, 0x76b768
L_d20d:
        push    eax
        push    0x7a3dc4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac494], edi
        mov    eax, 0x7a3dc0
        jne    L_d233
        mov    eax, 0x76b768
L_d233:
        push    eax
        mov    ecx, ebx
        call    FUN_006fa880
        mov    edi, 0x100
        test    dword ptr [esi + 0x8ac494], edi
        mov    eax, 0x7a3db8
        jne    L_d252
        mov    eax, 0x77a078
L_d252:
        push    eax
        mov    ecx, ebx
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac490]
        test    ah, 4
        mov    eax, 0x7a3ddc
        jne    L_d26f
        mov    eax, 0x76b768
L_d26f:
        push    eax
        push    0x7a3da0
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac490]
        test    ah, 2
        mov    eax, 0x7a3dc0
        jne    L_d298
        mov    eax, 0x76b768
L_d298:
        push    eax
        mov    ecx, ebx
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac490], edi
        mov    eax, 0x7a3db8
        jne    L_d2b2
        mov    eax, 0x77a078
L_d2b2:
        push    eax
        mov    ecx, ebx
        call    FUN_006fa880
        push    0x7a3d98
        mov    ecx, dword ptr [esi + 0x8ac49c]
        push    ecx
        push    0x7a3d94
        mov    edx, dword ptr [esi + 0x8ac498]
        push    edx
        push    0x7a3d7c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac4a4]
        push    eax
        push    0x7a3d94
        mov    ecx, dword ptr [esi + 0x8ac4a0]
        push    ecx
        mov    ecx, ebx
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    edi, dword ptr [esi + 0x8ac4a8]
        mov    eax, edi
        mov    dword ptr [ebp - 0x29c], eax
        test    eax, eax
        je    L_d385
        mov    edx, dword ptr [esi + 0x8ac478]
        and    edx, 0x40
        test    dl, dl
        jne    L_d368
        cmp    edi, dword ptr [esi + 0x8ac4a4]
        jbe    L_d368
        cdq    
        and    edx, 0xff
        add    eax, edx
        sar    eax, 8
        mov    dword ptr [ebp - 0x29c], eax
        push    0x7a3d78
        push    eax
        push    0x7a3d48
        jmp    L_d373
L_d368:
        push    0x7a3d78
        push    eax
        push    0x7a3d30
L_d373:
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        jmp    L_d38c
L_d385:
        push    0x7a3d10
        mov    ecx, ebx
L_d38c:
        call    FUN_006fa880
        fld    dword ptr [esi + 0x8ac4c0]
        call    FUN_0075db4a
        push    eax
        fld    dword ptr [esi + 0x8ac4bc]
        call    FUN_0075db4a
        push    eax
        fld    dword ptr [esi + 0x8ac4b8]
        call    FUN_0075db4a
        push    eax
        fld    dword ptr [esi + 0x8ac4b4]
        call    FUN_0075db4a
        push    eax
        push    0x7a3d00
        lea    eax, [ebp - 0x298]
        push    eax
        call    dword ptr [g_0076b420]
        add    esp, 0x18
        lea    ecx, [ebp - 0x298]
        push    ecx
        push    0x7a3ce8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac470], 0x20
        mov    eax, 0x770d38
        jne    L_d403
        mov    eax, 0x770d24
L_d403:
        push    eax
        push    0x7a3cd0
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    edx, dword ptr [esi + 0x8ac468]
        not    edx
        push    edx
        call    FUN_00718710
        push    eax
        push    0x7a3cb8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac46c]
        not    eax
        push    eax
        call    FUN_00718710
        push    eax
        push    0x7a3ca0
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac41c]
        test    ah, 0x10
        mov    eax, 0x770d38
        jne    L_d470
        mov    eax, 0x770d24
L_d470:
        push    eax
        push    0x7a3c88
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, dword ptr [esi + 0x8ac4cc]
        and    ecx, 0xffff
        push    ecx
        push    0x7a3c70
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        xor    edx, edx
        mov    dx, word ptr [esi + 0x8ac4d4]
        push    edx
        push    0x7a3c58
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        xor    eax, eax
        mov    ax, word ptr [esi + 0x8ac4d6]
        push    eax
        push    0x7a3c40
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        test    dword ptr [esi + 0x8ac41c], 0x10000
        mov    eax, 0x770d38
        jne    L_d4f4
        mov    eax, 0x770d24
L_d4f4:
        push    eax
        push    0x7a3c28
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0x8ac4f2]
        push    ecx
        push    0x7a3c10
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    eax, dword ptr [esi + 0x8ac4d8]
        cmp    eax, -1
        jne    L_d53e
        push    0x7a3bf0
        mov    ecx, ebx
        call    FUN_006fa880
        jmp    L_d552
L_d53e:
        push    eax
        push    0x7a3bd8
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
L_d552:
        xor    edx, edx
        mov    dx, word ptr [esi + 0x8ac4f0]
        push    edx
        push    0x7a3bc0
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    eax, dword ptr [esi + 0x8aca20]
        test    eax, eax
        mov    eax, 0x7a3bac
        jne    L_d583
        mov    eax, 0x76b768
L_d583:
        push    eax
        mov    eax, dword ptr [esi + 0x8aca14]
        push    eax
        call    FUN_00719a00
        push    eax
        push    0x7a3b94
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8aca24]
        test    eax, eax
        mov    eax, 0x7a3bac
        jne    L_d5bf
        mov    eax, 0x76b768
L_d5bf:
        push    eax
        mov    ecx, dword ptr [esi + 0x8aca18]
        push    ecx
        call    FUN_00719a00
        push    eax
        push    0x7a3b7c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8aca28]
        test    eax, eax
        mov    eax, 0x7a3bac
        jne    L_d5fb
        mov    eax, 0x76b768
L_d5fb:
        push    eax
        mov    edx, dword ptr [esi + 0x8aca1c]
        push    edx
        call    FUN_00719a00
        push    eax
        push    0x7a3b64
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    al, byte ptr [esi + 0x8acb31]
        test    al, al
        mov    eax, 0x770d38
        jne    L_d637
        mov    eax, 0x770d24
L_d637:
        push    eax
        push    0x7a3b4c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac4d0], 2
        mov    eax, 0x770d38
        jne    L_d65e
        mov    eax, 0x770d24
L_d65e:
        push    eax
        push    0x7a3b34
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac4d0], 4
        mov    eax, 0x770d38
        jne    L_d685
        mov    eax, 0x770d24
L_d685:
        push    eax
        push    0x7a3b1c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac4d0], 0x40
        mov    eax, 0x770d38
        jne    L_d6ac
        mov    eax, 0x770d24
L_d6ac:
        push    eax
        push    0x7a3b04
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac4d0], 0x80
        mov    eax, 0x770d38
        jne    L_d6d3
        mov    eax, 0x770d24
L_d6d3:
        push    eax
        push    0x7a3aec
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac4d0]
        test    ah, 2
        mov    eax, 0x770d38
        jne    L_d6fc
        mov    eax, 0x770d24
L_d6fc:
        push    eax
        push    0x7a3ad4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac4d0], 8
        mov    eax, 0x770d38
        jne    L_d723
        mov    eax, 0x770d24
L_d723:
        push    eax
        push    0x7a3abc
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac4d0], 0x10
        mov    eax, 0x770d38
        jne    L_d74a
        mov    eax, 0x770d24
L_d74a:
        push    eax
        push    0x7a3aa4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac4d0], 0x20
        mov    eax, 0x770d38
        jne    L_d771
        mov    eax, 0x770d24
L_d771:
        push    eax
        push    0x7a3a8c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac4d0]
        test    ah, 0x80
        mov    eax, 0x770d38
        jne    L_d79a
        mov    eax, 0x770d24
L_d79a:
        push    eax
        push    0x7a3a74
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    edi, 0x800
        test    dword ptr [esi + 0x8ac4d0], edi
        mov    eax, 0x770d38
        jne    L_d7c5
        mov    eax, 0x770d24
L_d7c5:
        push    eax
        push    0x7a3a5c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac4d0]
        test    ah, 0x10
        mov    eax, 0x770d38
        jne    L_d7ee
        mov    eax, 0x770d24
L_d7ee:
        push    eax
        push    0x7a3a44
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac4d0], 0x200000
        mov    eax, 0x770d38
        jne    L_d818
        mov    eax, 0x770d24
L_d818:
        push    eax
        push    0x7a3a2c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac4d0], 0x400000
        mov    eax, 0x770d38
        jne    L_d842
        mov    eax, 0x770d24
L_d842:
        push    eax
        push    0x7a3a14
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac4d0], 0x800000
        mov    eax, 0x770d38
        jne    L_d86c
        mov    eax, 0x770d24
L_d86c:
        push    eax
        push    0x7a39fc
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac460], 0x20000
        mov    eax, 0x770d38
        jne    L_d896
        mov    eax, 0x770d24
L_d896:
        push    eax
        push    0x7a39e4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac460], edi
        mov    eax, 0x770d38
        jne    L_d8bc
        mov    eax, 0x770d24
L_d8bc:
        push    eax
        push    0x7a39cc
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac460]
        test    ah, 1
        mov    eax, 0x770d38
        jne    L_d8e5
        mov    eax, 0x770d24
L_d8e5:
        push    eax
        push    0x7a39b4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac460], 0x80
        mov    eax, 0x770d38
        jne    L_d90c
        mov    eax, 0x770d24
L_d90c:
        push    eax
        push    0x7a399c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac460], 0x10000
        mov    eax, 0x770d38
        jne    L_d936
        mov    eax, 0x770d24
L_d936:
        push    eax
        push    0x7a3984
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac460], 0x100000
        mov    eax, 0x770d38
        jne    L_d960
        mov    eax, 0x770d24
L_d960:
        push    eax
        push    0x7a396c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    edi, 0x40000
        test    dword ptr [esi + 0x8ac460], edi
        mov    eax, 0x770d38
        jne    L_d98b
        mov    eax, 0x770d24
L_d98b:
        push    eax
        push    0x7a3954
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac460]
        test    ah, 0x20
        mov    eax, 0x770d38
        jne    L_d9b4
        mov    eax, 0x770d24
L_d9b4:
        push    eax
        push    0x7a393c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac460], edi
        mov    eax, 0x770d38
        jne    L_d9da
        mov    eax, 0x770d24
L_d9da:
        push    eax
        push    0x7a3954
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac460]
        test    ah, 0x80
        mov    eax, 0x770d38
        jne    L_da03
        mov    eax, 0x770d24
L_da03:
        push    eax
        push    0x7a3924
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac47c], 4
        mov    eax, 0x770d38
        jne    L_da2a
        mov    eax, 0x770d24
L_da2a:
        push    eax
        push    0x7a390c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac47c], 0x20
        mov    eax, 0x770d38
        jne    L_da51
        mov    eax, 0x770d24
L_da51:
        push    eax
        push    0x7a38f4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    dword ptr [esi + 0x8ac4cc], 0x80000
        mov    eax, 0x770d38
        jne    L_da7b
        mov    eax, 0x770d24
L_da7b:
        push    eax
        push    0x7a38dc
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac484], 4
        mov    eax, 0x770d38
        jne    L_daa2
        mov    eax, 0x770d24
L_daa2:
        push    eax
        push    0x7a38c4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac484], 8
        mov    eax, 0x770d38
        jne    L_dac9
        mov    eax, 0x770d24
L_dac9:
        push    eax
        push    0x7a38ac
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac484], 2
        mov    eax, 0x770d38
        jne    L_daf0
        mov    eax, 0x770d24
L_daf0:
        push    eax
        push    0x7a3894
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac474]
        test    ah, 0x40
        mov    eax, 0x770d38
        jne    L_db19
        mov    eax, 0x770d24
L_db19:
        push    eax
        push    0x7a387c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac478], 0x20
        mov    eax, 0x770d38
        jne    L_db40
        mov    eax, 0x770d24
L_db40:
        push    eax
        push    0x7a3864
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac474], 1
        mov    eax, 0x770d38
        jne    L_db67
        mov    eax, 0x770d24
L_db67:
        push    eax
        push    0x7a384c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac478], 4
        mov    eax, 0x770d38
        jne    L_db8e
        mov    eax, 0x770d24
L_db8e:
        push    eax
        push    0x7a3834
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac474], 2
        mov    eax, 0x770d38
        jne    L_dbb5
        mov    eax, 0x770d24
L_dbb5:
        push    eax
        push    0x7a381c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac478], 8
        mov    eax, 0x770d38
        jne    L_dbdc
        mov    eax, 0x770d24
L_dbdc:
        push    eax
        push    0x7a3804
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        test    byte ptr [esi + 0x8ac474], 0x80
        mov    eax, 0x770d38
        jne    L_dc03
        mov    eax, 0x770d24
L_dc03:
        push    eax
        push    0x7a37ec
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [esi + 0x8ac478]
        test    ah, 2
        mov    eax, 0x770d38
        jne    L_dc2c
        mov    eax, 0x770d24
L_dc2c:
        push    eax
        push    0x7a37d4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    0x77a078
        mov    ecx, ebx
        call    FUN_006fa880
        mov    eax, dword ptr [ebp - 0x28]
        inc    eax
        mov    dword ptr [ebp - 0x28], eax
        mov    edi, eax
        jmp    L_cb6f
L_dc5a:
        wait    
        jmp    L_dc73
        mov    eax, 1
        ret    
        mov    esp, dword ptr [ebp - 0x18]
        push    0x7a37ac
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_006fa880
L_dc73:
        mov    dword ptr [ebp - 4], 0xffffffff
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dword ptr fs:[0], ecx
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
