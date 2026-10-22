/*
 * FUN_1001add0 (271 B) — __stdcall, RET 0x4.
 * Singleton init guarded by InterlockedIncrement/Decrement on a global lock
 * counter; spins on a ready flag, allocates and initializes an object.
 * (Sibling of FUN_1001ac80 with different globals/constants.)
 *
 * CFLAGS: /O1
 */

extern char g_10055055;
extern int g_10049090;
extern int *g_10049120;
extern int *g_1004908c;
extern int *g_100491bc;
extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_1000c2e0(void);
extern int __stdcall FUN_1000c3d0(void);
extern void __cdecl FUN_1000c3a0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001add0(void)
{
    __asm {
        push    -0x1
        push    0x100480db
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    0x10050648
        call    dword ptr [g_10049120]
        test    eax, eax
        mov     al, byte ptr [g_10055055]
        jnz     L_aeb5
        test    al, al
        jz      L_ae1d
        mov     esi, dword ptr [g_10049090]
        __emit 0x8D          /* __emit: alignment NOP lea esp,[esp+0] ref 8D A4 24 00 00 00 00; MSVC6 emits 8D 24 24 */
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_ae10:
        push    0x0
        call    esi
        mov     al, byte ptr [g_10055055]
        test    al, al
        jnz     L_ae10
    L_ae1d:
        push    0x3c
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x4], eax
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jz      L_ae4b
        mov     ecx, dword ptr [esp + 0x18]
        push    0x0
        push    ecx
        push    0x10
        mov     ecx, eax
        call    FUN_1000c2e0
        mov     esi, eax
        jmp     L_ae4d
    L_ae4b:
        xor     esi, esi
    L_ae4d:
        test    esi, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        jz      L_ae98
        push    esi
        call    FUN_1000c3d0
        test    eax, eax
        jl      L_ae88
        push    esi
        push    0x10055050
        call    dword ptr [g_1004908c]
        mov     byte ptr [g_10055055], 0x1
        pop     esi
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x4
    L_ae88:
        mov     ecx, esi
        call    FUN_1000c3a0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_ae98:
        push    0x10050644
        call    dword ptr [g_100491bc]
        pop     esi
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x4
    L_aeb5:
        test    al, al
        jnz     L_aecd
        mov     esi, dword ptr [g_10049090]
        nop
    L_aec0:
        push    0x0
        call    esi
        mov     al, byte ptr [g_10055055]
        test    al, al
        jz      L_aec0
    L_aecd:
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x4
    }
}
