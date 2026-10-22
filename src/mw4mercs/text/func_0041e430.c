/*
 * FUN_0041e430 (113 B) — __thiscall scalar-deleting-destructor. Decrements
 * the refcount stored just before the buffer at [esi+0x18] and frees it when
 * it hits 0, calls base destructor FUN_00416910, then (if flags bit 0 set)
 * calls FUN_00416130 and decrements the global refcount at 0x007b8ef8; when
 * it hits 0, frees the shared object at 0x007b8ef4 and clears it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8ef4;
extern int g_007b8ef8;

extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00416910(void);
extern void __cdecl FUN_00416130(void *);
extern void __cdecl FUN_00415e30(void);

__declspec(naked) void FUN_0041e430(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x18]
        test    eax, eax
        jz      L44D
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L44D
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L44D:
        mov     ecx, esi
        call    FUN_00416910
        test    byte ptr [esp+0x8], 0x1
        jz      L49B
        mov     ecx, dword ptr [g_007b8ef4]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007b8ef8]
        jnz     L49B
        push    edi
        mov     edi, dword ptr [g_007b8ef4]
        test    edi, edi
        jz      L48A
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L48A:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007b8ef4], 0
        pop     esi
        ret     0x4
L49B:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
