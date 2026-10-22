/*
 * FUN_0061e4b0 (333 B) — State-machine driver keyed on global 0x008058ac.
 *
 * Loops calling FUN_00649150 and dispatching on DAT_008058ac (1 / 0x39 /
 * other). Builds a linked list of nodes via FUN_0064fc80 / FUN_0064fcd0,
 * calling FUN_00562f40 on error paths, and finally FUN_00649920 /
 * FUN_0069ae50. The "other" path returns via FUN_0069ae70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_8058ac;   /* 0x008058ac */
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064fc80(void *a);
extern void __cdecl FUN_00562f40(int a);
extern void __cdecl FUN_0064fcd0(void *a);
extern void __cdecl FUN_00649920(void *a, void *b, int c);
extern void __cdecl FUN_0069ae50(int a);
extern void __cdecl FUN_0069ae70(int a, int b);

__declspec(naked) int __cdecl FUN_0061e4b0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        xor     ebp, ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x14], ebp
        mov     ebx, 0x4
L_4CB:
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0x1
        jz      L_E522
        cmp     eax, 0x39
        jnz     L_E5C3
        mov     edi, 0x5
        call    FUN_00649150
        cmp     dword ptr [g_8058ac], 0x1
        jnz     L_E529
L_4F1:
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_0064fc80
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ecx + 0x18]
        add     esp, 0x4
        cmp     eax, 0x2
        jz      L_E514
        push    0x1a
        call    FUN_00562f40
        add     esp, 0x4
L_E514:
        mov     edx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [edx + 0x3c]
        call    FUN_00649150
        jmp     L_E538
L_E522:
        mov     edi, 0x4
        jmp     L_4F1
L_E529:
        push    0x23
        call    FUN_00562f40
        add     esp, 0x4
        mov     esi, 0x80da38
L_E538:
        cmp     dword ptr [g_8058ac], 0x1
        jnz     L_E59C
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_0064fcd0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x18], edi
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0x48], 0x0
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x3c], esi
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x20], ebx
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        inc     ebx
        inc     ecx
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], ecx
        jnz     L_E582
        mov     ebp, eax
L_E582:
        mov     ecx, dword ptr [esp + 0x1c]
        test    ecx, ecx
        jz      L_E591
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [esp + 0x10]
L_E591:
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00649150
        jmp     L_E5A6
L_E59C:
        push    0x23
        call    FUN_00562f40
        add     esp, 0x4
L_E5A6:
        push    0x0
        push    0x0
        push    0x7b55a4
        call    FUN_00649920
        push    0x11
        call    FUN_0069ae50
        add     esp, 0x10
        /* __emit: backward jmp rel32 miscomputed by MSVC6 (off-by-5) because two call-relocs sit between branch and target; ref needs E9 08 FF FF FF */
        __emit 0xE9
        __emit 0x08
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
L_E5C3:
        push    0xb
        push    0x7
        call    FUN_0069ae70
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        add     ebx, -0x4
        add     esp, 0x8
        cmp     eax, 0xff
        mov     dword ptr [edx], eax
        mov     dword ptr [ecx], ebx
        jle     L_E5F3
        push    0x3e
        call    FUN_00562f40
        add     esp, 0x4
L_E5F3:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }
}
