/*
 * FUN_10029940 (169 B) - __stdcall, RET 0x18 (6 args). Registration helper:
 * if this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001ca10(this, arg2), then FUN_1002b370(arg3, arg4, &local); on success
 * calls FUN_10001dd0(arg5) and stores +0x1c/+0x20/+0x24/+0x28 and +4=1.
 * On failure calls FUN_1002b420(arg3, local, obj!=0).
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001ca10(void);
extern int __stdcall FUN_1002b370(int a, int b, void *c);
extern void __stdcall FUN_10001dd0(void);
extern void __cdecl FUN_1002b420(void);

__declspec(naked) void __stdcall FUN_10029940(void)
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
        je      L_9963
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x18
L_9963:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        call    FUN_1001ca10
        mov     ebx, dword ptr [esp + 0x1c]
        mov     edi, eax
        test    edi, edi
        jl      L_99a7
        mov     ecx, dword ptr [esp + 0x20]
        push    ebx
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_1002b370
        mov     edi, eax
        test    edi, edi
        jl      L_99a7
        mov     edi, dword ptr [esp + 0x24]
        push    edi
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jne     L_99c8
        test    edi, edi
        je      L_99c8
        mov     edi, 0x8007000e
L_99a7:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_99bf
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setne   dl
        push    ebx
        push    eax
        push    edx
        call    FUN_1002b420
L_99bf:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x18
L_99c8:
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        mov     dword ptr [esi + 0x1c], ebx
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x28], ecx
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x18
    }
}
