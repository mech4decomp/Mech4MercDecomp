/*
 * FUN_1000c940 (1005 B) - __stdcall (RET 0x4). SEH-guarded stats
 * recording routine. Runs two passes over a record stream (vtable at
 * [this+0x3c]) building string buffers, then a summary pass.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_10004110(void);
extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_1000c8e0(void);

extern void *g_100210f4;   /* IAT: wcslen */
extern void *g_100210ec;   /* IAT: free */
extern unsigned short g_10026300;  /* wchar_t array @ 0x10026300 */
extern unsigned short g_10026304;  /* wchar_t array @ 0x10026304 */

__declspec(naked) void __cdecl FUN_1000c940(void)
{
    __asm {
        push    -1
        push    0x1001fa0c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x4c0
        push    ebx
        push    ebp
        xor     ebx, ebx
        mov     eax, 0x400
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x18], 0x100262dc
        mov     dword ptr [esp + 0x1c], 0x10026304
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x4d8], ebx
        mov     dword ptr [esp + 0xb8], ebx
        mov     dword ptr [esp + 0xbc], ebx
        mov     dword ptr [esp + 0xc0], ebx
        mov     dword ptr [esp + 0xc4], ebx
        mov     dword ptr [esp + 0xc8], ebx
        mov     dword ptr [esp + 0xcc], eax
        mov     dword ptr [esp + 0x1e8], ebx
        mov     dword ptr [esp + 0x1ec], ebx
        mov     dword ptr [esp + 0x1f0], ebx
        mov     dword ptr [esp + 0x1f4], ebx
        mov     dword ptr [esp + 0x1f8], ebx
        mov     dword ptr [esp + 0x1fc], eax
        mov     edi, dword ptr [esp + 0x4e0]
        xor     esi, esi
        mov     byte ptr [esp + 0x4d8], 0x2
        mov     dword ptr [esp + 0x14], esi
Lca02:
        lea     ecx, [esp + 0x20]
        call    FUN_100011a0
        lea     eax, [edi + 0xe4]
        lea     ecx, [esp + 0x20]
        push    eax
        call    FUN_10004110
        push    0x10026300
        lea     ecx, [esp + 0x24]
        call    FUN_10001680
        mov     eax, dword ptr [esp + esi*4 + 0x18]
        lea     ecx, [esp + 0x20]
        push    eax
        call    FUN_10001680
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0x20]
        ja      Lca48
        mov     eax, 0x100274ec
Lca48:
        mov     ecx, dword ptr [edi + 0x3c]
        lea     ebp, [esp + 0x280]
        push    ebp
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x4]
        mov     ebp, eax
        cmp     ebp, -1
        jz      Lcb5e
        mov     dword ptr [esp + 0x10], ebx
Lca68:
        mov     eax, dword ptr [esp + 0x298]
        mov     ecx, dword ptr [esp + 0x294]
        push    eax
        push    ecx
        push    edi
        call    FUN_1000c8e0
        mov     edx, eax
        mov     eax, 0x91a2b3c5
        mul     edx
        mov     eax, dword ptr [edi + 0x18]
        shr     edx, 0xb
        cmp     edx, eax
        jbe     Lcb3c
        cmp     dword ptr [edi + 0xf0], ebx
        jbe     Lcaa5
        mov     esi, dword ptr [edi + 0xe4]
        jmp     Lcaaa
Lcaa5:
        mov     esi, 0x100274ec
Lcaaa:
        lea     ecx, [esp + 0xb8]
        call    FUN_100011a0
        cmp     esi, ebx
        jz      Lcad9
        cmp     word ptr [esi], bx
        jz      Lcad9
        push    esi
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        lea     ecx, [esp + 0xb8]
        shl     eax, 0x1
        push    eax
        push    esi
        call    FUN_100016b0
Lcad9:
        lea     eax, [esp + 0x2ac]
        test    eax, eax
        jz      Lcb16
        cmp     word ptr [esp + 0x2ac], bx
        jz      Lcb16
        lea     ecx, [esp + 0x2ac]
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        lea     edx, [esp + 0x2ac]
        shl     eax, 0x1
        push    eax
        push    edx
        lea     ecx, [esp + 0xc0]
        call    FUN_100016b0
Lcb16:
        mov     eax, dword ptr [esp + 0xc4]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0xb8]
        ja      Lcb2d
        mov     eax, 0x100274ec
Lcb2d:
        mov     ecx, dword ptr [edi + 0x3c]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x20]
        mov     esi, dword ptr [esp + 0x14]
        jmp     Lcb45
Lcb3c:
        cmp     esi, 0x1
        jnz     Lcb45
        inc     dword ptr [esp + 0x10]
Lcb45:
        mov     ecx, dword ptr [edi + 0x3c]
        lea     edx, [esp + 0x280]
        push    edx
        push    ebp
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x8]
        test    eax, eax
        jnz     Lca68
Lcb5e:
        mov     ecx, dword ptr [edi + 0x3c]
        push    ebp
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xc]
        inc     esi
        cmp     esi, 0x2
        mov     dword ptr [esp + 0x14], esi
        jc      Lca02
        mov     eax, dword ptr [edi + 0x14]
        mov     esi, dword ptr [g_100210ec]
        cmp     eax, ebx
        jbe     Lcccd
        cmp     dword ptr [esp + 0x10], eax
        jc      Lcccd
        cmp     dword ptr [esp + 0x2c], ebx
        jbe     Lcba4
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        jz      Lcba4
        push    eax
        call    esi
        add     esp, 0x4
Lcba4:
        lea     eax, [edi + 0xe4]
        lea     ecx, [esp + 0x20]
        push    eax
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x30], ebx
        call    FUN_10004110
        mov     ecx, 0x10026300
        test    ecx, ecx
        jz      Lcbed
        cmp     word ptr [g_10026300], bx
        jz      Lcbed
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        lea     ecx, [esp + 0x20]
        shl     eax, 0x1
        push    eax
        push    0x10026300
        call    FUN_100016b0
Lcbed:
        mov     edx, 0x10026304
        test    edx, edx
        jz      Lcc1a
        cmp     word ptr [g_10026304], bx
        jz      Lcc1a
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        lea     ecx, [esp + 0x20]
        shl     eax, 0x1
        push    eax
        push    0x10026304
        call    FUN_100016b0
Lcc1a:
        mov     dword ptr [esp + 0x150], ebx
        mov     dword ptr [esp + 0x154], ebx
        mov     dword ptr [esp + 0x158], ebx
        mov     dword ptr [esp + 0x15c], ebx
        mov     dword ptr [esp + 0x160], ebx
        mov     dword ptr [esp + 0x164], 0x400
        mov     byte ptr [esp + 0x4d8], 0x3
        xor     esi, esi
Lcc52:
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0x20]
        ja      Lcc63
        mov     eax, 0x100274ec
Lcc63:
        mov     ecx, dword ptr [edi + 0x3c]
        lea     ebp, [esp + 0x150]
        push    ebp
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x15c]
        cmp     eax, ebx
        jz      Lcc9c
        mov     eax, dword ptr [esp + 0x150]
        ja      Lcc8c
        mov     eax, 0x100274ec
Lcc8c:
        mov     ecx, dword ptr [edi + 0x3c]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x15c]
Lcc9c:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [edi + 0x14]
        inc     esi
        sub     ecx, ebp
        cmp     esi, ecx
        jbe     Lcc52
        cmp     eax, ebx
        jbe     Lccc7
        mov     eax, dword ptr [esp + 0x150]
        cmp     eax, ebx
        jz      Lccc7
        mov     esi, dword ptr [g_100210ec]
        push    eax
        call    esi
        add     esp, 0x4
        jmp     Lcccd
Lccc7:
        mov     esi, dword ptr [g_100210ec]
Lcccd:
        cmp     dword ptr [esp + 0xc4], ebx
        jbe     Lcce7
        mov     eax, dword ptr [esp + 0xb8]
        cmp     eax, ebx
        jz      Lcce7
        push    eax
        call    esi
        add     esp, 0x4
Lcce7:
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0xb8], ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0xc8], ebx
        mov     dword ptr [esp + 0xc4], ebx
        jbe     Lcd12
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        jz      Lcd12
        push    eax
        call    esi
        add     esp, 0x4
Lcd12:
        mov     ecx, dword ptr [esp + 0x4d0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x4cc
        ret     0x4
    }
}
