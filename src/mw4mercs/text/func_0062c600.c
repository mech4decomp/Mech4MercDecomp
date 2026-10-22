/*
 * FUN_0062c600 (98 B) — __fastcall (this in ECX), RET 0x4.
 *
 * If param_1 != 1, virtual-call through the XOR-obfuscated global table
 * with id 0xea62; else with id 0xea63. Result passed to FUN_00560420.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;
extern void __cdecl FUN_00560420(void *a, void *b, void *c);

__declspec(naked) void FUN_0062c600(void)
{
    __asm {
        cmp     dword ptr [esp + 0x4], 0x1
        mov     eax, dword ptr [g_007dab44]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [g_007dab40]
        jz      L_c63c
        xor     ecx, eax
        mov     ecx, dword ptr [ecx + 0xc]
        push    0x0
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0xea62
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [esi + 0x60]
        push    eax
        call    FUN_00560420
        pop     esi
        ret     0x4
    L_c63c:
        xor     ecx, eax
        mov     ecx, dword ptr [ecx + 0xc]
        push    0x0
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0xea63
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [esi + 0x60]
        push    eax
        call    FUN_00560420
        pop     esi
        ret     0x4
    }
}
