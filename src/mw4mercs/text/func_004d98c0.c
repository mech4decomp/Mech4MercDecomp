/*
 * FUN_004d98c0 (72 B) — __thiscall: resolves an object handle and, if
 * registration fails, retries via a fallback path.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_00415510(int);
extern void __cdecl FUN_004179b0(int);

__declspec(naked) void FUN_004d98c0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        mov     esi, ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        add     ecx, 0x60
        push    ecx
        mov     ecx, esi
        call    FUN_00415510
        test    al, al
        jnz     L_9906
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        push    esi
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        add     ecx, 0x60
        call    FUN_004179b0
L_9906:
        pop     esi
        ret
    }
}
