/*
 * FUN_1000e8b0 (309 B) - __cdecl. SEH-guarded COM-style object factory,
 * structurally identical to FUN_1000e770 but for a 0x1c-byte input struct,
 * a 0x204-byte object, and constructor FUN_10015640.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021060;   /* IsBadReadPtr IAT @ 0x10021060 */
extern void *g_10021064;   /* IsBadWritePtr IAT @ 0x10021064 */
extern void __cdecl FUN_1001ee16(void);   /* operator new */
extern void __cdecl FUN_10015640(void);   /* object constructor */
extern void __cdecl FUN_1001fb3b(void);   /* SEH handler */

__declspec(naked) int __cdecl FUN_1000e8b0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    offset FUN_1001fb3b
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr fs:[0], esp
        push    ebx
        push    esi
        test    eax, eax
        push    edi
        jz      LE7
        mov     eax, 0x80040110
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
LE7:
        mov     edi, dword ptr [esp + 0x1c]
        push    0x1c
        push    edi
        call    dword ptr [g_10021060]
        test    eax, eax
        jnz     L9CE
        cmp     dword ptr [edi], 0x1c
        jnz     L9CE
        mov     eax, dword ptr [edi + 0x18]
        test    eax, eax
        jz      L915
        cmp     eax, -1
        jz      L9CE
L915:
        mov     ebx, dword ptr [esp + 0x20]
        push    0x4
        push    ebx
        call    dword ptr [g_10021064]
        test    eax, eax
        jnz     L9CE
        push    0x204
        call    FUN_1001ee16
        add     esp, 0x4
        mov     dword ptr [esp + 0x24], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0x0
        jz      L952
        mov     ecx, eax
        call    FUN_10015640
        mov     esi, eax
        jmp     L954
L952:
        xor     esi, esi
L954:
        test    esi, esi
        mov     dword ptr [esp + 0x14], 0xffffffff
        jnz     L977
        mov     eax, 0x80040256
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
L977:
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
        jge     L9B5
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
L9B5:
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
L9CE:
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
