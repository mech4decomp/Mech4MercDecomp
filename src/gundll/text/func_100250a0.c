/*
 * FUN_100250A0 (148 B) - __stdcall, RET 0x18 (6 args).  Registration helper:
 * if this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001ca10(arg2, this), then FUN_1002b370(arg5, arg6, &local); on
 * success sets this->+4=1 and stores +0x1c=arg3, +0x20=arg4, +0x24=arg5,
 * +0x28=local.  On failure calls FUN_1002b420(arg5, local, obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);   /* rel32 call */
extern int __stdcall FUN_1002b370(int a, int b, void *c);
extern void __cdecl FUN_1002b420(void);

__declspec(naked) void __stdcall FUN_100250A0(void)
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
        je      L_50c3
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x18
L_50c3:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        call    FUN_1001ca10
        mov     ebx, dword ptr [esp + 0x24]
        mov     edi, eax
        test    edi, edi
        jl      L_5113
        mov     ecx, dword ptr [esp + 0x28]
        push    ebx
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_1002b370
        mov     edi, eax
        test    edi, edi
        jl      L_5113
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x1c], eax
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi + 0x24], ebx
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], ecx
        mov     dword ptr [esi + 0x28], edx
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x18
L_5113:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_512b
        mov     edx, dword ptr [esi + 0xc]
        push    ebx
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002b420
L_512b:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x18
    }
}
