/*
 * FUN_00608620 (88 B) — __thiscall. Calls FUN_00608d70, then
 * FUN_00615ff0 with an obfuscated pointer chain, then FUN_00608710,
 * then a virtual method (slot 0x10) on this+0x28, storing the result
 * into *(param_2+4). Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void __fastcall FUN_00608d70(void);
extern void __fastcall FUN_00615ff0(void *a, void *b, void *c);
extern void __fastcall FUN_00608710(void);

__declspec(naked) int __stdcall FUN_00608620(void *param_1, void *param_2)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00608d70
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        lea     eax, [ecx + 0x44]
        push    0x0
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x6C]
        push    0x0
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_00615ff0
        mov     ecx, esi
        call    FUN_00608710
        mov     edx, dword ptr [esi + 0x28]
        lea     ecx, [esi + 0x28]
        call    dword ptr [edx + 0x10]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [edx], eax
        mov     eax, 0x1
        pop     esi
        ret     0x8
    }
}
