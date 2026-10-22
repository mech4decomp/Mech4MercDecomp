/*
 * FUN_00413dc0 (41 B) — walks a linked list of entries (starting at
 * **ecx + 0x18), storing each entry pointer into global 0x7b8808 until a
 * non-null entry is found or 0x3fd entries are scanned. __fastcall
 * (ecx = param_1), 0 stack params, ret.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8808;

__declspec(naked) void func_00413dc0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ecx + 0x1c], 0
        xor     ecx, ecx
        add     eax, 0x18
L_413dd0:
        mov     edx, dword ptr [eax]
        test    edx, edx
        mov     dword ptr [g_7b8808], edx
        jne     L_413de8
        inc     ecx
        add     eax, 4
        cmp     ecx, 0x3fd
        jb      L_413dd0
L_413de8:
        ret
    }
}
