/*
 * FUN_0040b330 (85 B) — __thiscall destructor wrapper with a global
 * reference-count teardown. Calls FUN_004169c0; if (flags & 1) calls
 * FUN_00416130, decrements the global refcount at 0x007b87e0, and when it
 * hits zero frees the global object at 0x007b87e4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void *p);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *p);

extern int g_007b87e4;
extern int g_007b87e0;

__declspec(naked) void FUN_0040b330(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L2
        mov     ecx, dword ptr [g_007b87e4]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007b87e0]
        jnz     L2
        push    edi
        mov     edi, dword ptr [g_007b87e4]
        test    edi, edi
        jz      L1
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007b87e4], 0x0
        pop     esi
        ret     0x4
L2:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
