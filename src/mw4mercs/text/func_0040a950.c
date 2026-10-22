/*
 * FUN_0040a950 (85 B) — __thiscall destructor with global refcount teardown:
 * calls base dtor FUN_00416de0, then if (flag & 1) decrements the global
 * refcount DAT_007b87dc and, when it hits zero, deletes the global object
 * DAT_007b87d8 and clears it. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416de0(void);
extern void __cdecl FUN_00416130(void *p);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *p);

extern int g_007b87d8;
extern int g_007b87dc;

__declspec(naked) void FUN_0040a950(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416de0
        test    byte ptr [esp+0x8], 0x1
        jz      L2
        mov     ecx, dword ptr [g_007b87d8]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007b87dc]
        jnz     L2
        push    edi
        mov     edi, dword ptr [g_007b87d8]
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
        mov     dword ptr [g_007b87d8], 0x0
        pop     esi
        ret     0x4
L2:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
