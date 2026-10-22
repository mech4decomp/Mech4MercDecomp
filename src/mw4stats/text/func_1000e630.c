/*
 * FUN_1000e630 (311 B) - __cdecl, 4 params. SEH-guarded open/create routine.
 * If param_3 != 0 returns 0x80040110. Validates param_1 (IsBadReadPtr @
 * 0x10021060, size 0x38) and param_2 (IsBadWritePtr @ 0x10021064, size 4),
 * allocates a 0x634-byte object via FUN_1001ee16, constructs it via
 * FUN_10012e40, calls its vtable[1] (init), then vtable[0x44] (open) with the
 * params, bumping *param_4. On success stores the object+0x1c into *param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021060;   /* IsBadReadPtr IAT @ 0x10021060 */
extern void *g_10021064;   /* IsBadWritePtr IAT @ 0x10021064 */
extern void FUN_1001ee16(void);
extern void FUN_10012e40(void);

__declspec(naked) int __cdecl FUN_1000e630(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x1001fafb
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr fs:[0], esp
        push    ebx
        push    esi
        test    eax, eax
        push    edi
        jz      Le667
        mov     eax, 0x80040110
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
Le667:
        mov     edi, dword ptr [esp + 0x1c]
        push    0x38
        push    edi
        call    dword ptr [g_10021060]
        test    eax, eax
        jnz     Le750
        cmp     dword ptr [edi], 0x38
        jnz     Le750
        mov     eax, dword ptr [edi + 0x34]
        test    eax, eax
        jz      Le695
        cmp     eax, -0x1
        jz      Le750
Le695:
        mov     ebx, dword ptr [esp + 0x20]
        push    0x4
        push    ebx
        call    dword ptr [g_10021064]
        test    eax, eax
        jnz     Le750
        push    0x634
        call    FUN_1001ee16
        add     esp, 0x4
        mov     dword ptr [esp + 0x24], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0x0
        jz      Le6d2
        mov     ecx, eax
        call    FUN_10012e40
        mov     esi, eax
        jmp     Le6d4
Le6d2:
        xor     esi, esi
Le6d4:
        test    esi, esi
        mov     dword ptr [esp + 0x14], 0xffffffff
        jnz     Le6f7
        mov     eax, 0x80040256
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
Le6f7:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esp + 0x2c]
        push    0x1
        mov     eax, dword ptr [ecx]
        push    eax
        push    edi
        lea     edx, [eax + 0x1]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esi]
        push    edx
        push    esi
        call    dword ptr [ecx + 0x44]
        mov     edi, eax
        test    edi, edi
        jge     Le737
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
Le737:
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
Le750:
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
