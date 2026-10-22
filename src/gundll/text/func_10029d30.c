/*
 * FUN_10029d30 (207 B) - __stdcall, RET 0x1c (7 args). Registration helper:
 * if this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001ca10(this, arg2), then FUN_1002b370(arg4, arg3, &local), then
 * FUN_10001dd0(arg5) and FUN_10001dd0(arg6). On success stores
 * +0x1c/+0x20/+0x24/+0x28/+0x2c and +4=1. On failure calls
 * FUN_1002b420(arg3, local, obj!=0) and frees the arg5 result via
 * FUN_10001d60.
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001ca10(void);
extern int __stdcall FUN_1002b370(int a, int b, void *c);
extern void __stdcall FUN_10001dd0(void);
extern void __cdecl FUN_1002b420(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10029d30(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0xc]
        xor     ebx, ebx
        cmp     eax, ebx
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        je      L_9d53
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x1c
L_9d53:
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    esi
        call    FUN_1001ca10
        mov     ebp, dword ptr [esp + 0x20]
        mov     edi, eax
        cmp     edi, ebx
        jl      L_9dd0
        mov     ecx, dword ptr [esp + 0x24]
        push    ebp
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_1002b370
        mov     edi, eax
        test    edi, edi
        jl      L_9dd0
        mov     edi, dword ptr [esp + 0x28]
        push    edi
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jne     L_9d92
        test    edi, edi
        jne     L_9dcb
L_9d92:
        mov     edi, dword ptr [esp + 0x2c]
        push    edi
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jne     L_9da6
        test    edi, edi
        jne     L_9dcb
L_9da6:
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x30]
        pop     edi
        mov     dword ptr [esi + 0x1c], ebp
        mov     dword ptr [esi + 0x24], ebx
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x2c], ecx
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x1c
L_9dcb:
        mov     edi, 0x8007000e
L_9dd0:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_9de8
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setne   dl
        push    ebp
        push    eax
        push    edx
        call    FUN_1002b420
L_9de8:
        test    ebx, ebx
        je      L_9df5
        push    ebx
        call    FUN_10001d60
        add     esp, 4
L_9df5:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x1c
    }
}
