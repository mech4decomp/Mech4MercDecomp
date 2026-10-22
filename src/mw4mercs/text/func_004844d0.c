/*
 * FUN_004844d0 (408 B) — static initializer for the MLR NGonCloud
 * subsystem. Allocates the cloud object (0x7da6f0) and growable buffer
 * descriptors (0x7da6ec/e8/e4/e0) via the heap allocator FUN_004084d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da720;
extern int g_007da6f0;
extern int g_007da6ec;
extern int g_007da6e8;
extern int g_007da6e4;
extern int g_007da6e0;
extern int g_007b955c;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004844d0(void)
{
    __asm {
        push    ebp
        push    esi
        push    0x14
        call    FUN_004084d0
        xor     ebp, ebp
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_fe
        mov     ecx, dword ptr [g_007da720]
        push    ecx
        push    0x76fb5c
        push    0x5d
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007da6f0], eax
        jmp     L_504
L_fe:
        mov     dword ptr [g_007da6f0], ebp
L_504:
        push    edi
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebp
        jz      L_552
        push    0x1000
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x4], 0x400
        call    FUN_004084d0
        mov     edx, eax
        add     esp, 0x4
        cmp     edx, ebp
        jz      L_546
        mov     ecx, 0x400
        xor     eax, eax
        mov     edi, edx
        rep     stosd
        mov     dword ptr [esi], edx
        mov     dword ptr [g_007da6ec], esi
        jmp     L_558
L_546:
        xor     edx, edx
        mov     dword ptr [esi], edx
        mov     dword ptr [g_007da6ec], esi
        jmp     L_558
L_552:
        mov     dword ptr [g_007da6ec], ebp
L_558:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebp
        jz      L_5ac
        push    0x4000
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x4], 0x400
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, ebp
        jz      L_5a0
        push    0x4844c0
        push    0x400
        push    0x10
        push    edi
        call    FUN_00406c90
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da6e8], esi
        jmp     L_5b2
L_5a0:
        xor     edi, edi
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da6e8], esi
        jmp     L_5b2
L_5ac:
        mov     dword ptr [g_007da6e8], ebp
L_5b2:
        push    0x8
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, ebp
        jz      L_606
        push    0x4000
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 0x4], 0x400
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebp
        jz      L_5fa
        push    0x4852b0
        push    0x400
        push    0x10
        push    esi
        call    FUN_00406c90
        mov     dword ptr [edi], esi
        mov     dword ptr [g_007da6e4], edi
        jmp     L_60c
L_5fa:
        xor     esi, esi
        mov     dword ptr [edi], esi
        mov     dword ptr [g_007da6e4], edi
        jmp     L_60c
L_606:
        mov     dword ptr [g_007da6e4], ebp
L_60c:
        push    0x8
        call    FUN_004084d0
        add     esp, 0x4
        mov     esi, eax
        cmp     esi, ebp
        pop     edi
        jz      L_65f
        mov     eax, dword ptr [g_007b955c]
        cmp     eax, ebp
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x4], ebp
        jz      L_656
        jbe     L_64b
        lea     edx, [eax*4]
        push    edx
        mov     dword ptr [esi + 0x4], eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007da6e0], esi
        pop     esi
        pop     ebp
        ret
L_64b:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], ebp
L_656:
        mov     dword ptr [g_007da6e0], esi
        pop     esi
        pop     ebp
        ret
L_65f:
        pop     esi
        mov     dword ptr [g_007da6e0], ebp
        pop     ebp
        ret
    }
}
