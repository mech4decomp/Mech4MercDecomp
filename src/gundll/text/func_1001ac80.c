/*
 * FUN_1001ac80 (271 B) — __stdcall, RET 0x4.
 * Singleton init guarded by InterlockedIncrement/Decrement on a global lock
 * counter; spins on a ready flag, allocates and initializes an object.
 *
 * CFLAGS: /O1
 */

extern char g_10055054;
extern int g_10049090;
extern int *g_10049120;
extern int *g_1004908c;
extern int *g_100491bc;
extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_1000c2e0(void);
extern int __stdcall FUN_1000c3d0(void);
extern void __cdecl FUN_1000c3a0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001ac80(void)
{
    __asm {
        push    -0x1
        push    0x100480bb
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    0x10050644
        call    dword ptr [g_10049120]
        test    eax, eax
        mov     al, byte ptr [g_10055054]
        jnz     L_ad65
        test    al, al
        jz      L_accd
        mov     esi, dword ptr [g_10049090]
        __emit 0x8D          /* __emit: alignment NOP lea esp,[esp+0] ref 8D A4 24 00 00 00 00; MSVC6 emits 8D 24 24 */
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_acc0:
        push    0x0
        call    esi
        mov     al, byte ptr [g_10055054]
        test    al, al
        jnz     L_acc0
    L_accd:
        push    0x3c
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x4], eax
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jz      L_acfb
        mov     ecx, dword ptr [esp + 0x18]
        push    0x0
        push    ecx
        push    0xc
        mov     ecx, eax
        call    FUN_1000c2e0
        mov     esi, eax
        jmp     L_acfd
    L_acfb:
        xor     esi, esi
    L_acfd:
        test    esi, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        jz      L_ad48
        push    esi
        call    FUN_1000c3d0
        test    eax, eax
        jl      L_ad38
        push    esi
        push    0x1005504c
        call    dword ptr [g_1004908c]
        mov     byte ptr [g_10055054], 0x1
        pop     esi
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x4
    L_ad38:
        mov     ecx, esi
        call    FUN_1000c3a0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_ad48:
        push    0x10050644
        call    dword ptr [g_100491bc]
        pop     esi
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x4
    L_ad65:
        test    al, al
        jnz     L_ad7d
        mov     esi, dword ptr [g_10049090]
        nop
    L_ad70:
        push    0x0
        call    esi
        mov     al, byte ptr [g_10055054]
        test    al, al
        jz      L_ad70
    L_ad7d:
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x4
    }
}
