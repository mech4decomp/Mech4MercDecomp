/*
 * FUN_0052ded0 (280 B) — __fastcall constructor-like method.
 * Initializes a large struct. Reads a byte parameter from [ESP+3]
 * (pushed as a byte via the caller's push ecx / shr ecx, 24 pattern).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* Global data references */
extern short DAT_007db0ac;
extern short DAT_007db0ae;

__declspec(naked) void __fastcall FUN_0052ded0(void)
{
    
__asm {
push    ecx                     ; make room for byte param
        mov     dl, byte ptr [esp + 3]  ; read byte param from stack
        mov     eax, ecx                ; eax = this
        push    esi
        or      esi, 0xffffffff         ; esi = -1
        xor     ecx, ecx                ; ecx = 0

        mov     word ptr [eax + 0x31c], si
        mov     word ptr [eax + 0x31e], cx
        mov     dword ptr [eax + 0x354], ecx
        mov     byte ptr [eax + 0x35c], dl

        ; mov dx, [0x007db0ac]
        mov     dx, word ptr [DAT_007db0ac]
        mov     dword ptr [eax + 0x35c], ecx
        mov     dword ptr [eax], ecx
        mov     word ptr [eax + 0x31c], dx

        ; mov dx, [0x007db0ae]
        mov     dx, word ptr [DAT_007db0ae]
        mov     dword ptr [eax + 0x358], ecx
        mov     word ptr [eax + 0x31e], dx

        ; Set 9 dwords to -1 at [eax+0x320..0x340]
        mov     dword ptr [eax + 0x320], esi
        mov     dword ptr [eax + 0x324], esi
        mov     dword ptr [eax + 0x328], esi
        mov     dword ptr [eax + 0x32c], esi
        mov     dword ptr [eax + 0x330], esi
        mov     dword ptr [eax + 0x334], esi
        mov     dword ptr [eax + 0x338], esi
        mov     dword ptr [eax + 0x33c], esi
        mov     dword ptr [eax + 0x340], esi

        mov     dword ptr [eax + 4], ecx
        mov     byte ptr [eax + 8], cl
        mov     byte ptr [eax + 0x10], cl
        mov     byte ptr [eax + 0x110], cl
        mov     dword ptr [eax + 0x214], 8
        mov     byte ptr [eax + 0x210], cl
        mov     byte ptr [eax + 0x211], cl
        mov     byte ptr [eax + 0x212], cl
        mov     dword ptr [eax + 0x218], 0x2d
        mov     dword ptr [eax + 0xc], ecx
        mov     byte ptr [eax + 0x21c], cl

        ; Zero out 0xDD dwords at [eax+0xdbc] with stride pattern
        lea     edx, [eax + 0xdbc]
        mov     esi, 0xdd

zero_loop_1:
        mov     dword ptr [edx - 0xdd * 4], ecx
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx - 0x297 * 4], ecx
        mov     dword ptr [edx - 0x1ba * 4], ecx
        add     edx, 4
        dec     esi
        jnz     zero_loop_1

        ; Zero out 0x117 dwords at [eax+0x158c] with stride pattern
        lea     edx, [eax + 0x158c]
        mov     esi, 0x117

zero_loop_2:
        mov     dword ptr [edx - 0x117 * 4], ecx
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + 0x117 * 4], ecx
        mov     dword ptr [edx + 0x22e * 4], ecx
        add     edx, 4
        dec     esi
        jnz     zero_loop_2

        mov     byte ptr [eax + 0x22a8], cl

        pop     esi
        pop     ecx
        ret
    }


}
