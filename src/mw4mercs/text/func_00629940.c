/*
 * FUN_00629940 (79 B) — cleanup/teardown routine.
 *
 * Calls FUN_00629880(), then FUN_00621be0() with a value derived from
 * globals 0x7dab44/0x7dab40, then calls FUN_00560420(&DAT_0076b768,0,0)
 * twice (for this+0x7c and this+0x70).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00629880(void);
extern void __cdecl FUN_00621be0(void);
extern void __cdecl FUN_00560420(void *a, int b, int c);

extern unsigned int g_7dab44;
extern unsigned int g_7dab40;

__declspec(naked) void FUN_00629940(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00629880
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x225c]
        call    FUN_00621be0
        mov     ecx, dword ptr [esi + 0x7c]
        push    0x0
        push    0x0
        push    0x76b768
        call    FUN_00560420
        mov     ecx, dword ptr [esi + 0x70]
        push    0x0
        push    0x0
        push    0x76b768
        call    FUN_00560420
        pop     esi
        ret
    }
}
