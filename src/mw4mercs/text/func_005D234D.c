/*
 * FUN_005D234D (131 B) — __thiscall (this in ECX), RET 0x8 (2 params).
 * Guards on g_007b551c and an FPU compare (g_0076c5b0), walks a small
 * array (stride 0x18) checking a flag bit, then calls a virtual method
 * (vtable+0x160) with 4 args. Returns bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b551c;
extern float g_0076c5b0;

__declspec(naked) void FUN_005D234D(void)
{
    __asm {
        nop
        nop
        nop
        mov     al, byte ptr [g_007b551c]
        test    al, al
        push    esi
        jne     L5d2360
        xor     al, al
        pop     esi
        ret     8
    L5d2360:
        fld     dword ptr [ecx + 0x3b8]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        je      L5d2379
        xor     al, al
        pop     esi
        ret     8
    L5d2379:
        mov     eax, dword ptr [ecx + 0x368]
        test    eax, eax
        jne     L5d2389
        xor     al, al
        pop     esi
        ret     8
    L5d2389:
        mov     dl, byte ptr [eax + 0x3c]
        test    dl, dl
        jne     L5d2396
    L5d2390:
        xor     al, al
        pop     esi
        ret     8
    L5d2396:
        mov     edx, dword ptr [eax + 0x60]
        mov     eax, dword ptr [eax + 0x54]
        xor     esi, esi
        cmp     edx, eax
        je      L5d23b1
    L5d239e:
        test    byte ptr [edx + 0xc], 1
        jne     L5d2390
        inc     esi
        add     edx, 0x18
        cmp     esi, 2
        __emit 0x7C  /* jl L5d239e: MSVC6 miscomputes backward rel offset (off-by-4) */
        __emit 0xED
    L5d23b1:
        mov     eax, dword ptr [ecx]
        push    1
        lea     edx, [ecx + 0x36c]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        call    dword ptr [eax + 0x160]
        pop     esi
        ret     8
    }
}
