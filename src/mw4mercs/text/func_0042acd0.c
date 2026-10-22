/*
 * FUN_0042acd0 (282 B) — __thiscall MLRProjectLight constructor
 * (LightMap variant). Sets vtable 0x76e0d8, resolves a "LightMap"
 * material, allocates/refcounts a 0x24-byte object, sets "Spread"
 * parameter, and initializes light parameters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b96cc;
extern int g_007da848;
extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004820b0(int, int);
extern char __cdecl FUN_00411bf0(const char *, void *, int);
extern void * __cdecl FUN_0048fac0(char *, int);
extern void * __cdecl FUN_0048f380(char *, int);
extern void * __cdecl FUN_00422ea0(void *);
extern void __cdecl FUN_00411d60(const char *, void *, int);
extern void __cdecl FUN_0042b780(void *);
extern void __cdecl FUN_00419ea0(void *);
extern void __cdecl FUN_0042af60(void);

__declspec(naked) void FUN_0042acd0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007b96cc]
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    esi
        push    ebx
        mov     esi, ecx
        push    eax
        call    FUN_004820b0
        push    0x0
        lea     ecx, [esp+0x14]
        push    ecx
        push    0x76e100
        mov     ecx, ebx
        mov     dword ptr [esi], 0x76e0d8
        mov     dword ptr [esi+0xa8], 0
        call    FUN_00411bf0
        test    al, al
        jz      L_spread
        mov     edx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [g_007da848]
        push    edi
        push    0x0
        push    edx
        call    FUN_0048fac0
        mov     edi, eax
        test    edi, edi
        jnz     L_alloc
        mov     ecx, dword ptr [g_007da848]
        push    eax
        mov     eax, dword ptr [esp+0x18]
        push    eax
        call    FUN_0048f380
        mov     edi, eax
L_alloc:
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_zero
        push    edi
        mov     ecx, eax
        call    FUN_00422ea0
        jmp     L_store
L_zero:
        xor     eax, eax
L_store:
        mov     ecx, dword ptr [eax+0x8]
        inc     ecx
        mov     dword ptr [esi+0xa8], eax
        mov     dword ptr [eax+0x8], ecx
        or      dword ptr [esi+0x78], 0x40
        pop     edi
L_spread:
        push    0x0
        lea     ecx, [esp+0xc]
        push    ecx
        push    0x76e0f8
        mov     ecx, ebx
        mov     dword ptr [esp+0x14], 0x42340000
        call    FUN_00411d60
        lea     edx, [esp+0x8]
        push    edx
        mov     ecx, esi
        call    FUN_0042b780
        push    0x7b8da8
        lea     ecx, [esi+0xf8]
        call    FUN_00419ea0
        mov     ecx, 0xbd4ccccd
        mov     eax, 0x3d4ccccd
        mov     dword ptr [esi+0x8c], ecx
        mov     dword ptr [esi+0x94], ecx
        mov     ecx, esi
        mov     dword ptr [esi+0x90], eax
        mov     dword ptr [esi+0x98], eax
        mov     dword ptr [esi+0x9c], 0x3dcccccd
        mov     dword ptr [esi+0xa0], 0x3ff33333
        mov     dword ptr [esi+0xa4], 0xbf800000
        call    FUN_0042af60
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
