/*
 * FUN_004e2630 (85 B) — MLR/Adept: dispatch helper. Reads entity child
 * element, inspects a type tag, and calls FUN_004ea280 / FUN_004ea320
 * based on a state field. __stdcall (RET 0x4, one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ea280(void);
extern void __cdecl FUN_004ea320(void);

__declspec(naked) void FUN_004e2630(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xd8]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x234
        jnz     loc_4e2651
        mov     edx, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [edx + 0x10]
        jmp     loc_4e2653
loc_4e2651:
        mov     ecx, eax
loc_4e2653:
        mov     eax, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [eax + 0x10]
        cmp     edx, 0x1
        jnz     loc_4e2675
        cmp     dword ptr [eax + 0x14], edx
        jz      loc_4e2670
        push    esi
        call    FUN_004ea280
        pop     esi
        ret     0x4
loc_4e2670:
        cmp     edx, 0x1
        jz      loc_4e2681
loc_4e2675:
        cmp     dword ptr [eax + 0x14], 0x1
        jnz     loc_4e2681
        push    esi
        call    FUN_004ea320
loc_4e2681:
        pop     esi
        ret     0x4
    }
}
