/*
 * FUN_0041e360 (85 B) — __thiscall scalar-deleting-destructor with a global
 * refcount. Calls FUN_004169c0 (destructor); if flags bit 0 set, calls
 * FUN_00416130 and decrements the global refcount at 0x007b8efc. When the
 * refcount hits 0, frees the shared object at 0x007b8f00 and clears it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8f00;
extern int g_007b8efc;

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void *);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0041e360(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp+0x8], 0x1
        jz      L3AF
        mov     ecx, dword ptr [g_007b8f00]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007b8efc]
        jnz     L3AF
        push    edi
        mov     edi, dword ptr [g_007b8f00]
        test    edi, edi
        jz      L39E
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L39E:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007b8f00], 0
        pop     esi
        ret     0x4
L3AF:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
