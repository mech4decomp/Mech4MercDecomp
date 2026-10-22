/*
 * FUN_004292d0 (630 B) — MLR (MidLevelRenderer) global state initializer.
 * Allocates and constructs the MLRCulturShape singleton (vtable 0x76dfc8),
 * copies a 4-vector from 0x8bd548, fills a set of float constants, and
 * allocates a family of buffers (0x7b9680/84/88/8c/90) sized from the
 * global count at 0x7b2280.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da724;
extern int g_007b9678;
extern int g_008bd548;
extern int g_008bd54c;
extern int g_008bd550;
extern int g_008bd554;
extern int g_007b9668;
extern char g_007b227c;
extern int g_007b966c;
extern int g_007b9670;
extern int g_007b9674;
extern int g_007b9658;
extern int g_007b965c;
extern int g_007b9660;
extern int g_007b9664;
extern int g_007b2280;
extern int g_007b9680;
extern int g_007b98cc;
extern int g_007b9684;
extern int g_007b9688;
extern int g_007b968c;
extern int g_007b9690;
extern int g_007b967c;

extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_004151c0(int size, const char *name, int param);
extern void __cdecl FUN_00423d90(int param);
extern void *__cdecl FUN_00450b10(int param);
extern void __cdecl FUN_0040c2e0(int param);
extern void __cdecl FUN_00406c90(void *a, int b, int c, void *d);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_004292d0(void)
{
    __asm {
        push    ebp
        push    esi
        push    0x14
        call    FUN_004084d0
        xor     ebp, ebp
        add     esp, 4
        cmp     eax, ebp
        jz      L_292fe
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x76dfc8
        push    0x74
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b9678], eax
        jmp     L_29304
L_292fe:
        mov     dword ptr [g_007b9678], ebp
L_29304:
        mov     edx, dword ptr [g_008bd548]
        mov     eax, dword ptr [g_008bd54c]
        mov     ecx, dword ptr [g_008bd550]
        mov     dword ptr [g_007b9668], edx
        mov     edx, dword ptr [g_008bd554]
        push    0x8
        mov     byte ptr [g_007b227c], 1
        mov     dword ptr [g_007b966c], eax
        mov     dword ptr [g_007b9670], ecx
        mov     dword ptr [g_007b9674], edx
        mov     dword ptr [g_007b9658], 0x3ee4e4eb
        mov     dword ptr [g_007b965c], 0x3f0f30e8
        mov     dword ptr [g_007b9660], 0x3f154aa1
        mov     dword ptr [g_007b9664], 0x3f800000
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_2938b
        mov     eax, dword ptr [g_007b2280]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebp
        call    FUN_00423d90
        mov     dword ptr [g_007b9680], esi
        jmp     L_29391
L_2938b:
        mov     dword ptr [g_007b9680], ebp
L_29391:
        mov     eax, dword ptr [g_007b2280]
        xor     esi, esi
        cmp     eax, ebp
        jle     L_293d1
L_2939c:
        push    0x70
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_293ba
        mov     ecx, dword ptr [g_007b98cc]
        push    ecx
        mov     ecx, eax
        call    FUN_00450b10
        jmp     L_293bc
L_293ba:
        xor     eax, eax
L_293bc:
        mov     edx, dword ptr [g_007b9680]
        mov     ecx, dword ptr [edx]
        mov     dword ptr [ecx+esi*4], eax
        mov     eax, dword ptr [g_007b2280]
        inc     esi
        cmp     esi, eax
        jl      L_2939c
L_293d1:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_293ff
        mov     edx, dword ptr [g_007b2280]
        shl     edx, 8
        push    edx
        mov     ecx, esi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebp
        call    FUN_0040c2e0
        mov     dword ptr [g_007b9684], esi
        jmp     L_29405
L_293ff:
        mov     dword ptr [g_007b9684], ebp
L_29405:
        push    edi
        push    0x8
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebp
        jz      L_2947d
        mov     esi, dword ptr [g_007b2280]
        shl     esi, 8
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi+4], ebp
        jz      L_29475
        cmp     esi, ebp
        jbe     L_2946a
        /* __emit: no-base SIB `lea eax,[esi*8+0]` (8D 04 F5) not encodable */
        __emit  0x8D
        __emit  0x04
        __emit  0xF5
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        push    ebx
        push    eax
        mov     dword ptr [edi+4], esi
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, ebp
        jz      L_2945d
        push    0x423b70
        push    esi
        push    0x8
        push    ebx
        call    FUN_00406c90
        mov     dword ptr [edi], ebx
        pop     ebx
        mov     dword ptr [g_007b9688], edi
        jmp     L_29483
L_2945d:
        xor     ebx, ebx
        mov     dword ptr [edi], ebx
        pop     ebx
        mov     dword ptr [g_007b9688], edi
        jmp     L_29483
L_2946a:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], ebp
L_29475:
        mov     dword ptr [g_007b9688], edi
        jmp     L_29483
L_2947d:
        mov     dword ptr [g_007b9688], ebp
L_29483:
        push    0x8
        call    FUN_004084d0
        add     esp, 4
        mov     esi, eax
        cmp     esi, ebp
        pop     edi
        jz      L_294d0
        mov     eax, dword ptr [g_007b2280]
        shl     eax, 8
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebp
        jz      L_294c8
        cmp     eax, ebp
        jbe     L_294bd
        push    eax
        mov     dword ptr [esi+4], eax
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007b968c], esi
        jmp     L_294d6
L_294bd:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], ebp
L_294c8:
        mov     dword ptr [g_007b968c], esi
        jmp     L_294d6
L_294d0:
        mov     dword ptr [g_007b968c], ebp
L_294d6:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_29537
        mov     eax, dword ptr [g_007b2280]
        shl     eax, 8
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebp
        jz      L_29528
        cmp     eax, ebp
        jbe     L_2951d
        /* __emit: no-base SIB `lea ecx,[eax*4+0]` (8D 0C 85) not encodable */
        __emit  0x8D
        __emit  0x0C
        __emit  0x85
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        push    ecx
        mov     dword ptr [esi+4], eax
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007b9690], esi
        pop     esi
        mov     dword ptr [g_007b967c], ebp
        pop     ebp
        ret
L_2951d:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], ebp
L_29528:
        mov     dword ptr [g_007b9690], esi
        pop     esi
        mov     dword ptr [g_007b967c], ebp
        pop     ebp
        ret
L_29537:
        pop     esi
        mov     dword ptr [g_007b9690], ebp
        mov     dword ptr [g_007b967c], ebp
        pop     ebp
        ret
    }
}
