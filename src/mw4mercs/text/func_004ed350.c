/*
 * FUN_004ed350 (85 B) — __thiscall (ECX=this, RET 0x4). Decrements a
 * global refcount; when it hits zero, destroys the shared object at
 * 0x007dc7f0 and clears it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc7f0;
extern int g_007dc7ec;

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004ed350(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        mov     ecx, dword ptr [g_007dc7f0]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc7ec]
        jnz     L1
        push    edi
        mov     edi, dword ptr [g_007dc7f0]
        test    edi, edi
        jz      L2
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L2:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc7f0], 0x0
        pop     esi
        ret     0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
