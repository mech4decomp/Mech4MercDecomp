/*
 * FUN_0040f1c0 (84 B) — __thiscall helper (1 arg). Calls FUN_00410500 to
 * build an object, decrements a refcount on a sub-object, frees it, and
 * decrements a counter at this+4. (Same body as FUN_0040f120.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00410500(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040f1c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [eax+0xc]
        push    ecx
        lea     edx, [eax+0x8]
        push    edx
        add     eax, 0x4
        push    eax
        mov     eax, dword ptr [esp+0x18]
        push    eax
        call    FUN_00410500
        mov     edi, eax
        mov     eax, dword ptr [edi+0x10]
        add     esp, 0x10
        test    eax, eax
        jz      L1
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1:
        test    edi, edi
        jz      L2
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     eax, dword ptr [esi+0x4]
        dec     eax
        pop     edi
        mov     dword ptr [esi+0x4], eax
        pop     esi
        ret     0x4
    }
}
