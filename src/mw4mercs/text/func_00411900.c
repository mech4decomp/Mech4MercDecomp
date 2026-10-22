/*
 * FUN_00411900 (63 B) — __fastcall (this in ECX): destructor. Sets vtable
 * 0x76d1b4, calls FUN_004179f0/FUN_00417980 on the sub-object at +0x18,
 * decrements the refcount byte at [ptr-1] of the +0x14 pointer (freeing via
 * FUN_004084e0 when it hits zero), then calls FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00411900(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x18]
        mov     ecx, edi
        mov     dword ptr [esi], 0x76d1b4
        call    FUN_004179f0
        mov     ecx, edi
        call    FUN_00417980
        mov     eax, dword ptr [esi + 0x14]
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
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
