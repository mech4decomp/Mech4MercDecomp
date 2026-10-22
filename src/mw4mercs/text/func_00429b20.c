/*
 * FUN_00429b20 (441 B) — __thiscall MLRShadowLight ctor (2 args, RET 0x8).
 * Calls base ctor FUN_00482050, sets vtable 0x76e018, resolves a shadow
 * texture/material by name, registers a "shadow%03d" resource, and builds
 * the light's render-state block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b96b4;
extern int g_007b96b8;
extern int g_007da848;
extern int (__cdecl *g_0076b420)(const char *, ...);
extern void __cdecl FUN_00482050(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00422ea0(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_0048f9e0(void);
extern void __cdecl FUN_004912b0(void);
extern void __cdecl FUN_0042a130(void);
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_00429b20(void)
{
    __asm {
        mov     eax, dword ptr [g_007b96b4]
        sub     esp, 0x18
        push    ebp
        mov     ebp, dword ptr [esp+0x20]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x2c]
        push    edi
        push    ebp
        mov     esi, ecx
        push    eax
        call    FUN_00482050
        cmp     edi, 0xd
        mov     dword ptr [esi], 0x76e018
        mov     dword ptr [esi+0x8c], 0
        mov     byte ptr [esi+0xa0], 1
        jl      L_429b6c
        mov     edx, dword ptr [ebp]
        push    4
        lea     eax, [esi+0x9c]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx+0x20]
        jmp     L_429b78
L_429b6c:
        mov     ecx, dword ptr [esi+0x84]
        mov     dword ptr [esi+0x9c], ecx
L_429b78:
        cmp     edi, 0x7
        jle     L_429c1b
        lea     edx, [esp+0x2c]
        push    edx
        push    ebp
        mov     dword ptr [esp+0x34], 0
        call    FUN_00412a00
        mov     edx, dword ptr [esp+0x34]
        add     esp, 8
        test    edx, edx
        jz      L_429c1b
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp+0x28], ecx
        jz      L_429c02
        mov     ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048fac0
        mov     edi, eax
        test    edi, edi
        jnz     L_429bd7
        mov     ecx, dword ptr [g_007da848]
        push    eax
        mov     eax, dword ptr [esp+0x30]
        push    eax
        call    FUN_0048f380
        mov     edi, eax
L_429bd7:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_429bef
        push    edi
        mov     ecx, eax
        call    FUN_00422ea0
        jmp     L_429bf1
L_429bef:
        xor     eax, eax
L_429bf1:
        inc     dword ptr [eax+8]
        mov     edx, dword ptr [esp+0x2c]
        mov     dword ptr [esi+0x8c], eax
        or      dword ptr [esi+0x78], 0x40
L_429c02:
        test    edx, edx
        jz      L_429c1b
        mov     cl, byte ptr [edx-1]
        lea     eax, [edx-1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_429c1b
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_429c1b:
        mov     eax, dword ptr [g_007b96b8]
        mov     ecx, eax
        push    ecx
        inc     eax
        push    0x76e038
        push    0x7b96a8
        mov     dword ptr [g_007b96b8], eax
        call    dword ptr [g_0076b420]
        mov     ecx, dword ptr [g_007da848]
        add     esp, 0xc
        push    0x41
        push    0x40
        push    1
        push    0x7b96a8
        call    FUN_0048f9e0
        mov     edi, dword ptr [esi+0x8c]
        lea     ecx, [edi+0xc]
        push    ecx
        lea     ecx, [esp+0x10]
        mov     dword ptr [esi+0x90], eax
        call    FUN_004912b0
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+0x14]
        mov     edx, eax
        and     eax, 0xffff3fff
        or      eax, 0x10000
        or      ecx, 0x1c000
        and     eax, 0xbfffffff
        or      ecx, 0x40000000
        sub     esp, 0x18
        mov     dword ptr [esp+0x24], eax
        mov     dword ptr [esp+0x2c], ecx
        lea     eax, [esp+0x24]
        and     edx, 0x3fff
        mov     ecx, esp
        push    eax
        mov     dword ptr [esi+0x94], edx
        call    FUN_004912b0
        mov     ecx, edi
        call    FUN_0042a130
        push    0x7b96a8
        lea     ecx, [esi+0x7c]
        call    FUN_00412780
        pop     edi
        mov     byte ptr [esi+0x98], 1
        mov     eax, esi
        pop     esi
        pop     ebp
        add     esp, 0x18
        ret     8
    }
}
