/*
 * FUN_1001e270 (44 B) - __stdcall, RET 0x8 (2 args).  If this->obj(+0xc)
 * is non-null return 0xc112000d; else call FUN_1001c760(this, arg2); on
 * success set this+4=1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1001e270(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L285
        mov     eax, 0xc112000d
        pop     esi
        ret     8
L285:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L298
        mov     byte ptr [esi + 4], 1
L298:
        pop     esi
        ret     8
    }
}
