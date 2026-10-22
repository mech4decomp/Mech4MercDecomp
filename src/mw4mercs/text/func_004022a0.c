/*
 * FUN_004022a0 (35 B) — indexes a global pointer array by a global index,
 * pushes args and calls FUN_00401d10, returns 0.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b7e14;
extern int g_007b7df0;
extern int g_007b7960;
extern void __cdecl FUN_00401d10(void);

__declspec(naked) void FUN_004022a0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b7e14]
        mov     ecx, dword ptr [g_007b7df0]
        mov     edx, dword ptr [eax + ecx*4]
        push    1
        push    edx
        push    offset g_007b7960
        call    FUN_00401d10
        add     esp, 0xc
        xor     eax, eax
        ret     0xc
    }
}
