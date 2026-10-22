/*
 * FUN_005a00f0 (89 B) — __thiscall state transition function.
 * Compares param1 with this+0x14, dispatches based on value.
 * Calls FUN_005a0b70 with (this, param2, type_code).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a0b70(void);

__declspec(naked) void __stdcall FUN_005a00f0(int param1, int param2)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esp + 8]
        cmp     ecx, eax
        jz      label_done
        mov     edx, ecx
        dec     edx
        jz      label_case_1
        sub     edx, 0xf
        jnz     label_default

        /* case 0x10 */
        cmp     eax, 0x13
        jz      label_default
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, 0x13
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005a0b70
        mov     eax, dword ptr [esi + 0x14]
        pop     esi
        ret     8

label_case_1:
        cmp     eax, 0x10
        jz      label_set_0x12
        cmp     eax, 0x13
        jnz     label_default

label_set_0x12:
        mov     ecx, 0x12

label_default:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005a0b70
        mov     eax, dword ptr [esi + 0x14]

label_done:
        pop     esi
        ret     8
    }
}
