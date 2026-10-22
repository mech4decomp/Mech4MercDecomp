/*
 * FUN_005b4200 (112 B) — __thiscall constructor, RET 0x10 (4 stack params).
 *
 * Saves this (ECX) in ESI, calls FUN_005f35f0(this, p1..p4), initializes a
 * sub-object at this+0x54c via FUN_0041fc80, sets vtable pointers and zero
 * fields, calls FUN_005f5670(), then FUN_005b4290(this, p2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f35f0(void);
extern void __stdcall FUN_0041fc80(void);
extern void __stdcall FUN_005f5670(void);
extern void __stdcall FUN_005b4290(void);

__declspec(naked) void __stdcall FUN_005b4200(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, esi
        call    FUN_005f35f0
        lea     edi, [esi + 0x54c]
        push    0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac
        mov     ecx, esi
        mov     dword ptr [esi + 0x578], 0
        mov     dword ptr [esi + 0x57c], 0
        mov     dword ptr [esi + 0x580], 0
        mov     dword ptr [esi], 0x786558
        call    FUN_005f5670
        push    ebx
        mov     ecx, esi
        call    FUN_005b4290
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
