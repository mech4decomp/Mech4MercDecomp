/*
 * FUN_004227d0 (839 B) — MLR (MidLevelRenderer) global state initializer.
 * Allocates and initializes a large set of global singleton objects
 * (lightmaps, vertex buffers, render-state arrays, etc.) via FUN_004084d0
 * (operator new) and various per-object ctors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00423bd0(void);
extern void __cdecl FUN_00423b80(void);
extern void __cdecl FUN_00423c40(void);
extern void __cdecl FUN_00423d90(void);
extern void __cdecl FUN_00450b10(void);
extern void __cdecl FUN_00423ca0(void);
extern void __cdecl FUN_00423d10(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004802a0(void);
extern void __cdecl FUN_00423b70(void);
extern void __cdecl FUN_00423df0(void);
extern void __cdecl FUN_00423b00(void);

extern int g_007b8c08;
extern int g_007b9610;
extern int g_007b9554;
extern int g_007b960c;
extern int g_007b95f8;
extern int g_007b95f4;
extern int g_007b95f0;
extern int g_007b95ec;
extern int g_007b95e4;
extern int g_007b98cc;
extern int g_007b95e0;
extern int g_007b95dc;
extern int g_007b95d8;
extern int g_007b95d4;
extern int g_007b95d0;
extern int g_007b95cc;
extern char g_76ddcc[];

__declspec(naked) void FUN_004227d0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        push    0x14
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 0x4
        cmp     eax, edi
        jz      L1
        mov     ecx, dword ptr [g_007b8c08]
        push    ecx
        push    offset g_76ddcc
        push    0x54
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b9610], eax
        jmp     L2
L1:
        mov     dword ptr [g_007b9610], edi
L2:
        mov     edx, dword ptr [g_007b9554]
        push    edx
        call    FUN_004084d0
        push    0x20
        mov     esi, eax
        call    FUN_004084d0
        add     esp, 0x8
        cmp     eax, edi
        jz      L3
        mov     ecx, dword ptr [g_007b9554]
        push    edi
        push    ecx
        push    esi
        mov     ecx, eax
        call    FUN_0041e690
        mov     dword ptr [g_007b960c], eax
        jmp     L4
L3:
        mov     dword ptr [g_007b960c], edi
L4:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L5
        push    0x100
        mov     ecx, esi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], edi
        call    FUN_0040c2e0
        mov     dword ptr [g_007b95f8], esi
        jmp     L6
L5:
        mov     dword ptr [g_007b95f8], edi
L6:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L7
        push    0x100
        mov     ecx, esi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], edi
        call    FUN_00423bd0
        mov     dword ptr [g_007b95f4], esi
        jmp     L8
L7:
        mov     dword ptr [g_007b95f4], edi
L8:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L9
        push    0x800
        mov     ecx, esi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], edi
        call    FUN_00423b80
        mov     dword ptr [g_007b95f0], esi
        jmp     L10
L9:
        mov     dword ptr [g_007b95f0], edi
L10:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L11
        push    0x100
        mov     ecx, esi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], edi
        call    FUN_00423c40
        mov     dword ptr [g_007b95ec], esi
        jmp     L12
L11:
        mov     dword ptr [g_007b95ec], edi
L12:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L13
        push    0x20
        mov     ecx, esi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], edi
        call    FUN_00423d90
        mov     dword ptr [g_007b95e4], esi
        jmp     L14
L13:
        mov     dword ptr [g_007b95e4], edi
L14:
        xor     esi, esi
L15:
        push    0x70
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L16
        mov     edx, dword ptr [g_007b98cc]
        push    edx
        mov     ecx, eax
        call    FUN_00450b10
        jmp     L17
L16:
        xor     eax, eax
L17:
        mov     ecx, dword ptr [g_007b95e4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi+edx*1], eax
        add     esi, 0x4
        cmp     esi, 0x80
        jl      L15
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L18
        push    0x20
        mov     ecx, esi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], edi
        call    FUN_00423ca0
        mov     dword ptr [g_007b95e0], esi
        jmp     L19
L18:
        mov     dword ptr [g_007b95e0], edi
L19:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L20
        push    0x40
        mov     ecx, esi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], edi
        call    FUN_00423ca0
        mov     dword ptr [g_007b95dc], esi
        jmp     L21
L20:
        mov     dword ptr [g_007b95dc], edi
L21:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L22
        push    0x40
        mov     ecx, esi
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], edi
        call    FUN_00423d10
        mov     dword ptr [g_007b95d8], esi
        jmp     L23
L22:
        mov     dword ptr [g_007b95d8], edi
L23:
        push    0x8
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 0x4
        cmp     ebx, edi
        jz      L24
        push    0x200
        mov     dword ptr [ebx], edi
        mov     dword ptr [ebx+0x4], 0x40
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L25
        push    offset FUN_00423b70
        push    0x40
        push    0x8
        push    esi
        call    FUN_00406c90
        mov     dword ptr [ebx], esi
        mov     dword ptr [g_007b95d4], ebx
        jmp     L26
L25:
        xor     esi, esi
        mov     dword ptr [ebx], esi
        mov     dword ptr [g_007b95d4], ebx
        jmp     L26
L24:
        mov     dword ptr [g_007b95d4], edi
L26:
        push    0x8
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 0x4
        cmp     ebx, edi
        jz      L27
        push    0x80
        mov     dword ptr [ebx], edi
        mov     dword ptr [ebx+0x4], 0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L28
        push    offset FUN_00423df0
        push    0x20
        push    0x4
        push    esi
        call    FUN_00406c90
        mov     dword ptr [ebx], esi
        mov     dword ptr [g_007b95d0], ebx
        jmp     L29
L28:
        xor     esi, esi
        mov     dword ptr [ebx], esi
        mov     dword ptr [g_007b95d0], ebx
        jmp     L29
L27:
        mov     dword ptr [g_007b95d0], edi
L29:
        push    0x64
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L30
        lea     ebx, [eax+0x4]
        push    ebp
        mov     dword ptr [eax], 0x2
        mov     dword ptr [esp+0x10], ebx
        lea     esi, [ebx+0x14]
        mov     ebp, 0x2
L31:
        push    offset FUN_00423b00
        push    0x2
        mov     dword ptr [ebx], edi
        mov     dword ptr [esi-0x10], edi
        mov     dword ptr [esi-0xc], edi
        mov     dword ptr [esi-0x8], edi
        push    0x8
        lea     eax, [esi+0xc]
        mov     dword ptr [esi-0x4], edi
        mov     dword ptr [esi], edi
        push    eax
        mov     dword ptr [esi+0x4], edi
        mov     dword ptr [esi+0x8], edi
        call    FUN_00406c90
        add     ebx, 0x30
        add     esi, 0x30
        dec     ebp
        jnz     L31
        mov     edi, dword ptr [esp+0x10]
        mov     dword ptr [g_007b95cc], edi
        pop     ebp
        jmp     L32
L30:
        mov     dword ptr [g_007b95cc], edi
L32:
        push    0x8
        mov     ecx, edi
        call    FUN_004802a0
        mov     ecx, dword ptr [g_007b95cc]
        push    0x8
        add     ecx, 0x30
        call    FUN_004802a0
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
