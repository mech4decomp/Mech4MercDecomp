/*
 * FUN_00745400 (37 B) — __stdcall(5). If arg5 non-zero, increments a
 * global counter, then forwards args 1..3 to FUN_007452D0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007452D0(int a, int b, int c);

extern int g_8abe4c;   /* DAT_008abe4c */

__declspec(naked) int FUN_00745400(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        je      L_74540e
        inc     dword ptr [g_8abe4c]
L_74540e:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        push    eax
        push    ecx
        push    edx
        call    FUN_007452D0
        ret     0x14
    }
}
