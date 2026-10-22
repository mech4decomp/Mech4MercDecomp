/*
 * FUN_0064d2a0 (293 B) — __cdecl (1 stack arg), RET.
 *
 * Appends a value to a global ring buffer (DAT_0080592c/0x805928),
 * growing it via FUN_00563060 when full, then optionally notifies
 * FUN_00620940 and advances a global char cursor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0080d9bc;
extern int DAT_0080d9b4;
extern int DAT_0080d9b8;
extern int DAT_0080592c;
extern int DAT_00805928;
extern int DAT_007f2ba8;
extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_00620940(void);

__declspec(naked) void __stdcall FUN_0064d2a0(int param_1)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esi + 0x3c]
        push    edi
        push    ebp
        call    FUN_0064c950
        mov     ecx, dword ptr [DAT_0080d9bc]
        add     esp, 0x4
        cmp     eax, ecx
        jz      L_case_default
        mov     eax, dword ptr [ebp + 0x4]
        cmp     eax, 0x2
        jz      L_case_default
        cmp     ebp, dword ptr [DAT_0080d9b4]
        jnz     L_check_b8
        mov     edi, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [DAT_00805928]
        mov     eax, dword ptr [esi + 0x1c]
        add     edi, 0x4
        add     ecx, 0xa000
        cmp     edi, ecx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [DAT_0080592c], edi
        jc      L_store_b4
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_store_b4:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edi], edx
        jmp     L_common
L_check_b8:
        cmp     ebp, dword ptr [DAT_0080d9b8]
        jnz     L_check_3
        mov     edi, dword ptr [DAT_0080592c]
        mov     eax, dword ptr [DAT_00805928]
        movsx   ebx, byte ptr [esi + 0x1c]
        add     edi, 0x4
        add     eax, 0xa000
        cmp     edi, eax
        mov     dword ptr [DAT_0080592c], edi
        jc      L_store_common
        jmp     L_grow
L_check_3:
        cmp     eax, 0x3
        jnz     L_common
        mov     edi, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [DAT_00805928]
        mov     ebx, dword ptr [esi + 0x1c]
        add     edi, 0x4
        add     ecx, 0xa000
        cmp     edi, ecx
        mov     dword ptr [DAT_0080592c], edi
        jc      L_store_common
        jmp     L_grow
L_case_default:
        mov     edi, dword ptr [DAT_0080592c]
        mov     edx, dword ptr [DAT_00805928]
        mov     ebx, dword ptr [esi + 0x1c]
        add     edi, 0x4
        add     edx, 0xa000
        cmp     edi, edx
        mov     dword ptr [DAT_0080592c], edi
        jc      L_store_common
L_grow:
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_store_common:
        mov     dword ptr [edi], ebx
L_common:
        mov     ecx, dword ptr [DAT_007f2ba8]
        test    ecx, ecx
        jz      L_skip_call
        mov     eax, dword ptr [DAT_0080592c]
        push    eax
        push    ebp
        push    esi
        call    FUN_00620940
L_skip_call:
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi
        mov     dword ptr [DAT_00805918], eax
        mov     eax, ebp
        pop     ebp
        mov     dword ptr [DAT_00805908], ecx
        pop     ebx
        ret
    }
}
