/*
 * FUN_00621ad0 (54 B) — __thiscall (ECX = this), RET 4.
 * Bounds-checked element fetch from a vector; returns 0 on any
 * failure, else FUN_00624420(element).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00624420(void);

__declspec(naked) void __stdcall FUN_00621ad0(int param)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    edx, edx
        jge     L_ok1
        xor     eax, eax
        ret     0x4
    L_ok1:
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        sub     ecx, eax
        sar     ecx, 0x2
        cmp     edx, ecx
        jc      L_ok2
        xor     eax, eax
        ret     0x4
    L_ok2:
        cmp     dword ptr [eax + edx*0x4], 0x0
        jnz     L_ok3
        xor     eax, eax
        ret     0x4
    L_ok3:
        mov     ecx, dword ptr [eax + edx*0x4]
        call    FUN_00624420
        ret     0x4
    }
}
