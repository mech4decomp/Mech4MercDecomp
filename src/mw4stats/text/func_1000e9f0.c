/*
 * FUN_1000e9f0 (309 B) - __cdecl. SEH-guarded COM-style object factory,
 * structurally identical to FUN_1000e770 but for a 0x30-byte input struct,
 * a 0x62c-byte object, and constructor FUN_10015f10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021060;   /* IsBadReadPtr IAT @ 0x10021060 */
extern void *g_10021064;   /* IsBadWritePtr IAT @ 0x10021064 */
extern void __cdecl FUN_1001ee16(void);   /* operator new */
extern void __cdecl FUN_10015f10(void);   /* object constructor */
extern void __cdecl FUN_1001fb5b(void);   /* SEH handler */

__declspec(naked) int __cdecl FUN_1000e9f0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    offset FUN_1001fb5b
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr fs:[0], esp
        push    ebx
        push    esi
        test    eax, eax
        push    edi
        jz      LA27
        mov     eax, 0x80040110
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
LA27:
        mov     edi, dword ptr [esp + 0x1c]
        push    0x30
        push    edi
        call    dword ptr [g_10021060]
        test    eax, eax
        jnz     LB0E
        cmp     dword ptr [edi], 0x30
        jnz     LB0E
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        jz      LA55
        cmp     eax, -1
        jz      LB0E
LA55:
        mov     ebx, dword ptr [esp + 0x20]
        push    0x4
        push    ebx
        call    dword ptr [g_10021064]
        test    eax, eax
        jnz     LB0E
        push    0x62c
        call    FUN_1001ee16
        add     esp, 0x4
        mov     dword ptr [esp + 0x24], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0x0
        jz      LA92
        mov     ecx, eax
        call    FUN_10015f10
        mov     esi, eax
        jmp     LA94
LA92:
        xor     esi, esi
LA94:
        test    esi, esi
        mov     dword ptr [esp + 0x14], 0xffffffff
        jnz     LAB7
        mov     eax, 0x80040256
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
LAB7:
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
        jge     LAF5
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
LAF5:
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
LB0E:
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
