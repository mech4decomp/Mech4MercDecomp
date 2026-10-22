/*
 * FUN_10028510 (56 B) - __stdcall, RET 0x10. If arg1->+0xc is non-null returns
 * 0xC112000D; else calls FUN_1001c8b0(arg1,arg2,arg3); on success (>=0) sets
 * arg1->+4 = 1 and arg1->+0x24 = arg4. Returns the HRESULT.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */

__declspec(naked) int __stdcall FUN_10028510(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_25
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
L_25:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_44
        mov     edx, dword ptr [esp + 0x14]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], edx
L_44:
        pop     esi
        ret     0x10
    }
}
