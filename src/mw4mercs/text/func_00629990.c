/*
 * FUN_00629990 (876 B) — __thiscall (ECX = this), RET 4.
 *
 * Appends a new 0x1c-byte element (7 dwords) to a growable array at
 * this+0x50/0x54/0x58, constructing several sub-objects via FUN_00560xxx
 * and growing the backing buffer via FUN_004084d0/FUN_004084e0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_00560aa0(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00560420(void);

extern const char g_76b768;     /* string/constant @ 0x76b768 */

__declspec(naked) void __cdecl FUN_00629990(void)
{
    __asm {
        sub     esp, 0x28
        mov     eax, dword ptr [ecx + 0x50]
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [ecx + 0x54]
        cmp     eax, ecx
        push    esi
        push    edi
        jz      L_29b8
    L_29a5:
        mov     edx, dword ptr [esp + 0x3c]
        cmp     dword ptr [eax], edx
        jz      L_29cf2
        add     eax, 0x1c
        cmp     eax, ecx
        jnz     L_29a5
    L_29b8:
        push    0x138
        call    FUN_004084d0
        xor     esi, esi
        add     esp, 0x4
        cmp     eax, esi
        jz      L_29d9
        push    esi
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp + 0x10], eax
        jmp     L_29df
    L_29d9:
        mov     dword ptr [esp + 0x10], esi
        mov     eax, esi
    L_29df:
        mov     edx, dword ptr [eax]
        or      edi, 0xffffffff
        push    0x2
        mov     ecx, eax
        mov     dword ptr [eax + 0x104], edi
        mov     dword ptr [eax + 0x10c], esi
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_29a15
        mov     ecx, eax
        call    FUN_00560aa0
        mov     dword ptr [esp + 0x14], eax
        jmp     L_29a1b
    L_29a15:
        mov     dword ptr [esp + 0x14], esi
        mov     eax, esi
    L_29a1b:
        mov     edx, dword ptr [eax]
        push    0x2
        mov     ecx, eax
        mov     dword ptr [eax + 0x104], edi
        mov     dword ptr [eax + 0x10c], esi
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_29a4c
        mov     ecx, eax
        call    FUN_00560aa0
        mov     ebp, eax
        jmp     L_29a4e
    L_29a4c:
        xor     ebp, ebp
    L_29a4e:
        push    esi
        push    esi
        mov     ecx, ebp
        call    FUN_005603e0
        push    0x44160000
        push    0x44480000
        mov     ecx, ebp
        call    FUN_00560400
        push    esi
        push    esi
        push    offset g_76b768
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x10c], esi
        call    FUN_00560420
        mov     eax, dword ptr [ebp]
        push    0x2
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x104], edi
        call    dword ptr [eax + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_29aa8
        mov     ecx, eax
        call    FUN_00560aa0
        mov     ebx, eax
        jmp     L_29aaa
    L_29aa8:
        xor     ebx, ebx
    L_29aaa:
        push    esi
        push    esi
        mov     ecx, ebx
        call    FUN_005603e0
        push    0x44160000
        push    0x44480000
        mov     ecx, ebx
        call    FUN_00560400
        push    esi
        push    esi
        push    offset g_76b768
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x10c], esi
        call    FUN_00560420
        mov     edx, dword ptr [ebx]
        push    0x2
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x104], edi
        call    dword ptr [edx + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_29b03
        mov     ecx, eax
        call    FUN_00560aa0
        mov     edi, eax
        jmp     L_29b05
    L_29b03:
        xor     edi, edi
    L_29b05:
        push    esi
        push    esi
        mov     ecx, edi
        call    FUN_005603e0
        push    0x44160000
        push    0x44480000
        mov     ecx, edi
        call    FUN_00560400
        push    esi
        push    esi
        push    offset g_76b768
        mov     ecx, edi
        mov     dword ptr [edi + 0x10c], esi
        call    FUN_00560420
        mov     eax, dword ptr [edi]
        push    0x2
        mov     ecx, edi
        mov     dword ptr [edi + 0x104], 0xffffffff
        call    dword ptr [eax + 0x4]
        push    0x138
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_29b60
        mov     ecx, eax
        call    FUN_00560aa0
        mov     esi, eax
    L_29b60:
        push    0x0
        push    0x0
        mov     ecx, esi
        call    FUN_005603e0
        push    0x44160000
        push    0x44480000
        mov     ecx, esi
        call    FUN_00560400
        push    0x0
        push    0x0
        push    offset g_76b768
        mov     ecx, esi
        mov     dword ptr [esi + 0x10c], 0x0
        call    FUN_00560420
        mov     edx, dword ptr [esi]
        push    0x2
        mov     ecx, esi
        mov     dword ptr [esi + 0x104], 0xffffffff
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [eax + 0x58]
        mov     dword ptr [esp + 0x2c], ebx
        mov     ebx, dword ptr [eax + 0x54]
        cmp     ebx, ecx
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x34], esi
        jz      L_29c00
        test    ebx, ebx
        jz      L_29bf0
        mov     ecx, 0x7
        lea     esi, [esp + 0x1c]
        mov     edi, ebx
        rep movsd
    L_29bf0:
        pop     edi
        pop     esi
        add     ebx, 0x1c
        pop     ebp
        mov     dword ptr [eax + 0x54], ebx
        pop     ebx
        add     esp, 0x28
        ret     0x4

    L_29c00:
        mov     ebp, dword ptr [eax + 0x50]
        mov     ecx, ebx
        sub     ecx, ebp
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x1
        mov     dword ptr [esp + 0x3c], 0x1
        mov     dword ptr [esp + 0x14], edx
        lea     eax, [esp + 0x3c]
        jc      L_29c33
        lea     eax, [esp + 0x14]
    L_29c33:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x14], eax
        jz      L_29c58
        lea     ecx, [eax*8 + 0x0]
        sub     ecx, eax
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x3c], eax
        jmp     L_29c64
    L_29c58:
        mov     dword ptr [esp + 0x3c], 0x0
        mov     eax, dword ptr [esp + 0x3c]
    L_29c64:
        cmp     ebp, ebx
        mov     edx, eax
        jz      L_29c83
    L_29c6a:
        test    edx, edx
        jz      L_29c79
        mov     ecx, 0x7
        mov     esi, ebp
        mov     edi, edx
        rep movsd
    L_29c79:
        add     ebp, 0x1c
        add     edx, 0x1c
        cmp     ebp, ebx
        jnz     L_29c6a
    L_29c83:
        test    edx, edx
        jz      L_29c94
        mov     ecx, 0x7
        lea     esi, [esp + 0x1c]
        mov     edi, edx
        rep movsd
    L_29c94:
        cmp     ebx, ebx
        lea     ebp, [edx + 0x1c]
        jz      L_29cb9
        mov     edx, ebx
        sub     edx, ebp
    L_29c9f:
        test    ebp, ebp
        jz      L_29caf
        lea     esi, [edx + ebp*0x1]
        mov     ecx, 0x7
        mov     edi, ebp
        rep movsd
    L_29caf:
        add     ebp, 0x1c
        lea     ecx, [edx + ebp*0x1]
        cmp     ecx, ebx
        jnz     L_29c9f
    L_29cb9:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [edx + 0x50]
        test    ecx, ecx
        mov     dword ptr [esp + 0x10], ecx
        jz      L_29cd5
        push    ecx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x40]
        add     esp, 0x4
    L_29cd5:
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        lea     esi, [edx*8 + 0x0]
        sub     esi, edx
        mov     dword ptr [ecx + 0x50], eax
        lea     eax, [eax + esi*0x4]
        mov     dword ptr [ecx + 0x54], ebp
        mov     dword ptr [ecx + 0x58], eax
    L_29cf2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x4
    }
}
