/*
 * FUN_004d3fe0 (163 B) -- MLR network/server subsystem shutdown/teardown.
 * __fastcall (ECX = this).
 *
 * Calls a virtual method on [this], then releases a series of subsystem
 * objects (each via virtual call with a flag) and nulls their globals:
 * 0x7dc6b4, [this+0x60], the XOR-obfuscated global, 0x7dc574, 0x7db0b8,
 * 0x7dc6d4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c8e90(int a);

extern int g_007dc6b4;   /* DAT_007dc6b4 */
extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */
extern int g_007dc574;   /* DAT_007dc574 */
extern int g_007db0b8;   /* DAT_007db0b8 */
extern int g_007dc6e0;   /* DAT_007dc6e0 */
extern int g_007dc6d4;   /* DAT_007dc6d4 */

__declspec(naked) void __fastcall FUN_004d3fe0(int *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [g_007dc6b4]
        xor     edi, edi
        cmp     ecx, edi
        jz      L3FFB
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L3FFB:
        mov     ecx, dword ptr [esi + 0x60]
        cmp     ecx, edi
        mov     dword ptr [g_007dc6b4], edi
        jz      L400E
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L400E:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     dword ptr [esi + 0x60], edi
        jz      L402F
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L402F:
        push    edi
        call    FUN_004c8e90
        mov     ecx, dword ptr [g_007dc574]
        add     esp, 0x4
        cmp     ecx, edi
        jz      L4048
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L4048:
        mov     ecx, dword ptr [g_007db0b8]
        cmp     ecx, edi
        mov     dword ptr [g_007dc574], edi
        mov     dword ptr [g_007dc6e0], edi
        jz      L406A
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     dword ptr [g_007db0b8], edi
L406A:
        mov     ecx, dword ptr [g_007dc6d4]
        cmp     ecx, edi
        jz      L407A
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
L407A:
        mov     dword ptr [g_007dc6d4], edi
        pop     edi
        pop     esi
        ret
    }
}
