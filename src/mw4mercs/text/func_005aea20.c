/*
 * FUN_005AEA20 (119 B) — __thiscall (this = ECX), RET 0x10 (4 params).
 *
 * Reads three fields from the object ([this+0x1f4/0x1f8/0x1fc]), stores
 * them into a stack buffer, sets [this+0x16c] = 3, and calls
 * FUN_00587830 (with a stack buffer), then FUN_00551870 (twice,
 * __thiscall-style with ECX=ESP) and FUN_005aeeb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005aeeb0(void);

__declspec(naked) void __cdecl func_005aea20(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x1f4]
        mov     ecx, dword ptr [esi + 0x1f8]
        mov     edx, dword ptr [esi + 0x1fc]
        mov     dword ptr [esp + 0x4], eax
        mov     eax, dword ptr [esp + 0x2c]
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [esp + 0x2c]
        push    edx
        push    eax
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esi + 0x16c], 0x3
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        sub     esp, 0xc
        lea     edx, [esp + 0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        lea     ecx, [esi + 0x230]
        call    FUN_005aeeb0
        pop     esi
        add     esp, 0x18
        ret     0x10
    }
}
