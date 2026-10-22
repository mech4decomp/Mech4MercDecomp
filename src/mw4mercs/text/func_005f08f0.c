/*
 * FUN_005f08f0 (80 B) — __thiscall, RET 4. Reads a byte flag at this+0x170,
 * passes it through FUN_00416b60, then conditionally calls FUN_004179b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d96e0(unsigned int p);
extern void FUN_005f07c0(void);
extern void *FUN_00416b60(unsigned int *p);
extern char FUN_00415510(void *p);
extern void FUN_004179b0(void *p);

__declspec(naked) void FUN_005f08f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d96e0
        mov     ecx, esi
        call    FUN_005f07c0
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x170]
        lea     edx, [esp + 0xc]
        push    edx
        mov     dword ptr [esp + 0x10], ecx
        lea     ecx, [eax + 0x384]
        call    FUN_00416b60
        lea     edi, [eax + 0x94]
        push    edi
        mov     ecx, esi
        call    FUN_00415510
        test    al, al
        jnz     L1
        push    esi
        mov     ecx, edi
        call    FUN_004179b0
L1:
        pop     edi
        pop     esi
        ret     4
    }
}
