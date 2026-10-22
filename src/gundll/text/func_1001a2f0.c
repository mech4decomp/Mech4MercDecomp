/*
 * FUN_1001a2f0 (124 B) - __stdcall, RET 0x10 (4 args). Registration helper:
 * if this->obj(+0xc) is non-zero returns 0xC112000D; else calls
 * FUN_1001c8b0(this, arg2, arg3), then FUN_1002dea0(&local, arg4); on
 * success sets this->+0x24=local, this->+4=1.  On failure calls
 * FUN_1002ded0(local, this->obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */
extern void __stdcall FUN_1002dea0(void);
extern void __stdcall FUN_1002ded0(void);

__declspec(naked) void __stdcall FUN_1001a2f0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        je      L_ok
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        pop     ecx
        ret     0x10
    L_ok:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        call    FUN_1001c8b0
        mov     esi, eax
        test    esi, esi
        jl      L_fail
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        call    FUN_1002dea0
        mov     esi, eax
        test    esi, esi
        jl      L_fail
        mov     ecx, dword ptr [esp + 8]
        mov     byte ptr [edi + 4], 1
        mov     dword ptr [edi + 0x24], ecx
        pop     edi
        pop     esi
        pop     ecx
        ret     0x10
    L_fail:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_ret
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002ded0
    L_ret:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x10
    }
}
