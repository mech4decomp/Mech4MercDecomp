/*
 * FUN_005f1570 (406 B) — __thiscall dispatcher with a 10-entry jump table.
 *
 * Builds a sub-object, computes counts, then switches on the stack param
 * (0..9) via a jump table at 0x5F1708. Each case validates a bound and
 * either returns 0 (after cleanup) or falls through to the default path
 * which returns 1.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00580540(void *a);
extern int  __stdcall FUN_0063b370(void *a, int b);
extern void __stdcall FUN_005805a0(void *a, int b);
extern void __stdcall FUN_00580560(void);

__declspec(naked) void __stdcall FUN_005f1570(void *param)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0xF]
        mov     edi, ecx
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00580540
        lea     ecx, [esp + 0x10]
        push    0
        push    ecx
        call    FUN_0063b370
        mov     edx, dword ptr [esp + 0x1C]
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x28]
        sub     edx, esi
        mov     ecx, edx
        sar     ecx, 2
        add     esp, 8
        sub     ecx, eax
        cmp     ebx, 9
        mov     dword ptr [edi], 0xA
        ja      L16F0
        jmp     dword ptr [ebx*4 + 0x5F1708]
L15C0:
        cmp     eax, 1
        jge     L16F0
        mov     edx, dword ptr [esp + 0x18]
        sub     edx, esi
        sar     edx, 2
        push    edx
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_005805a0
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     4
L15E8:
        cmp     eax, 2
        jge     L16F0
        jmp     L16D1
L15F6:
        cmp     eax, 3
        jge     L16F0
        lea     ecx, [esp + 0x10]
        call    FUN_00580560
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     4
L1613:
        test    eax, eax
        jnz     L16F0
        lea     ecx, [esp + 0x10]
        call    FUN_00580560
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     4
L162F:
        cmp     ecx, 1
        jge     L16F0
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, esi
        sar     ecx, 2
        push    ecx
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_005805a0
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     4
L1657:
        cmp     ecx, 2
        jge     L16F0
        lea     ecx, [esp + 0x10]
        call    FUN_00580560
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     4
L1674:
        cmp     ecx, 3
        jge     L16F0
        lea     ecx, [esp + 0x10]
        call    FUN_00580560
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     4
L168D:
        cmp     ecx, 4
        jge     L16F0
        lea     ecx, [esp + 0x10]
        call    FUN_00580560
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     4
L16A6:
        test    ecx, ecx
        jnz     L16F0
        mov     edx, dword ptr [esp + 0x18]
        sub     edx, esi
        sar     edx, 2
        push    edx
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_005805a0
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     4
L16C9:
        test    edx, 0xFFFFFFFC
        jnz     L16F0
L16D1:
        mov     eax, dword ptr [esp + 0x18]
        sub     eax, esi
        sar     eax, 2
        push    eax
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_005805a0
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     4
L16F0:
        lea     ecx, [esp + 0x10]
        mov     dword ptr [edi], ebx
        call    FUN_00580560
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
