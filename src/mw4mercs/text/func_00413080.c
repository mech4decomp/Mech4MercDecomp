/*
 * FUN_00413080 (113 B) — __thiscall deleting-destructor. Decrements a
 * refcount stored just before the buffer at [this+0x1c] (freeing it when
 * it hits zero), calls base destructor FUN_00415590, then if the deleting
 * flag ([esp+8]&1) is set runs the global teardown path using globals
 * g_007b87f8 / g_007b87fc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b87f8;
extern int g_007b87fc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415590(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);

__declspec(naked) void FUN_00413080(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jz      L1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     ecx, esi
        call    FUN_00415590
        test    byte ptr [esp + 0x8], 0x1
        jz      L2
        mov     ecx, dword ptr [g_007b87f8]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007b87fc]
        jnz     L2
        push    edi
        mov     edi, dword ptr [g_007b87f8]
        test    edi, edi
        jz      L3
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L3:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007b87f8], 0
        pop     esi
        ret     0x4
L2:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
