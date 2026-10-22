/*
 * FUN_0067d0b0 (286 B) — RET 4. Uses XOR-obfuscated global pointers
 * (0x007dab44 ^ 0x007dab40, key 0x85739531) to index a table, then
 * builds a string via FUN_0041ef30 / FUN_0041ec50 and calls
 * FUN_0069e250 / FUN_006ad2e0 / FUN_004ce190.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;    /* 0x007dab44 */
extern int g_7dab40;    /* 0x007dab40 */
extern int g_7f2290;    /* 0x007f2290 */

extern void *__cdecl FUN_00680ac0(void);
extern void __cdecl FUN_0041ef30(int a, int b, int c);
extern void __cdecl FUN_0041ec50(void *a, int b);
extern void __cdecl FUN_0069e250(void *a, void *b, int c, int d, int e);
extern void __cdecl FUN_006ad2e0(void *a, void *b, int c, int d, int e);
extern void __cdecl FUN_0041ea10(void);
extern void __cdecl FUN_004ce190(int a, int b, void *c, int d);
extern void __cdecl FUN_0041ef60(void);

__declspec(naked) void FUN_0067d0b0(int param_1)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx]
        sub     esp, 0x28
        push    edi
        mov     edi, dword ptr [esp + 0x30]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + edi * 4 + 0xB4]
        test    ecx, ecx
        jz      L1C7
        push    ebx
        push    ebp
        push    esi
        call    FUN_00680ac0
        push    0x0
        mov     esi, eax
        mov     eax, dword ptr [g_7f2290]
        push    0x400
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_0041ef30
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     ebp, dword ptr [g_7dab40]
        mov     ecx, edi
        shl     ecx, 7
        add     ecx, edi
        xor     edx, ebp
        mov     eax, dword ptr [edx + 0xC]
        shl     ecx, 3
        xor     eax, 0x85739531
        sub     ecx, edi
        mov     edx, dword ptr [eax + ecx * 8 + 0x3584]
        push    0x8
        lea     eax, [esi + 0x24]
        push    eax
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x44], edx
        call    FUN_0041ec50
        mov     ecx, dword ptr [esp + 0x3C]
        mov     ebx, dword ptr [esi + 0x30]
        mov     ebp, dword ptr [esi + 0x2C]
        mov     esi, dword ptr [ecx + 0x170]
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x14]
        push    ebx
        push    ebp
        lea     eax, [esp + 0x18]
        push    edx
        push    eax
        push    esi
        call    FUN_0069e250
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x14]
        push    ebx
        push    ebp
        lea     edx, [esp + 0x2C]
        push    ecx
        push    edx
        push    esi
        call    FUN_006ad2e0
        add     esp, 0x28
        lea     ecx, [esp + 0x10]
        call    FUN_0041ea10
        mov     eax, dword ptr [esp + 0x10]
        push    0x0
        lea     ecx, [esp + 0x14]
        call    dword ptr [eax + 0xC]
        mov     edx, dword ptr [g_7dab44]
        push    0x0
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [g_7dab40]
        mov     dword ptr [esp + 0x20], 0xFFFFFFEC
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        push    0x4B
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004ce190
        lea     ecx, [esp + 0x10]
        call    FUN_0041ef60
        pop     esi
        pop     ebp
        pop     ebx
L1C7:
        pop     edi
        add     esp, 0x28
        ret     4
    }
}
