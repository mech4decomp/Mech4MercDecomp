/*
 * FUN_10023BF0 (51 B) - __stdcall, RET 0xC (3 args).
 * If esi->+0xc is nonzero returns 0xc112000d. Else calls
 * FUN_1001c760(esi, arg2); on success sets esi->+4=1 and esi->+0x20=arg3.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);

__declspec(naked) void __stdcall FUN_10023BF0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_c05
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_c05:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_c1f
        mov     ecx, dword ptr [esp + 0x10]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], ecx
L_c1f:
        pop     esi
        ret     0xc
    }
}
