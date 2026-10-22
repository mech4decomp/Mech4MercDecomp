/*
 * FUN_00675e80 (230 B) — HUD subsystem init: allocates/constructs several
 * global objects (0x0080daa4/0x0080daa8/0x0080da94/0x0080da90/0x0080da98)
 * via FUN_004084d0 (alloc) + constructors, and zeroes a 0x1000-byte table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849304;
extern int g_0080daa4;
extern int g_0080daa8;
extern int g_0080da94;
extern int g_0080da90;
extern int g_0080da98;
extern void *FUN_004084d0(void);
extern void FUN_00415d70(void);
extern void *FUN_006768c0(void);

__declspec(naked) void FUN_00675e80(void)
{
    __asm {
        push    esi
        push    edi
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        xor     edi, edi
        add     esp, 0x4
        cmp     esi, edi
        jz      L1
        mov     eax, dword ptr [g_00849304]
        push    eax
        push    0x797840
        push    0x64
        push    0x3e8
        push    0x38
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [g_0080daa4], esi
        jmp     L2
L1:
        mov     dword ptr [g_0080daa4], edi
L2:
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L3
        mov     ecx, dword ptr [g_00849304]
        push    ecx
        push    0x797830
        push    0x64
        push    0x3e8
        push    0x14
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [g_0080daa8], esi
        jmp     L4
L3:
        mov     dword ptr [g_0080daa8], edi
L4:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L5
        push    0xc8
        mov     ecx, eax
        call    FUN_006768c0
        mov     dword ptr [g_0080da94], eax
        jmp     L6
L5:
        mov     dword ptr [g_0080da94], edi
L6:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L7
        push    0xc8
        mov     ecx, eax
        call    FUN_006768c0
        mov     dword ptr [g_0080da90], eax
        jmp     L8
L7:
        mov     dword ptr [g_0080da90], edi
L8:
        push    0x1000
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        mov     dword ptr [g_0080da98], edi
        mov     ecx, 0x400
        xor     eax, eax
        rep     stosd
        pop     edi
        pop     esi
        ret
    }
}
