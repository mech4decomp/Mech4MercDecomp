/*
 * FUN_1001e3b0 (51 B) - __stdcall, RET 0xc (3 args).  If this->obj(+0xc)
 * is non-null return 0xc112000d; else call FUN_1001c760(this, arg2); on
 * success set this+4=1 and this+0x20=arg3.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1001e3b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L3c5
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L3c5:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L3df
        mov     ecx, dword ptr [esp + 0x10]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], ecx
L3df:
        pop     esi
        ret     0xc
    }
}
