/*
 * FUN_0063f950 (74 B) — Destructor.
 *
 * __fastcall (ECX = this). Sets vtable 0x792490, releases two sub-objects
 * (virtual method 0 with arg 1), frees this+0x5c via FUN_004084e0,
 * destroys the sub-object at this+0x54 via FUN_0041fc90, then calls
 * FUN_00561730 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(int param);
extern void __cdecl FUN_0041fc90(int param);
extern void __cdecl FUN_00561730(int param);

__declspec(naked) void __fastcall FUN_0063f950(void *param_1)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x68]
        test    ecx, ecx
        mov     dword ptr [esi], 0x792490
        jz      l_skip1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_skip1:
        mov     ecx, dword ptr [esi + 0x6c]
        test    ecx, ecx
        jz      l_skip2
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_skip2:
        mov     eax, dword ptr [esi + 0x5c]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      l_skip3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip3:
        lea     ecx, [esi + 0x54]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        pop     ecx
        ret
    }
}
