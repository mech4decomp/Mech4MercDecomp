/*
 * FUN_004828a0 (462 B) — static initializer for the MLR (MidLevelRenderer)
 * subsystem. Allocates a card-cloud object and a set of growable buffer
 * descriptors (0x7da6d0/cc/c8/c4/c0/bc) via the heap allocator FUN_004084d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da720;
extern int g_007da6d0;
extern int g_007da6cc;
extern int g_007da6c8;
extern int g_007da6c4;
extern int g_007da6c0;
extern int g_007da6bc;
extern int g_007b955c;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_00423d10(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004828a0(void)
{
    __asm {
        push    ebx
        push    esi
        push    0x14
        call    FUN_004084d0
        xor     ebx, ebx
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_8ce
        mov     ecx, dword ptr [g_007da720]
        push    ecx
        push    0x76fb1c
        push    0x5e
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007da6d0], eax
        jmp     L_8d4
L_8ce:
        mov     dword ptr [g_007da6d0], ebx
L_8d4:
        push    edi
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_929
        push    0x1000
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x4], 0x400
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, ebx
        jz      L_91d
        push    0x423df0
        push    0x400
        push    0x4
        push    edi
        call    FUN_00406c90
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da6cc], esi
        jmp     L_92f
L_91d:
        xor     edi, edi
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da6cc], esi
        jmp     L_92f
L_929:
        mov     dword ptr [g_007da6cc], ebx
L_92f:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_983
        push    0x4000
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x4], 0x400
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, ebx
        jz      L_977
        push    0x4844c0
        push    0x400
        push    0x10
        push    edi
        call    FUN_00406c90
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da6c8], esi
        jmp     L_989
L_977:
        xor     edi, edi
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da6c8], esi
        jmp     L_989
L_983:
        mov     dword ptr [g_007da6c8], ebx
L_989:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_9b2
        push    0x400
        mov     ecx, esi
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x4], ebx
        call    FUN_00423d10
        mov     dword ptr [g_007da6c4], esi
        jmp     L_9b8
L_9b2:
        mov     dword ptr [g_007da6c4], ebx
L_9b8:
        push    0x8
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, ebx
        jz      L_a0c
        push    0x2000
        mov     dword ptr [edi], ebx
        mov     dword ptr [edi + 0x4], 0x400
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_a00
        push    0x423b70
        push    0x400
        push    0x8
        push    esi
        call    FUN_00406c90
        mov     dword ptr [edi], esi
        mov     dword ptr [g_007da6c0], edi
        jmp     L_a12
L_a00:
        xor     esi, esi
        mov     dword ptr [edi], esi
        mov     dword ptr [g_007da6c0], edi
        jmp     L_a12
L_a0c:
        mov     dword ptr [g_007da6c0], ebx
L_a12:
        push    0x8
        call    FUN_004084d0
        add     esp, 0x4
        mov     esi, eax
        cmp     esi, ebx
        pop     edi
        jz      L_a65
        mov     eax, dword ptr [g_007b955c]
        cmp     eax, ebx
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x4], ebx
        jz      L_a5c
        jbe     L_a51
        lea     edx, [eax*4]
        push    edx
        mov     dword ptr [esi + 0x4], eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007da6bc], esi
        pop     esi
        pop     ebx
        ret
L_a51:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], ebx
L_a5c:
        mov     dword ptr [g_007da6bc], esi
        pop     esi
        pop     ebx
        ret
L_a65:
        pop     esi
        mov     dword ptr [g_007da6bc], ebx
        pop     ebx
        ret
    }
}
