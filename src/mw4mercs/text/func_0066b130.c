/*
 * FUN_0066b130 (542 B) — AnimationStateEngine::MakeAnimHolder factory.
 * Dispatches on the type arg (1..8) via an 8-entry jump table (0x66b350),
 * allocates a per-type object, initializes it, and returns it. Default
 * case asserts via FUN_006fab90 + INT3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_jt_66b350[];          /* jump table @ 0x66b350 */
extern void *__cdecl FUN_004084d0(int size);   /* alloc */
extern void  __cdecl FUN_0066bde0(void);       /* ctor (thiscall via ECX) */
extern int   __cdecl FUN_006fab90(const char *);

__declspec(naked) void FUN_0066b130(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        dec     eax
        cmp     eax, 7
        ja      L_b336
        jmp     dword ptr [eax*4 + g_jt_66b350]

        /* case 1 */
        push    0x3c
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 4
        cmp     eax, edx
        jz      L_b348
        mov     dword ptr [eax + 0x20], 0xbf800000
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x24], edx
        mov     byte ptr [eax + 0x1c], dl
        mov     dword ptr [eax], 0x796d84
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [eax + 0x30], edx
        pop     ebp
        ret     4

        /* case 2 */
        push    0x3c
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 4
        cmp     eax, edx
        jz      L_b348
        mov     dword ptr [eax + 0x20], 0xbf800000
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x24], edx
        mov     byte ptr [eax + 0x1c], dl
        mov     dword ptr [eax], 0x796d68
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [eax + 0x30], edx
        pop     ebp
        ret     4

        /* case 3 */
        push    0x44
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 4
        cmp     eax, edx
        jz      L_b348
        mov     dword ptr [eax + 0x20], 0xbf800000
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x24], edx
        mov     byte ptr [eax + 0x1c], dl
        mov     dword ptr [eax], 0x796d4c
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [eax + 0x30], edx
        pop     ebp
        ret     4

        /* case 4 */
        push    0x40
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 4
        cmp     eax, edx
        jz      L_b348
        mov     dword ptr [eax + 0x20], 0xbf800000
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x24], edx
        mov     byte ptr [eax + 0x1c], dl
        mov     dword ptr [eax], 0x796d30
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [eax + 0x30], edx
        pop     ebp
        ret     4

        /* case 5 */
        push    0x9c
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 4
        cmp     eax, edx
        jz      L_b348
        mov     dword ptr [eax + 0x20], 0xbf800000
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x24], edx
        mov     byte ptr [eax + 0x1c], dl
        mov     dword ptr [eax], 0x796d14
        mov     dword ptr [eax + 0x4c], edx
        mov     dword ptr [eax + 0x50], edx
        mov     dword ptr [eax + 0x54], edx
        mov     dword ptr [eax + 0x58], edx
        mov     dword ptr [eax + 0x5c], edx
        mov     dword ptr [eax + 0x60], edx
        mov     dword ptr [eax + 0x64], edx
        mov     dword ptr [eax + 0x68], edx
        mov     dword ptr [eax + 0x6c], edx
        mov     dword ptr [eax + 0x70], edx
        mov     dword ptr [eax + 0x74], edx
        mov     dword ptr [eax + 0x78], edx
        mov     dword ptr [eax + 0x7c], edx
        mov     dword ptr [eax + 0x80], edx
        mov     dword ptr [eax + 0x84], edx
        mov     dword ptr [eax + 0x88], edx
        mov     dword ptr [eax + 0x8c], edx
        mov     dword ptr [eax + 0x90], edx
        mov     dword ptr [eax + 0x94], edx
        mov     dword ptr [eax + 0x98], edx
        pop     ebp
        ret     4

        /* case 6 */
        push    0x6c
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 4
        cmp     eax, edx
        jz      L_b348
        mov     dword ptr [eax + 0x20], 0xbf800000
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x24], edx
        mov     byte ptr [eax + 0x1c], dl
        mov     dword ptr [eax], 0x796cf8
        mov     dword ptr [eax + 0x44], edx
        mov     dword ptr [eax + 0x48], edx
        mov     dword ptr [eax + 0x4c], edx
        mov     dword ptr [eax + 0x50], edx
        mov     dword ptr [eax + 0x54], edx
        mov     dword ptr [eax + 0x58], edx
        mov     dword ptr [eax + 0x5c], edx
        mov     dword ptr [eax + 0x60], edx
        mov     dword ptr [eax + 0x64], edx
        mov     dword ptr [eax + 0x68], edx
        pop     ebp
        ret     4

        /* case 7 */
        push    0x54
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 4
        cmp     eax, edx
        jz      L_b348
        mov     dword ptr [eax + 0x20], 0xbf800000
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x24], edx
        mov     byte ptr [eax + 0x1c], dl
        mov     dword ptr [eax], 0x796cdc
        mov     dword ptr [eax + 0x44], edx
        mov     dword ptr [eax + 0x48], edx
        mov     dword ptr [eax + 0x4c], edx
        mov     dword ptr [eax + 0x50], edx
        pop     ebp
        ret     4

        /* case 8 */
        push    0x64
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 4
        cmp     eax, edx
        jz      L_b348
        mov     ecx, eax
        call    FUN_0066bde0
        pop     ebp
        ret     4

        /* default */
L_b336:
        push    0x796c9c
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_b348
        int     3
L_b348:
        xor     eax, eax
        pop     ebp
        ret     4
    }
}
