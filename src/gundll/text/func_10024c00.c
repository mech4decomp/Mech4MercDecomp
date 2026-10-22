/*
 * FUN_10024C00 (144 B) - __stdcall, RET 0x18 (6 args).  Registration helper:
 * if this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001c8b0(this, arg2, arg3), then FUN_1002b370(arg5, arg6, &local);
 * on success sets this->+4=1 and stores +0x24=arg4, +0x28=arg5, +0x2c=local.
 * On failure calls FUN_1002b420(arg5, local, obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);
extern int __stdcall FUN_1002b370(int a, int b, void *c);
extern void __cdecl FUN_1002b420(void);

__declspec(naked) void __stdcall FUN_10024C00(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        je      L_c23
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x18
L_c23:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        call    FUN_1001c8b0
        mov     ebx, dword ptr [esp + 0x24]
        mov     esi, eax
        test    esi, esi
        jl      L_c6f
        mov     edx, dword ptr [esp + 0x28]
        push    ebx
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_1002b370
        mov     esi, eax
        test    esi, esi
        jl      L_c6f
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x28], ebx
        mov     byte ptr [edi + 4], 1
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x2c], edx
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x18
L_c6f:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_c87
        mov     edx, dword ptr [edi + 0xc]
        push    ebx
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002b420
L_c87:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x18
    }
}
