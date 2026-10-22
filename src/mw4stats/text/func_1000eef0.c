/*
 * FUN_1000eef0 (309 B) - __cdecl. SEH-guarded COM-style object factory,
 * structurally identical to FUN_1000e770 but for a 0x38-byte input struct,
 * a 0x594-byte object, and constructor FUN_10019920.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021060;   /* IsBadReadPtr IAT @ 0x10021060 */
extern void *g_10021064;   /* IsBadWritePtr IAT @ 0x10021064 */
extern void __cdecl FUN_1001ee16(void);   /* operator new */
extern void __cdecl FUN_10019920(void);   /* object constructor */
extern void __cdecl FUN_1001fbdb(void);   /* SEH handler */

__declspec(naked) int __cdecl FUN_1000eef0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    offset FUN_1001fbdb
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr fs:[0], esp
        push    ebx
        push    esi
        test    eax, eax
        push    edi
        jz      LF27
        mov     eax, 0x80040110
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
LF27:
        mov     edi, dword ptr [esp + 0x1c]
        push    0x38
        push    edi
        call    dword ptr [g_10021060]
        test    eax, eax
        jnz     LF00E
        cmp     dword ptr [edi], 0x38
        jnz     LF00E
        mov     eax, dword ptr [edi + 0x34]
        test    eax, eax
        jz      LF55
        cmp     eax, -1
        jz      LF00E
LF55:
        mov     ebx, dword ptr [esp + 0x20]
        push    0x4
        push    ebx
        call    dword ptr [g_10021064]
        test    eax, eax
        jnz     LF00E
        push    0x594
        call    FUN_1001ee16
        add     esp, 0x4
        mov     dword ptr [esp + 0x24], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0x0
        jz      LF92
        mov     ecx, eax
        call    FUN_10019920
        mov     esi, eax
        jmp     LF94
LF92:
        xor     esi, esi
LF94:
        test    esi, esi
        mov     dword ptr [esp + 0x14], 0xffffffff
        jnz     LFB7
        mov     eax, 0x80040256
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
LFB7:
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
        jge     LFF5
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
LFF5:
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
LF00E:
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
