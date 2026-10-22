/*
 * FUN_100283c0 (49 B) - __stdcall, RET 0xc. If arg1->+0xc is non-null returns
 * 0xC112000D; else calls FUN_1001c8b0(arg1,arg2,arg3); on success (>=0) sets
 * arg1->+4 = 1. Returns the HRESULT.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */

__declspec(naked) int __stdcall FUN_100283c0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_d5
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_d5:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_ed
        mov     byte ptr [esi + 4], 1
L_ed:
        pop     esi
        ret     0xc
    }
}
