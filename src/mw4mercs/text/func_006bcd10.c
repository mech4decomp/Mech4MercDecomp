/*
 * FUN_006bcd10 (351 B) — __stdcall. If param == 0xffff, toggles the
 * g_82e2c8 flag (after FUN_006bc0b0) and returns. Otherwise, if the
 * g_82e2c0 gate is clear, iterates a linked list of entries matching the
 * param's 0xf000 mask, and for each matching entry performs a set of
 * setup calls (FUN_00717650 / FUN_00727630 / FUN_006cbfe0). Recurses for
 * 0x2000 when param == 0x1000 and g_859b90 is set.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_82e2c8;  /* 0x0082e2c8 */
extern unsigned int g_82e2c0;   /* 0x0082e2c0 */
extern unsigned char g_82f3e0;  /* 0x0082f3e0 */
extern unsigned int g_82f3c0;   /* 0x0082f3c0 */
extern unsigned int g_82e1d0;   /* 0x0082e1d0 */
extern unsigned int g_82f338;   /* 0x0082f338 */
extern unsigned char g_858955;  /* 0x00858955 */
extern unsigned int g_858944;   /* 0x00858944 */
extern unsigned int g_858940;   /* 0x00858940 */
extern unsigned int g_859b90;   /* 0x00859b90 */
extern void __cdecl FUN_006bc0b0(void);
extern void __cdecl FUN_006bb970(int);
extern void __cdecl FUN_00717650(int, int, int, int, int, int, int, int, int, int);
extern void __cdecl FUN_00727630(int, int, int, int);
extern void __cdecl FUN_006cbfe0(int, int);
extern void __cdecl FUN_006bf4a0(void);
extern void __cdecl FUN_006bb9b0(void);
extern void __cdecl FUN_006ca9a0(void);

__declspec(naked) void __stdcall FUN_006bcd10(int param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        cmp     esi, 0xffff
        jnz     L_bcd35
        call    FUN_006bc0b0
        mov     al, byte ptr [g_82e2c8]
        test    al, al
        setz    al
        mov     byte ptr [g_82e2c8], al
        pop     esi
        ret     0x4
L_bcd35:
        mov     eax, dword ptr [g_82e2c0]
        test    eax, eax
        jnz     L_bce6b
        push    0x1
        call    FUN_006bb970
        test    esi, esi
        mov     byte ptr [g_82f3e0], 0x1
        jnz     L_bcd60
        mov     ecx, dword ptr [g_82f3c0]
        mov     dword ptr [g_82e1d0], ecx
L_bcd60:
        mov     edx, dword ptr [g_82e1d0]
        mov     eax, dword ptr [edx]
        push    ebx
        xor     bl, bl
        test    eax, eax
        push    ebp
        jz      L_bce38
        mov     ebp, 0x4
L_bcd79:
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ecx]
        and     edx, 0xf000
        cmp     edx, esi
        jnz     L_bce38
        mov     ecx, dword ptr [eax + 0x8]
        cmp     dword ptr [ecx + 0xc], 0x2
        mov     dword ptr [g_82f338], ecx
        jz      L_bce20
        test    byte ptr [eax + 0x34], 0x1
        jz      L_bce20
        mov     ecx, dword ptr [eax + 0x28]
        test    ecx, ecx
        jz      L_bce20
        test    bl, bl
        jnz     L_bcdfa
        mov     al, byte ptr [g_858955]
        test    al, al
        mov     bl, 0x1
        jnz     L_bcdd8
        test    esi, esi
        jnz     L_bcdd8
        push    esi
        push    esi
        push    0x3f800000
        push    0x3f800000
        push    esi
        push    esi
        push    esi
        push    esi
        push    0x3f800000
        push    0x1
        jmp     L_bcdf5
L_bcdd8:
        push    0x0
        push    0x0
        push    0x3f800000
        push    0x3f800000
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x3f800000
        push    0x0
L_bcdf5:
        call    FUN_00717650
L_bcdfa:
        mov     eax, dword ptr [g_858944]
        mov     ecx, dword ptr [g_858940]
        push    eax
        push    ecx
        push    0x0
        push    0x0
        call    FUN_00727630
        mov     edx, dword ptr [g_82e1d0]
        mov     eax, dword ptr [edx]
        push    0x11
        push    eax
        call    FUN_006cbfe0
L_bce20:
        mov     eax, dword ptr [g_82e1d0]
        add     eax, ebp
        mov     ecx, eax
        mov     dword ptr [g_82e1d0], eax
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jnz     L_bcd79
L_bce38:
        call    FUN_006bf4a0
        mov     byte ptr [g_82f3e0], 0x0
        call    FUN_006bb9b0
        cmp     esi, 0x1000
        pop     ebp
        pop     ebx
        jnz     L_bce66
        mov     eax, dword ptr [g_859b90]
        test    eax, eax
        jz      L_bce66
        push    0x2000
        call    FUN_006bcd10
L_bce66:
        call    FUN_006ca9a0
L_bce6b:
        pop     esi
        ret     0x4
    }
}
