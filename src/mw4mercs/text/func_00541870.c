/*
 * FUN_00541870 (4456 B) — __thiscall (RET 0x8). Large mission/objective
 * validation routine. Walks linked lists of entries, compares names via
 * _strnicmp (IAT 0x0076b2b0), allocates small objects via FUN_004084d0,
 * and writes typed records into this+0x205528 / this+0x205924 arrays.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db090;
extern int *g_007dab44;
extern int g_007dab40;
extern int *g_0076b2b0;

extern void __cdecl FUN_00533f10(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_00544180(void);
extern void __cdecl FUN_005441d0(void);
extern void __cdecl FUN_00544220(void);
extern void __cdecl FUN_00544270(void);
extern void __cdecl FUN_005442c0(void);
extern void __cdecl FUN_004ceb20(void);

__declspec(naked) void FUN_00541870(void)
{
    __asm {
        sub     esp, 0x130
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x17]
        test    al, al
        push    edi
        jnz     L_541e5e
        mov     al, byte ptr [esi + 0xc1]
        test    al, al
        jnz     L_541e4f
        mov     eax, dword ptr [g_007db090]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      L_541e4f
        cmp     dword ptr [esi + 0x3024], ebx
        jz      L_541e4f
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x4c]
        xor     ecx, 0x85739531
        mov     byte ptr [esp + 0x13], bl
        mov     byte ptr [esp + 0x12], bl
        jz      L_5418d5
        mov     byte ptr [esp + 0x13], 0x1
L_5418d5:
        mov     edx, dword ptr [eax + 0x58]
        xor     edx, 0x85739531
        jz      L_5418e5
        mov     byte ptr [esp + 0x12], 0x1
L_5418e5:
        mov     eax, dword ptr [esp + 0x148]
        mov     edx, dword ptr [esp + 0x144]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edx
        mov     ecx, esi
        mov     word ptr [esp + 0x28], 0xffff
        mov     word ptr [esp + 0x2a], bx
        call    FUN_00533f10
        push    0x1
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x104]
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_007db090]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x28], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x1
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x104]
        push    ecx
        mov     word ptr [esp + 0x36], dx
        call    FUN_004d9910
        mov     edx, dword ptr [g_007dab44]
        mov     edi, dword ptr [edx]
        mov     ebp, dword ptr [g_007dab40]
        mov     dword ptr [esi + 0x205d20], ebx
        push    0x14
        mov     dword ptr [esp + 0x28], eax
        mov     byte ptr [esp + 0x21], 0x1
        mov     dword ptr [esi + 0x205528], ebx
        xor     edi, ebp
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0x10
        cmp     ebp, ebx
        jz      L_5419a5
        mov     eax, dword ptr [edi + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x8c]
        add     ecx, 0x10
        push    ecx
        mov     ecx, ebp
        call    FUN_00416bc0
        mov     dword ptr [ebp], 0x779e88
        jmp     L_5419a7
L_5419a5:
        xor     ebp, ebp
L_5419a7:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edx + 0x34c]
        mov     dword ptr [esp + 0x38], eax
L_5419b5:
        mov     ecx, dword ptr [esp + 0x38]
        test    ecx, ecx
        jz      L_541ae8
L_5419c1:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x38], ecx
        jz      L_541ae8
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        mov     ebx, eax
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0x8]
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      L_541a4d
L_5419f2:
        lea     ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov     cx, word ptr [edi + 0x10]
        mov     dx, word ptr [edi + 0x12]
        lea     eax, [esp + 0x14]
        mov     word ptr [esp + 0x14], cx
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004da8d0
        mov     edx, dword ptr [esp + 0x90]
        mov     ecx, dword ptr [edx + 0x30]
        mov     eax, dword ptr [ebx + 0x30]
        add     esp, 0x8
        cmp     ecx, eax
        lea     ecx, [esp + 0x74]
        jz      L_541a48
        call    FUN_004d21c0
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     L_5419f2
        jmp     L_541a4d
L_541a48:
        call    FUN_004d21c0
L_541a4d:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_541a92
        test    edi, edi
        jz      L_541a92
        cmp     dword ptr [edi + 0x20], 0x1
        jnz     L_541a92
        mov     eax, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [ebx + 0x30]
        mov     dword ptr [esi + eax*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xd
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_541a92:
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        jnz     L_5419b5
        test    edi, edi
        jz      L_5419b5
        cmp     dword ptr [edi + 0x20], 0x2
        jnz     L_5419b5
        mov     eax, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [ebx + 0x30]
        mov     dword ptr [esi + eax*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xe
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
        jmp     L_5419b5
L_541ae8:
        test    ebp, ebp
        jz      L_541af5
        mov     eax, dword ptr [ebp]
        push    0x1
        mov     ecx, ebp
        call    dword ptr [eax]
L_541af5:
        mov     ecx, dword ptr [g_007dab44]
        mov     edi, dword ptr [ecx]
        mov     ebx, dword ptr [g_007dab40]
        push    0x14
        xor     edi, ebx
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jz      L_541b38
        mov     edx, dword ptr [edi + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x88]
        add     eax, 0x10
        push    eax
        mov     ecx, ebp
        call    FUN_00416bc0
        mov     dword ptr [ebp], 0x779e88
        jmp     L_541b3a
L_541b38:
        xor     ebp, ebp
L_541b3a:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx + 0x34c]
        mov     dword ptr [esp + 0x38], edx
L_541b48:
        mov     ecx, dword ptr [esp + 0x38]
        test    ecx, ecx
        jz      L_541c7b
L_541b54:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x38], ecx
        jz      L_541c7b
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        mov     ebx, eax
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0x8]
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      L_541be0
L_541b85:
        lea     ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov     cx, word ptr [edi + 0x10]
        mov     dx, word ptr [edi + 0x12]
        lea     eax, [esp + 0x14]
        mov     word ptr [esp + 0x14], cx
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004da8d0
        mov     edx, dword ptr [esp + 0x90]
        mov     ecx, dword ptr [edx + 0x30]
        mov     eax, dword ptr [ebx + 0x30]
        add     esp, 0x8
        cmp     ecx, eax
        lea     ecx, [esp + 0x74]
        jz      L_541bdb
        call    FUN_004d21c0
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     L_541b85
        jmp     L_541be0
L_541bdb:
        call    FUN_004d21c0
L_541be0:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_541c25
        test    edi, edi
        jz      L_541c25
        cmp     dword ptr [edi + 0x20], 0x1
        jnz     L_541c25
        mov     eax, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [ebx + 0x30]
        mov     dword ptr [esi + eax*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xd
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_541c25:
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        jnz     L_541b48
        test    edi, edi
        jz      L_541b48
        cmp     dword ptr [edi + 0x20], 0x2
        jnz     L_541b48
        mov     eax, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [ebx + 0x30]
        mov     dword ptr [esi + eax*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xe
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
        jmp     L_541b48
L_541c7b:
        test    ebp, ebp
        jz      L_541c88
        mov     eax, dword ptr [ebp]
        push    0x1
        mov     ecx, ebp
        call    dword ptr [eax]
L_541c88:
        mov     ebx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        call    dword ptr [edx + 0x4]
        mov     edi, dword ptr [g_007dab40]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [g_007dab44]
        mov     ebp, dword ptr [eax]
        push    0x14
        xor     ebp, edi
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_541cda
        mov     ecx, dword ptr [ebp + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x84]
        add     edx, 0x10
        push    edx
        mov     ecx, edi
        call    FUN_00416bc0
        mov     dword ptr [edi], 0x779e88
        jmp     L_541cdc
L_541cda:
        xor     edi, edi
L_541cdc:
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], edi
        call    FUN_00416cc0
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jz      L_541d81
        mov     eax, dword ptr [ebx + 0x2c]
        mov     dword ptr [esp + 0x2c], eax
L_541cfa:
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [ecx + 0x18]
        test    ebp, ebp
        jz      L_541e48
        inc     byte ptr [ebp - 0x1]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
L_541d18:
        test    ebp, ebp
        jz      L_541d1f
        inc     byte ptr [ebp - 0x1]
L_541d1f:
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        push    ebp
        push    edx
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    ebp, ebp
        jz      L_541d68
        mov     cl, byte ptr [ebp - 0x1]
        lea     eax, [ebp - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_541d50
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_541d50:
        test    ebp, ebp
        jz      L_541d68
        mov     al, byte ptr [ebp - 0x1]
        dec     ebp
        dec     al
        mov     byte ptr [ebp], al
        jnz     L_541d68
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_541d68:
        test    bl, bl
        jnz     L_541d81
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_00416cc0
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jnz     L_541cfa
L_541d81:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        mov     eax, dword ptr [esp + 0x18]
        jnz     L_541dd1
        test    eax, eax
        jz      L_541dd1
        cmp     dword ptr [eax + 0x20], 0x1
        jnz     L_541dd1
        mov     ecx, dword ptr [esi + 0x205d20]
        mov     edx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [edx + 0x634]
        mov     dword ptr [esi + ecx*4 + 0x205924], edx
        mov     ecx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + ecx*4 + 0x205528], 0xd
        mov     ecx, dword ptr [esi + 0x205d20]
        inc     ecx
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], ecx
L_541dd1:
        mov     cl, byte ptr [esp + 0x12]
        test    cl, cl
        jnz     L_541e1d
        test    eax, eax
        jz      L_541e1d
        cmp     dword ptr [eax + 0x20], 0x2
        jnz     L_541e1d
        mov     edx, dword ptr [esi + 0x205d20]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax + 0x634]
        mov     dword ptr [esi + edx*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xe
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_541e1d:
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        jz      L_541e2b
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_541e2b:
        lea     ecx, [esp + 0xfc]
        call    FUN_004d21c0
        mov     al, byte ptr [esp + 0x11]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x130
        ret     0x8
L_541e48:
        xor     ecx, ecx
        jmp     L_541d18
L_541e4f:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x130
        ret     0x8
L_541e5e:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        mov     edi, dword ptr [esp + 0x144]
        xor     edx, eax
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [esp + 0x148]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax + 0xb0]
        push    edx
        lea     eax, [esp + 0x40]
        push    eax
        mov     byte ptr [esp + 0x2f], cl
        xor     ebp, ebp
        push    edi
        mov     ecx, esi
        mov     word ptr [esp + 0x48], 0xffff
        mov     word ptr [esp + 0x4a], bp
        call    FUN_00533f10
        push    0x1
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0xc0]
        mov     bl, al
        call    FUN_004d1f80
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        push    0x1
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        mov     ecx, eax
        mov     dword ptr [esp + 0x64], eax
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x60], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x1
        lea     eax, [esp + 0x64]
        push    eax
        lea     ecx, [esp + 0xc0]
        push    ecx
        mov     word ptr [esp + 0x6e], dx
        call    FUN_004d9910
        add     esp, 0xc
        test    bl, bl
        mov     dword ptr [esi + 0x205d20], ebp
        mov     dword ptr [esp + 0x18], eax
        mov     byte ptr [esp + 0x11], 0x1
        mov     dword ptr [esi + 0x205528], ebp
        jz      L_541f71
        mov     edx, edi
        imul    edx, edx, 0x22ac
        mov     cl, byte ptr [edx + esi + 0x205d2c]
        test    cl, cl
        jz      L_541f71
        mov     eax, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + eax*4 + 0x205528], 0x1
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        lea     ecx, [esp + 0xb8]
        mov     dword ptr [esi + 0x205d20], eax
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x130
        ret     0x8
L_541f71:
        mov     eax, dword ptr [eax + 0x4]
        cmp     dword ptr [eax], 0x429
        jnz     L_54294a
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      L_541f8c
        mov     ecx, dword ptr [esi + 0x50]
        jmp     L_541f8f
L_541f8c:
        mov     ecx, dword ptr [esi + 0x54]
L_541f8f:
        cmp     dword ptr [ecx + 0xe4], ebp
        jz      L_54207d
        mov     edx, edi
        imul    edx, edx, 0x22ac
        mov     eax, dword ptr [edx + esi + 0x205f38]
        cmp     eax, 0x8
        jz      L_541fda
        lea     edx, [eax + eax*4 + 0xf]
        lea     eax, [eax + eax*4]
        shl     edx, 0x4
        mov     edx, dword ptr [edx + ecx]
        shl     eax, 0x4
        add     eax, ecx
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [eax + 0xf4]
        mov     eax, dword ptr [eax + 0x100]
        mov     dword ptr [esp + 0x1c], edx
        jmp     L_542097
L_541fda:
        mov     edx, dword ptr [ecx + 0x88]
        mov     ebp, dword ptr [ecx + 0xbc]
        mov     eax, dword ptr [ecx + 0x90]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [ecx + 0x8c]
        mov     dword ptr [esp + 0x50], ebp
        mov     ebp, dword ptr [ecx + 0xc4]
        mov     dword ptr [esp + 0x40], ebp
        mov     ebp, dword ptr [ecx + 0xcc]
        mov     dword ptr [esp + 0x48], ebp
        mov     ebp, dword ptr [ecx + 0xd4]
        mov     dword ptr [esp + 0x58], ebp
        mov     ebp, dword ptr [ecx + 0xdc]
        mov     dword ptr [esp + 0x30], ebp
        mov     ebp, dword ptr [ecx + 0xc0]
        mov     dword ptr [esp + 0x54], ebp
        mov     ebp, dword ptr [ecx + 0xc8]
        mov     dword ptr [esp + 0x44], ebp
        mov     ebp, dword ptr [ecx + 0xd0]
        mov     dword ptr [esp + 0x4c], ebp
        mov     ebp, dword ptr [ecx + 0xd8]
        mov     dword ptr [esp + 0x5c], ebp
        mov     ebp, dword ptr [ecx + 0xe0]
        mov     dword ptr [esp + 0x34], ebp
        mov     ebp, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + ebp*4 + 0x205528], 0x4
        mov     ebp, dword ptr [esi + 0x205d20]
        inc     ebp
        mov     dword ptr [esp + 0x1c], edx
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], ebp
        jmp     L_5420fb
L_54207d:
        mov     eax, dword ptr [ecx + 0x88]
        mov     edx, dword ptr [ecx + 0x8c]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ecx + 0x90]
        mov     dword ptr [esp + 0x1c], edx
L_542097:
        mov     ebp, dword ptr [ecx + 0xbc]
        mov     dword ptr [esp + 0x50], ebp
        mov     ebp, dword ptr [ecx + 0xc4]
        mov     dword ptr [esp + 0x40], ebp
        mov     ebp, dword ptr [ecx + 0xcc]
        mov     dword ptr [esp + 0x48], ebp
        mov     ebp, dword ptr [ecx + 0xd4]
        mov     dword ptr [esp + 0x58], ebp
        mov     ebp, dword ptr [ecx + 0xdc]
        mov     dword ptr [esp + 0x30], ebp
        mov     ebp, dword ptr [ecx + 0xc0]
        mov     dword ptr [esp + 0x54], ebp
        mov     ebp, dword ptr [ecx + 0xc8]
        mov     dword ptr [esp + 0x44], ebp
        mov     ebp, dword ptr [ecx + 0xd0]
        mov     dword ptr [esp + 0x4c], ebp
        mov     ebp, dword ptr [ecx + 0xd8]
        mov     dword ptr [esp + 0x5c], ebp
        mov     ebp, dword ptr [ecx + 0xe0]
        mov     dword ptr [esp + 0x34], ebp
L_5420fb:
        cmp     edx, 0x64
        jle     L_542108
        mov     dword ptr [esp + 0x1c], 0x64
L_542108:
        cmp     eax, 0x2160ec0
        jle     L_542114
        mov     eax, 0x2160ec0
L_542114:
        test    bl, bl
        jz      L_542145
        mov     edx, dword ptr [ecx + 0x84]
        test    edx, edx
        jz      L_542145
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0x3
        mov     edx, dword ptr [esi + 0x205d20]
        inc     edx
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], edx
L_542145:
        mov     ebp, dword ptr [esp + 0x18]
        imul    edi, edi, 0x22ac
        fld     dword ptr [ebp + 0x3b8]
        mov     edx, dword ptr [ebp + 0x3c0]
        add     edi, esi
        cmp     edx, eax
        mov     dword ptr [esp + 0x2c], edx
        fstp    dword ptr [edi + 0x207fc4]
        mov     dword ptr [edi + 0x207fc8], edx
        jle     L_542194
        mov     eax, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + eax*4 + 0x205528], 0xf
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_542194:
        fld     dword ptr [ebp + 0x3b8]
        fild    dword ptr [esp + 0x14]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5421ca
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0x5
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_5421ca:
        fld     dword ptr [ebp + 0x3b8]
        mov     ebx, 0x6
        fild    dword ptr [esp + 0x1c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_542201
        mov     eax, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + eax*4 + 0x205528], ebx
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_542201:
        mov     eax, dword ptr [ecx + 0xe4]
        test    eax, eax
        jz      L_5422b1
        mov     eax, dword ptr [edi + 0x205f38]
        cmp     eax, 0x8
        jz      L_5422b1
        lea     edx, [eax + eax*4]
        shl     edx, 0x4
        fld     dword ptr [edx + ecx + 0xfc]
        lea     eax, [edx + ecx]
        fadd    dword ptr [ebp + 0x3b8]
        fild    dword ptr [eax + 0xf8]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_542266
        mov     eax, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + eax*4 + 0x205528], 0xc
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_542266:
        mov     eax, dword ptr [edi + 0x205f38]
        lea     edx, [eax + eax*4]
        shl     edx, 0x4
        fld     dword ptr [ecx + edx + 0x108]
        add     ecx, edx
        fiadd   dword ptr [esp + 0x2c]
        fild    dword ptr [ecx + 0x104]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_5422b1
        mov     eax, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + eax*4 + 0x205528], 0x10
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_5422b1:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx + 0x78]
        add     ecx, 0x78
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [esp + 0x18]
        fld     dword ptr [ecx + 0x3b8]
        mov     ebp, dword ptr [eax + 0x634]
        fcomp   dword ptr [eax + 0x70]
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [edi + 0x205f3c], ebp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_542301
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], ebx
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_542301:
        lea     eax, [esp + 0x50]
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_00544180
        test    eax, eax
        jnz     L_54233a
        mov     ecx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + ecx*4 + 0x205924], ebp
        mov     edx, dword ptr [esi + 0x205d20]
        mov     byte ptr [esp + 0x11], al
        mov     dword ptr [esi + edx*4 + 0x205528], 0x7
        inc     dword ptr [esi + 0x205d20]
L_54233a:
        mov     eax, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [eax + 0x34c]
        mov     ebp, 0xb
L_542349:
        test    ebx, ebx
        jz      L_542468
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     ebx, dword ptr [ebx + 0x4]
        jz      L_542468
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        mov     edi, dword ptr [eax + 0x30]
        test    edi, edi
        jl      L_5423aa
        cmp     edi, 0x12
        jg      L_5423aa
        lea     eax, [esp + 0x40]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_005441d0
L_542380:
        test    eax, eax
        jnz     L_542349
        mov     ecx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + ecx*4 + 0x205924], edi
        mov     edx, dword ptr [esi + 0x205d20]
        mov     byte ptr [esp + 0x11], al
        mov     dword ptr [esi + edx*4 + 0x205528], ebp
        inc     dword ptr [esi + 0x205d20]
        jmp     L_542349
L_5423aa:
        cmp     edi, 0x33
        jl      L_5423f2
        cmp     edi, 0x4e
        jg      L_5423f2
        lea     eax, [esp + 0x48]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00544220
        test    eax, eax
        jnz     L_542349
        mov     ecx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + ecx*4 + 0x205924], edi
        mov     edx, dword ptr [esi + 0x205d20]
        mov     byte ptr [esp + 0x11], al
        mov     dword ptr [esi + edx*4 + 0x205528], 0xa
        inc     dword ptr [esi + 0x205d20]
        jmp     L_542349
L_5423f2:
        cmp     edi, 0x64
        jl      L_54243e
        cmp     edi, 0x7b
        jg      L_54243e
        lea     eax, [esp + 0x58]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00544270
        test    eax, eax
        jnz     L_542349
        mov     ecx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + ecx*4 + 0x205924], edi
        mov     edx, dword ptr [esi + 0x205d20]
        mov     byte ptr [esp + 0x11], al
        mov     dword ptr [esi + edx*4 + 0x205528], 0x9
        inc     dword ptr [esi + 0x205d20]
        jmp     L_542349
L_54243e:
        cmp     edi, 0x83
        jl      L_542349
        cmp     edi, 0x8c
        jg      L_542349
        lea     eax, [esp + 0x30]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_005442c0
        jmp     L_542380
L_542468:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     edi, dword ptr [eax]
        xor     edi, ecx
        mov     ecx, dword ptr [edi + 0x4c]
        xor     ecx, 0x85739531
        mov     byte ptr [esp + 0x12], 0x0
        mov     byte ptr [esp + 0x13], 0x0
        jz      L_542491
        mov     byte ptr [esp + 0x12], 0x1
L_542491:
        mov     edx, dword ptr [edi + 0x58]
        xor     edx, 0x85739531
        jz      L_5424a1
        mov     byte ptr [esp + 0x13], 0x1
L_5424a1:
        push    0x14
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jz      L_5424d3
        mov     eax, dword ptr [edi + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x8c]
        add     ecx, 0x10
        push    ecx
        mov     ecx, ebp
        call    FUN_00416bc0
        mov     dword ptr [ebp], 0x779e88
        jmp     L_5424d5
L_5424d3:
        xor     ebp, ebp
L_5424d5:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edx + 0x34c]
        mov     dword ptr [esp + 0x70], eax
L_5424e3:
        mov     ecx, dword ptr [esp + 0x70]
        test    ecx, ecx
        jz      L_542616
L_5424ef:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x70], ecx
        jz      L_542616
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        mov     ebx, eax
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0x8]
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      L_54257b
L_542520:
        lea     ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov     cx, word ptr [edi + 0x10]
        mov     dx, word ptr [edi + 0x12]
        lea     eax, [esp + 0x20]
        mov     word ptr [esp + 0x20], cx
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     word ptr [esp + 0x2a], dx
        call    FUN_004da8d0
        mov     edx, dword ptr [esp + 0x90]
        mov     ecx, dword ptr [edx + 0x30]
        mov     eax, dword ptr [ebx + 0x30]
        add     esp, 0x8
        cmp     ecx, eax
        lea     ecx, [esp + 0x74]
        jz      L_542576
        call    FUN_004d21c0
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     L_542520
        jmp     L_54257b
L_542576:
        call    FUN_004d21c0
L_54257b:
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        jnz     L_5425c0
        test    edi, edi
        jz      L_5425c0
        cmp     dword ptr [edi + 0x20], 0x1
        jnz     L_5425c0
        mov     eax, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [ebx + 0x30]
        mov     dword ptr [esi + eax*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xd
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_5425c0:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_5424e3
        test    edi, edi
        jz      L_5424e3
        cmp     dword ptr [edi + 0x20], 0x2
        jnz     L_5424e3
        mov     eax, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [ebx + 0x30]
        mov     dword ptr [esi + eax*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xe
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
        jmp     L_5424e3
L_542616:
        test    ebp, ebp
        jz      L_542623
        mov     eax, dword ptr [ebp]
        push    0x1
        mov     ecx, ebp
        call    dword ptr [eax]
L_542623:
        mov     ecx, dword ptr [g_007dab44]
        mov     edi, dword ptr [ecx]
        mov     ebx, dword ptr [g_007dab40]
        push    0x14
        xor     edi, ebx
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jz      L_542666
        mov     edx, dword ptr [edi + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x88]
        add     eax, 0x10
        push    eax
        mov     ecx, ebp
        call    FUN_00416bc0
        mov     dword ptr [ebp], 0x779e88
        jmp     L_542668
L_542666:
        xor     ebp, ebp
L_542668:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx + 0x34c]
        mov     dword ptr [esp + 0x70], edx
L_542676:
        mov     ecx, dword ptr [esp + 0x70]
        test    ecx, ecx
        jz      L_5427a9
L_542682:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esp + 0x70], ecx
        jz      L_5427a9
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        mov     ebx, eax
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0x8]
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      L_54270e
L_5426b3:
        lea     ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov     cx, word ptr [edi + 0x10]
        mov     dx, word ptr [edi + 0x12]
        lea     eax, [esp + 0x20]
        mov     word ptr [esp + 0x20], cx
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     word ptr [esp + 0x2a], dx
        call    FUN_004da8d0
        mov     edx, dword ptr [esp + 0x90]
        mov     ecx, dword ptr [edx + 0x30]
        mov     eax, dword ptr [ebx + 0x30]
        add     esp, 0x8
        cmp     ecx, eax
        lea     ecx, [esp + 0x74]
        jz      L_542709
        call    FUN_004d21c0
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     L_5426b3
        jmp     L_54270e
L_542709:
        call    FUN_004d21c0
L_54270e:
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        jnz     L_542753
        test    edi, edi
        jz      L_542753
        cmp     dword ptr [edi + 0x20], 0x1
        jnz     L_542753
        mov     eax, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [ebx + 0x30]
        mov     dword ptr [esi + eax*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xd
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_542753:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_542676
        test    edi, edi
        jz      L_542676
        cmp     dword ptr [edi + 0x20], 0x2
        jnz     L_542676
        mov     eax, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [ebx + 0x30]
        mov     dword ptr [esi + eax*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xe
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
        jmp     L_542676
L_5427a9:
        test    ebp, ebp
        jz      L_5427b6
        mov     eax, dword ptr [ebp]
        push    0x1
        mov     ecx, ebp
        call    dword ptr [eax]
L_5427b6:
        mov     ecx, dword ptr [g_007dab44]
        mov     ebp, dword ptr [ecx]
        mov     edi, dword ptr [g_007dab40]
        push    0x14
        xor     ebp, edi
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_5427f8
        mov     edx, dword ptr [ebp + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x84]
        add     eax, 0x10
        push    eax
        mov     ecx, edi
        call    FUN_00416bc0
        mov     dword ptr [edi], 0x779e88
        jmp     L_5427fa
L_5427f8:
        xor     edi, edi
L_5427fa:
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], edi
        call    FUN_00416cc0
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      L_5428a3
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx + 0x2c]
        mov     dword ptr [esp + 0x2c], edx
L_54281c:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [eax + 0x18]
        test    ebp, ebp
        jz      L_542943
        inc     byte ptr [ebp - 0x1]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
L_54283a:
        test    ebp, ebp
        jz      L_542841
        inc     byte ptr [ebp - 0x1]
L_542841:
        push    ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    ebp
        push    ecx
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    ebp, ebp
        jz      L_54288a
        mov     cl, byte ptr [ebp - 0x1]
        lea     eax, [ebp - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_542872
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_542872:
        test    ebp, ebp
        jz      L_54288a
        mov     al, byte ptr [ebp - 0x1]
        dec     ebp
        dec     al
        mov     byte ptr [ebp], al
        jnz     L_54288a
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_54288a:
        test    bl, bl
        jnz     L_5428a3
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_00416cc0
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jnz     L_54281c
L_5428a3:
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        mov     eax, dword ptr [esp + 0x1c]
        jnz     L_5428ed
        test    eax, eax
        jz      L_5428ed
        cmp     dword ptr [eax + 0x20], 0x1
        jnz     L_5428ed
        mov     edx, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esi + edx*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xd
        mov     ecx, dword ptr [esi + 0x205d20]
        inc     ecx
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], ecx
L_5428ed:
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        jnz     L_542933
        test    eax, eax
        jz      L_542933
        cmp     dword ptr [eax + 0x20], 0x2
        jnz     L_542933
        mov     eax, dword ptr [esi + 0x205d20]
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esi + eax*4 + 0x205924], ecx
        mov     edx, dword ptr [esi + 0x205d20]
        mov     dword ptr [esi + edx*4 + 0x205528], 0xe
        mov     eax, dword ptr [esi + 0x205d20]
        inc     eax
        mov     byte ptr [esp + 0x11], 0x0
        mov     dword ptr [esi + 0x205d20], eax
L_542933:
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        jz      L_542971
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        jmp     L_542971
L_542943:
        xor     ecx, ecx
        jmp     L_54283a
L_54294a:
        cmp     dword ptr [eax], 0x4bf
        jnz     L_54296a
        imul    edi, edi, 0x22ac
        mov     dword ptr [edi + esi + 0x205f3c], 0x2c
        mov     byte ptr [esp + 0x11], 0x1
        jmp     L_542991
L_54296a:
        mov     byte ptr [esp + 0x11], 0x0
        jmp     L_542979
L_542971:
        mov     al, byte ptr [esp + 0x11]
        test    al, al
        jnz     L_542991
L_542979:
        mov     eax, dword ptr [esp + 0x144]
        imul    eax, eax, 0x22ac
        mov     dword ptr [eax + esi + 0x205f3c], 0x2d
L_542991:
        mov     ecx, dword ptr [esp + 0x64]
        call    FUN_004ceb20
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [g_007dab40]
        mov     cl, byte ptr [esp + 0x27]
        xor     edx, esi
        mov     eax, dword ptr [edx]
        xor     eax, 0x85739531
        mov     byte ptr [eax + 0xb0], cl
        lea     ecx, [esp + 0xb8]
        call    FUN_004d21c0
        mov     al, byte ptr [esp + 0x11]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x130
        ret     0x8
    }
}
