/*
 * FUN_0072DCF0 (128 B) — __stdcall RET 0xC (3 params). If the three 16-bit
 * args are all 0xffff, calls IAT 0x76b08c on a stack struct; else builds
 * the struct from the args. Then calls IAT 0x76b094 with g_007b71d8 and
 * returns buffer 0x88267c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b08c;   /* IAT */
extern void *g_0076b094;   /* IAT */
extern int g_007b71d8;

__declspec(naked) void FUN_0072DCF0(void)
{
    __asm {
        mov     ax, word ptr [esp + 4]
        mov     cx, word ptr [esp + 0xc]
        mov     dx, word ptr [esp + 8]
        sub     esp, 0x10
        cmp     ax, 0xffff
        jne     L72dd21
        __emit 0x66  /* cmp dx,0xffff: MSVC6 uses imm8 form 66 83 FA FF; ref uses imm16 66 81 FA FF FF */
        __emit 0x81
        __emit 0xFA
        __emit 0xFF
        __emit 0xFF
        jne     L72dd21
        cmp     cx, dx
        jne     L72dd21
        __emit 0x8D  /* lea eax,[esp+0]: MSVC6 drops the 00 disp byte (8D 04 24 vs ref 8D 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        call    dword ptr [g_0076b08c]
        jmp     L72dd44
    L72dd21:
        push    esi
        xor     esi, esi
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esp + 8], esi
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esp + 0x10], esi
        mov     word ptr [esp + 0xc], ax
        mov     word ptr [esp + 0xe], dx
        mov     word ptr [esp + 0x10], cx
        pop     esi
    L72dd44:
        mov     edx, dword ptr [g_007b71d8]
        push    0x20
        push    0x88267c
        push    0
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0
        push    edx
        call    dword ptr [g_0076b094]
        mov     eax, 0x88267c
        add     esp, 0x10
        ret     0xc
        nop
        nop
        nop
        nop
    }
}
