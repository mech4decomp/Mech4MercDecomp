/*
 * FUN_1000edb0 (309 B) - __cdecl. SEH-guarded COM-style object factory,
 * structurally identical to FUN_1000e770 but for a 0x14-byte input struct,
 * a 0x214-byte object (allocated via FUN_1000a120), and constructor
 * FUN_100187c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021060;   /* IsBadReadPtr IAT @ 0x10021060 */
extern void *g_10021064;   /* IsBadWritePtr IAT @ 0x10021064 */
extern void __cdecl FUN_1000a120(void);   /* operator new */
extern void __cdecl FUN_100187c0(void);   /* object constructor */
extern void __cdecl FUN_1001fbbb(void);   /* SEH handler */

__declspec(naked) int __cdecl FUN_1000edb0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    offset FUN_1001fbbb
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr fs:[0], esp
        push    ebx
        push    esi
        test    eax, eax
        push    edi
        jz      LDE7
        mov     eax, 0x80040110
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
LDE7:
        mov     edi, dword ptr [esp + 0x1c]
        push    0x14
        push    edi
        call    dword ptr [g_10021060]
        test    eax, eax
        jnz     LEECE
        cmp     dword ptr [edi], 0x14
        jnz     LEECE
        mov     eax, dword ptr [edi + 0x10]
        test    eax, eax
        jz      LEE15
        cmp     eax, -1
        jz      LEECE
LEE15:
        mov     ebx, dword ptr [esp + 0x20]
        push    0x4
        push    ebx
        call    dword ptr [g_10021064]
        test    eax, eax
        jnz     LEECE
        push    0x214
        call    FUN_1000a120
        add     esp, 0x4
        mov     dword ptr [esp + 0x24], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0x0
        jz      LEE52
        mov     ecx, eax
        call    FUN_100187c0
        mov     esi, eax
        jmp     LEE54
LEE52:
        xor     esi, esi
LEE54:
        test    esi, esi
        mov     dword ptr [esp + 0x14], 0xffffffff
        jnz     LEE77
        mov     eax, 0x80040256
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
LEE77:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ecx]
        push    eax
        push    edi
        lea     edx, [eax + 0x1]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esi]
        push    edx
        push    esi
        call    dword ptr [ecx + 0x2c]
        mov     edi, eax
        test    edi, edi
        jge     LEEB5
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x8]
        mov     eax, edi
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
LEEB5:
        add     esi, 0x1c
        mov     eax, edi
        mov     dword ptr [ebx], esi
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
LEECE:
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0xc
        ret
    }
}
