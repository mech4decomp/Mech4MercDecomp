/*
 * FUN_00429ce0 (373 B) — __thiscall MLRShadowLight ctor variant (1 arg,
 * RET 0x4). Calls base ctor FUN_004820b0, sets vtable 0x76e018, resolves a
 * "ShadowMap" texture/material, registers a "Shadow%03d" resource, builds
 * the light's render-state block, and sets a BlobDistance field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b96b4;
extern int g_007b96b8;
extern int g_007da848;
extern int (__cdecl *g_0076b420)(const char *, ...);
extern void __cdecl FUN_004820b0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00422ea0(void);
extern void __cdecl FUN_0048f9e0(void);
extern void __cdecl FUN_004912b0(void);
extern void __cdecl FUN_0042a130(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00411d60(void);

__declspec(naked) void FUN_00429ce0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b96b4]
        sub     esp, 0x18
        push    ebp
        mov     ebp, dword ptr [esp+0x20]
        push    esi
        push    edi
        push    ebp
        mov     esi, ecx
        push    eax
        call    FUN_004820b0
        push    0
        lea     ecx, [esp+0x2c]
        push    ecx
        push    0x76e060
        mov     ecx, ebp
        mov     dword ptr [esi], 0x76e018
        mov     dword ptr [esi+0x8c], 0
        mov     byte ptr [esi+0xa0], 1
        call    FUN_00411bf0
        test    al, al
        jz      L_429d7c
        mov     edx, dword ptr [esp+0x28]
        mov     ecx, dword ptr [g_007da848]
        push    0
        push    edx
        call    FUN_0048fac0
        mov     edi, eax
        test    edi, edi
        jnz     L_429d51
        mov     ecx, dword ptr [g_007da848]
        push    eax
        mov     eax, dword ptr [esp+0x2c]
        push    eax
        call    FUN_0048f380
        mov     edi, eax
L_429d51:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_429d69
        push    edi
        mov     ecx, eax
        call    FUN_00422ea0
        jmp     L_429d6b
L_429d69:
        xor     eax, eax
L_429d6b:
        mov     ecx, dword ptr [eax+8]
        inc     ecx
        mov     dword ptr [esi+0x8c], eax
        mov     dword ptr [eax+8], ecx
        or      dword ptr [esi+0x78], 0x40
L_429d7c:
        mov     eax, dword ptr [g_007b96b8]
        mov     ecx, eax
        push    ecx
        inc     eax
        push    0x76e054
        push    0x7b969c
        mov     dword ptr [g_007b96b8], eax
        call    dword ptr [g_0076b420]
        mov     ecx, dword ptr [g_007da848]
        add     esp, 0xc
        push    0x41
        push    0x40
        push    1
        push    0x7b969c
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
        push    0x7b969c
        lea     ecx, [esi+0x7c]
        call    FUN_00412780
        lea     eax, [esi+0x9c]
        push    0
        push    eax
        push    0x76e044
        mov     ecx, ebp
        mov     byte ptr [esi+0x98], 1
        mov     dword ptr [eax], 0x42c80000
        call    FUN_00411d60
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        add     esp, 0x18
        ret     4
    }
}
