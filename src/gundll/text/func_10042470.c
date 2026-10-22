/*
 * FUN_10042470 (31 B) - __cdecl.  64-bit shift-left: edx:eax << cl.
 * cl>=0x40 -> 0; cl>=0x20 -> edx=eax<<(cl&0x1f), eax=0; else
 * edx:eax = shld/shl.  Returns in edx:eax.
 * (Transcribed from reference bytes; gaptext.  Leading int3 pad skipped.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10042470(void)
{
    __asm {
        cmp     cl, 0x40
        jae     L_zero
        cmp     cl, 0x20
        jae     L_hi
        shld    edx, eax, cl
        shl     eax, cl
        ret
L_hi:
        mov     edx, eax
        xor     eax, eax
        and     cl, 0x1f
        shl     edx, cl
        ret
L_zero:
        xor     eax, eax
        xor     edx, edx
        ret
    }
}
