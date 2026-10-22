/*
 * FUN_1001a5a0 (160 B) - __stdcall, RET 0x20 (8 args). Registration helper:
 * if this->obj(+0xc) is non-zero returns 0xC112000D; else calls
 * FUN_1001c8b0(this, arg2, arg3), then FUN_1002dbe0(&local, arg4, arg5);
 * on success sets this->+0x24=arg4, this->+0x28=local, this->+0x2c=arg6,
 * this->+0x30=arg7, this->+0x34=arg8, this->+4=1.  On failure calls
 * FUN_1002dcb0(local, arg4, this->obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */
extern void __stdcall FUN_1002dbe0(void);
extern void __stdcall FUN_1002dcb0(void);

__declspec(naked) void __stdcall FUN_1001a5a0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        mov     dword ptr [esp + 0xc], 0
        je      L_ok
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x20
    L_ok:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        mov     ebx, dword ptr [esp + 0x20]
        mov     edi, eax
        test    edi, edi
        jl      L_fail
        mov     edx, dword ptr [esp + 0x24]
        push    ebx
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_1002dbe0
        mov     edi, eax
        test    edi, edi
        jl      L_fail
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esi + 0x30], eax
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi + 0x24], ebx
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x2c], edx
        mov     dword ptr [esi + 0x34], ecx
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x20
    L_fail:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_ret
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setne   dl
        push    ebx
        push    eax
        push    edx
        call    FUN_1002dcb0
    L_ret:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x20
    }
}
